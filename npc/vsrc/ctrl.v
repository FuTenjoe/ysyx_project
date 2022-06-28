`include "../vsrc/rvseed_defines.v"

module ctrl (
    input      [`CPU_WIDTH-1:0]        inst,       // instruction input

    output reg                         branch,     // branch flag
    output reg                         jump,       // jump flag

    output reg                         reg_wen,    // register write enable
    output reg [`REG_ADDR_WIDTH-1:0]   reg_waddr,  // register write address
    output reg [`REG_ADDR_WIDTH-1:0]   reg1_raddr, // register 1 read address
    output reg [`REG_ADDR_WIDTH-1:0]   reg2_raddr, // register 2 read address
    
    output reg [`IMM_GEN_OP_WIDTH-1:0] imm_gen_op, // immediate extend opcode

    output reg [`ALU_OP_WIDTH-1:0]     alu_op,     // alu opcode
    output reg [`ALU_SRC_WIDTH-1:0]    alu_src_sel ,// alu source select flag
    output [`CPU_WIDTH-1:0]            unknown_code,
    output    jalr,
    output ebreak_flag,
    output reg [7:0]wmask,
    output reg s_flag,
    output reg [31:0]s_imm,
    output reg [3:0] expand_signed,
    output reg [2:0]rd_flag
   
);

wire [`OPCODE_WIDTH-1:0] opcode = inst[`OPCODE_WIDTH-1:0];          //  [6:0]
wire [`FUNCT3_WIDTH-1:0] funct3 = inst[`FUNCT3_WIDTH+`FUNCT3_BASE-1:`FUNCT3_BASE];  //   [3+12-1:12] [14:12]
wire [`FUNCT7_WIDTH-1:0] funct7 = inst[`FUNCT7_WIDTH+`FUNCT7_BASE-1:`FUNCT7_BASE];  // [31:25]
wire [`REG_ADDR_WIDTH-1:0] rd   = inst[`REG_ADDR_WIDTH+`RD_BASE-1:`RD_BASE];   //[5+7-1:7]  [11:7]
wire [`REG_ADDR_WIDTH-1:0] rs1  = inst[`REG_ADDR_WIDTH+`RS1_BASE-1:`RS1_BASE];  //[19:15]
wire [`REG_ADDR_WIDTH-1:0] rs2  = inst[`REG_ADDR_WIDTH+`RS2_BASE-1:`RS2_BASE];   //[24:20]


always @(*) begin
    branch      = 1'b0;
    jump        = 1'b0;
    reg_wen     = 1'b0;
    jalr = 1'b0;
    reg1_raddr  = `REG_ADDR_WIDTH'b0;
    reg2_raddr  = `REG_ADDR_WIDTH'b0;
    reg_waddr   = `REG_ADDR_WIDTH'b0;
    imm_gen_op  = `IMM_GEN_I;
    alu_op      = `ALU_AND;
    alu_src_sel = `ALU_SRC_REG;
    unknown_code = 32'd0;
    ebreak_flag = 1'd0;
    wmask = 8'd0;
    s_flag = 1'd0;
    expand_signed = 4'd0;
    rd_flag = 1'd0;
    case (opcode)
        7'b0110011: begin                         
            reg_wen     = 1'b1;
            reg1_raddr  = rs1;
            reg2_raddr  = rs2;
            reg_waddr   = rd;
            alu_src_sel = `ALU_SRC_REG;
            wmask =  8'b0;
            
            case (funct3)
                `INST_ADD_SUB: begin
                    alu_op = (funct7 == `FUNCT7_INST_A) ? `ALU_ADD : `ALU_SUB; // A:add B:sub 
                    s_flag = 1'd0;
                    expand_signed = 4'd0;
                    rd_flag = 3'd3;
                end
                default:unknown_code = inst;
            endcase
        end
        7'b0010011: begin       //addi
            case (funct3)
                `INST_ADDI: begin
                    reg_wen     = 1'b1;
                    reg1_raddr  = rs1;
                    reg_waddr   = rd;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    alu_op = `ALU_ADD; 
                    s_flag = 1'd0;
                    expand_signed = 4'd0;
                    s_imm = 32'd0;
                    rd_flag = 3'd3;
                end
                3'b011:begin   //sltiu
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_I;   //I型指令
                    alu_op      = `ALU_SLTU;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd0;    //截断为32位  
                    rd_flag = 3'd3;
                end   
                3'b101:begin      //srai
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_I;   //I型指令
                    alu_op      = `ALU_SRL;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd3;    
                    rd_flag = 3'd0;
                end
                default:unknown_code = inst;
            endcase
        end
        7'b0111011:begin           //addw
            case (funct3)
            3'b000:begin
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_I;   //不需要使用R型指令
                    alu_op      = `ALU_ADD;
                    alu_src_sel = `ALU_SRC_REG;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd1;    
                    rd_flag = 3'd0;
                end    
                default:unknown_code = inst;
        endcase
            end
        7'b0011011:begin        //addiw   
            case (funct3)
            3'b000:begin       //addiw
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_I;   //不需要使用R型指令
                    alu_op      = `ALU_ADD;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd1;    
                    rd_flag = 3'd0;
                end    
                default:unknown_code = inst;
        endcase
            end
        7'b0000011:begin     //lw
            case (funct3)
                3'b010: begin
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm ={{20{inst[31]}},inst[31:20]};
                    imm_gen_op  = `IMM_GEN_I;
                    alu_op      = `ALU_ADD;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd1;       //
                    rd_flag = 3'd1;
                end
                3'b011:begin //ld
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm = 64'd0;
                    imm_gen_op  = `IMM_GEN_I;
                    alu_op      = `ALU_ADD;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd0;       //不需扩展符号位
                    rd_flag = 3'd2;
                end
                default:unknown_code = inst;
            endcase
        end
        7'b0100011:begin    //sd
           case(funct3)    
            3'b011:begin    //sd
            jump        = 1'b0;
            reg_wen     = 1'b1;
            jalr = 1'b0;
            reg1_raddr  = 0;
            reg2_raddr  = rs2;
            reg_waddr   = rs1;
            s_imm = {{20{inst[31]}},inst[31:25],inst[11:7]};
            imm_gen_op  = `INST_TYPE_S;
            alu_op      = `ALU_ADD;
            alu_src_sel = `ALU_SRC_REG;
            wmask =  8'b11111111;
            s_flag = 1'd1;
            expand_signed = 4'd0;
            rd_flag = 3'd3;
            end
            3'b001:begin    //sh
            jump        = 1'b0;
            reg_wen     = 1'b1;
            jalr = 1'b0;
            reg1_raddr  = 0;
            reg2_raddr  = rs2;
            reg_waddr   = rs1;
            s_imm = {{20{inst[31]}},inst[31:25],inst[11:7]};
            imm_gen_op  = `INST_TYPE_S;
            alu_op      = `ALU_ADD;
            alu_src_sel = `ALU_SRC_REG;
            wmask =  8'h3;
            s_flag = 1'd1;
            expand_signed = 4'd0;
            rd_flag = 3'd3;
            end

            default:unknown_code = inst;
            endcase
        end
        `INST_JAL: begin // only jal 
            jump        = 1'b1;
            reg_wen     = 1'b1;
            jalr = 1'b0;
            reg_waddr   = rd;
            imm_gen_op  = `IMM_GEN_J;
            alu_op      = `ALU_ADD;
            alu_src_sel = `ALU_SRC_FOUR_PC; //pc + 4
            s_flag = 1'd0;
            wmask =  8'b0;
            expand_signed = 4'd0;
            rd_flag = 3'd0;
        end
        `INST_LUI: begin // only lui
                reg_wen     = 1'b1;
                reg1_raddr  = `REG_ADDR_WIDTH'b0; // x0 = 0
                reg_waddr   = rd;
                imm_gen_op  = `IMM_GEN_U;
                alu_op      = `ALU_ADD;
                alu_src_sel = `ALU_SRC_IMM; // x0 + imm
                s_flag = 1'd0;
                wmask =  8'b0;
                expand_signed = 4'd0;
                rd_flag = 3'd0;
        end
        `INST_AUIPC:begin //only auipc
               reg_wen     = 1'b1;
                reg1_raddr  = `REG_ADDR_WIDTH'b0; // x0 = 0
                reg_waddr   = rd;
                imm_gen_op  = `IMM_GEN_U;
                alu_op      = `ALU_ADD;
                alu_src_sel = `ALU_SRC_IMM_PC; // x0 + imm
                s_flag = 1'd0;
                wmask =  8'b0;
                expand_signed = 4'd0;
                rd_flag = 3'd0;
        end
        7'b1100111:begin
            case(funct3)  
                3'b000:begin         //jalr
                jump        = 1'b1;
                reg_wen     = 1'b1;
                jalr = 1'b1;
                reg_waddr   = rd;
                imm_gen_op  = `IMM_GEN_I;
                alu_op      = `ALU_ADD;
                alu_src_sel = `ALU_SRC_FOUR_PC; //pc + 4
                s_flag = 1'd0;
                wmask =  8'b0;
                expand_signed = 4'd3;
                s_imm = rs1;
                rd_flag = 3'd0;
                end
                default:unknown_code = inst;
            endcase

        end
        `INST_TYPE_B: begin
            reg1_raddr  = rs1;
            reg2_raddr  = rs2;
            imm_gen_op  = `IMM_GEN_B;
            alu_src_sel = `ALU_SRC_REG;
            wmask =  8'b0;
            rd_flag = 3'd0;
            case (funct3)
                `INST_BNE: begin     //bne
                    branch     = 1'b1;
                    alu_op     = `ALU_SUB;
                    s_flag = 1'd0;
                end
                3'b000:begin   //beq
                    branch     = 1'b1;
                    alu_op     = `ALU_SUBN;
                    s_flag = 1'd0;
                end
                 default:unknown_code = inst;
            endcase
        end
            
        default:unknown_code = inst ;
    endcase 
end

import "DPI-C" function void ebreak();
always@(*)begin
    if(inst == 32'h0010_0073)begin
        ebreak();
        ebreak_flag = 1'b1;
    end
end

import "DPI-C" function void unknown_inst();
always@(*)begin
    if(unknown_code != 32'd0)
        unknown_inst();
end

endmodule
