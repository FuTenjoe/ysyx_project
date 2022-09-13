`include "../vsrc/rvseed_defines.v"

module if_stage (
    input clk,
    input rst_n,
    input      [`CPU_WIDTH-1:0] id_next_pc,
    output ena,
    output [31:0] inst,
    output [63:0] curr_pc,
    input control_rest,
    input rest_id_mem ,
    input [63:0] id_pc,
    input sig_jalr,
    input id_mul,
    input sh_fnsh_flag,
    input id_div,
    input div_finish,
    input mem_valid,       //clint新加
    input [3:0] mem_send_id,
    input [63:0] mem_addr,
    output ar_hs,
    output reg delay_r_done2,
    output reg [3:0]d_ar_id_o,
    input mem_no_use,
    input [2:0] ex_rd_buf_flag,
    input mem_res_valid,
    input [63:0] rdata,


    input waxi_valid,
    input [63:0] reg_write_addr,
    input  [63:0] reg_write_data,
    input [7:0] reg_write_wmask,
    input wb_res_valid,
    input  axi_req,
    //output w_done,
    //utput b_hs,
    input mret_flag,
    input ecall_flag,
    input w_start,
    input id_mem_cache,
    input [3:0] axi_ar_id_o2,
    input axi_r_ready_o2,
    input r_done2,
   // output inst_use
    output cache_axi_req,
    output axi_burst,
    output [63:0] axi_r_addr,
    output axi_valid,

    output [3:0] send_axi_ar_id


);

pc_predict u_pc_predict(
  .clk(clk),     // system clock
  .rst_n(rst_n),   // active low reset
  .control_rest(control_rest),
  .id_next_pc(id_next_pc), // from ex
  .ena(ena), 
  .curr_pc(curr_pc),  // current pc addr
  .rest_id_mem (rest_id_mem ),
  .id_curr_pc(id_pc),
  .sig_jalr(sig_jalr),
  .id_mul(id_mul),
  .sh_fnsh_flag(sh_fnsh_flag),
  .id_div(id_div),
  .div_finish(div_finish),
  //.r_done(delay_r_done),
  .if_valid(if_valid),
  .ar_hs(ar_hs),
  .return_id(axi_ar_id_o2),
  .if_send_id(if_send_id),
  .mem_no_use(mem_no_use),
  .ex_rd_buf_flag(ex_rd_buf_flag),
  .mem_res_valid(mem_res_valid),
  .wb_res_valid(wb_res_valid),
  .mret_flag(mret_flag),
  .ecall_flag(ecall_flag),
  .w_start(w_start),
  .cpu_ready(cpu_ready),
  .id_mem_cache(id_mem_cache)
);



wire if_valid;
wire [3:0] if_send_id;


reg delay_control_rest;

reg dd_r_done2;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        delay_r_done2 <= 1'b0;
        delay_control_rest <= 1'b0;
       
        dd_r_done2 <= 1'd0;
    end
    else begin
        delay_r_done2 <= r_done2;
        delay_control_rest <= control_rest;
       
        dd_r_done2 <= delay_r_done2;
    end
end

//assign inst = (delay_r_done && axi_ar_id_o==4'd1)?rdata[31:0] : 32'b0010011;
assign inst = (cpu_ready & !delay_control_rest) ? instruction[31:0] : 32'b0010011;


//cache

wire [63:0] instruction;
wire cpu_ready;
wire [63:0] mem_req_addr;
wire mem_req_valid;
reg dd_r_ready_o2;
reg d_r_ready_o2;
reg [3:0] dd_ar_id_o;


always@(posedge clk)begin
  if(!rst_n)begin
    d_r_ready_o2 <= 1'b0;
    dd_r_ready_o2 <= 1'b0;
    d_ar_id_o <= 4'd0;
    dd_ar_id_o <= 4'd0;
  end
  else begin
    d_r_ready_o2 <= axi_r_ready_o2;
    dd_r_ready_o2 <= d_r_ready_o2;
    d_ar_id_o <= axi_ar_id_o2;
    dd_ar_id_o <= d_ar_id_o;
  end
end
wire mem_ready = dd_r_ready_o2 && (dd_ar_id_o==4'd1);
i_cache u_i_cache(
  .clk(clk),
  .rst_n(rst_n),
	//cpu cache
	.cpu_req_addr(curr_pc),
	.cpu_req_valid(if_valid),
	.cpu_data_read(instruction),
	.cpu_ready(cpu_ready),
	//main memory cache
	.mem_req_addr(mem_req_addr),
	.mem_req_valid(mem_req_valid),   //读使能
	.mem_data_read(rdata),
	.mem_ready(mem_ready),    //dd&dd_return_id=1
  .mem_done(dd_r_done2),
  .control_rest(control_rest)
);


cache_axi_judge u_cache_axi_judge(
    .clk(clk),
    .rst_n(rst_n),
    .if_mem_req_valid(mem_req_valid),
    .mem_valid(mem_valid),
    //.dd_r_done2(dd_r_done2),
    .cpu_ready(cpu_ready),
    .r_done(r_done2),
    .return_id(axi_ar_id_o2),
    .if_mem_req_addr(mem_req_addr),
    .mem_addr(mem_addr),
    .w_axi_valid(waxi_valid),

    .axi_valid(axi_valid),
    .axi_req(cache_axi_req),
    .axi_ar_id(send_axi_ar_id),
    .axi_burst(axi_burst),
    .axi_r_addr(axi_r_addr)
);


endmodule