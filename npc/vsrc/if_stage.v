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
    output reg delay_r_done,
    output [3:0]axi_ar_id_o,
    input mem_no_use,
    input [2:0] ex_rd_buf_flag,
    input mem_res_valid,
    output [63:0] rdata,


    input waxi_valid,
    input [63:0] reg_write_addr,
    input  [63:0] reg_write_data,
    input [7:0] reg_write_wmask,
    input wb_res_valid,
    input  axi_req,
    output w_done,
    output b_hs,
    input mret_flag,
    input ecall_flag,
    input w_start,
    input id_mem_cache
   // output inst_use


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
  .return_id(axi_ar_id_o),
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
//reg delay_r_done;
//wire [63:0] rdata;
wire rw_ready_o;
//wire [63:0] rw_w_data_i;
wire axi_ar_ready_i;
wire axi_ar_valid_o;
wire [63:0] axi_ar_addr_o;
wire axi_r_ready_o;
wire axi_r_valid_i;
wire [1:0] axi_r_resp_i;
wire [63:0] axi_r_data_i;
wire axi_r_last_i;
//wire [3:0] axi_ar_id_o;

wire if_valid;
wire [3:0] if_send_id;
wire axi_valid;
//wire [3:0] axi_id;
wire [63:0] axi_addr;
//wire [3:0] axi_send_id = if_send_id
//wire axi_ena = ena&~control_rest;
wire r_done;
reg delay_control_rest;
reg delay_r_done2;
reg dd_r_done2;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        delay_r_done2 <= 1'b0;
        delay_control_rest <= 1'b0;
        delay_r_done <= 1'd0;
        dd_r_done2 <= 1'd0;
    end
    else begin
        delay_r_done2 <= r_done2;
        delay_control_rest <= control_rest;
        delay_r_done <= r_done;
        dd_r_done2 <= delay_r_done2;
    end
end

//assign inst = (delay_r_done && axi_ar_id_o==4'd1)?rdata[31:0] : 32'b0010011;
assign inst = (cpu_ready & !delay_control_rest) ? instruction[31:0] : 32'b0010011;



wire axi_aw_ready_i;
wire axi_aw_valid_o;
wire [63:0] axi_aw_addr_o;
wire axi_w_ready_i;
wire axi_w_valid_o;
wire [63:0] axi_w_data_o;
wire [7:0] axi_w_strb_o;
wire axi_w_last_o;
wire axi_b_ready_o;
wire axi_b_valid_i;
//wire [63:0]rw_addr_i;
//assign rw_addr_i = (!waxi_valid) ? mem_addr : reg_write_addr;
wire rw_burst;

wire [7:0] axi_ar_len_o;
wire [2:0] axi_ar_size_o;
wire [1:0] axi_ar_burst_o;

//cache

wire [63:0] instruction;
wire cpu_ready;
wire [63:0] mem_req_addr;
wire mem_req_valid;
reg dd_r_ready_o2;
reg d_r_ready_o2;
reg [3:0] d_ar_id_o;
reg [3:0] dd_ar_id_o;
wire [63:0] rdata2;
//wire [63:0] mem_data_read;
reg delay_rw_burst;
always@(posedge clk)begin
  if(!rst_n)
    delay_rw_burst <= 1'b0;
  else
    delay_rw_burst <= rw_burst;
end
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
wire mem_ready = dd_r_ready_o2 && dd_ar_id_o;
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
wire cache_axi_req;
wire [3:0] send_axi_ar_id;
wire axi_burst;
wire [63:0] axi_r_addr;
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





wire axi_ar_ready_i2;
wire axi_ar_valid_o2;
wire [63:0]axi_ar_addr_o2;
wire axi_ar_id_o2;
wire [2:0] axi_ar_len_o2;
wire [7:0]  axi_ar_size_o2;
wire [1:0]  axi_ar_burst_o2;
wire axi_r_ready_o2;
wire axi_r_valid_i2;
wire [1:0] axi_r_resp_i2;
wire [63:0]         axi_r_data_i2;
wire axi_r_last_i2;
wire r_done2;

