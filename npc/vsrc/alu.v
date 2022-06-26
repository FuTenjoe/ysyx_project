`include "../vsrc/rvseed_defines.v"

module alu(
    input      [`ALU_OP_WIDTH-1:0] alu_op,   // alu opcode
    input      [`CPU_WIDTH-1:0]    alu_src1, // alu source 1
    input      [`CPU_WIDTH-1:0]    alu_src2, // alu source 2
    output reg                     zero,     // alu result is zero
    output reg [`CPU_WIDTH-1:0]    alu_res   // alu result
);


always @(*) begin
    zero = 1'b0;
    alu_res = `CPU_WIDTH'b0;
    case (alu_op)
        `ALU_ADD:   //0011
            alu_res = alu_src1 +  alu_src2;
        `ALU_SUB:begin //0100
            alu_res = alu_src1 -  alu_src2;
            zero = (alu_res == `CPU_WIDTH'b0) ? 1'b1 : 1'b0;
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
endmodule




