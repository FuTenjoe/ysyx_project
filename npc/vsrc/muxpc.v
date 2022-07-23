`include "../vsrc/rvseed_defines.v"

module muxpc (
    input                       ena,
    input                       branch,  // branch type 
    
    input                       jump,    // jump type 
    input jalr,
    input      [`CPU_WIDTH-1:0] imm,     // immediate  
    input      [`CPU_WIDTH-1:0] curr_pc, // current pc addr
    
    output reg [`CPU_WIDTH-1:0] next_pc, // next pc addr
   // input      [`CPU_WIDTH-1:0]     reg1_rdata
   input ebreak_flag,
   input [63:0] reg_f [0:`REG_DATA_DEPTH-1],
   input  [31:0]s_imm,
   input      [`ALU_OP_WIDTH-1:0] alu_op,
   input [63:0]alu_src1,
   input [63:0]alu_src2
   
    );
reg zero;
reg signed [63:0] signed_alu_src1;
reg signed [63:0] signed_alu_src2;
always @(*) begin
    case (alu_op)
        
        `ALU_BMT:begin
            signed_alu_src1 = alu_src1;
            signed_alu_src2 = alu_src2;
             if(signed_alu_src1 >= signed_alu_src2 )
                zero = 1'd0;
            else
                 zero = 1'd1;
        end
        `ALU_BLT:begin
            signed_alu_src1 = $signed (alu_src1);
            signed_alu_src2 = $signed (alu_src2);
            zero = (signed_alu_src1 < signed_alu_src2)? 1'b0:1'b1;
        end
        `ALU_BLTU:
            zero = (alu_src1 < alu_src2)? 1'b0:1'b1;
        `ALU_BMTU:
            zero = (alu_src1 >= alu_src2)? 1'b0:1'b1;
        
        default:begin
            
            zero =  1'b0;
        end
    endcase
end


reg  [2:0] test;
always @(*) begin
    if (~ena) begin
        next_pc = curr_pc;
        test = 3'd0;
    end
    else if (branch && ~zero)begin // bne
        next_pc = curr_pc + imm;
         test = 3'd1;
    end
    else if (branch && zero)begin // bne
        next_pc = curr_pc + `CPU_WIDTH'h4;
         test = 3'd2;
    end
    else if (jump &(!jalr))begin            // jal 
        next_pc = curr_pc + imm;
         test = 3'd3;
    end
    else if (jump &jalr)begin            // jalr
        next_pc = reg_f[s_imm[4:0]]+imm; 
    end
    else if (ebreak_flag)begin    
        next_pc = 32'h8000_0000;   
    end
    else begin
        next_pc = curr_pc + `CPU_WIDTH'h4;   
       
    end
end
endmodule
	



