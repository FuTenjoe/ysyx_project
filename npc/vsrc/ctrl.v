`include "../vsrc/rvseed_defines.v"

module ctrl (
    input [63:0] id_pc,
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
    output reg [`CPU_WIDTH-1:0]            unknown_code,
    output  reg  jalr,
    output reg ebreak_flag,
    output reg [7:0]wmask,
    output reg s_flag,
    output reg [31:0]s_imm,
    output reg [3:0] expand_signed,
    output reg [2:0]rd_flag,
    output reg [2:0] rd_buf_flag,   //访存标志
    output reg id_mul,
    output reg id_div,
    output reg ecall_flag,
    output reg [11:0] csr_addr,
    output reg mret_flag,
    output reg [31:0]unnormal_pc,
   // output reg [63:0] mstatus
   input [63:0] mepc,
    input [63:0] mcause,
    input [63:0] mtvec,
    output id_mem_cache
   
);

wire [`OPCODE_WIDTH-1:0] opcode = inst[`OPCODE_WIDTH-1:0];          //  [6:0]
wire [`FUNCT3_WIDTH-1:0] funct3 = inst[`FUNCT3_WIDTH+`FUNCT3_BASE-1:`FUNCT3_BASE];  //   [3+12-1:12] [14:12]
wire [`FUNCT7_WIDTH-1:0] funct7 = inst[`FUNCT7_WIDTH+`FUNCT7_BASE-1:`FUNCT7_BASE];  // [31:25]
wire [`REG_ADDR_WIDTH-1:0] rd   = inst[`REG_ADDR_WIDTH+`RD_BASE-1:`RD_BASE];   //[5+7-1:7]  [11:7]
wire [`REG_ADDR_WIDTH-1:0] rs1  = inst[`REG_ADDR_WIDTH+`RS1_BASE-1:`RS1_BASE];  //[19:15]
wire [`REG_ADDR_WIDTH-1:0] rs2  = inst[`REG_ADDR_WIDTH+`RS2_BASE-1:`RS2_BASE];   //[24:20]
wire [11:0] csr = inst[31:20];

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
    unknown_code = 32'h0;
    ebreak_flag = 1'd0;
    wmask = 8'd0;
    s_flag = 1'd0;
    expand_signed = 4'd0;
    rd_flag = 1'd0;
    rd_buf_flag = 3'd0;
    id_mul = 1'd0;
    id_div = 1'b0;
    ecall_flag = 1'b0;
    csr_addr = 12'd0;
    mret_flag = 1'b0;
    unnormal_pc = 32'd0;
    case (opcode)
        7'b0110011: begin                         
            reg_wen     = 1'b1;
            reg1_raddr  = rs1;
            reg2_raddr  = rs2;
            reg_waddr   = rd;
            alu_src_sel = `ALU_SRC_REG;
            wmask =  8'b0;
            rd_buf_flag = 3'd0;
            jump        = 1'b0;   //流水线后加
            jalr = 1'b0;
            case (funct3)
                3'b000: begin
                    case(funct7)
                    7'b0000000:begin
                        alu_op = `ALU_ADD ; // sub 
                        s_flag = 1'd0;
                        expand_signed = 4'd0;
                        rd_flag = 3'd3;
                    end
                    7'b0100000:begin
                        alu_op =  `ALU_SUB; // sub 
                        s_flag = 1'd0;
                        expand_signed = 4'd0;
                        rd_flag = 3'd3;
                    end
                    7'b0000001:begin     //mul
                        alu_op =  `ALU_MUL; 
                        s_flag = 1'd0;
                        expand_signed = 4'd0;
                        rd_flag = 3'd0;
                        id_mul = 1'd1;
                    end
                    default:unknown_code = inst;
                    endcase
                end
                3'b111:begin
                    alu_op = (funct7 == 7'b0) ? `ALU_AND: `ALU_DIVYU;      //A:and  B:remu
                    id_div = (funct7 == 7'b0) ? 1'b0 :1'b1;
                    s_flag = 1'd0;
                    expand_signed = 4'd0;
                    rd_flag = 3'd0;
                end
                3'b011:begin
                    alu_op = `ALU_SLTU;   //sltu
                    if(funct7 == 7'b0) begin
                        s_flag = 1'd0;
                        expand_signed = 4'd0;
                        rd_flag = 3'd0;
                    end
                    else
                        unknown_code = inst;
                end
                3'b010:begin         //slt
                    alu_op = `ALU_SLT;   
                    if(funct7 == 7'b0) begin
                        s_flag = 1'd0;
                        expand_signed = 4'd0;
                        rd_flag = 3'd0;
                    end
                    else
                        unknown_code = inst;
                end
                3'b100:begin
                    case(funct7)       //div
                        7'b0000_001:begin
                        jump        = 1'b0;
                        reg_wen     = 1'b1;
                        jalr = 1'b0;
                        reg1_raddr  = rs1;
                        reg2_raddr  = rs2;
                        reg_waddr   = rd;
                        s_imm =0;
                        imm_gen_op  = `IMM_GEN_I;   //不需要使用R型指令
                        alu_op      = `ALU_DIV;
                        alu_src_sel = `ALU_SRC_REG;
                        wmask =  8'b0;
                        s_flag = 1'd0;
                        expand_signed =4'd0;    
                        rd_flag = 3'd0;
                        id_div = 1'b1;
                        end
                        default:unknown_code = inst;
                    endcase
                end
                3'b110:begin
                    alu_op =(funct7==7'b0) ? `ALU_OR : `ALU_DIVYU;
                    id_div =(funct7==7'b0) ? 1'b0:1'b1;
                    s_flag = 1'd0;
                    expand_signed = 4'd0;
                    s_imm =0;
                    rd_flag = 3'd0;
                end
                3'b101:begin   //divu
                    case(funct7)
                    7'b0000_001:begin   //divu
                        jump        = 1'b0;
                        reg_wen     = 1'b1;
                        jalr = 1'b0;
                        reg1_raddr  = rs1;
                        reg2_raddr  = rs2;
                        reg_waddr   = rd;
                        s_imm =0;
                        imm_gen_op  = `IMM_GEN_I;   //不需要使用R型指令
                        alu_op      = `ALU_DIVU;
                        alu_src_sel = `ALU_SRC_REG;
                        wmask =  8'b0;
                        s_flag = 1'd0;
                        expand_signed =4'd0;    
                        rd_flag = 3'd0;
                        id_div = 1'b1;
                    end
                    default:unknown_code = inst;
                    endcase
                end
                default:unknown_code = inst;
            endcase
        end
        7'b0010011: begin       //addi
            rd_buf_flag = 3'd0;
            case (funct3)
                `INST_ADDI: begin    //3'b000
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    reg1_raddr  = rs1;
                    reg2_raddr  = 5'b0;
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
                    case(funct7)
                    7'b0000_000,7'b0000_001:begin  //srli
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_I;   //R型指令
                    alu_op      = `ALU_SRL;       //流水线后改原算术右移为逻辑右移
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd0;    
                    rd_flag = 3'd0;
                    end
                    7'b0100_000,7'b0100_001:begin      //srai
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_SRAI;   //I型指令,不用imm
                    alu_op      = `ALU_SRA;       //流水线后改原算术右移为逻辑右移
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd0;    
                    rd_flag = 3'd0;
                    end
                    default:unknown_code = inst;
                    endcase
                end
                3'b111:begin         //andi
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    reg1_raddr  = rs1;
                    reg_waddr   = rd;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    alu_op = `ALU_AND; 
                    s_flag = 1'd0;
                    expand_signed = 4'd0;
                    s_imm = 32'd0;
                    rd_flag = 3'd0;
                end
                3'b100:begin   //xori
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    reg1_raddr  = rs1;
                    reg_waddr   = rd;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    alu_op = `ALU_XOR; 
                    s_flag = 1'd0;
                    expand_signed = 4'd0;
                    s_imm = 32'd0;
                    rd_flag = 3'd0;
                end
                3'b110:begin  //ori
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    reg1_raddr  = rs1;
                    reg_waddr   = rd;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    alu_op = `ALU_OR; 
                    s_flag = 1'd0;
                    expand_signed = 4'd0;
                    s_imm = 32'd0;
                    rd_flag = 3'd0;
                end
                3'b001:begin   //slli
                    if(funct7 == 7'd0 | funct7 == 7'd1)begin
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_SRAI;   
                    alu_op      = `ALU_SLLI;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd0;    //有符号扩展 
                    rd_flag = 3'd0;
                    end
                    else
                        unknown_code = inst;
                end
                default:unknown_code = inst;
            endcase
        end
        7'b0111011:begin           //addw
            rd_buf_flag = 3'd0;
            case (funct3)
            3'b000:begin     
                case(funct7)      //addw
                7'b0000000:begin
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
                7'b0000001:begin   //mulw
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_I;   //不需要使用R型指令
                    alu_op      = `ALU_MUL;
                    alu_src_sel = `ALU_SRC_REG;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd1;    
                    rd_flag = 3'd0;
                    id_mul = 1'd1;
                end    
                7'b0100000:begin   //subw
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_I;   //不需要使用R型指令
                    alu_op      = `ALU_SUB;
                    alu_src_sel = `ALU_SRC_REG;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd1;    
                    rd_flag = 3'd0;
                end  
                default:unknown_code = inst;
                endcase
            end
            3'b001:begin  //sllw
                jump        = 1'b0;
                reg_wen     = 1'b1;
                jalr = 1'b0;
                reg1_raddr  = rs1;
                reg2_raddr  = rs2;
                reg_waddr   = rd;
                s_imm =0;
                imm_gen_op  = `IMM_GEN_I;   //R型指令不需要立即数，任取一个
                alu_op      = `ALU_SLLW;
                alu_src_sel = `ALU_SRC_REG;
                wmask =  8'b0;
                s_flag = 1'd0;
                expand_signed =4'd1;    //有符号扩展 
                rd_flag = 3'd0;
            end
            3'b100:begin
                case(funct7)
                7'b0000_001:begin //divw
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_I;   //不需要使用R型指令
                    alu_op      = `ALU_DIVW;
                    alu_src_sel = `ALU_SRC_REG;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd1;    
                    rd_flag = 3'd0;
                    id_div = 1'b1;
                end
                default:unknown_code = inst;
                endcase
            end
            3'b101:begin   //sraw
                case(funct7)
                7'b0100000:begin    //sraw
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_I;   //不需要使用R型指令
                    alu_op      = `ALU_SRA;
                    alu_src_sel = `ALU_SRC_REG;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd1;    
                    rd_flag = 3'd3;
                end
                7'b0000000:begin   //srlw
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_I;   //不需要使用R型指令
                    alu_op      = `ALU_SRL;
                    alu_src_sel = `ALU_SRC_REG;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd1;    
                    rd_flag = 3'd2;
                end
                default:unknown_code = inst;
                endcase
            end
            3'b110:begin                     //remw
                case(funct7)
                7'b0000_001:begin             //remw
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_I;   //不需要使用R型指令
                    alu_op      = `ALU_DIVYW;
                    alu_src_sel = `ALU_SRC_REG;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd0;    
                    rd_flag = 3'd0;
                    id_div = 1'b1;
                    end
                default:unknown_code = inst;
                endcase
            end
            default:unknown_code = inst;
            endcase
        end
        7'b0011011:begin        //addiw 
        rd_buf_flag = 3'd0;  
            case (funct3)
            3'b000:begin       //addiw
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = 5'b0;
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
            3'b001:begin   //slliw 未区分funct7
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_I;   //不需要使用R型指令
                    alu_op      = `ALU_SLLW;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd1;    
                    rd_flag = 3'd0;
                end  
            3'b101:begin
                case(funct7)       //sraiw
                7'b0100000,7'b0100001:begin
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_SRAI;   //不需要使用R型指令
                    alu_op      = `ALU_SRA;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd1;    
                    rd_flag = 3'd1;
                end  
                7'b0000000,7'b0000001:begin    //srliw
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = rs2;
                    reg_waddr   = rd;
                    s_imm =0;
                    imm_gen_op  = `IMM_GEN_SRAI;   //不需要使用R型指令
                    alu_op      = `ALU_SRL;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd1;    
                    rd_flag = 3'd1;
                end  
                default:unknown_code = inst;
                endcase
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
                    rd_flag = 3'd0; //无用
                    rd_buf_flag = 3'd1;
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
                    rd_flag = 3'd0;  //无用
                    rd_buf_flag = 3'd2;
                end
                3'b100:begin   //lbu
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = 0;
                    reg_waddr   = rd;
                    s_imm = 64'd0;
                    imm_gen_op  = `IMM_GEN_I;
                    alu_op      = `ALU_ADD;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd0;       //不需扩展符号位
                    rd_flag = 3'd0; //无用
                    rd_buf_flag = 3'd4;
                end
                3'b001:begin      //lh
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = 0;
                    reg_waddr   = rd;
                    s_imm = 64'd0;
                    imm_gen_op  = `IMM_GEN_I;
                    alu_op      = `ALU_ADD;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd3;       //需扩展符号位
                    rd_flag = 3'd0;  //无用
                    rd_buf_flag = 3'd6;
                end
                3'b110:begin     //lwu
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
                    expand_signed =4'd0;       //不需扩展符号位
                    rd_flag = 3'd0; //无用
                    rd_buf_flag = 3'd1;
                end
                3'b101:begin      //lhu
                    jump        = 1'b0;
                    reg_wen     = 1'b1;
                    jalr = 1'b0;
                    reg1_raddr  = rs1;
                    reg2_raddr  = 0;
                    reg_waddr   = rd;
                    s_imm = 64'd0;
                    imm_gen_op  = `IMM_GEN_I;
                    alu_op      = `ALU_ADD;
                    alu_src_sel = `ALU_SRC_IMM;
                    wmask =  8'b0;
                    s_flag = 1'd0;
                    expand_signed =4'd0;       //不需扩展符号位
                    rd_flag = 3'd0;  //无用
                    rd_buf_flag = 3'd6;
                end
                default:unknown_code = inst;
            endcase
        end
        7'b0100011:begin    //sd
        rd_buf_flag = 3'd0;
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
            alu_op      = `ALU_MEM;
            alu_src_sel = `ALU_SRC_REG;
            wmask =  8'b1111_1111;
            s_flag = 1'd1;
            expand_signed = 4'd0;
            rd_flag = 3'd1;  //保留64位
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
            alu_op      = `ALU_MEM;
            alu_src_sel = `ALU_SRC_REG;
            wmask =  8'h3;
            s_flag = 1'd1;
            expand_signed = 4'd0;
            rd_flag = 3'd2;   //保留16位
            end
            3'b000:begin   //sb
            jump        = 1'b0;
            reg_wen     = 1'b1;
            jalr = 1'b0;
            reg1_raddr  = 0;
            reg2_raddr  = rs2;
            reg_waddr   = rs1;
            s_imm = {{20{inst[31]}},inst[31:25],inst[11:7]};
            imm_gen_op  = `INST_TYPE_S;
            alu_op      = `ALU_MEM;
            alu_src_sel = `ALU_SRC_REG;
            wmask =  8'h1;
            s_flag = 1'd1;
            expand_signed = 4'd0;
            //rd_flag = 3'd5;   //选rs2
            rd_flag = 3'd3;   //保留8位
            end
            3'b010:begin     //sw
            jump        = 1'b0;
            reg_wen     = 1'b1;
            jalr = 1'b0;
            reg1_raddr  = 0;
            reg2_raddr  = rs2;
            reg_waddr   = rs1;
            s_imm = {{20{inst[31]}},inst[31:25],inst[11:7]};
            imm_gen_op  = `INST_TYPE_S;
            alu_op      = `ALU_MEM;
            alu_src_sel = `ALU_SRC_REG;
            wmask =  8'hf;
            s_flag = 1'd1;
            expand_signed = 4'd0;
            //rd_flag = 3'd5;   //选rs2
            rd_flag = 3'd4;   //保留32位
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
            rd_buf_flag = 3'd0;
        end
        `INST_LUI: begin // only lui
                reg_wen     = 1'b1;
                reg1_raddr  = 64'b0; // x0 = 0
                reg_waddr   = rd;
                imm_gen_op  = `IMM_GEN_U;
                alu_op      = `ALU_ADD;
                alu_src_sel = `ALU_SRC_IMM; // x0 + imm
                s_flag = 1'd0;
                wmask =  8'b0;
                expand_signed = 4'd0;
                rd_flag = 3'd5;
                rd_buf_flag = 3'd0;
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
                rd_buf_flag = 3'd0;
        end
        7'b1100111:begin
            rd_buf_flag = 3'd0;
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
                expand_signed = 4'd0;
                s_imm = rs1;
                rd_flag = 3'd0;

                //后加
                reg1_raddr = rs1;
                reg2_raddr = 5'b0;
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
            reg_wen     = 1'b0;
            jump        = 1'b0;
            jalr        = 1'b0;
            rd_buf_flag = 3'd0;
            reg_waddr = 5'd0; //流水线后加
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
                3'b101:begin   //bge
                    branch = 1'b1;
                    alu_op = `ALU_BMT;
                    s_flag = 1'd0;
                end
                3'b110:begin   //bltu
                    branch = 1'b1;
                    alu_op = `ALU_BLTU;
                    s_flag = 1'd0;
                end
                3'b111:begin    //bgeu
                    branch = 1'b1;
                    alu_op = `ALU_BMTU;
                    s_flag = 1'd0;
                end
                3'b100:begin
                    branch = 1'b1;
                    alu_op = `ALU_BLT;
                    s_flag = 1'd0;
                end
                 default:unknown_code = inst;
            endcase
        end
        7'b1110011:begin
            case (funct3)     // csrrs
            3'b010:begin
                jump        = 1'b0;
                reg_wen     = 1'b1;
                jalr = 1'b0;
                reg1_raddr  = rs1;
                reg2_raddr  = rs2;
                reg_waddr   = rd;
                s_imm =0;
                imm_gen_op  = `IMM_GEN_SRAI;   //不需要使用R型指令
                alu_op      = `ALU_CSRRS;
                alu_src_sel = `ALU_SRC_CSRRS;
                wmask =  8'b0;
                s_flag = 1'd0;
                expand_signed =4'd0;    
                rd_flag = 3'd0;
                id_div = 1'b0;
                csr_addr = csr;
            end
            3'b001:begin      //csrrw
                jump        = 1'b0;
                reg_wen     = 1'b1;
                jalr = 1'b0;
                reg1_raddr  = rs1;
                reg2_raddr  = rs2;
                reg_waddr   = rd;
                s_imm =0;
                imm_gen_op  = `IMM_GEN_SRAI;   //不需要使用R型指令
                alu_op      = `ALU_CSRRW;
                alu_src_sel = `ALU_SRC_CSRRS;   //选1和csr，与CSRRS一样
                wmask =  8'b0;
                s_flag = 1'd0;
                expand_signed =4'd0;    
                rd_flag = 3'd0;
                id_div = 1'b0;
                csr_addr = csr;
            end
            3'b110:begin    //csrrsi
                jump        = 1'b0;
                reg_wen     = 1'b1;
                jalr = 1'b0;
                reg1_raddr  = rs1;
                reg2_raddr  = rs2;
                reg_waddr   = rd;
                s_imm =0;
                imm_gen_op  = `IMM_GEN_CSRRSI;   //不需要使用R型指令
                alu_op      = `ALU_CSRRS;
                alu_src_sel = `ALU_SRC_CSRRSI;
                wmask =  8'b0;
                s_flag = 1'd0;
                expand_signed =4'd0;    
                rd_flag = 3'd0;
                id_div = 1'b0;
                csr_addr = csr;
            end
            default:begin
                if(inst == 32'h0000_0073)begin   //ecall
                ecall_flag = 1'b1;
                mret_flag = 1'b0;
                unknown_code = 32'h0;
                unnormal_pc = mtvec;
                jump        = 1'b0;
                reg_wen     = 1'b0;
                jalr = 1'b0;
                reg1_raddr  = id_pc[31:0];
                reg2_raddr  = rs2;
                reg_waddr   = 64'd0;
                s_imm =0;
                imm_gen_op  = `IMM_GEN_SRAI;   //不需要使用R型指令
                alu_op      = `ALU_ECALL;
                alu_src_sel = `ALU_SRC_ECALL;   //选1和curr_pc
                wmask =  8'b0;
                s_flag = 1'd0;
                expand_signed =4'd0;    
                rd_flag = 3'd0;
                id_div = 1'b0;
                csr_addr = 12'd0;
                end
                else if(inst == 32'h3020_0073)begin   //mret
                ecall_flag = 1'b0;
                mret_flag = 1'b1;
                unknown_code = 32'h0;
                reg1_raddr = `REG_ADDR_WIDTH'b0;
                reg2_raddr = `REG_ADDR_WIDTH'b0;
                alu_op      = `ALU_MRET;
                unnormal_pc = mepc;
                end    
                else if(inst == 32'h0010_0073)begin    //ebreak
                ebreak_flag = 1'b1;
                ecall_flag = 1'b0;
                unknown_code = 32'h0;
                reg1_raddr = `REG_ADDR_WIDTH'b0;
                reg2_raddr = `REG_ADDR_WIDTH'b0;
                end
                else begin
                unknown_code = inst ;
                end
            end
            endcase
        end
        default:begin
        /*    if(inst == 32'h0010_0073)begin    //ebreak
                ebreak_flag = 1'b1;
                ecall_flag = 1'b0;
                unknown_code = 32'h0;
                reg1_raddr = `REG_ADDR_WIDTH'b0;
                reg2_raddr = `REG_ADDR_WIDTH'b0;
            end*/
                ebreak_flag = 1'b0;
                unknown_code = inst ;
        end
    endcase 
end
assign id_mem_cache = rd_buf_flag == 3'd1 | rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6;
import "DPI-C" function void ebreak();
/*always@(*)begin
    if(inst == 32'h0010_0073)begin
        ebreak_flag = 1'b1;
        unknown_code = 32'h0;
        reg1_raddr = `REG_ADDR_WIDTH'b0;
        reg2_raddr = `REG_ADDR_WIDTH'b0;
    end

end*/
import "DPI-C" function void unknown_inst();
always@(*)begin
    if(unknown_code != 32'd0)
        unknown_inst();
end

endmodule