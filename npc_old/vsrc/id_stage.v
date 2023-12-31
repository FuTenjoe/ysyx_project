`include "../vsrc/rvseed_defines.v"

module id_stage (
    input clk,
    input rst_n,
    input [63:0] id_pc,
    output [63:0] next_pc,
    input      [`CPU_WIDTH-1:0]        inst,       // instruction input
    input [31:0] ex_inst,
    input reg [63:0] reg_f [0:`REG_DATA_DEPTH-1],
    input [`REG_ADDR_WIDTH-1:0] ex_reg_waddr,
    output reg rest_from_id,

    //output reg                         branch,     // branch flag
    //output reg                         jump,       // jump flag

    output reg                         reg_wen,    // register write enable
    output reg [`REG_ADDR_WIDTH-1:0]   reg_waddr,  // register write address
    
    //output reg [63:0]   reg1_rdata, // register 1 read data
    //output reg [63:0]   reg2_rdata, // register 2 read data
    //output reg [`IMM_GEN_OP_WIDTH-1:0] imm_gen_op, // immediate extend opcode
    output reg [`CPU_WIDTH-1:0]        imm, 
    output reg [`ALU_OP_WIDTH-1:0]     alu_op,     // alu opcode
    output reg [`ALU_SRC_WIDTH-1:0]    alu_src_sel ,// alu source select flag
    output [`CPU_WIDTH-1:0]            unknown_code,
    output    jalr,
    output ebreak_flag,
    output reg [7:0]wmask,
    output reg s_flag,
    output reg [31:0]s_imm,
    output reg [3:0] expand_signed,
    output reg [2:0]rd_flag,
    output reg [2:0] rd_buf_flag ,  //访存标志
    output control_rest,
    input [63:0] from_ex_alu_res,
    input [63:0] from_mem_alu_res,
    
    input [2:0]ex_rd_buf_flag,
    output reg [63:0]     alu_src1,   // alu source 1
    output reg [63:0]     alu_src2,    // alu source 2
    output reg rest_id_mem,
    //output reg [63:0] end_write_addr,
    input [63:0] wb_hazard_result,
    input  [`REG_ADDR_WIDTH-1:0]  mem_reg_waddr,
    input ex_s_flag,
    input mem_s_flag,
    output reg rest_wb_hazard,
    output reg sig_jalr,
    output reg delay_sig_jalr,
    input [31:0] ex_s_imm,
    output reg cunqu_hazard,
    input mem_cunqu_hazard,
    input [63:0] mem_from_ex_alu_res,
    output id_mul,
    output id_div,
    input [63:0] mepc,
    input [63:0] mcause,
    input [63:0] mtvec,
   // input [63:0] mstatus,
    output  [63:0] csr_addr,
    output mret_flag,
    output ecall_flag
);
wire branch;
wire jump;
wire [63:0] reg1_rdata;
wire [63:0] reg2_rdata;
wire [`IMM_GEN_OP_WIDTH-1:0] imm_gen_op;
wire [`REG_ADDR_WIDTH-1:0]   reg1_raddr; // register 1 read address
wire [`REG_ADDR_WIDTH-1:0]   reg2_raddr; // register 2 read address
wire [2:0] data_rest_cond;

wire [31:0] unnormal_pc;


ctrl u_ctrl(
    .id_pc(id_pc),
   .inst(inst),       // instruction input

    .branch(branch),     // branch flag
    .jump(jump),       // jump flag

    .reg_wen(reg_wen),    // register write enable
    .reg_waddr(reg_waddr),  // register write address
    .reg1_raddr(reg1_raddr), // register 1 read address
    .reg2_raddr(reg2_raddr), // register 2 read address
    
    .imm_gen_op(imm_gen_op), // immediate extend opcode

    .alu_op(alu_op),     // alu opcode
    .alu_src_sel(alu_src_sel) ,// alu source select flag
    .unknown_code(unknown_code),
    .jalr(jalr),
    .ebreak_flag(ebreak_flag),
    .wmask(wmask),
    .s_flag(s_flag),
    .s_imm(s_imm),
    .expand_signed(expand_signed),
    .rd_flag(rd_flag),
    .rd_buf_flag(rd_buf_flag),   //访存标志
    .id_mul(id_mul),
    .id_div(id_div),
    .csr_addr(csr_addr),
    .mret_flag(mret_flag),
    .ecall_flag(ecall_flag),
    .unnormal_pc(unnormal_pc)
);
imm_gen u_imm_gen(
    .inst(inst),       // instruction input
    .imm_gen_op(imm_gen_op), // immediate extend opcode

    .imm(imm)         // immediate  
);


