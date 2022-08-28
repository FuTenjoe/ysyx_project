`include "../vsrc/rvseed_defines.v"

module ex_stage(
    input clk,
    input rst_n,
    input      [`ALU_OP_WIDTH-1:0] alu_op,   // alu opcode
    input      [63:0]    alu_src1, // alu source 1
    //input      [`CPU_WIDTH-1:0]    alu_src2, // alu source 2
    input      [63:0]    alu_src2, // alu source 2
   // output reg                     zero,     // alu result is zero
    output reg [63:0]    alu_res,   // alu result
    input [2:0]rd_flag,
    input [3:0] expand_signed,
    output sh_fnsh_flag,
    output div_finish
    
);


alu u_alu(
    .clk(clk),
    .rst_n(rst_n),
    .alu_op(alu_op),   // alu opcode
    .alu_src1(alu_src1), // alu source 1
    //input      [`CPU_WIDTH-1:0]    alu_src2, // alu source 2
    .alu_src2(alu_src2), // alu source 2
    //.zero(zero),     // alu result is zero
    .alu_res_ex_sign(alu_res),   // alu result
    .rd_flag(rd_flag),
    .expand_signed(expand_signed),
    .sh_fnsh_flag(sh_fnsh_flag),
    .div_finish(div_finish)
);




endmodule