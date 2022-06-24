//top.v
`include "../vsrc/rvseed_defines.v"
module  ysyx_22040175_top(
	input                         clk,
    input                         rst,
	input [31:0]                 inst,
	output[`CPU_WIDTH-1:0]        pc,
    output [`CPU_WIDTH-1:0]       unknown_code
   // output[`CPU_WIDTH-1:0]        next_pc
);
wire rst_n;
assign rst_n = !rst;
wire                         ena;
//wire [`CPU_WIDTH-1:0]        curr_pc;    // current pc addr
wire [`CPU_WIDTH-1:0]        next_pc;    // next pc addr

wire                         branch;     // branch flag
wire                         zero;       // alu result is zero
wire                         jump;       // jump flag

//wire [`CPU_WIDTH-1:0]        inst;       // instruction

wire                         reg_wen;    // register write enable
wire [`REG_ADDR_WIDTH-1:0]   reg_waddr;  // register write address
wire [`CPU_WIDTH-1:0]        reg_wdata;  // register write data
wire [`REG_ADDR_WIDTH-1:0]   reg1_raddr; // register 1 read address
wire [`REG_ADDR_WIDTH-1:0]   reg2_raddr; // register 2 read address
wire [`CPU_WIDTH-1:0]        reg1_rdata; // register 1 read data
wire [`CPU_WIDTH-1:0]        reg2_rdata; // register 2 read data

wire [`IMM_GEN_OP_WIDTH-1:0] imm_gen_op; // immediate extend opcode
wire [`CPU_WIDTH-1:0]        imm;        // immediate

wire [`ALU_OP_WIDTH-1:0]     alu_op;     // alu opcode
wire [`ALU_SRC_WIDTH-1:0]    alu_src_sel;// alu source select flag
wire [`CPU_WIDTH-1:0]        alu_src1;   // alu source 1
wire [`CPU_WIDTH-1:0]        alu_src2;   // alu source 2
wire [`CPU_WIDTH-1:0]        alu_res;    // alu result
wire jalr;
assign reg_wdata = alu_res;

pc_reg u_pc_reg_0(
    .clk                            ( clk                           ),
    .rst_n                          ( rst_n                         ),
    .ena                            ( ena                           ),
    .next_pc                        ( next_pc                       ),
    .curr_pc                        ( pc                            )
);

muxpc u_mux_pc_0(
    .ena                            ( ena                           ),
    .branch                         ( branch                        ),
    .zero                           ( zero                          ),
    .jump                           ( jump                          ),
    .imm                            ( imm                           ),
    .curr_pc                        ( pc                       ),
    .next_pc                        ( next_pc                       ),
    .jalr(jalr)
    //.reg1_rdata(reg1_rdata)
);



ctrl u_ctrl_0(
    .inst                           ( inst[31:0]                          ),
    .branch                         ( branch                        ),
    .jump                           ( jump                          ),
    .reg_wen                        ( reg_wen                       ),
    .reg1_raddr                     ( reg1_raddr                    ),
    .reg2_raddr                     ( reg2_raddr                    ),
    .reg_waddr                      ( reg_waddr                     ),
    .imm_gen_op                     ( imm_gen_op                    ),
    .alu_op                         ( alu_op                        ),
    .alu_src_sel                    ( alu_src_sel                   ),
    .unknown_code           (unknown_code),
    .jalr(jalr)
);

reg_file u_reg_file_0(
    .clk                            ( clk                           ),
    .rst_n                          ( rst_n                         ),
    .reg_wen                        ( reg_wen                       ),
    .reg_waddr                      ( reg_waddr                     ),
    .reg_wdata                      ( reg_wdata                     ),
    .reg1_raddr                     ( reg1_raddr                    ),
    .reg2_raddr                     ( reg2_raddr                    ),
    .reg1_rdata                     ( reg1_rdata                    ),
    .reg2_rdata                     ( reg2_rdata                    )
);

imm_gen u_imm_gen_0(
    .inst                           ( inst[31:0]                      ),
    .imm_gen_op                     ( imm_gen_op                    ),
    .imm                            ( imm                           )
);

mux_alu u_mux_alu_0(
    .alu_src_sel                    ( alu_src_sel                   ),
    .reg1_rdata                     ( reg1_rdata                    ),
    .reg2_rdata                     ( reg2_rdata                    ),
    .imm                            ( imm                           ),
    .curr_pc                        ( pc                       ),
    .alu_src1                       ( alu_src1                      ),
    .alu_src2                       ( alu_src2                      )
);

alu u_alu_0(
    .alu_op                         ( alu_op                        ),
    .alu_src1                       ( alu_src1                      ),
    .alu_src2                       ( alu_src2                      ),
    .zero                           ( zero                          ),
    .alu_res                        ( alu_res                       )
);

//wire [63:0] rdata;

/*import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
wire [63:0] rdata;
always @(*) begin
  pmem_read(pc, rdata);
  pmem_write(pc, wdata, wmask);
end*/


endmodule
