`include "../vsrc/rvseed_defines.v"

module if_id_regs(
	input clk,
	input rst_n,
	input [63:0]pc_if_id_i,
	input [31:0]instr_if_id_i,
	input ena_if_id_i,
	input time_set_if_id_i,
	output reg [63:0]pc_if_id_o,
	output reg [31:0]instr_if_id_o,
	output reg ena_if_id_o,
	output time_set_if_id_o,
	input control_rest,
	input [63:0] id_pc,
	input rest_id_mem,
	input delay_sig_jalr,
	input mul_stop
	
	
    );

always@(posedge clk or negedge rst_n)begin
	if(!rst_n)begin
		pc_if_id_o<= 32'h8000_0000;
		instr_if_id_o<= instr_if_id_i;
		ena_if_id_o <= 1'd0;
		time_set_if_id_o <= 1'd0;
		
	end
	else if(rest_id_mem == 1'b1)begin
		pc_if_id_o <= id_pc;
		instr_if_id_o<= instr_if_id_o;
		ena_if_id_o <= ena_if_id_o;
		time_set_if_id_o <= time_set_if_id_o;
	end
	
	else if(control_rest == 1'b1 | delay_sig_jalr == 1'b1 | mul_stop == 1'b1)begin
		pc_if_id_o <= id_pc;
		instr_if_id_o<= 32'b0010011;
		ena_if_id_o <= ena_if_id_o;
		time_set_if_id_o <= time_set_if_id_o;
	end
	else begin
		pc_if_id_o<=pc_if_id_i;
		instr_if_id_o<=instr_if_id_i;
		ena_if_id_o <= ena_if_id_i;
		time_set_if_id_o <= time_set_if_id_i;
		
	end
end
	

endmodule
