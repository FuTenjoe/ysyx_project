//top.vcache_axi_req
`include "../vsrc/rvseed_defines.v"
module  cpu(
	input                         clk,
    input                         rst,
	output [31:0]                 inst,
	output[31:0]        pc,
    output [`CPU_WIDTH-1:0]       unknown_code,
    input time_set,
    output[31:0]        diff_pc,
    output [31:0] diff_delay_pc,
    output out_mem_rd_buf_flag,
    output [63:0] axi_r_addr,
    output axi_burst,
    output [3:0] send_axi_ar_id,
    output cache_axi_req,
    output axi_valid,
    output waxi_valid,
    




    input r_done2,
    input axi_r_ready_o2,
    input [3:0]axi_ar_id_o2
   // output[`CPU_WIDTH-1:0]        next_pc
);
assign out_mem_rd_buf_flag = sig_jalr;
assign diff_pc = wb_pc[31:0];
assign diff_delay_pc = wb_delay_pc[31:0];
wire rst_n;
assign rst_n = !rst;
wire [63:0] id_next_pc;
wire if_ena;
wire [31:0]if_inst;
wire [63:0]if_pc;
assign pc = if_pc;
assign inst = if_inst;



wire rest_id_mem;
wire div_finish;
wire ar_hs;
wire delay_r_done;
wire [3:0] axi_ar_id_o;
wire mem_res_valid;
wire [63:0] rdata;
wire w_done;
wire b_hs;
wire id_mem_cache;
if_stage u_if_stage(
    .clk(clk),
    .rst_n(rst_n),
    
    .id_next_pc(id_next_pc),
    .ena(if_ena),
    .inst(if_inst),
    .curr_pc(if_pc),
    .control_rest(id_control_rest),
    .rest_id_mem(rest_id_mem),
    .id_pc(id_pc),
    .sig_jalr(sig_jalr),
    .sh_fnsh_flag(sh_fnsh_flag),
    .id_mul(id_mul),
    .id_div(id_div),
    .div_finish(div_finish),
    .mem_valid(mem_valid),       //clint新加
    .mem_send_id(mem_send_id),
    .mem_addr(mem_addr),
    .ar_hs(ar_hs),
    .delay_r_done2(delay_r_done),
    .d_ar_id_o(axi_ar_id_o),
    .mem_no_use(mem_no_use),
    .ex_rd_buf_flag(ex_rd_buf_flag),
    .mem_res_valid(mem_res_valid),
    .rdata(rdata),


    .waxi_valid(waxi_valid),
    .reg_write_addr(reg_write_addr),
    .reg_write_data(reg_write_data),
    .reg_write_wmask(reg_write_wmask),
    .wb_res_valid(wb_res_valid),
    .axi_req(axi_req),
    .w_done(w_done),
    .b_hs(b_hs),

    .mret_flag(mret_flag),
    .ecall_flag(ecall_flag),
    .w_start(w_start),
    .id_mem_cache(id_mem_cache),

    .axi_ar_id_o2(axi_ar_id_o2),
    .axi_r_ready_o2(axi_r_ready_o2),
    .r_done2(r_done2),
    .cache_axi_req(cache_axi_req),
    .axi_burst(axi_burst),
    .axi_r_addr(axi_r_addr),
    .axi_valid(axi_valid),
    


    .send_axi_ar_id(send_axi_ar_id)

);
wire [31:0]id_inst;
wire [63:0]id_pc; 
wire id_ena;
wire id_time_set;
wire delay_sig_jalr;
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
    .time_set_if_id_o(id_time_set),
    .control_rest(id_control_rest),
    .id_pc(id_pc),
    .rest_id_mem(rest_id_mem),
    .delay_sig_jalr(delay_sig_jalr),
    .id_mul(id_mul),
	.sh_fnsh_flag(sh_fnsh_flag),
    .id_div(id_div),
    .div_finish(div_finish)
    
    
);
wire [63:0] to_id_reg_f [0:`REG_DATA_DEPTH-1];
wire id_branch;
wire id_jump;
wire id_reg_wen;
wire [`REG_ADDR_WIDTH-1:0] id_reg_waddr;
wire [63:0] id_alu_src1;
wire [63:0] id_alu_src2;
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
wire rest_from_id;
wire id_control_rest;
wire [63:0] id_end_write_addr;
wire rest_wb_hazard;
wire sig_jalr;
wire id_mul;
wire id_div;
wire [63:0] from_mem_mepc;
wire [63:0] from_mem_mcause;
wire [63:0] from_mem_mtvec;
wire [63:0] from_mem_mie;
//wire [63:0] from_mem_mstatus;
wire [11:0] id_csr_addr;
wire mret_flag;
wire ecall_flag;
wire [63:0] from_mem_mstatus;
id_stage u_id_stage(
    .clk(clk),
    .rst_n(rst_n),
    .id_pc(id_pc),
    .inst(id_inst),       // instruction input
    //.reg_f (to_id_reg_f),
    .reg_f (from_wb_reg_f),
    .ex_reg_waddr(ex_reg_waddr), //改为执行阶段的1写回地址，应该是上一条指令
    .rest_from_id(rest_from_id),

    

    .reg_wen(id_reg_wen),    // register write enable
    .reg_waddr(id_reg_waddr),  // register write address
    
    
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
    .rd_buf_flag(id_rd_buf_flag),   //访存标志
    .control_rest(id_control_rest),
    .from_ex_alu_res(from_ex_alu_res),
    .from_mem_alu_res(from_mem_alu_res),
    
    .ex_rd_buf_flag(ex_rd_buf_flag),
    
    .next_pc(id_next_pc),

    //output reg [`IMM_GEN_OP_WIDTH-1:0] imm_gen_op, // immediate extend opcode
   
    .alu_src1(id_alu_src1),   // alu source 1
    .alu_src2(id_alu_src2),    // alu source 2
    .rest_id_mem(rest_id_mem),
    .ex_inst(ex_inst),
    
    .wb_hazard_result(wb_hazard_result),
    .mem_reg_waddr(mem_reg_waddr),
    .ex_s_flag(ex_s_flag),
    .mem_s_flag(mem_s_flag),
    .rest_wb_hazard(rest_wb_hazard),
    .sig_jalr(sig_jalr),
    .delay_sig_jalr(delay_sig_jalr),
    .ex_s_imm(ex_s_imm),
    .cunqu_hazard(id_cunqu_hazard),
    .mem_cunqu_hazard(mem_cunqu_hazard),
    .mem_from_ex_alu_res(mem_from_ex_alu_res),
    .id_mul(id_mul),
    .id_div(id_div),
    .mepc(from_mem_mepc),
    .mcause(from_mem_mcause),
    .mtvec(from_mem_mtvec),
    //.mstatus(mstatus)
    .mie(from_mem_mie),
    .mstatus(from_mem_mstatus),
    .csr_addr(id_csr_addr),
    .mret_flag(mret_flag),
    .ecall_flag(ecall_flag),
    .id_mem_cache(id_mem_cache),
    .clint_timer_irq(clint_timer_irq)
);