axi # (
)
u_axi2(
    .clock(clk),
    .reset_n(rst_n),
    .rw_req_i(cache_axi_req),
    .rw_size_i(reg_write_wmask),

	  .rw_valid_i(axi_valid | w_axi_valid),         //IF&MEM输入信号
	 // .rw_ready_o(rw_ready_o),         //IF&MEM输入信号
    .data_read_o(rdata),        //IF&MEM输入信号
    .rw_w_data_i(reg_write_data),        //IF&MEM输入信号
    .rw_addr_i(axi_r_addr),          //IF&MEM输入信号
    //input  [1:0]                        rw_size_i,          //IF&MEM输入信号
    .rw_burst(axi_burst),
    .ww_addr_i(reg_write_addr),


    // Advanced eXtensible Interface
    .axi_ar_ready_i(axi_ar_ready_i2),                
    .axi_ar_valid_o(axi_ar_valid_o2),
    .axi_ar_addr_o(axi_ar_addr_o2),
    .axi_ar_id_o(axi_ar_id_o2),
    .axi_ar_len_o(axi_ar_len_o2),
    .axi_ar_size_o(axi_ar_size_o2),
    .axi_ar_burst_o(axi_ar_burst_o2),
    .axi_r_ready_o(axi_r_ready_o2),                 
    .axi_r_valid_i(axi_r_valid_i2),                
    .axi_r_resp_i(axi_r_resp_i2),
    .axi_r_data_i(axi_r_data_i2),
    .axi_r_last_i(axi_r_last_i2),
    .r_done(r_done2),
    .axi_r_id_i(send_axi_ar_id),



    .axi_aw_ready_i(axi_aw_ready_i),    //从设备已准备好接收地址和相关的控制信号          
    .axi_aw_valid_o(axi_aw_valid_o),  
    .axi_aw_addr_o(axi_aw_addr_o),

    .axi_w_ready_i(axi_w_ready_i),                
    .axi_w_valid_o(axi_w_valid_o),
    .axi_w_data_o(axi_w_data_o),
    .axi_w_strb_o(axi_w_strb_o),
    .axi_w_last_o(axi_w_last_o),
    .axi_b_ready_o(axi_b_ready_o),                
    .axi_b_valid_i(axi_b_valid_i),


    .ar_hs(ar_hs),
    .w_done(w_done),
    .b_hs(b_hs)


);


axi_slave # (
)
u_axi_slave2(
    .clock(clk),
    .reset_n(rst_n),
    .axi_ar_ready_o(axi_ar_ready_i2),    //从设备已准备好接收地址和相关的控制信号            
    .axi_ar_valid_i(axi_ar_valid_o2),
    .axi_ar_addr_i(axi_ar_addr_o2),
    .axi_ar_len_i(axi_ar_len_o2), //突发长度，这个字段标识每次突发传输的传输次数
    .axi_ar_size_i(axi_ar_size_o2),  //突发大小，这个字段表示每次突发传输的大小
    .axi_ar_burst_i(axi_ar_burst_o2),  //突发类型，包括突发类型和突发大小信息，该字段决定了每次突发传输时地址的计算方法
    .axi_r_ready_i(axi_r_ready_o2),   //  	主设备已准备好接收读取的数据和响应信息              
    .axi_r_valid_o(axi_r_valid_i2),  //从设备给出的数据和响应信息有效              
    .axi_r_resp_o(axi_r_resp_i2), //读响应，这信号表示读传输的状态
    .axi_r_data_o(axi_r_data_i2),
    .axi_r_last_o(axi_r_last_i2),  //该信号用于标识当前传输是否为突发传输中的最后一次传输
    .r_valid(axi_valid | w_axi_valid),

    .axi_req(cache_axi_req),
    
    .axi_aw_ready_o(axi_aw_ready_i),    //从设备已准备好接收地址和相关的控制信号          
    .axi_aw_valid_i(axi_aw_valid_o),  
    .axi_aw_addr_i(axi_aw_addr_o),

    //.axi_aw_addr_i(test),
    .axi_w_ready_o(axi_w_ready_i),                
    .axi_w_valid_i(axi_w_valid_o),
    .axi_w_data_i(axi_w_data_o),
    .axi_w_strb_i(axi_w_strb_o),
    .axi_w_last_i(axi_w_last_o),
    .axi_b_ready_i(axi_b_ready_o),                
    .axi_b_valid_o(axi_b_valid_i)
);

