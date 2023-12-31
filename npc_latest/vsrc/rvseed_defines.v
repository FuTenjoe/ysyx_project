// simulation clock period
`define SIM_PERIOD 20 // 20ns -> 50MHz 

// processor numbers
`define CPU_WIDTH 64 // rv32

// instruction memory
`define INST_MEM_ADDR_DEPTH 1024
`define INST_MEM_ADDR_WIDTH 10 // 2^10 = 1024

// register 
`define REG_DATA_DEPTH 32
`define REG_ADDR_WIDTH 5 // 2^5 = 32

// immediate generate
`define INST_I_IMM_WIDTH 12
`define INST_S_IMM_WIDTH 12
`define INST_B_IMM_WIDTH 13
`define INST_U_IMM_WIDTH 32
`define INST_J_IMM_WIDTH 21

// instruction bits select
`define FUNCT3_BASE 12
`define FUNCT7_BASE 25
`define RD_BASE     7
`define RS1_BASE    15
`define RS2_BASE    20

// opcode
`define OPCODE_WIDTH 7
`define INST_TYPE_R  `OPCODE_WIDTH'b0110011 // add/sub/xor/or/and/sll/srl/sra/slt/sltu
`define INST_TYPE_I  `OPCODE_WIDTH'b0010011 // addi/xori/ori/andi/slli/srli/srai/slti/sltiu
`define INST_TYPE_IL `OPCODE_WIDTH'b0000011 // lb/lh/lw/lbu/lhu
`define INST_TYPE_S  `OPCODE_WIDTH'b0100011 // sb/sh/sw
`define INST_TYPE_B  `OPCODE_WIDTH'b1100011 // beq/bne/blt/bge/bltu/bgeu
`define INST_JAL     `OPCODE_WIDTH'b1101111 // jal
`define INST_JALR    `OPCODE_WIDTH'b1100111 // jalr
`define INST_LUI     `OPCODE_WIDTH'b0110111 // lui
`define INST_AUIPC   `OPCODE_WIDTH'b0010111 // auipc
`define INST_TYPE_IE `OPCODE_WIDTH'b1110011 // ecall/ebreak

// funct3
// R-type
`define FUNCT3_WIDTH 3
`define INST_ADD_SUB   `FUNCT3_WIDTH'h0 
`define INST_XOR       `FUNCT3_WIDTH'h4
`define INST_OR        `FUNCT3_WIDTH'h6
`define INST_AND       `FUNCT3_WIDTH'h7
`define INST_SLL       `FUNCT3_WIDTH'h1
`define INST_SRL_SRA   `FUNCT3_WIDTH'h5
`define INST_SLT       `FUNCT3_WIDTH'h2
`define INST_SLTU      `FUNCT3_WIDTH'h3
// I-type 
`define INST_ADDI      `FUNCT3_WIDTH'h0
`define INST_XORI      `FUNCT3_WIDTH'h4
`define INST_ORI       `FUNCT3_WIDTH'h6
`define INST_ANDI      `FUNCT3_WIDTH'h7
`define INST_SLLI      `FUNCT3_WIDTH'h1
`define INST_SRLI_SRAI `FUNCT3_WIDTH'h5 
`define INST_SLTI      `FUNCT3_WIDTH'h2
`define INST_SLTIU     `FUNCT3_WIDTH'h3
// I-type load
`define INST_LB        `FUNCT3_WIDTH'h0
`define INST_LH        `FUNCT3_WIDTH'h1
`define INST_LW        `FUNCT3_WIDTH'h2
`define INST_LBU       `FUNCT3_WIDTH'h4
`define INST_LHU       `FUNCT3_WIDTH'h5
// S-type
`define INST_SB        `FUNCT3_WIDTH'h0
`define INST_SH        `FUNCT3_WIDTH'h1
`define INST_SW        `FUNCT3_WIDTH'h2
// B-type
`define INST_BEQ       `FUNCT3_WIDTH'h0
`define INST_BNE       `FUNCT3_WIDTH'h1
`define INST_BLT       `FUNCT3_WIDTH'h4
`define INST_BGE       `FUNCT3_WIDTH'h5
`define INST_BLTU      `FUNCT3_WIDTH'h6
`define INST_BGEU      `FUNCT3_WIDTH'h7
// I-type environment
`define INST_ECALL     `FUNCT3_WIDTH'h0
`define INST_EBREAK    `FUNCT3_WIDTH'h0

