//top.v
`include "../vsrc/rvseed_defines.v"
module  ysyx_22040175_top(
	input                         clk,
    input                         rst,
	output [31:0]                 inst,
	output[31:0]        pc,
    output [`CPU_WIDTH-1:0]       unknown_code,
    input time_set
    
   // output[`CPU_WIDTH-1:0]        next_pc
);

wire rst_n;
assign rst_n = !rst;
wire [63:0] next_pc;
wire if_ena;
wire [31:0]if_inst;
wire [63:0]if_pc;
assign pc = if_pc;
assign inst = if_inst;
if_stage u_if_stage(
    .clk(clk),
    .rst_n(rst_n),
    .next_pc(ex_next_pc),
    .ena(ena),   //输出
    .inst(if_inst),
    .pc(if_pc)
);
wire [31:0]id_inst;
wire [63:0]id_pc; 
wire id_ena;
wire id_time_set;
if_id_regs u_if_id_regs(
	.clk(clk),
	.rst_n(rst_n),
	.pc_if_id_i(if_pc),
	.instr_if_id_i(if_inst),
    .ena_if_id_i(if_ena),
    .time_set_if_id_i(time_set),
	.pc_if_id_o(id_pc),
	.instr_if_id_o(id_inst),
    .ena_if_id_o(id_ena),
    .time_set_if_id_o(id_time_set)
);
wire [63:0] to_id_reg_f [0:`REG_DATA_DEPTH-1];
wire id_branch;
wire id_jump;
wire id_reg_wen;
wire [`REG_ADDR_WIDTH-1:0] id_reg_waddr;
wire [63:0] id_reg1_rdata;
wire [63:0] id_reg2_rdata;
wire [`CPU_WIDTH-1:0] id_imm;
wire [`ALU_OP_WIDTH-1:0]     id_alu_op;     // alu opcode
wire [`ALU_SRC_WIDTH-1:0]    id_alu_src_sel ;// alu source select flag
wire [`CPU_WIDTH-1:0]        id_unknown_code;
wire    id_jalr;
wire id_ebreak_flag;
wire [7:0] id_wmask;
wire id_s_flag;
wire [31:0] id_s_imm;
wire [3:0] id_expand_signed;
wire [2:0] id_rd_flag;
wire [2:0] id_rd_buf_flag;   //访存标志

id_stage u_id_stage(
    .inst(id_inst),       // instruction input
    .reg_f (to_id_reg_f),
    .branch(id_branch),     // branch flag
    .jump(id_jump),       // jump flag

    .reg_wen(id_reg_wen),    // register write enable
    .reg_waddr(id_reg_waddr),  // register write address
    
    .reg1_rdata(id_reg1_rdata), // register 1 read data
    .reg2_rdata(id_reg2_rdata), // register 2 read data
    //output reg [`IMM_GEN_OP_WIDTH-1:0] imm_gen_op, // immediate extend opcode
    .imm(id_imm), 
    .alu_op(id_alu_op),     // alu opcode
    .alu_src_sel(id_alu_src_sel) ,// alu source select flag
    .unknown_code(id_unknown_code),
    .jalr(id_jalr),
    .ebreak_flag(id_ebreak_flag),
    .wmask(id_wmask),
    .s_flag(id_s_flag),
    .s_imm(id_s_imm),
    .expand_signed(id_expand_signed),
    .rd_flag(id_rd_flag),
    .rd_buf_flag(id_rd_buf_flag)   //访存标志
);
wire [63:0] ex_pc;
wire        ex_branch;     // branch flag
wire        ex_jump;       // jump flag

