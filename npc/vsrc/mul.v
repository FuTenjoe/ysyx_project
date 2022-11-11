`include "../vsrc/rvseed_defines.v"

module mul(
	input clk,
	input rst_n,
	input [63:0] alu_src1,
	input [63:0] alu_src2,   //乘数
	input mul_valid,
	input [1:0] mul_signed,   //目前先实现有符号数
	input [3:0] mul_expand_signed,
	//output reg [7:0] shift_cnt,
	output [129:0] mul_res,
	output reg sh_fnsh_flag

    );
reg [129:0] alu_x;
reg [65:0] alu_y;
reg [129:0] no_latch_x;
reg [65:0] no_latch_y;
always@(posedge clk or negedge rst_n)begin
	if(!rst_n)begin
		no_latch_x <= 130'd0;
		no_latch_y <= 66'd0;
	end
	else begin
		no_latch_x <= alu_x;
		no_latch_y <= alu_y;
	end
end
always@(*)begin
	if(mul_valid & ((!delay_mul_valid) | (delay2_sh_fg)))begin
		if(mul_signed == 2'b00)begin
			alu_x = {{66{alu_src1[63]}},alu_src1[63:0]};
			alu_y = {{2{alu_src2[63]}},alu_src2[63:0]};
		end
		else if(mul_signed == 2'b01)begin
			alu_x = {{66{alu_src1[63]}},alu_src1[63:0]};
			alu_y = {{2{1'b0}},alu_src2[63:0]};
		end
		else if(mul_signed == 2'b10)begin
			alu_x = {{66{1'b0}},alu_src1[63:0]};
			alu_y = {{2{alu_src2[63]}},alu_src2[63:0]};
		end
		else begin
			alu_x = {{66{1'b0}},alu_src1[63:0]};
			alu_y = {{2{1'b0}},alu_src2[63:0]};
		end
		end
	else begin
		alu_x = no_latch_x;
		alu_y = no_latch_y;
	end
end
reg delay_mul_valid;
reg delay1_sh_fg;
reg delay2_sh_fg;
always@(posedge clk or negedge rst_n)begin
	if(!rst_n)begin
		delay_mul_valid <= 1'b0;
		delay1_sh_fg <= 1'b0;
		delay2_sh_fg <= 1'b0;
	end
	else begin
		delay_mul_valid <= mul_valid;
		delay1_sh_fg <= sh_fnsh_flag;
		delay2_sh_fg <= delay1_sh_fg;
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
		if(mul_valid & ((!delay_mul_valid) | (delay2_sh_fg)))
			next_state = NEXT;
		else
			next_state = IDLE;
	end
	NEXT:begin
		if((delay_alu_y == 130'b111 && (mul_signed[0] == 1'b0)) || (delay_alu_y == 130'b0 && (mul_signed[0]==1'b1 )))
			next_state = LAST;
		else
			next_state = SHIFT;
	end
	SHIFT:begin
		if((delay_alu_y == 130'b111 && (mul_signed[0] == 1'b0)) || (delay_alu_y == 130'b0 && (mul_signed[0]==1'b1 )))
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
			reg_alu_y <= {64'b0,alu_y};
			delay_alu_y <= {64'b0,alu_y};
		end
		NEXT:begin
			x <= alu_x;
			y <= {alu_y[1],alu_y[0],1'b0};
			reg_alu_y <= {64'b0,alu_y >>>3'd2};
			delay_alu_y <= reg_alu_y >>> 3'd1 ;
			sh_fnsh_flag <= 1'd0;
			case(y)
			3'b000,3'b111:begin p <= p + 130'd0;add_p <= 130'd0; end
			3'b001,3'b010:begin p <= p +x;add_p <= x; end
			3'b011: begin p <= p + (x << 1'b1); add_p <= x << 1'b1;end
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
			3'b011: begin p <=p + (x << 1'b1);add_p <= x << 1'b1;end
			3'b100: begin  p <= p +( ~(x<<1'b1)) + 1'b1;add_p <= ( ~(x<<1'b1)) + 1'b1;end
			3'b101,3'b110: begin  p <=p + ~x + 1'b1;add_p <=~x + 1'b1; end
			default : begin p <= p + 130'd0;add_p <= 130'd0;end
			endcase
			//add_p <= add_p + p;
		end
		LAST:begin
			x <= 130'd0;
			y <= 3'd0;
			case(y)
			3'b000,3'b111:begin p <= p + 130'd0;add_p <= 130'd0; end
			3'b001,3'b010:begin p <= p +x; add_p <= x;end
			3'b011: begin p <= p + (x << 1'b1); add_p <= x << 1'b1;end
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
			y <= 3'd0;
			p <= 130'd0;
			sh_fnsh_flag <= 1'd1;
			add_p <= 130'd0;
			reg_alu_y <= 130'd0;
		end
		endcase
	end
end

reg [129:0]ex_p;
always @(*) begin
	if(sh_fnsh_flag)begin
    case(mul_expand_signed)
        4'd0:begin
             ex_p =p;   //jalr
        end
        4'd1:begin
            ex_p = {{98{p[31]}},p[31:0]};   //lw  addw  divw
        end
        4'd2:begin
            ex_p = {{98{1'b0}},p[31:0]};            //addw错误
        end
        4'd3:begin
            ex_p = {{114{ p[15]}},p[15:0]}; //lh
                
        end
        default:begin
            ex_p = 130'd0;
        end
    endcase
	end
	else 
		ex_p = 130'd0;
end
assign mul_res = (sh_fnsh_flag == 1'd1)? ex_p :130'd0;
endmodule
