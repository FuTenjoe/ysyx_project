`include "../vsrc/rvseed_defines.v"

module id_stage (
    input clk,
    input rst_n,
    input [63:0] id_pc,
    input      [`CPU_WIDTH-1:0]        inst,       // instruction input
    input reg [63:0] reg_f [0:`REG_DATA_DEPTH-1],
    input [`REG_ADDR_WIDTH-1:0] wb_reg_waddr,
    input write_ready,
    output reg rest_from_id,

    output reg                         branch,     // branch flag
    output reg                         jump,       // jump flag

    output reg                         reg_wen,    // register write enable
    output reg [`REG_ADDR_WIDTH-1:0]   reg_waddr,  // register write address
    
    output reg [63:0]   reg1_rdata, // register 1 read data
    output reg [63:0]   reg2_rdata, // register 2 read data
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
    input [63:0] from_mem_alu_res
   
   
);
wire [`IMM_GEN_OP_WIDTH-1:0] imm_gen_op;
wire [`REG_ADDR_WIDTH-1:0]   reg1_raddr; // register 1 read address
wire [`REG_ADDR_WIDTH-1:0]   reg2_raddr; // register 2 read address
ctrl u_ctrl(
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
    .rd_buf_flag(rd_buf_flag)   //访存标志
   
);
imm_gen u_imm_gen(
    .inst(inst),       // instruction input
    .imm_gen_op(imm_gen_op), // immediate extend opcode

    .imm(imm)         // immediate  
);
wire [63:0]  reg1_rdata_fr_read;
wire [63:0]  reg2_rdata_fr_read;
reg_read u_reg_read(
    .clk(clk),
    .rst_n(rst_n),
    .reg_f(reg_f),
    .reg1_raddr(reg1_raddr), // register 1 read address
    .reg2_raddr(reg2_raddr), // register 2 read address
    .reg1_rdata(reg1_rdata_fr_read), // register 1 read data
    .reg2_rdata(reg2_rdata_fr_read) // register 2 read data

);
id_rest u_id_rest(        //data hazard
    .clk(clk),
    .rst_n(rst_n),
    .id_pc(id_pc),
    .reg1_raddr(reg1_raddr), // register 1 read address
    .reg2_raddr(reg2_raddr), // register 2 read address
    .reg_waddr(reg_waddr),
    .write_ready(write_ready),
    .rd_buf_flag(rd_buf_flag),
    .rest_from_id(rest_from_id)
   
);
id_control_rest u_id_control_rest(
    .clk(clk),
    .rst_n(rst_n),
    .branch(branch),     // branch flag
    .jump(jump),       // jump flag
    .control_rest(control_rest)
   
);
mux_dt_pipe u_mux_dt_pipe (
    .reg1_rdata_fr_read(reg1_rdata_fr_read),
    .reg2_rdata_fr_read(reg2_rdata_fr_read),
    .reg1_raddr(reg1_raddr), // register 1 read address
    .reg2_raddr(reg2_raddr), // register 2 read address
    .reg_waddr(reg_waddr),
    .rd_buf_flag(rd_buf_flag),
    .reg1_rdata(reg1_rdata), // register 1 read address
    .reg2_rdata(reg2_rdata)  // register 2 read address
    .from_ex_alu_res(from_ex_alu_res),
    .from_mem_alu_res(from_mem_alu_res)
    
);
endmodule