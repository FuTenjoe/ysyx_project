`include "../vsrc/rvseed_defines.v"

module alu(
    input      [`ALU_OP_WIDTH-1:0] alu_op,   // alu opcode
    input      [63:0]    alu_src1, // alu source 1
    //input      [`CPU_WIDTH-1:0]    alu_src2, // alu source 2
    input      [63:0]    alu_src2, // alu source 2
    output reg                     zero,     // alu result is zero
    output reg [63:0]    alu_res,   // alu result
    input rd_flag
);

reg [63:0] rd_buf_lw;
always @(*) begin
    zero = 1'b0;
    alu_res = 64'b0;
    case (alu_op)
        `ALU_ADD:   //0011
        if(rd_flag == 1'd0)begin
            alu_res = (alu_src1 +  alu_src2);
            alu_res = alu_res[31:0];
        end
        else
            alu_res = rd_buf_lw[31:0];
        `ALU_SUB:begin //0100
            zero = (alu_res == 64'b0) ? 1'b0 : 1'b1;
            alu_res = alu_src1[62:0] - alu_src2[62:0];
          /*  if(alu_src1[63] == 1'b0 && alu_src2[63] == 1'b0 )begin
                alu_res = 64'hffffffff_80000001;
               // if(alu_src1 - alu_src2 >= 64'd0) 
                    //alu_res = {1'b0,alu_res[62:0]};
                //else
                    //alu_res = {1'b1,alu_res[62:0]};
            end
            else if(alu_src1[63]==1'b0 && alu_src2[63]==1'b1)
                   // alu_res = {1'b0,alu_res[62:0]};
                   alu_res = 64'hffffffff_80000000;
            else if(alu_src1[63]==1'b1 && alu_src2[63]==1'b0)begin
                alu_res = 64'hffffffff_80000002;
                    //alu_res = alu_src1[62:0] + alu_src2[62:0];
                    //alu_res = {1'b1,alu_res[62:0]};
            end
            else if(alu_src1[63] == 1'b1 && alu_src2[63] == 1'b1 )begin
                //alu_res = alu_src2[62:0] - alu_src1[62:0];
                alu_res = 64'hffffffff_80000004;
                //if(alu_src2 - alu_src1 >= 64'd0) 
                    //alu_res = {1'b0,alu_res[62:0]};
                //else
                    //alu_res = {1'b1,alu_res[62:0]};
            end*/
        end
        `ALU_SUBN:begin //1100
            alu_res = alu_src1 - alu_src2;
            zero = (alu_res == 64'b0) ? 1'b0 : 1'b1;
        end
        `ALU_SLTU:begin//1001
            if(alu_src1<alu_src2)
                alu_res = 32'd1;
            else
                 alu_res = 32'd0;
        end
        default:begin
            alu_res = alu_src1 -  alu_src2;
            zero = (alu_res == `CPU_WIDTH'b0) ? 1'b1 : 1'b0;
        end
    endcase
end
import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
always @(*) begin
    if(rd_flag == 1'b1)
  pmem_read(alu_src1 +  alu_src2, rd_buf_lw);
end
endmodule




