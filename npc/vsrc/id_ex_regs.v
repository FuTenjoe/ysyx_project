`include "../vsrc/rvseed_defines.v"

module id_ex_regs(
	input clk,
	input rst_n,
	input [63:0]pc_id_ex_i,
	output reg [63:0]pc_id_ex_o,

	input                        branch_id_ex_i,     // branch flag
    input                         jump_id_ex_i,       // jump flag

    input                       reg_wen_id_ex_i,    // register write enable
    input  [`REG_ADDR_WIDTH-1:0]   reg_waddr_id_ex_i,  // register write address

    //input reg [`REG_ADDR_WIDTH-1:0]   reg1_raddr_id_ex_i, // register 1 read address
    //input reg [`REG_ADDR_WIDTH-1:0]   reg2_raddr_id_ex_i, // register 2 read address

    input  [63:0]   reg1_rdata_id_ex_i, // register 1 read data
    input  [63:0]   reg2_rdata_id_ex_i, // register 2 read data
    //input reg [`IMM_GEN_OP_WIDTH-1:0] imm_gen_op_id_ex_i, // immediate extend opcode
	output reg [`CPU_WIDTH-1:0]        imm_id_ex_i,
    input  [`ALU_OP_WIDTH-1:0]     alu_op_id_ex_i,     // alu opcode
    input  [`ALU_SRC_WIDTH-1:0]    alu_src_sel_id_ex_i ,// alu source select flag
    input [`CPU_WIDTH-1:0]            unknown_code_id_ex_i,
    input    jalr_id_ex_i,
    input ebreak_flag_id_ex_i,
    input  [7:0]wmask_id_ex_i,
    input  s_flag_id_ex_i,
    input  [31:0]s_imm_id_ex_i,
    input  [3:0] expand_signed_id_ex_i,
    input  [2:0]rd_flag_id_ex_i,
	input  [2:0]rd_buf_flag_id_ex_i, 




	output reg                         branch_id_ex_o,     // branch flag
    output reg                         jump_id_ex_o,       // jump flag

    output reg                         reg_wen_id_ex_o,    // register write enable
    output reg [`REG_ADDR_WIDTH-1:0]   reg_waddr_id_ex_o,  // register write address
  //  output reg [`REG_ADDR_WIDTH-1:0]   reg1_raddr_id_ex_o, // register 1 read address
 //   output reg [`REG_ADDR_WIDTH-1:0]   reg2_raddr_id_ex_o, // register 2 read address
    
    //output reg [`IMM_GEN_OP_WIDTH-1:0] imm_gen_op_id_ex_o,, // immediate extend opcode
	output reg [`CPU_WIDTH-1:0]        imm_id_ex_o, 
    output reg [`ALU_OP_WIDTH-1:0]     alu_op_id_ex_o,    // alu opcode
    output reg [`ALU_SRC_WIDTH-1:0]    alu_src_sel_id_ex_o, // alu source select flag
    output [`CPU_WIDTH-1:0]            unknown_code_id_ex_o,
    output    jalr_id_ex_o,
    output ebreak_flag_id_ex_o,
    output reg [7:0]wmask_id_ex_o,
    output reg s_flag_id_ex_o,
    output reg [31:0]s_imm_id_ex_o,
    output reg [3:0] expand_signed_id_ex_o,
    output reg [2:0]rd_flag_id_ex_o,
	output reg [2:0]rd_buf_flag_id_ex_o, 
	output reg [63:0]   reg1_rdata_id_ex_o, // register 1 read data
    output reg [63:0]   reg2_rdata_id_ex_o, // register 2 read data


	
    input      [63:0]      reg_wdata_id_ex_i,  // register write data
    input time_set_id_ex_i,
    input [63:0] reg_f_id_ex_i [0:`REG_DATA_DEPTH-1],
	output [63:0] reg_wdata_id_ex_o,
	output reg time_set_id_ex_o,
	output reg [63:0] reg_f_id_ex_o [0:`REG_DATA_DEPTH-1],

	input ena_id_ex_i,
	output ena_id_ex_o
    );

always@(posedge clk or negedge rst_n)
	begin
		if(!rst_n)begin
			pc_id_ex_o<=`zeroword;
			imm_id_ex_o <= 64'd0;
			reg2_rdata_id_ex_o <= 64'd0;
		end
		else begin
			pc_id_ex_o<=pc_id_ex_i;
			imm_id_ex_o <= imm_id_ex_i;
			reg2_rdata_id_ex_o <= reg2_rdata_id_ex_i;
		end
	end
	
	
always@(posedge clk or negedge rst_n)begin	
		if(!rst_n)begin
			branch_id_ex_o <= 1'd0;
			jump_id_ex_o <= 1'd0;
			reg_wen_id_ex_o <= 1'd0;
			reg_waddr_id_ex_o <= 5'd0;
			alu_op_id_ex_o <= 5'd0;
			alu_src_sel_id_ex_o <= 2'd0;
			unknown_code_id_ex_o <= 64'd0;
			jalr_id_ex_o <= 1'd0;
			ebreak_flag_id_ex_o <= 1'd0;
			wmask_id_ex_o <= 8'd0;
			s_flag_id_ex_o <= 1'd0;
			s_imm_id_ex_o <= 32'd0;
			expand_signed_id_ex_o <= 4'd0;
			rd_flag_id_ex_o <= 3'd0;
			rd_buf_flag_id_ex_o <= 3'd0;
			ena_id_ex_o <= 1'd0;
		end
		else begin
			branch_id_ex_o <= branch_id_ex_i;
			jump_id_ex_o <= jump_id_ex_i;
			reg_wen_id_ex_o <= reg_wen_id_ex_i;
			reg_waddr_id_ex_o <= reg_waddr_id_ex_i;
			alu_op_id_ex_o <= alu_op_id_ex_i;
			alu_src_sel_id_ex_o <= alu_src_sel_id_ex_i;
			unknown_code_id_ex_o <= unknown_code_id_ex_i;
			jalr_id_ex_o <= jalr_id_ex_i;
			ebreak_flag_id_ex_o <= ebreak_flag_id_ex_i;
			wmask_id_ex_o <= wmask_id_ex_i;
			s_flag_id_ex_o <= s_flag_id_ex_i;
			s_imm_id_ex_o <= s_imm_id_ex_i;
			expand_signed_id_ex_o <= expand_signed_id_ex_i;
			rd_flag_id_ex_o <= rd_flag_id_ex_i;
			rd_buf_flag_id_ex_o <= rd_buf_flag_id_ex_i;
			ena_id_ex_o <= ena_id_ex_i;
		end
end
	

endmodule