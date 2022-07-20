`include "../vsrc/rvseed_defines.v"

module if_stage (
    input clk,
    input rst_n,
    input      [`CPU_WIDTH-1:0] next_pc,
    output ena,
    output [31:0] inst,
    output [63:0] curr_pc,
    input control_rest,
    input ex_pc_ready,
    output reg pc_no_use,
    input rest_from_id
);
//wire [`CPU_WIDTH-1:0] curr_pc;
/*pc_reg u_pc_reg(
    .clk(clk),     // system clock
    .rst_n(rst_n),   // active low reset
    .ena(ena),     // system enable
    .next_pc(next_pc), // next pc addr
    .curr_pc(curr_pc),  // current pc addr
    .control_rest(control_rest),
    .ex_pc_ready(ex_pc_ready)
);*/
pc_predict u_pc_predict(
  .clk(clk),     // system clock
  .rst_n(rst_n),   // active low reset
  .control_rest(control_rest),
  .ex_next_pc(next_pc), // from ex
  .ena(ena), 
  .curr_pc(curr_pc),  // current pc addr
  .ex_pc_ready(ex_pc_ready),
  .pc_no_use(pc_no_use),
  .rest_from_id(rest_from_id)
);

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
//import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
wire [63:0] rdata;
always @(*) begin
  //pmem_read(curr_pc, rdata);
  if(control_rest == 1'b0)
    pmem_read(curr_pc, rdata);
  else if(ex_pc_ready == 1'b1)
    pmem_read(curr_pc, rdata);
end
assign inst = rdata[31:0];
endmodule