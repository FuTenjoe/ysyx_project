`include "../vsrc/rvseed_defines.v"

module mul(
	input clk,
	input rst_n,
	input [63:0] alu_src1,
	input [63:0] alu_src2,   //乘数
	input mul_valid,
	input [1:0] mul_signed,   //目前先实现有符号数
	//output reg [7:0] shift_cnt,
	output [129:0] mul_res,
	output reg sh_fnsh_flag,
	output reg stop

    );
reg [129:0] alu_x;
reg [65:0] alu_y;

always@(posedge clk or negedge rst_n)begin
	if(!rst_n)begin
		alu_x <= 130'd0;
		alu_y <= 66'd0;
	end
	else begin
		if(mul_signed == 2'b00)begin
			alu_x <= {{66{alu_src1[63]}},alu_src1[63:0]};
			alu_y <= {{2{alu_src2[63]}},alu_src2[63:0]};
		end
		else if(mul_signed == 2'b01)begin
			alu_x <= {{66{alu_src1[63]}},alu_src1[63:0]};
			alu_y <= {{2{1'b0}},alu_src2[63:0]};
		end
		else if(mul_signed == 2'b10)begin
			alu_x <= {{66{1'b0}},alu_src1[63:0]};
			alu_y <= {{2{alu_src2[63]}},alu_src2[63:0]};
		end
		else begin
			alu_x <= {{66{1'b0}},alu_src1[63:0]};
			alu_y <= {{2{1'b0}},alu_src2[63:0]};
		end
	end
end


parameter IDLE = 3'd0,NEXT=3'd1,SHIFT=3'd2,LAST=3'd3;
reg [2:0] present_state,next_state;
always@(posedge clk or negedge rst_n)begin
	if(!rst_n)begin
		present_state <= 3'd0;
	end
	else begin
		present_state <= next_state;
	end
end
always@(*)begin
	case(present_state)
	IDLE:begin
		if(mul_valid)
			next_state = NEXT;
		else
			next_state = IDLE;
	end
	NEXT:begin
		if(delay_alu_y == 66'b111 || delay_alu_y == 66'b0)
			next_state = LAST;
		else
			next_state = SHIFT;
	end
	SHIFT:begin
		if(delay_alu_y == 66'b111 || delay_alu_y == 66'b0)
			next_state = LAST;
		else
			next_state = SHIFT;
	end
	LAST:begin
		next_state = IDLE;
	end
	default : next_state = IDLE;
	endcase
end

reg [129:0] x;
reg [2:0] y;
reg [129:0] add_p;
reg [129:0] reg_alu_y;
reg [129:0] delay_alu_y;
reg [129:0] p;
always@(posedge clk or negedge rst_n)begin
	if(!rst_n)begin
		x <= 130'd0;
		y <= 3'd0;
		sh_fnsh_flag <= 1'd0;
		add_p <= 130'd0;
		p <= 130'd0;
	end
	else begin
		case(present_state)
		IDLE:begin
			x <= 130'd0;
			y <= 3'd0;
			sh_fnsh_flag <= 1'd0;
			add_p <= 130'd0;
			p <= 130'd0;
			reg_alu_y <= alu_y;
			delay_alu_y <= alu_y;
		end
		NEXT:begin
			x <= alu_x;
			y <= {alu_y[1],alu_y[0],1'b0};
			reg_alu_y <= alu_y >>>3'd2;
			delay_alu_y <= reg_alu_y >>> 3'd1;
			sh_fnsh_flag <= 1'd0;
			case(y)
			3'b000,3'b111:begin p <= p + 130'd0;add_p <= 130'd0; end
			3'b001,3'b010:begin p <= p +x;add_p <= x; end
			3'b011: begin p <= p +x << 1'b1; add_p <= x << 1'b1;end
			3'b100: begin  p <= p +( ~(x<<1'b1)) + 1'b1;add_p <= ( ~(x<<1'b1)) + 1'b1;end
			3'b101,3'b110: begin  p <=p + ~x + 1'b1;add_p <=~x + 1'b1; end
			default : begin p <= p + 130'd0;add_p <= 130'd0;end
			endcase
			
		end
		SHIFT:begin
			x <= x << 3'd2;
			reg_alu_y <= reg_alu_y >>> 3'd2;
			delay_alu_y <= reg_alu_y >>> 3'd1;
			y <= delay_alu_y[2:0];
			sh_fnsh_flag <= 1'd0;
			case(y)
			3'b000,3'b111:begin p <= p + 130'd0;add_p <= 130'd0; end
			3'b001,3'b010:begin p <= p +x; add_p <= x;end
			3'b011: begin p <= p +x << 1'b1; add_p <= x << 1'b1;end
			3'b100: begin  p <= p +( ~(x<<1'b1)) + 1'b1;add_p <= ( ~(x<<1'b1)) + 1'b1;end
			3'b101,3'b110: begin  p <=p + ~x + 1'b1;add_p <=~x + 1'b1; end
			default : begin p <= p + 130'd0;add_p <= 130'd0;end
			endcase
			//add_p <= add_p + p;
		end
		LAST:begin
			x <= 130'd0;
			y <= 66'd0;
			case(y)
			3'b000,3'b111:begin p <= p + 130'd0;add_p <= 130'd0; end
			3'b001,3'b010:begin p <= p +x; add_p <= x;end
			3'b011: begin p <= p +x << 1'b1; add_p <= x << 1'b1;end
			3'b100: begin  p <= p +( ~(x<<1'b1)) + 1'b1;add_p <= ( ~(x<<1'b1)) + 1'b1;end
			3'b101,3'b110: begin  p <= p + ~x + 1'b1;add_p <=~x + 1'b1; end
			default : begin p <= p + 130'd0; add_p <= 130'd0; end
			//add_p <= add_p + p;
			endcase
			sh_fnsh_flag <= 1'd1;
			reg_alu_y <= reg_alu_y;
		end
		default: begin
			x <= 130'd0;
			y <= 66'd0;
			sh_fnsh_flag <= 1'd1;
			add_p <= 130'd0;
			reg_alu_y <= 130'd0;
		end
		endcase
	end
end

assign mul_res = (sh_fnsh_flag == 1'd1)? p :130'd0;

always@(posedge clk or negedge rst_n)begin
	if(!rst_n)begin
		stop <= 1'b0;
	end
	else begin
		if(mul_valid)begin
			if(sh_fnsh_flag != 1'b1)begin
				stop <= 1'b1;
			end
			else begin
				stop <= 1'b0;
			end
		end
		else begin
			stop <= 1'b0;
		end
	end
end

endmodule

