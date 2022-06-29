`include "../vsrc/rvseed_defines.v"

module alu(
    input      [`ALU_OP_WIDTH-1:0] alu_op,   // alu opcode
    input      [63:0]    alu_src1, // alu source 1
    //input      [`CPU_WIDTH-1:0]    alu_src2, // alu source 2
    input      [63:0]    alu_src2, // alu source 2
    output reg                     zero,     // alu result is zero
    output reg [63:0]    alu_res,   // alu result
    input [2:0]rd_flag
);

reg [63:0] rd_buf_lw;
reg [63:0] rd_buf_lw2;
always @(*) begin
    zero = 1'b0;
    alu_res = 64'b0;
    case (alu_op)
        `ALU_ADD: begin  //0011
        if(rd_flag == 3'd0)begin
            alu_res = (alu_src1 +  alu_src2);
            alu_res = alu_res[31:0];
        end
        else if(rd_flag == 3'd1)
            alu_res = rd_buf_lw[31:0];
        else if(rd_flag == 3'd2)
            alu_res = rd_buf_lw[63:0];
        else if(rd_flag == 3'd3)
            alu_res = alu_src1 +  alu_src2;
        else if(rd_flag == 3'd4)
            alu_res = rd_buf_lw[7:0];
        else if(rd_flag == 3'd5)begin
            alu_res = alu_src2;
        end
        end
        `ALU_SUB:begin //0100
            alu_res = alu_src1 - alu_src2;
            zero = (alu_res == 64'b0) ? 1'b1 : 1'b0;
        end
        `ALU_SUBN:begin //1100
            alu_res = alu_src1 - alu_src2;
            zero = (alu_res == 64'b0) ? 1'b0 : 1'b1;
        end
        `ALU_SMT:begin
             if("signed" alu_src1 >= "signed" alu_src2)
                zero = 32'd0;
            else
                 alu_res = 32'd1;
        end
        `ALU_SLTU:begin//1001
            if(alu_src1<alu_src2)
                alu_res = 32'd1;
            else
                 alu_res = 32'd0;
        end
        `ALU_SRL:    //算术右移
            alu_res = alu_src1>>>alu_src2;
        `ALU_AND:begin
                alu_res = alu_src1 & alu_src2;
        end
        `ALU_SLLW:begin
                alu_res = alu_src1 <<  alu_src2;
                alu_res = alu_res[31:0];
        end
        `ALU_SLLI:
                alu_res = alu_src1 <<  alu_src2;
        `ALU_DIVY:
            alu_res = alu_src1 % alu_src2;
        `ALU_SLTU:
            alu_res = (rd_buf_lw < rd_buf_lw2) ? 64'd1 : 64'd0;
        `ALU_XOR:
                alu_res = alu_src1 ^ alu_src2;
        `ALU_OR:
                 alu_res = alu_src1 | alu_src2;
        default:begin
            alu_res = alu_src1 -  alu_src2;
            zero = (alu_res == `CPU_WIDTH'b0) ? 1'b1 : 1'b0;
        end
    endcase
end
import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
always @(*) begin
    if(rd_flag == 3'd1 | rd_flag == 3'd2 |rd_flag == 3'd4 )
        pmem_read(alu_src1 +  alu_src2, rd_buf_lw);
   
    
end
endmodule