wire id_cunqu_hazard;
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

wire ex_ena;
wire ex_time_set;
//wire [63:0] ex_reg_wdata;
wire id_rest_no_use;
wire ex_rest_id_mem;
wire [31:0] ex_inst;
wire [63:0] ex_end_write_addr;
wire ex_cunqu_hazard;
wire ex_id_mul;
wire ex_id_div;
wire [11:0] ex_csr_addr;
id_ex_regs u_id_ex_regs(
	.clk(clk),
	.rst_n(rst_n),
	.pc_id_ex_i(id_pc),
	.pc_id_ex_o(ex_pc),


    .reg_wen_id_ex_i(id_reg_wen),    // register write enable
    .reg_waddr_id_ex_i(id_reg_waddr),  // register write address

    .alu_op_id_ex_i(id_alu_op),     // alu opcode
  
    .unknown_code_id_ex_i(id_unknown_code),
    .ebreak_flag_id_ex_i(id_ebreak_flag),
    .wmask_id_ex_i(id_wmask),
    .s_flag_id_ex_i(id_s_flag),
    .s_imm_id_ex_i(id_s_imm),
    .expand_signed_id_ex_i(id_expand_signed),
    .rd_flag_id_ex_i(id_rd_flag),
	.rd_buf_flag_id_ex_i(id_rd_buf_flag), 
	

    .reg_wen_id_ex_o(ex_reg_wen),    // register write enable
    .reg_waddr_id_ex_o(ex_reg_waddr),  // register write address
 
	
    .alu_op_id_ex_o(ex_alu_op),    // alu opcode
    
    .unknown_code_id_ex_o(ex_unknown_code),
    
    .ebreak_flag_id_ex_o(ex_ebreak_flag),
    .wmask_id_ex_o(ex_wmask),
    .s_flag_id_ex_o(ex_s_flag),
    .s_imm_id_ex_o(ex_s_imm),
    .expand_signed_id_ex_o(ex_expand_signed),
    .rd_flag_id_ex_o(ex_rd_flag),
	.rd_buf_flag_id_ex_o(ex_rd_buf_flag), 

   
    .time_set_id_ex_i(id_time_set),
    
	
	.time_set_id_ex_o(ex_time_set),
	

	.ena_id_ex_i(id_ena),
	.ena_id_ex_o(ex_ena),
	.alu_src1_id_ex_i(id_alu_src1),   // alu source 1
    .alu_src2_id_ex_i(id_alu_src2),    // alu source 2
    .rest_id_mem_id_ex_i(rest_id_mem),
	.alu_src1_id_ex_o(ex_alu_src1),   // alu source 1
    .alu_src2_id_ex_o(ex_alu_src2),    // alu source 2
    .rest_id_mem_id_ex_o(ex_rest_id_mem),
    .id_inst(id_inst),
	.ex_inst(ex_inst),
    //.end_write_addr_id_ex_i(id_end_write_addr),
	//.end_write_addr_id_ex_o(ex_end_write_addr),
    .cunqu_hazard_id_ex_i(id_cunqu_hazard),
    .cunqu_hazard_id_ex_o(ex_cunqu_hazard),
    .id_mul_id_ex_i(id_mul),
	.id_mul_id_ex_o(ex_id_mul),
    .id_div_id_ex_i(id_div),
    .id_div_id_ex_o(ex_id_div),
    .csr_addr_id_ex_i(id_csr_addr),
	.csr_addr_id_ex_o(ex_csr_addr)
   
    
    );
