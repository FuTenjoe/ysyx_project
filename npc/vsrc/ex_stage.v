`include "../vsrc/rvseed_defines.v"

module ex_stage(
    input      [`ALU_OP_WIDTH-1:0] alu_op,   // alu opcode
    input [63:0] id_pc,
    output reg [63:0]    alu_res,   // alu result
    output      [63:0]    alu_src1, // alu source 1
    output      [`CPU_WIDTH-1:0]    alu_src2, // alu source 2
    input [2:0]rd_flag,
    


    input                       ena,
    input                       branch,  // branch type 
    
    input                       jump,    // jump type 
    input jalr,
    input      [`CPU_WIDTH-1:0] imm,     // immediate  
    input      [`CPU_WIDTH-1:0] curr_pc, // current pc addr
    input      [`CPU_WIDTH-1:0]     reg1_rdata,
    input      [`CPU_WIDTH-1:0]     reg2_rdata,
    input ebreak_flag,
    input [63:0] reg_f [0:`REG_DATA_DEPTH-1],
    input  [31:0]s_imm,
    //input write_ready,
    output reg [`CPU_WIDTH-1:0] next_pc, // next pc addr
    input  no_use,
    output ex_pc_ready,
    input  [`ALU_SRC_WIDTH-1:0]    alu_src_sel
);
wire zero;


alu u_alu(
    .no_use(no_use),
    .alu_op(alu_op),   // alu opcode
    .alu_src1(alu_src1), // alu source 1
    //input      [`CPU_WIDTH-1:0]    alu_src2, // alu source 2
    .alu_src2(alu_src2), // alu source 2
    .zero(zero),     // alu result is zero
    .alu_res(alu_res),   // alu result
    .rd_flag(rd_flag)
);

muxpc u_muxpc(
    .no_use(no_use),
    .ena(ena),
    .branch(branch),  // branch type 
    .zero(zero),    // alu result is zero
    .jump(jump),    // jump type 
    .jalr(jalr),
    .imm(imm),     // immediate  
    .curr_pc(curr_pc), // current pc addr
    .next_pc(next_pc), // next pc addr
    .id_pc(id_pc),
   // input      [`CPU_WIDTH-1:0]     reg1_rdata
   .ebreak_flag(ebreak_flag),
   .reg_f (reg_f),
   .s_imm(s_imm),
   .ex_pc_ready(ex_pc_ready)
  
    );

mux_alu u_mux_alu( 
    .no_use(no_use),
    .alu_src_sel(alu_src_sel),// reg or imm to alu

    .reg1_rdata(reg1_rdata), // register 1 read data
    .reg2_rdata(reg2_rdata), // register 2 read data
    .imm(imm),        // immediate
    .curr_pc(curr_pc),    // current pc addr

    .alu_src1(alu_src1),   // alu source 1
    .alu_src2(alu_src2)    // alu source 2
   
);



endmodule