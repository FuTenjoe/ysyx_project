`include "../vsrc/rvseed_defines.v"

module alu(
    input      [`ALU_OP_WIDTH-1:0] alu_op,   // alu opcode
    input      [63:0]    alu_src1, // alu source 1
    //input      [`CPU_WIDTH-1:0]    alu_src2, // alu source 2
    input      [63:0]    alu_src2, // alu source 2
    //output reg                     zero,     // alu result is zero
    output reg [63:0]    alu_res_ex_sign,   // alu result
    input [2:0]rd_flag,
    input [3:0] expand_signed
);
//reg [63:0] rd_buf_lw;
reg [2:0] test;
reg zero;
reg [63:0] alu_res;
reg signed [63:0] signed_alu_src1;
reg signed [63:0] signed_alu_src2;
always @(*) begin
    case (alu_op)
        zero = 1'b0;
        `ALU_ADD: begin  //0011
        if(rd_flag == 3'd0)begin
            alu_res = (alu_src1 +  alu_src2);
            alu_res = alu_res[31:0];
            test = 3'd3;
        end
   /*     else if(rd_flag == 3'd1)
            alu_res = rd_buf_lw[31:0];
        else if(rd_flag == 3'd2)
            alu_res = rd_buf_lw[63:0];*/
        else if(rd_flag == 3'd3)begin
            alu_res = alu_src1 +  alu_src2;
            test = 3'd2;
        end
    /*    else if(rd_flag == 3'd4)
            alu_res = rd_buf_lw[7:0]; */
        else if(rd_flag == 3'd5)begin
            alu_res = alu_src2;
    /*    else if(rd_flag == 3'd6)   //lh
            alu_res = rd_buf_lw[15:0];  */
            test = 3'd1;
        end
        end
        `ALU_SUB:begin //0100
            alu_res = alu_src1 - alu_src2;
            zero = (alu_res == 64'b0) ? 1'b1 : 1'b0;
             test = 3'd4;
        end
        `ALU_SUBN:begin //1100
            alu_res = alu_src1 - alu_src2;
            zero = (alu_res == 64'b0) ? 1'b0 : 1'b1;
        end
        `ALU_BMT:begin
            signed_alu_src1 = alu_src1;
            signed_alu_src2 = alu_src2;
             if(signed_alu_src1 >= signed_alu_src2 )
                zero = 1'd0;
            else
                 zero = 1'd1;
        end
        `ALU_BLT:begin
            signed_alu_src1 = $signed (alu_src1);
            signed_alu_src2 = $signed (alu_src2);
            zero = (signed_alu_src1 < signed_alu_src2)? 1'b0:1'b1;
        end
        `ALU_BLTU:
            zero = (alu_src1 < alu_src2)? 1'b0:1'b1;
        `ALU_BMTU:
            zero = (alu_src1 >= alu_src2)? 1'b0:1'b1;
        `ALU_SLTU:begin//1001
            if(alu_src1 < alu_src2)begin
                alu_res = 32'd1;
                test = 3'd7;
            end
            else begin
                 alu_res = 32'd0;
                 test = 3'd6;
            end
        end
        `ALU_SLT:begin//1001
            signed_alu_src1 = $signed (alu_src1);
            signed_alu_src2 = $signed (alu_src2);
            if(signed_alu_src1<signed_alu_src2)
                alu_res = 32'd1;
            else
                 alu_res = 32'd0;
        end
        `ALU_SRA:    //算术右移
            if(rd_flag == 3'd0)
                alu_res = ($signed(alu_src1))>>>alu_src2;
            else if(rd_flag == 3'd1)  //sraiw
                alu_res = ($signed(alu_src1[31:0]))>>>alu_src2;
            else if(rd_flag == 3'd3)  //sraw
                alu_res = ($signed(alu_src1[31:0]))>>>alu_src2[4:0];
        `ALU_SRL:
            if(rd_flag == 3'd0)
                alu_res = alu_src1 >> alu_src2;
            else if(rd_flag == 3'd1)  //sraiw
                alu_res = alu_src1[31:0] >> alu_src2;
            else if(rd_flag == 3'd2)  //srlw
                alu_res = alu_src1[31:0] >> alu_src2[4:0];
        `ALU_AND:begin
                alu_res = alu_src1 & alu_src2;
        end
        `ALU_SLLW:begin
                alu_res = alu_src1 <<  alu_src2;
                alu_res = alu_res[31:0];
        end
        `ALU_SLLI:
                alu_res = alu_src1 <<  alu_src2;
        `ALU_DIVU:
                alu_res = alu_src1 / alu_src2;
        `ALU_DIVYU:
            alu_res = alu_src1 % alu_src2;
    /*    `ALU_SLTU:
            alu_res = (alu_src1 < alu_src2) ? 64'd1 : 64'd0;*/
        `ALU_XOR:
                alu_res = alu_src1 ^ alu_src2;
        `ALU_OR:
                 alu_res = alu_src1 | alu_src2;
        `ALU_MUL:
                alu_res = alu_src1 * alu_src2;
        `ALU_DIVW:
                alu_res = alu_src1[31:0] / alu_src2[31:0];
        `ALU_DIVYW:begin
                signed_alu_src1 = $signed (alu_src1[31:0]);
                signed_alu_src2 = $signed (alu_src2[31:0]);
                alu_res = signed_alu_src1[31:0] % signed_alu_src2[31:0] ;    //不确定
        end
        `ALU_MEM:begin
            if(rd_flag == 3'd1)
                alu_res = alu_src2[63:0];
            else if(rd_flag == 3'd2)
                alu_res = alu_src2[15:0];
            else if(rd_flag == 3'd3)
                 alu_res = alu_src2[7:0];
            else if(rd_flag == 3'd4)
                alu_res = alu_src2[31:0];
        end
        default:begin
            alu_res = alu_src1 -  alu_src2;
            zero = (alu_res == `CPU_WIDTH'b0) ? 1'b1 : 1'b0;
        end
    endcase
end
always @(*) begin
    case(expand_signed)
        4'd0:begin
             alu_res_ex_sign = alu_res;   //jalr
        end
        4'd1:begin
            alu_res_ex_sign = {{32{alu_res[31]}},alu_res[31:0]};   //lw  addw  divw
        end
        4'd2:begin
            alu_res_ex_sign = alu_res[31:0];            //addw错误
        end
        4'd3:begin
            alu_res_ex_sign = {{48{ alu_res[15]}}, alu_res[15:0]}; //lh
                
        end
        default:begin
            alu_res_ex_sign= alu_res;
        end
    endcase
end
   
endmodule