wire [63:0] from_ex_alu_res;
wire [63:0]    ex_alu_src1;
wire [`CPU_WIDTH-1:0]    ex_alu_src2;
wire [`CPU_WIDTH-1:0] ex_next_pc;
wire write_ready;
wire ex_pc_ready;
wire sh_fnsh_flag;
ex_stage u_ex_stage(
    .clk(clk),
    .rst_n(rst_n),
    .alu_op(ex_alu_op),   // alu opcode
    .alu_src1(ex_alu_src1), // alu source 1
    .alu_src2(ex_alu_src2), // alu source 2
    .alu_res(from_ex_alu_res),   // alu result
    .rd_flag(ex_rd_flag),
    .expand_signed(ex_expand_signed),
    .sh_fnsh_flag(sh_fnsh_flag),
    .div_finish(div_finish)
  
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

wire mem_pc_ready;
wire [63:0] mem_pc;
wire fr_ex_no_use;
wire [63:0] mem_end_write_addr;
wire mem_cunqu_hazard;
wire [11:0] mem_csr_addr;
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
    .from_ex_alu_res_ex_mem_o(mem_from_ex_alu_res),
   
   
    .pc_ex_mem_i(ex_pc),
	.pc_ex_mem_o(mem_pc),
    .rest_id_mem_ex_mem_i(ex_rest_id_mem),
	.rest_id_mem_ex_mem_o(mem_rest_id_mem),
    //.end_write_addr_ex_mem_i(ex_end_write_addr),
	//.end_write_addr_ex_mem_o(mem_end_write_addr),
    .cunqu_hazard_ex_mem_i(ex_cunqu_hazard),
    .cunqu_hazard_ex_mem_o(mem_cunqu_hazard),
    .id_mul_ex_mem_i(ex_id_mul),
	.sh_fnsh_flag_ex_mem_i(sh_fnsh_flag),
    .id_div_ex_mem_i(ex_id_div),
	.div_finish_ex_mem_i(div_finish),
    .csr_addr_ex_mem_i(ex_csr_addr),
    .csr_addr_ex_mem_o(mem_csr_addr)
	
);
wire [63:0] from_mem_alu_res;
wire [63:0] wb_hazard_result;
wire [3:0] mem_send_id;
wire mem_valid;
wire mem_no_use;
wire [`CPU_WIDTH-1:0] mem_addr;
wire [2:0] reg_rd_buf_flag;
wire [63:0] mtimecmp;
wire clint_timer_irq;
mem_stage u_mem_stage(
    .clk(clk), //clint新加
    .rst_n(rst_n),
    . mem_pc(mem_pc),
    .rd_buf_flag(mem_rd_buf_flag),
    .alu_op(mem_alu_op),
    .alu_src1(mem_alu_src1),
    .alu_src2(mem_alu_src2),
    //output reg [63:0] rd_buf_lw,
    .sign_alu_res(from_mem_alu_res),
    .mem_from_ex_alu_res(mem_from_ex_alu_res),
    .wb_hazard_result(wb_hazard_result),
    .mem_expand_signed(mem_expand_signed),
    .mem_cunqu_hazard(mem_cunqu_hazard),
    .return_id(axi_ar_id_o),        //clint新加
    .mem_res_valid(mem_res_valid),
    .mem_axi_valid(mem_valid),       
    .mem_send_id(mem_send_id),
    .mem_addr(mem_addr),
    //.ar_hs(ar_hs),
    .r_done(delay_r_done),
    .mem_no_use(mem_no_use),
    .axi_rdata(rdata),
    .mem_rd_buf_flag(reg_rd_buf_flag),
    .mem_csr_addr(mem_csr_addr),
    .mepc(from_mem_mepc),
    .mcause(from_mem_mcause),
    .mtvec(from_mem_mtvec),
    .mstatus(from_mem_mstatus),
    .mtimecmp(mtimecmp),
    .clint_timer_irq(clint_timer_irq),
    .mie(from_mem_mie)
   
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

wire wb_pc_ready;
wire [63:0] wb_pc;
wire mem_rest_id_mem;
wire [63:0] wb_end_write_addr;
wire wb_cunqu_hazard;
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
	.from_mem_alu_res_mem_wb_o(wb_from_mem_alu_res),
   
    
    .pc_mem_wb_i(mem_pc),
	.pc_mem_wb_o(wb_pc),
    .rest_id_mem_ex_mem_o(mem_rest_id_mem),
    //.end_write_add_mem_wb_i(mem_end_write_addr),
	//.end_write_add_mem_wb_o(wb_end_write_addr),
    .cunqu_hazard_mem_wb_i(mem_cunqu_hazard),
    .cunqu_hazard_mem_wb_o (wb_cunqu_hazard),
    .mem_no_use(mem_no_use),
    .reg_rd_buf_flag(reg_rd_buf_flag)
    );
reg [63:0] from_wb_reg_f [0:`REG_DATA_DEPTH-1];
wire wb_ebreak_flag;
wire [63:0] wb_delay_pc;
//wire waxi_valid;
wire [63:0] reg_write_addr;
wire [63:0] reg_write_data;
wire [7:0] reg_write_wmask;
wire wb_res_valid;
wire  axi_req;
wire w_start;
//wire axi_valid;


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
    .time_set(time_set),
    .s_imm(wb_s_imm),
    .expand_signed(wb_expand_signed),
    .rd_buf_flag(wb_rd_buf_flag),
    .ebreak_flag(wb_ebreak_flag),
    .reg_f(from_wb_reg_f),
    .wb_pc(wb_pc),
    .wb_delay_pc(wb_delay_pc),
    //.end_write_addr(wb_end_write_addr),
    .cunqu_hazard(wb_cunqu_hazard),
    .waxi_valid(waxi_valid),
    .reg_write_addr(reg_write_addr),
    .reg_write_data(reg_write_data),
    .reg_write_wmask(reg_write_wmask),
    .wb_res_valid(wb_res_valid),
    .axi_req(axi_req),
    .w_done(w_done),
    .b_hs(b_hs),
    .w_start(w_start),
    .mtimecmp(mtimecmp)
  
   
);
















//wire [3:0]axi_ar_id_o2;



//wire axi_r_ready_o2;

//wire r_done2;
//wire cache_axi_req;
//wire [3:0] send_axi_ar_id;
//wire axi_burst;
//wire [63:0] axi_r_addr;




endmodule