id_rest u_id_rest(        //data hazard
    .clk(clk),
    .rst_n(rst_n),
    .id_pc(id_pc),
    .reg1_raddr(reg1_raddr), // register 1 read address
    .reg2_raddr(reg2_raddr), // register 2 read address
    .reg_waddr(ex_reg_waddr),
    //.write_ready(write_ready),
    .rd_buf_flag(ex_rd_buf_flag),
    .rest_from_id(rest_from_id),
    .rest_id_mem(rest_id_mem),
    .ex_inst(ex_inst),
    .wb_reg_waddr(mem_reg_waddr),
    .rest_wb_hazard(rest_wb_hazard),
    .s_imm(s_imm),
    .ex_s_flag(ex_s_flag),
    .mem_s_flag(mem_s_flag),
    .ex_s_imm(ex_s_imm),
    .cunqu_hazard(cunqu_hazard),
    .imm(imm),
    .curr_rd_buf_flag(rd_buf_flag)
   
);
id_control_rest u_id_control_rest(
    .clk(clk),
    .rst_n(rst_n),
    .branch(branch),     // branch flag
    .jump(jump),       // jump flag
    .control_rest(control_rest),
    .rest_from_id(rest_from_id),
    .mret_flag(mret_flag),
    .ecall_flag(ecall_flag)
);
reg [63:0] delay_reg1_rdata;

mux_dt_pipe u_mux_dt_pipe (
    .clk(clk),
    .rst_n(rst_n),
    
    .reg1_raddr(reg1_raddr), // register 1 read address
    .reg2_raddr(reg2_raddr), // register 2 read address
    .reg_waddr(ex_reg_waddr),
    .rd_buf_flag(ex_rd_buf_flag),
    .reg1_rdata(reg1_rdata), // register 1 read address
    .reg2_rdata(reg2_rdata),  // register 2 read address
    .from_ex_alu_res(from_ex_alu_res),
    .from_mem_alu_res(from_mem_alu_res),
    .control_rest(control_rest),
    
    .rest_from_id(rest_from_id),
    .reg_f(reg_f),
    .s_flag(s_flag),
    //.end_write_addr(end_write_addr),
    .wb_hazard_result(wb_hazard_result),
    .mem_reg_waddr(mem_reg_waddr),
    .rest_id_mem(rest_id_mem),
    .rest_wb_hazard(rest_wb_hazard),
    .data_rest_cond(data_rest_cond),
    .delay_reg1_rdata(delay_reg1_rdata),
    .cunqu_hazard(cunqu_hazard),
    .mem_cunqu_hazard(mem_cunqu_hazard),
    .mem_from_ex_alu_res(mem_from_ex_alu_res),
    .expand_signed(expand_signed)
);
mux_alu u_mux_alu( 
    .alu_src_sel(alu_src_sel),// reg or imm to alu

    .reg1_rdata(reg1_rdata), // register 1 read data
    .reg2_rdata(reg2_rdata), // register 2 read data
    .imm(imm),        // immediate
    .curr_pc(id_pc),    // current pc addr
    //.no_use(no_use),

    .alu_src1(alu_src1),   // alu source 1
    .alu_src2(alu_src2),    // alu source 2
    .cunqu_hazard(cunqu_hazard),
    .csr_addr(csr_addr),
    .mepc(mepc),
    .mcause(mcause),
    .mtvec(mtvec),
    .mstatus(mstatus)
);

muxpc u_mux_pc(
    .clk(clk),
    .rst_n(rst_n),
    //.ena(ena),
    .branch(branch),  // branch type 
    
    .jump(jump),    // jump type 
    .jalr(jalr),
    .imm(imm),     // immediate  
    .curr_pc(id_pc), // current pc addr
    .next_pc(next_pc), // next pc addr
   // input      [`CPU_WIDTH-1:0]     reg1_rdata
   .ebreak_flag(ebreak_flag),
   .reg_f (reg_f),
   .s_imm(s_imm),
   .alu_src1(alu_src1),
   .alu_src2(alu_src2),
   .alu_op(alu_op),
   .data_rest_cond(data_rest_cond),
   .reg1_rdata(delay_reg1_rdata),
   .sig_jalr(sig_jalr),
   .delay_sig_jalr(delay_sig_jalr),
   .mret_flag(mret_flag),
   .ecall_flag(ecall_flag),
   .unnormal_pc(unnormal_pc),
   .mtvec(mtvec),
   .mepc(mepc)
   
   
    );
endmodule