// funct7
`define FUNCT7_WIDTH 7
`define FUNCT7_INST_A  `FUNCT7_WIDTH'h00
`define FUNCT7_INST_B  `FUNCT7_WIDTH'h20


// ALU opcode
`define ALU_OP_WIDTH 5
`define ALU_AND  `ALU_OP_WIDTH'b00000
`define ALU_OR   `ALU_OP_WIDTH'b00001
`define ALU_XOR  `ALU_OP_WIDTH'b00010
`define ALU_ADD  `ALU_OP_WIDTH'b00011
`define ALU_SUB  `ALU_OP_WIDTH'b00100
`define ALU_SLLW  `ALU_OP_WIDTH'b00101 // shift left logical  sllw 32位
`define ALU_SRL  `ALU_OP_WIDTH'b00110 // shift right logical
`define ALU_SRA  `ALU_OP_WIDTH'b00111 // shift right arith 
`define ALU_SLT  `ALU_OP_WIDTH'b01000 // set less than  
`define ALU_SLTU `ALU_OP_WIDTH'b01001 // set less than (unsigned) 
`define ALU_BLT  `ALU_OP_WIDTH'b01010 // branch less than
`define ALU_BLTU `ALU_OP_WIDTH'b01011 // branch less than (unsigned)
`define ALU_SUBN  `ALU_OP_WIDTH'b01100  
`define ALU_JALR `ALU_OP_WIDTH'b01101  
`define ALU_DIVU `ALU_OP_WIDTH'b01110  //除
`define ALU_DIVYU `ALU_OP_WIDTH'b01111  //取余数
`define ALU_SLLI `ALU_OP_WIDTH'b10000  //slli
`define ALU_BMT  `ALU_OP_WIDTH'b10001 // set more than  
`define ALU_BMTU `ALU_OP_WIDTH'b10010 // set more than (unsigned) 
`define ALU_MUL `ALU_OP_WIDTH'b10011 // 乘
`define ALU_DIVW `ALU_OP_WIDTH'b10100 //32位除
`define ALU_DIVYW `ALU_OP_WIDTH'b10101  //32位取余数
`define ALU_MEM `ALU_OP_WIDTH'b10110   //专用于sd,sh,sb,sw
`define ALU_DIV `ALU_OP_WIDTH'b10111  //有符号64位除
`define ALU_CSRRS `ALU_OP_WIDTH'b11000  //csrrs
`define ALU_CSRRW `ALU_OP_WIDTH'b11001  //csrrw
`define ALU_ECALL `ALU_OP_WIDTH'b11010  //ecall
`define ALU_MRET `ALU_OP_WIDTH'b11011 //mret


// ALU select soure
`define ALU_SRC_WIDTH 3
`define ALU_SRC_REG     `ALU_SRC_WIDTH'b000 // src1 = reg1, src2 = reg2
`define ALU_SRC_IMM     `ALU_SRC_WIDTH'b001 // src1 = reg1, src2 = imm
`define ALU_SRC_FOUR_PC `ALU_SRC_WIDTH'b010 // src1 = 4,    src2 = pc
`define ALU_SRC_IMM_PC  `ALU_SRC_WIDTH'b011 // src1 = imm,  src2 = pc
`define ALU_SRC_CSRRS   `ALU_SRC_WIDTH'b100 //src1=reg1,    src2=csr
`define ALU_SRC_ECALL   `ALU_SRC_WIDTH'b101  //src1=reg1,src2=reg2
`define ALU_SRC_CSRRSI   `ALU_SRC_WIDTH'b110

// IMM GEN opcode
`define IMM_GEN_OP_WIDTH 3
`define IMM_GEN_I `IMM_GEN_OP_WIDTH'b000 
`define IMM_GEN_S `IMM_GEN_OP_WIDTH'b001
`define IMM_GEN_B `IMM_GEN_OP_WIDTH'b010
`define IMM_GEN_J `IMM_GEN_OP_WIDTH'b011
`define IMM_GEN_U `IMM_GEN_OP_WIDTH'b100
`define IMM_GEN_SRAI `IMM_GEN_OP_WIDTH'b101 
`define IMM_GEN_CSRRSI `IMM_GEN_OP_WIDTH'b110


//流水
`define zeroword 32'h8000_0000	




//AXI总线

// Burst types
`define AXI_BURST_TYPE_FIXED                                2'b00               //突发类型  FIFO
`define AXI_BURST_TYPE_INCR                                 2'b01               //ram  
`define AXI_BURST_TYPE_WRAP                                 2'b10
// Access permissions
`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define AXI_PROT_SECURE_ACCESS                              3'b000
`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define AXI_PROT_DATA_ACCESS                                3'b000
`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// Memory types (AR)
`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// Memory types (AW)
`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define AXI_SIZE_BYTES_1                                    3'b000                //突发宽度一个数据的宽度
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111


//读写
`define REQ_READ            1'b0
`define REQ_WRITE           1'b1



//define

`timescale 1ns / 1ps

`define ZERO_WORD  64'h00000000_00000000
`define PC_START   64'h00000000_80000000  
`define REG_BUS    63 : 0     
`define INST_ADD   8'h11

`define AXI_ADDR_WIDTH      64
`define AXI_DATA_WIDTH      64
`define AXI_ID_WIDTH        4
`define AXI_USER_WIDTH      1

`define SIZE_B              2'b00
`define SIZE_H              2'b01
`define SIZE_W              2'b10
`define SIZE_D              2'b11

//`define REQ_READ            1'b0
//`define REQ_WRITE           1'b1

`define RISCV_PRIV_MODE_U   0
`define RISCV_PRIV_MODE_S   1
`define RISCV_PRIV_MODE_M   3