wire        ex_reg_wen;    // register write enable
wire [`REG_ADDR_WIDTH-1:0]   ex_reg_waddr;  // register write address
  
wire [`CPU_WIDTH-1:0]        ex_imm; 
wire [`ALU_OP_WIDTH-1:0]     ex_alu_op;   // alu opcode
wire [`ALU_SRC_WIDTH-1:0]    ex_alu_src_sel; // alu source select flag
wire [`CPU_WIDTH-1:0]        ex_unknown_code;
wire    ex_jalr;
wire    ex_ebreak_flag;
wire [7:0] ex_wmask;
wire ex_s_flag;
wire [31:0] ex_s_imm;
wire [3:0] ex_expand_signed;
wire [2:0] ex_rd_flag;
wire [2:0] ex_rd_buf_flag;
wire [63:0]   ex_reg1_rdata; // register 1 read data
wire [63:0]   ex_reg2_rdata; // register 2 read data
wire [63:0] to_ex_reg_f [0:`REG_DATA_DEPTH-1];
wire ex_ena;
wire ex_time_set;
//wire [63:0] ex_reg_wdata;
id_ex_regs u_id_ex_regs(
	.clk(clk),
	.rst_n(rst_n),
	.pc_id_ex_i(id_pc),
	.pc_id_ex_o(ex_pc),
	

	.branch_id_ex_i(id_branch),     // branch flag
    .jump_id_ex_i(id_jump),       // jump flag

    .reg_wen_id_ex_i(id_reg_wen),    // register write enable
    .reg_waddr_id_ex_i(id_reg_waddr),  // register write address

    .reg1_rdata_id_ex_i(id_reg1_rdata), // register 1 read data
    .reg2_rdata_id_ex_i(id_reg2_rdata), // register 2 read data
   
	.imm_id_ex_i(id_imm),
    .alu_op_id_ex_i(id_alu_op),     // alu opcode
    .alu_src_sel_id_ex_i(id_alu_src_sel) ,// alu source select flag
    .unknown_code_id_ex_i(id_unknown_code),
    .jalr_id_ex_i(id_jalr),
    .ebreak_flag_id_ex_i(id_ebreak_flag),
    .wmask_id_ex_i(id_wmask),
    .s_flag_id_ex_i(id_s_flag),
    .s_imm_id_ex_i(id_s_imm),
    .expand_signed_id_ex_i(id_expand_signed),
    .rd_flag_id_ex_i(id_rd_flag),
	.rd_buf_flag_id_ex_i(id_rd_buf_flag), 

	.branch_id_ex_o(ex_branch),     // branch flag
    .jump_id_ex_o(ex_jump),       // jump flag

    .reg_wen_id_ex_o(ex_reg_wen),    // register write enable
    .reg_waddr_id_ex_o(ex_reg),  // register write address
  
	.imm_id_ex_o(ex_imm), 
    .alu_op_id_ex_o(ex_alu_op),    // alu opcode
    .alu_src_sel_id_ex_o(ex_alu_src_sel), // alu source select flag
    .unknown_code_id_ex_o(ex_unknown_code),
    .jalr_id_ex_o(ex_jalr),
    .ebreak_flag_id_ex_o(ex_ebreak_flag),
    .wmask_id_ex_o(ex_wmask),
    .s_flag_id_ex_o(ex_s_flag),
    .s_imm_id_ex_o(ex_s_imm),
    .expand_signed_id_ex_o(ex_expand_signed),
    .rd_flag_id_ex_o(ex_rd_flag),
	.rd_buf_flag_id_ex_o(ex_rd_buf_flag), 
	.reg1_rdata_id_ex_o(ex_reg1_rdata), // register 1 read data
    .reg2_rdata_id_ex_o(ex_reg2_rdata), // register 2 read data


	
    //input [63:0]reg_wdata_id_ex_i(id_reg_waddr),  // register write data
    .time_set_id_ex_i(id_time_set),
    .reg_f_id_ex_i (to_id_reg_f),
	//output [63:0] reg_wdata_id_ex_o,
	.time_set_id_ex_o(ex_time_set),
	.reg_f_id_ex_o (to_ex_reg_f),
    .ena_id_ex_i(id_ena),
    .ena_id_ex_o(ex_ena)
    );
