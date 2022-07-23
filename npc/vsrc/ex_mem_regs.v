`include "../vsrc/rvseed_defines.v"

module ex_mem_regs(
	input clk,
	input rst_n,
	//input [31:0]pc_ex_mem_i,
	input                            reg_wen_ex_mem_i,    // register write enable
    input      [`REG_ADDR_WIDTH-1:0] reg_waddr_ex_mem_i,  // register write address
    input [63:0] from_ex_alu_res_ex_mem_i,
    
    
    
    input  [7:0] wmask_ex_mem_i,
    input s_flag_ex_mem_i,
    input time_set_ex_mem_i,
    input [31:0] s_imm_ex_mem_i,
    input [3:0] expand_signed_ex_mem_i,
	input ebreak_flag_ex_mem_i,

	
	input [2:0] rd_buf_flag_ex_mem_i,
	input [`ALU_OP_WIDTH-1:0]     alu_op_ex_mem_i,
	input      [63:0]    alu_src1_ex_mem_i, // alu source 1
    input      [`CPU_WIDTH-1:0]    alu_src2_ex_mem_i, // alu source 2

	//output reg [31:0]pc_ex_mem_o,
	output reg                           reg_wen_ex_mem_o,    // register write enable
    output  reg    [`REG_ADDR_WIDTH-1:0] reg_waddr_ex_mem_o,  // register write address
    //output      [63:0]      reg_wdata_ex_mem_o,  // register write data
    output reg ebreak_flag_ex_mem_o,

    
    output  reg [7:0] wmask_ex_mem_o,
    output reg s_flag_ex_mem_o,
    output reg time_set_ex_mem_o,
    output reg [31:0] s_imm_ex_mem_o,
    output reg [3:0] expand_signed_ex_mem_o,
	
	output reg [2:0] rd_buf_flag_ex_mem_o,
	output reg[`ALU_OP_WIDTH-1:0]  alu_op_ex_mem_o,
	output reg     [`CPU_WIDTH-1:0]    alu_src1_ex_mem_o, // alu source 1
    output reg     [`CPU_WIDTH-1:0]    alu_src2_ex_mem_o, // alu source 2
	output reg [63:0] from_ex_alu_res_ex_mem_o,
	

	input  [63:0] pc_ex_mem_i,
	output [63:0] pc_ex_mem_o,
	input rest_id_mem_ex_mem_i,
	output rest_id_mem_ex_mem_o
	
    );

	always@(posedge clk or negedge rst_n)
	begin
		if(!rst_n)begin 
			reg_wen_ex_mem_o <= 1'd0;
			reg_waddr_ex_mem_o <= 5'd0;
			//reg_wdata_ex_mem_o <= 64'd0;
			
			wmask_ex_mem_o <= 8'd0;
			s_flag_ex_mem_o <= 1'd0;
			time_set_ex_mem_o <= 1'd0;
			s_imm_ex_mem_o <= 32'd0;
			expand_signed_ex_mem_o <= 4'd0;

			ebreak_flag_ex_mem_o <= 1'd0;
			rd_buf_flag_ex_mem_o <= 3'd0;
			alu_op_ex_mem_o <= 5'd0;
			alu_src1_ex_mem_o <= 64'd0;
			alu_src2_ex_mem_o <= 64'd0;
			from_ex_alu_res_ex_mem_o <= 64'd0;
			
			pc_ex_mem_o <= 32'h8000_0000;
			rest_id_mem_ex_mem_o <= 1'b0;
		end
		else if(rest_id_mem_id_ex_i == 1'b1)begin
			reg_wen_ex_mem_o <= reg_wen_ex_mem_o;
			reg_waddr_ex_mem_o <= reg_waddr_ex_mem_o;
			//reg_wdata_ex_mem_o <= reg_wdata_ex_mem_i;
			
			wmask_ex_mem_o <= wmask_ex_mem_o;
			s_flag_ex_mem_o <= s_flag_ex_mem_o;
			time_set_ex_mem_o <= time_set_ex_mem_o;
			s_imm_ex_mem_o <= s_imm_ex_mem_o;
			expand_signed_ex_mem_o <= expand_signed_ex_mem_o;

			ebreak_flag_ex_mem_o <= ebreak_flag_ex_mem_o;

			rd_buf_flag_ex_mem_o <= rd_buf_flag_ex_mem_o;
			alu_op_ex_mem_o <= alu_op_ex_mem_o;

			alu_src1_ex_mem_o <= alu_src1_ex_mem_o;
			alu_src2_ex_mem_o <= alu_src2_ex_mem_o;
			from_ex_alu_res_ex_mem_o <= from_ex_alu_res_ex_mem_o;
			
			
			pc_ex_mem_o <= pc_ex_mem_o;
			rest_id_mem_ex_mem_o <= 1'b1;
		end
		else begin
			reg_wen_ex_mem_o <= reg_wen_ex_mem_i;
			reg_waddr_ex_mem_o <= reg_waddr_ex_mem_i;
			//reg_wdata_ex_mem_o <= reg_wdata_ex_mem_i;
			
			wmask_ex_mem_o <= wmask_ex_mem_i;
			s_flag_ex_mem_o <= s_flag_ex_mem_i;
			time_set_ex_mem_o <= time_set_ex_mem_i;
			s_imm_ex_mem_o <= s_imm_ex_mem_i;
			expand_signed_ex_mem_o <= expand_signed_ex_mem_i;

			ebreak_flag_ex_mem_o <= ebreak_flag_ex_mem_i;

			rd_buf_flag_ex_mem_o <= rd_buf_flag_ex_mem_i;
			alu_op_ex_mem_o <= alu_op_ex_mem_i;

			alu_src1_ex_mem_o <= alu_src1_ex_mem_i;
			alu_src2_ex_mem_o <= alu_src2_ex_mem_i;
			from_ex_alu_res_ex_mem_o <= from_ex_alu_res_ex_mem_i;
			
			
			pc_ex_mem_o <= pc_ex_mem_i;
			rest_id_mem_ex_mem_o <= 1'b0;
			
		end
	end
	
endmodule