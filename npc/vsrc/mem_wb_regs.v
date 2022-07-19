`include "../vsrc/rvseed_defines.v"

module mem_wb_regs(
	input                            clk,
    input                            rst_n,
    
    input                            reg_wen_mem_wb_i,    // register write enable
    input      [`REG_ADDR_WIDTH-1:0] reg_waddr_mem_wb_i,  // register write address
    //input      [63:0]      reg_wdata_mem_wb_i,  // register write data即alu_res
	input      [63:0] from_ex_alu_res_mem_wb_i,
	input [63:0] from_mem_alu_res_mem_wb_i,
    input  [7:0] wmask_mem_wb_i,
    input s_flag_mem_wb_i,
    input time_set_mem_wb_i,
    input [31:0] s_imm_mem_wb_i,
    input [3:0] expand_signed_mem_wb_i,
   //output reg [63:0] reg_f [0:`REG_DATA_DEPTH-1]

   	input ebreak_flag_mem_wb_i,
	input [2:0]rd_buf_flag_mem_wb_i,
    output  reg                          reg_wen_mem_wb_o,    // register write enable
    output  reg    [`REG_ADDR_WIDTH-1:0] reg_waddr_mem_wb_o,  // register write address
    output  reg    [63:0]      reg_wdata_mem_wb_o,  // register write data
    output reg [7:0] wmask_mem_wb_o,
    output reg s_flag_mem_wb_o,
    output reg time_set_mem_wb_o,
    output reg [31:0] s_imm_mem_wb_o,
    output reg [3:0] expand_signed_mem_wb_o,
	output reg ebreak_flag_mem_wb_o,
	output reg [2:0]rd_buf_flag_mem_wb_o,
	output  reg [63:0] from_ex_alu_res_mem_wb_o,
	output reg [63:0] from_mem_alu_res_mem_wb_o,
	input no_use_mem_wb_i,
	output reg no_use_mem_wb_o,
	input ex_pc_ready_mem_wb_i,
	output ex_pc_ready_mem_wb_o,
	input [63:0] pc_mem_wb_i,
	output [63:0] pc_mem_wb_o
    );

	always@(posedge clk or negedge rst_n)
	begin
		if(!rst_n)begin 
			reg_wen_mem_wb_o <= 1'd0;
			reg_waddr_mem_wb_o <= 5'd0;
			//reg_wdata_mem_wb_o <= 64'd0;
			wmask_mem_wb_o <= 8'd0;
			s_flag_mem_wb_o <= 1'd0;
			time_set_mem_wb_o <= 1'd0;
			s_imm_mem_wb_o <= 32'd0;
			expand_signed_mem_wb_o <= 4'd0;
			ebreak_flag_mem_wb_o <= 1'd0;
			rd_buf_flag_mem_wb_o <= 3'd0;
			from_ex_alu_res_mem_wb_o <= 64'd0;
			from_mem_alu_res_mem_wb_o <= 64'd0;
			no_use_mem_wb_o <= 1'b0;
			ex_pc_ready_mem_wb_o <= 1'b0;
			pc_mem_wb_o <= 32'h8000_0000;
		end
		else begin
			reg_wen_mem_wb_o <= reg_wen_mem_wb_i;
			reg_waddr_mem_wb_o <= reg_waddr_mem_wb_i;
			//reg_wdata_mem_wb_o <= reg_wdata_mem_wb_i;
			wmask_mem_wb_o <= wmask_mem_wb_i;
			s_flag_mem_wb_o <= s_flag_mem_wb_i;
			time_set_mem_wb_o <= time_set_mem_wb_i;
			s_imm_mem_wb_o <= s_imm_mem_wb_i;
			expand_signed_mem_wb_o <= expand_signed_mem_wb_i;
			ebreak_flag_mem_wb_o <= ebreak_flag_mem_wb_i;
			rd_buf_flag_mem_wb_o <= rd_buf_flag_mem_wb_i;
			from_ex_alu_res_mem_wb_o <= from_ex_alu_res_mem_wb_i;
			from_mem_alu_res_mem_wb_o <= from_mem_alu_res_mem_wb_i;
			no_use_mem_wb_o <= no_use_mem_wb_i;
			ex_pc_ready_mem_wb_o  <= ex_pc_ready_mem_wb_i;
			pc_mem_wb_o <= pc_ex_mem_i;
		end
	end
	
endmodule