wire [63:0] from_ex_alu_res;
wire [63:0]    ex_alu_src1;
wire [`CPU_WIDTH-1:0]    ex_alu_src2;
wire [`CPU_WIDTH-1:0] ex_next_pc;
ex_stage u_ex_stage(
    .alu_op(ex_alu_op),   // alu opcode
    
    .alu_res(from_ex_alu_res),   // alu result
    .alu_src1(ex_alu_src1), // alu source 1
    .alu_src2(ex_alu_src2), // alu source 2
    .rd_flag(ex_rd_flag),


    .ena(ex_ena),
    .branch(ex_branch),  // branch type 
    
    .jump(ex_jump),    // jump type 
    .jalr(ex_jalr),
    .imm(ex_imm),     // immediate  
    .curr_pc(ex_pc), // current pc addr
    .reg1_rdata(ex_reg1_rdata),
    .reg2_rdata(ex_reg2_rdata),
    .ebreak_flag(ex_ebreak_flag),
    .reg_f(to_ex_reg_f),
    .s_imm(ex_s_imm),
    .next_pc(ex_next_pc) // next pc addr
);
wire mem_reg_wen;
wire [`REG_ADDR_WIDTH-1:0] mem_reg_waddr;
wire mem_ebreak_flag;
wire [7:0] mem_wmask;
wire mem_s_flag;
wire mem_time_set;
wire [31:0] mem_s_imm;
wire [3:0] mem_expand_signed;
	
wire [2:0] mem_rd_buf_flag;
wire [`ALU_OP_WIDTH-1:0]  mem_alu_op;
wire [`CPU_WIDTH-1:0]    mem_alu_src1; // alu source 1
wire     [`CPU_WIDTH-1:0]    mem_alu_src2;// alu source 2
wire [63:0] mem_from_ex_alu_res;
ex_mem_regs u_ex_mem_regs(
	.clk(clk),
	.rst_n(rst_n),
	//input [31:0]pc_ex_mem_i,
	.reg_wen_ex_mem_i(ex_reg_wen),    // register write enable
    .reg_waddr_ex_mem_i(ex_reg_waddr),  // register write address
    
    .from_ex_alu_res_ex_mem_i(from_ex_alu_res),

    .wmask_ex_mem_i(ex_wmask),
    .s_flag_ex_mem_i(ex_s_flag),
    .time_set_ex_mem_i(ex_time_set),
    .s_imm_ex_mem_i(ex_s_imm),
    .expand_signed_ex_mem_i(ex_expand_signed),
	.ebreak_flag_ex_mem_i(ex_ebreak_flag),

	
	.rd_buf_flag_ex_mem_i(ex_rd_buf_flag),
	.alu_op_ex_mem_i(ex_alu_op),
	.alu_src1_ex_mem_i(ex_alu_src1), // alu source 1
    .alu_src2_ex_mem_i(ex_alu_src2), // alu source 2

	//output reg [31:0]pc_ex_mem_o,
	.reg_wen_ex_mem_o(mem_reg_wen),    // register write enable
    .reg_waddr_ex_mem_o(mem_reg_waddr),  // register write address
    //output      [63:0]      reg_wdata_ex_mem_o,  // register write data
    .ebreak_flag_ex_mem_o(mem_ebreak_flag),

    
    .wmask_ex_mem_o(mem_wmask),
    .s_flag_ex_mem_o(mem_s_flag),
    .time_set_ex_mem_o(mem_time_set),
    .s_imm_ex_mem_o(mem_s_imm),
    .expand_signed_ex_mem_o(mem_expand_signed),
	
	.rd_buf_flag_ex_mem_o(mem_rd_buf_flag),
	.alu_op_ex_mem_o(mem_alu_op),
	.alu_src1_ex_mem_o(mem_alu_src1), // alu source 1
    .alu_src2_ex_mem_o(mem_alu_src2), // alu source 2
    .from_ex_alu_res_ex_mem_o(mem_from_ex_alu_res)
);
wire [63:0] from_mem_alu_res;
mem_stage u_mem_stage(
    .rd_buf_flag(mem_rd_buf_flag),
    .alu_op(mem_alu_op),
    .alu_src1(mem_alu_src1),
    .alu_src2(mem_alu_src2),
    //output reg [63:0] rd_buf_lw,
    .alu_res(from_mem_alu_res)
);
wire wb_reg_wen;
wire    [`REG_ADDR_WIDTH-1:0] wb_reg_waddr;  // register write address
//wire    [63:0]      wb_reg_wdata;  // register write data
wire [7:0] wb_wmask;
wire wb_s_flag;
wire wb_time_set;
wire [31:0] wb_s_imm;
wire [3:0] wb_expand_signed;
wire wb_ebreak_flag;
wire [2:0] wb_rd_buf_flag;
wire  [63:0] wb_from_ex_alu_res;
wire [63:0] wb_from_mem_alu_res;
mem_wb_regs u_mem_wb_regs(
	.clk(clk),
    .rst_n(rst_n),
    
    .reg_wen_mem_wb_i(mem_reg_wen),    // register write enable
    .reg_waddr_mem_wb_i(mem_reg_waddr),  // register write address
    //input      [63:0]      reg_wdata_mem_wb_i,  // register write data即alu_res
	
	
    .from_ex_alu_res_mem_wb_i(mem_from_ex_alu_res),
	.from_mem_alu_res_mem_wb_i(from_mem_alu_res),
    .wmask_mem_wb_i(mem_wmask),
    .s_flag_mem_wb_i(mem_s_flag),
    .time_set_mem_wb_i(mem_time_set),
    .s_imm_mem_wb_i(mem_s_imm),
    .expand_signed_mem_wb_i(mem_expand_signed),
   //output reg [63:0] reg_f [0:`REG_DATA_DEPTH-1]

   	.ebreak_flag_mem_wb_i(mem_ebreak_flag),
	.rd_buf_flag_mem_wb_i(mem_rd_buf_flag),
    .reg_wen_mem_wb_o(wb_reg_wen),    // register write enable
    .reg_waddr_mem_wb_o(wb_reg_waddr),  // register write address
    //.reg_wdata_mem_wb_o(reg_wdata),  // register write data
    .wmask_mem_wb_o(wb_wmask),
    .s_flag_mem_wb_o(wb_s_flag),
    .time_set_mem_wb_o(wb_time_set),
    .s_imm_mem_wb_o(wb_s_imm),
    .expand_signed_mem_wb_o(wb_expand_signed),
	.ebreak_flag_mem_wb_o(wb_ebreak_flag),
	.rd_buf_flag_mem_wb_o(wb_rd_buf_flag),
	.from_ex_alu_res_mem_wb_o(wb_from_ex_alu_res),
	.from_mem_alu_res_mem_wb_o(wb_from_mem_alu_res)
    );
wire [63:0] from_wb_reg_f [0:`REG_DATA_DEPTH-1];
wire wb_ebreak_flag;
wb_stage u_wb_stage(
    .clk(clk),
    .rst_n(rst_n),
    
    .reg_wen(wb_reg_wen),    // register write enable
    .reg_waddr(wb_reg_waddr),  // register write address
    //input      [63:0]      reg_wdata,  // register write data
    .from_ex_alu_res(wb_from_ex_alu_res),
    .from_mem_alu_res(wb_from_mem_alu_res),
    .wmask(wb_wmask),
    .s_flag(wb_s_flag),
    .time_set(wb_time_set),
    .s_imm(wb_s_imm),
    .expand_signed(wb_expand_signed),
    .rd_buf_flag(wb_rd_buf_flag),
    .ebreak_flag(wb_ebreak_flag),
    .reg_f(from_wb_reg_f)
   
);
endmodule