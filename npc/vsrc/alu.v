`include "../vsrc/rvseed_defines.v"

module alu(
    input clk,
    input rst_n,
    input      [`ALU_OP_WIDTH-1:0] alu_op,   // alu opcode
    input      [63:0]    alu_src1, // alu source 1sh_fnsh_flag
    //input      [`CPU_WIDTH-1:0]    alu_src2, // alu source 2
    input      [63:0]    alu_src2, // alu source 2
    //output reg                     zero,     // alu result is zero
    output reg [63:0]    alu_res_ex_sign,   // alu result
    input [2:0]rd_flag,
    input [3:0] expand_signed,
    output sh_fnsh_flag,
    output div_finish
);
//reg [63:0] rd_buf_lw;
//reg [2:0] test;
reg zero;
reg [63:0] alu_res;
reg signed [63:0] signed_alu_src1;
reg signed [63:0] signed_alu_src2;
reg mul_valid;
wire [129:0] mul_res;
reg [3:0] mul_expand_signed;

reg div32_valid;
reg div_signed;

reg alu_sec;
wire [63:0] div_res; 
reg div64_valid;
wire [31:0] div_res32;
wire [63:0] div_res64;
wire div_finish32;
wire div_finish64;

always @(*) begin
    zero = 1'b0;
    alu_res = alu_src1 -  alu_src2;
    signed_alu_src1 = alu_src1;
    signed_alu_src2 = alu_src2;
    mul_valid = 1'b0;
    mul_expand_signed = 4'd0;
    div32_valid = 1'b0;
    div64_valid = 1'b0;
    alu_sec = 1'b0;
    div_signed = 1'b0;
    case (alu_op)
        `ALU_ADD: begin  //0011
        if(rd_flag == 3'd0)begin
            alu_res = (alu_src1 +  alu_src2);
            alu_res = {{32{1'b0}},alu_res[31:0]};
            //test = 3'd3;
        end
   /*     else if(rd_flag == 3'd1)
            alu_res = rd_buf_lw[31:0];
        else if(rd_flag == 3'd2)
            alu_res = rd_buf_lw[63:0];*/
        else if(rd_flag == 3'd3)begin
            alu_res = alu_src1 +  alu_src2;
            //test = 3'd2;
        end
    /*    else if(rd_flag == 3'd4)
            alu_res = rd_buf_lw[7:0]; */
        else if(rd_flag == 3'd5)begin
            alu_res = alu_src2;
    /*    else if(rd_flag == 3'd6)   //lh
            alu_res = rd_buf_lw[15:0];  */
            //test = 3'd1;
        end
        else 
            alu_res = alu_res;
        end
        `ALU_SUB:begin //0100
            alu_res = alu_src1 - alu_src2;
            zero = (alu_res == 64'b0) ? 1'b1 : 1'b0;
             //test = 3'd4;
        end
        `ALU_SUBN:begin //1100
            alu_res = alu_src1 - alu_src2;
            zero = (alu_res == 64'b0) ? 1'b0 : 1'b1;
        end
        `ALU_BMT:begin
            signed_alu_src1 = alu_src1;
            signed_alu_src2 = alu_src2;
            //alu_res = alu_res;
             if(signed_alu_src1 >= signed_alu_src2 )begin
                zero = 1'd0;
                 alu_res = alu_res;
             end
            else begin
                 zero = 1'd1;
                 alu_res = alu_res;
            end
        end
        `ALU_BLT:begin
            signed_alu_src1 = $signed (alu_src1);
            signed_alu_src2 = $signed (alu_src2);
            zero = (signed_alu_src1 < signed_alu_src2)? 1'b0:1'b1;
            alu_res = alu_res;
        end
        `ALU_BLTU:begin
            zero = (alu_src1 < alu_src2)? 1'b0:1'b1;
            alu_res = alu_res;
        end
        `ALU_BMTU:begin
            zero = (alu_src1 >= alu_src2)? 1'b0:1'b1;
             alu_res = alu_res;
        end
        `ALU_SLTU:begin//1001
            if(alu_src1 < alu_src2)begin
                alu_res = 64'd1;
               // test = 3'd7;
            end
            else begin
                 alu_res = 64'd0;
                 //test = 3'd6;
            end
        end
        `ALU_SLT:begin//1001
            signed_alu_src1 = $signed (alu_src1);
            signed_alu_src2 = $signed (alu_src2);
            if(signed_alu_src1<signed_alu_src2)
                alu_res = 64'd1;
            else
                 alu_res = 64'd0;
        end
        `ALU_SRA: begin   //算术右移
            if(rd_flag == 3'd0)
                alu_res = ($signed(alu_src1))>>>alu_src2;
            else if(rd_flag == 3'd1)  //sraiw
                alu_res = {{32{alu_src1[31]}},($signed(alu_src1[31:0]))>>>alu_src2};
            else if(rd_flag == 3'd3)  //sraw
                alu_res = {{32{alu_src1[31]}},($signed(alu_src1[31:0]))>>>alu_src2[4:0]};
            else
                 alu_res = alu_res;
        end
        `ALU_SRL:begin
            if(rd_flag == 3'd0)
                alu_res = alu_src1 >> alu_src2;
            else if(rd_flag == 3'd1)  //sraiw
                alu_res = {{32{1'b0}},alu_src1[31:0] >> alu_src2};
            else if(rd_flag == 3'd2)  //srlw
                alu_res = {{32{1'b0}},alu_src1[31:0] >> alu_src2[4:0]};
            else
                alu_res = alu_res;
        end
        `ALU_AND:begin
                alu_res = alu_src1 & alu_src2;
        end
        `ALU_SLLW:begin
                alu_res = alu_src1 <<  alu_src2;
                alu_res = {{32{1'b0}},alu_res[31:0]};
        end
        `ALU_SLLI:
                alu_res = alu_src1 <<  alu_src2;
        `ALU_DIVU:begin
                div64_valid = 1'b1;
                div_signed = 1'b0;
                alu_sec = 1'b0;
                //alu_res = alu_src1 / alu_src2;
        end
        `ALU_DIV:begin
                div64_valid = 1'b1;
                div_signed = 1'b1;
                alu_sec = 1'b0;
                //alu_res = alu_src1 / alu_src2;
        end
        `ALU_DIVYU:begin
                div64_valid = 1'b1;
                div_signed = 1'b0;
                alu_sec = 1'b1;
            //alu_res = alu_src1 % alu_src2;
        end

    /*    `ALU_SLTU:
            alu_res = (alu_src1 < alu_src2) ? 64'd1 : 64'd0;*/
        `ALU_XOR:
                alu_res = alu_src1 ^ alu_src2;
        `ALU_OR:
                 alu_res = alu_src1 | alu_src2;
        `ALU_MUL:begin
                mul_valid = 1'b1; 
                mul_expand_signed = expand_signed; 
        end
        `ALU_DIVW:begin
                div32_valid = 1'b1;
                div_signed = 1'b0;
                alu_sec = 1'b0;
                //alu_res = alu_src1[31:0] / alu_src2[31:0];
        end
        `ALU_DIVYW:begin
                signed_alu_src1 = {{32{alu_src1[31]}},$signed (alu_src1[31:0])};
                signed_alu_src2 = {{32{alu_src2[31]}},$signed (alu_src2[31:0])};
                //alu_res = signed_alu_src1[31:0] % signed_alu_src2[31:0] ;    //不确定 */
                div32_valid = 1'b1;
                div_signed = 1'b1;
                alu_sec = 1'b1;
        end
        `ALU_MEM:begin
            if(rd_flag == 3'd1)
                alu_res = alu_src2[63:0];
            else if(rd_flag == 3'd2)
                alu_res = {{48{1'b0}},alu_src2[15:0]};
            else if(rd_flag == 3'd3)
                 alu_res = {{56{1'b0}},alu_src2[7:0]};
            else if(rd_flag == 3'd4)
                alu_res = {{32{1'b0}},alu_src2[31:0]};
            else 
                alu_res = alu_res;
        end
        `ALU_CSRRS:begin
            alu_res = alu_src2 ;
        end
        `ALU_CSRRW:begin
            alu_res = alu_src2 ;
        end
        default:begin
            alu_res = alu_src1 -  alu_src2;
            zero = (alu_res == `CPU_WIDTH'b0) ? 1'b1 : 1'b0;
        end
    endcase
end

wire [63:0] alu_res2;
assign alu_res2 = div32_valid ? (div_finish32 ? {{32{1'b0}},div_res32} : {{32{1'b0}},delay_div_res32}): (div64_valid ? (div_finish64 ? div_res64: delay_div_res64) :((mul_valid) ? ((sh_fnsh_flag)? mul_res[63:0] : delay_mul_res[63:0]) : alu_res)) ;

reg [129:0] delay_mul_res;
reg delay_sh_fg;
reg [63:0] delay_div_res64;
reg [31:0] delay_div_res32;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        delay_sh_fg <= 1'd0; 
        delay_mul_res <= 130'd0;
        delay_div_res32 <= 32'd0;
        delay_div_res64 <= 64'd0;
    end
    else begin
        delay_sh_fg <= sh_fnsh_flag;
        delay_mul_res <= mul_res;
        delay_div_res32 <= div_res32;
        delay_div_res64 <= div_res64;
    end
end

always @(*) begin
    case(expand_signed)
        4'd0:begin
             alu_res_ex_sign = alu_res2;   //jalr
        end
        4'd1:begin
            alu_res_ex_sign = {{32{alu_res2[31]}},alu_res2[31:0]};   //lw  addw  divw
        end
        4'd2:begin
            alu_res_ex_sign = {{32{1'b0}},alu_res2[31:0]};            //addw错误
        end
        4'd3:begin
            alu_res_ex_sign = {{48{ alu_res2[15]}}, alu_res2[15:0]}; //lh
                
        end
        default:begin
            alu_res_ex_sign= alu_res2;
        end
    endcase
end

wire [1:0] mul_signed;
assign mul_signed = 2'b11;
mul u_mul(
	.clk(clk),
	.rst_n(rst_n),
	.alu_src1(alu_src1),
	.alu_src2(alu_src2),   //乘数
	.mul_valid(mul_valid),
	.mul_signed(mul_signed),   //目前先实现有符号数
	//output reg [7:0] shift_cnt,
    .mul_expand_signed(mul_expand_signed),
	.mul_res(mul_res),
	.sh_fnsh_flag(sh_fnsh_flag)
    );

div #(.N(32),
      .M(32),
      .N_ACT(63))
    u_div32
    (
      .clk(clk),
      .rstn(rst_n),

      .div_valid(div32_valid) ,  //数据使能
      .dividend(alu_src1[31:0]),   //被除数
      .divisor(alu_src2[31:0]),    //除数

      .div_sign(1'b0),    //????

      .alu_sec(alu_sec),

      .res_rdy(div_finish32) ,
      //.merchant(div32_merchant) ,  //商位宽：N
      //.remainder(div32_remainder),
      .div_res(div_res32)
      ); //最终余数

div #(.N(64),
      .M(64),
      .N_ACT(127))
    u_div64
    (
      .clk(clk),
      .rstn(rst_n),

      .div_valid(div64_valid) ,  //数据使能
      .dividend(alu_src1[63:0]),   //被除数
      .divisor(alu_src2[63:0]),    //除数

      .div_sign(1'b0),  //????

      .alu_sec(alu_sec),

      .res_rdy(div_finish64) ,
      //.merchant(div64_merchant) ,  //商位宽：N
      //.remainder(div64_remainder),
      .div_res(div_res64)
      ); //最终余数

assign div_finish = div_finish32 | div_finish64;

endmodule



