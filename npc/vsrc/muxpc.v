`include "../vsrc/rvseed_defines.v"

module muxpc (
    input                       ena,
    input                       branch,  // branch type 
    input                       zero,    // alu result is zero
    input                       jump,    // jump type 
    input jalr,
    input      [`CPU_WIDTH-1:0] imm,     // immediate  
    input      [`CPU_WIDTH-1:0] curr_pc, // current pc addr
    input      [`CPU_WIDTH-1:0] id_pc,
    output reg [`CPU_WIDTH-1:0] next_pc, // next pc addr
   // input      [`CPU_WIDTH-1:0]     reg1_rdata
   input ebreak_flag,
   input [63:0] reg_f [0:`REG_DATA_DEPTH-1],
   input  [31:0]s_imm,
   input no_use,
   output ex_pc_ready

    );

always @(*) begin
    if (~ena) begin
        next_pc = curr_pc;
        ex_pc_ready = 1'b0;
    end
    if(no_use)begin
        next_pc = curr_pc;
        ex_pc_ready = 1'b0;
    end
    else if (branch && ~zero)begin // bne
        next_pc = curr_pc + imm;
        ex_pc_ready = 1'b1;
    end
    else if (jump &(!jalr))begin            // jal 
        next_pc = curr_pc + imm;
        ex_pc_ready = 1'b1;
    end
    else if (jump &jalr)begin            // jalr
        //next_pc = reg1_rdata + imm;
        next_pc = reg_f[s_imm[4:0]]+imm;
        ex_pc_ready = 1'b1;
       //next_pc = 32'h800000a0;
    end
    else if (ebreak_flag)begin    
        next_pc = 32'h8000_0000;  
        ex_pc_ready = 1'b0;  
    end
    else begin
        next_pc = curr_pc + `CPU_WIDTH'h4;   
        ex_pc_ready = 1'b0;
    end
end
endmodule
	



