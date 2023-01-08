`include "../vsrc/rvseed_defines.v"

module mux_alu ( 
    input      [`ALU_SRC_WIDTH-1:0] alu_src_sel,// reg or imm to alu

    input      [63:0]     reg1_rdata, // register 1 read data
    input      [63:0]     reg2_rdata, // register 2 read data
    input      [`CPU_WIDTH-1:0]     imm,        // immediate
    input      [`CPU_WIDTH-1:0]     curr_pc,    // current pc addr
    //input no_use,

    output reg [63:0]     alu_src1,   // alu source 1
    output reg [63:0]     alu_src2,    // alu source 2
    input cunqu_hazard,
    input [11:0] csr_addr,
    input [63:0] mepc,
    input [63:0] mcause,
    input [63:0] mtvec,
    input [63:0] mstatus,
    input [63:0] mie
   
);

always @(*) begin
    
        alu_src1 = reg1_rdata;     // defalut select reg1 data
        alu_src2 = reg2_rdata;     // default select reg2 data
        if(cunqu_hazard)begin
            alu_src1 = reg1_rdata;     // defalut select reg1 data
            alu_src2 = 64'd0;  
        end
        else begin
        case (alu_src_sel)
            `ALU_SRC_REG: 
                alu_src2 = reg2_rdata; // select reg2 data
            `ALU_SRC_IMM: 
                alu_src2 = imm;        // select immediate 
            `ALU_SRC_FOUR_PC: begin
                alu_src1 = `CPU_WIDTH'h4; // pc + 4 
                alu_src2 = curr_pc;       //
            end
            `ALU_SRC_IMM_PC: begin //select imm and pc
                alu_src1 = imm;
                alu_src2 = curr_pc;
            end
            `ALU_SRC_CSRRS:begin
                case(csr_addr)
                12'd833:begin
                    alu_src1 = reg1_rdata;
                    alu_src2 = mepc;  
                end
                12'd834:begin
                    alu_src1 = reg1_rdata;
                    alu_src2 = mcause;  
                end
                12'd773:begin
                    alu_src1 = reg1_rdata;
                    alu_src2 = mtvec;  
                end
                12'd768:begin
                    alu_src1 = reg1_rdata;
                    alu_src2 = mstatus;  
                end
                12'd772:begin
                    alu_src1 = reg1_rdata;
                    alu_src2 = mie;  
                end
                default:;
                endcase
            end
            `ALU_SRC_CSRRSI:begin
                case(csr_addr)
                12'd833:begin
                    alu_src1 = imm;
                    alu_src2 = mepc;  
                end
                12'd834:begin
                    alu_src1 = imm;
                    alu_src2 = mcause;  
                end
                12'd773:begin
                    alu_src1 = imm;
                    alu_src2 = mtvec;  
                end
                12'd768:begin
                    alu_src1 = imm;
                    alu_src2 = mstatus;  
                end
                12'd772:begin
                    alu_src1 = imm;
                    alu_src2 = mie;  
                end
                default:;
                endcase
            end
            `ALU_SRC_ECALL:begin
                alu_src1 = curr_pc;
                alu_src2 = curr_pc;
            end
            default:begin
                alu_src1 = curr_pc;
                alu_src2 = curr_pc;
            end
        endcase
        end
    
end
endmodule





