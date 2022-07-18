`include "../vsrc/rvseed_defines.v"

module if_stage (
    input clk,
    input rst_n,
    input      [`CPU_WIDTH-1:0] next_pc,
    output ena,
    output [31:0] inst,
    output [63:0] pc
    
   
);
wire [`CPU_WIDTH-1:0] curr_pc;
pc_reg u_pc_reg(
    .clk(clk),     // system clock
    .rst_n(rst_n),   // active low reset
    .ena(ena),     // system enable
    .next_pc(next_pc), // next pc addr
    .curr_pc(curr_pc)  // current pc addr
);

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
//import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
wire [63:0] rdata;
always @(*) begin
  //pmem_read(curr_pc, rdata);
  pmem_read(32'h8000_0000, rdata);
end
assign inst = rdata[31:0];
endmodule