/*
axi # (
)
u_axi(
    .clock(clk),
    .reset_n(rst_n),
    .rw_req_i(axi_req),
    .rw_size_i(reg_write_wmask),

	  .rw_valid_i(mem_valid | waxi_valid),         //IF&MEM输入信号
	  //.rw_ready_o(rw_ready_o),         //IF&MEM输入信号
    .data_read_o(rdata),        //IF&MEM输入信号
    .rw_w_data_i(reg_write_data),        //IF&MEM输入信号
    .rw_addr_i(mem_addr),          //IF&MEM输入信号
    .ww_addr_i(reg_write_addr),
  //input  [1:0]                        rw_size_i,          //IF&MEM输入信号
    //.rw_burst(rw_burst),
    // Advanced eXtensible Interface
    .axi_aw_ready_i(axi_aw_ready_i),    //从设备已准备好接收地址和相关的控制信号          
    .axi_aw_valid_o(axi_aw_valid_o),  
    .axi_aw_addr_o(axi_aw_addr_o),

    .axi_w_ready_i(axi_w_ready_i),                
    .axi_w_valid_o(axi_w_valid_o),
    .axi_w_data_o(axi_w_data_o),
    .axi_w_strb_o(axi_w_strb_o),
    .axi_w_last_o(axi_w_last_o),
    .axi_b_ready_o(axi_b_ready_o),                
    .axi_b_valid_i(axi_b_valid_i),
    .axi_ar_ready_i(axi_ar_ready_i),                
    .axi_ar_valid_o(axi_ar_valid_o),
    .axi_ar_addr_o(axi_ar_addr_o),
    .axi_ar_id_o(axi_ar_id_o),
    .axi_ar_len_o(axi_ar_len_o),
    .axi_ar_size_o(axi_ar_size_o),
    .axi_ar_burst_o(axi_ar_burst_o),
    .axi_r_ready_o(axi_r_ready_o),                 
    .axi_r_valid_i(axi_r_valid_i),                
    .axi_r_resp_i(axi_r_resp_i),
    .axi_r_data_i(axi_r_data_i),
    .axi_r_last_i(axi_r_last_i),
    .r_done(r_done),
    .ar_hs(ar_hs),
    .axi_r_id_i(axi_id),
    .w_done(w_done),
    .b_hs(b_hs)
);*/

/*
axi_slave # (
)
u_axi_slave(
    .clock(clk),
    .reset_n(rst_n),
    .axi_ar_ready_o(axi_ar_ready_i),    //从设备已准备好接收地址和相关的控制信号            
    .axi_ar_valid_i(axi_ar_valid_o),
    .axi_ar_addr_i(axi_ar_addr_o),
 
    .axi_ar_len_i(4'b0), //突发长度，这个字段标识每次突发传输的传输次数
    .axi_ar_size_i(axi_ar_size_o),  //突发大小，这个字段表示每次突发传输的大小
    .axi_ar_burst_i(axi_ar_burst_o),  //突发类型，包括突发类型和突发大小信息，该字段决定了每次突发传输时地址的计算方法
  
    
    .axi_r_ready_i(axi_r_ready_o),   //  	主设备已准备好接收读取的数据和响应信息              
    .axi_r_valid_o(axi_r_valid_i),  //从设备给出的数据和响应信息有效              
    .axi_r_resp_o(axi_r_resp_i), //读响应，这信号表示读传输的状态
    .axi_r_data_o(axi_r_data_i),
    .axi_r_last_o(axi_r_last_i),  //该信号用于标识当前传输是否为突发传输中的最后一次传输
 
    .r_valid(waxi_valid|mem_valid),
    .axi_req(axi_req),
    
    .axi_aw_ready_o(axi_aw_ready_i),    //从设备已准备好接收地址和相关的控制信号          
    .axi_aw_valid_i(axi_aw_valid_o),  
    .axi_aw_addr_i(axi_aw_addr_o),

    //.axi_aw_addr_i(test),
    .axi_w_ready_o(axi_w_ready_i),                
    .axi_w_valid_i(axi_w_valid_o),
    .axi_w_data_i(axi_w_data_o),
    .axi_w_strb_i(axi_w_strb_o),
    .axi_w_last_i(axi_w_last_o),
    .axi_b_ready_i(axi_b_ready_o),                
    .axi_b_valid_o(axi_b_valid_i)
);

*/

//wire [63:0]test = 64'h8000_8FF8;





endmodule