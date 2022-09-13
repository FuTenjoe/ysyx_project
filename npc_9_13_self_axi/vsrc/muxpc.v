`include "../vsrc/rvseed_defines.v"

module muxpc (
    input clk,
    input rst_n,
    //input                       ena,
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
   input [63:0]alu_src2,
   input [2:0] data_rest_cond,
   input [63:0] reg1_rdata,
   output reg sig_jalr,
   output reg delay_sig_jalr,
   input mret_flag,
   input ecall_flag,
   input [31:0] unnormal_pc,
   input [63:0] mtvec,
   input [63:0] mepc,
   input clint_timer_irq
   
    );
reg zero;
reg signed [63:0] signed_alu_src1;
reg signed [63:0] signed_alu_src2;
always @(*) begin
    signed_alu_src1 = alu_src1;
    signed_alu_src2 = alu_src2;
    case (alu_op)
        `ALU_SUBN:begin //1100  beq
            zero = (alu_src1 - alu_src2 == 0) ? 1'b0: 1'b1;
        end
        `ALU_SUB:begin //1100  bne
            zero = (alu_src1 - alu_src2 == 0) ? 1'b1 : 1'b0;
        end
        `ALU_BMT:begin
            //signed_alu_src1 = alu_src1;
            //signed_alu_src2 = alu_src2;
             if(signed_alu_src1 >= signed_alu_src2 )
                zero = 1'd0;
            else
                 zero = 1'd1;
        end
        `ALU_BLT:begin
            //signed_alu_src1 = $signed (alu_src1);
            //signed_alu_src2 = $signed (alu_src2);
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

always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        delay_sig_jalr <= 1'b0;
    end
    else
        delay_sig_jalr <= sig_jalr;
end
    

//reg  [2:0] test;
always @(*) begin
    sig_jalr = 1'b0;
    next_pc = curr_pc;
    if (branch && ~zero)begin // bne
        next_pc = curr_pc + imm;
        sig_jalr = 1'b0;
         //test = 3'd1;
    end
    else if (branch && zero)begin // bne
        next_pc = curr_pc + `CPU_WIDTH'h4;
        sig_jalr = 1'b0;
         //test = 3'd2;
    end
    else if (jump &(!jalr))begin            // jal 
        next_pc = curr_pc + imm;
        sig_jalr = 1'b0;
         //test = 3'd3;
    end
    else if (jump &jalr)begin            // jalr
        if(data_rest_cond == 3'd4 | data_rest_cond == 3'd5  | data_rest_cond == 3'd2 |data_rest_cond == 3'd6|data_rest_cond == 3'd7)begin   //后加
            sig_jalr = 1'b1;
            next_pc = next_pc;
        end
        else begin
            sig_jalr = 1'b0;
            next_pc = reg_f[s_imm[4:0]]+imm; 
        end
    end
    else if(delay_sig_jalr)begin
        next_pc = reg1_rdata +imm;
        sig_jalr = 1'b0;
    end
    else if (ebreak_flag)begin    
        next_pc = 32'h8000_0000;   
        sig_jalr = 1'b0;
    end
    else if(ecall_flag)begin
        next_pc = mtvec;
        sig_jalr = 1'b0;
    end
    else if(mret_flag)begin
        next_pc = mepc;
        sig_jalr = 1'b0;
    end
    else if(clint_timer_irq)begin
        next_pc = mtvec;
        sig_jalr = 1'b0;
    end
    else begin
        next_pc = curr_pc;
        sig_jalr = 1'b0;  
    end
end
endmodule
	



