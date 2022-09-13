//top.v
`include "../vsrc/rvseed_defines.v"
module  ysyx_22040175_top(
	input                         clk,
    input                         rst,
	output [31:0]                 inst,
	output[31:0]        pc,
    output [`CPU_WIDTH-1:0]       unknown_code,
    input time_set,
    output[31:0]        diff_pc,
    output [31:0] diff_delay_pc,
    output out_mem_rd_buf_flag
   // output[`CPU_WIDTH-1:0]        next_pc
);

cpu u_cpu(
	.clk(clk),
    .rst(rst),
	.inst(inst),
	.pc(pc),
    .unknown_code(unknown_code),
    .time_set(time_set),
    .diff_pc(diff_pc),
    .diff_delay_pc(diff_delay_pc),
    .out_mem_rd_buf_flag(out_mem_rd_buf_flag),
    
    
    
    .axi_r_addr(axi_r_addr),
    .axi_burst(axi_burst),
    .send_axi_ar_id(send_axi_ar_id),
    .cache_axi_req(cache_axi_req),
    .axi_valid(axi_valid),
    .waxi_valid(waxi_valid),
    .reg_write_wmask(reg_write_wmask),
    .reg_write_addr(reg_write_addr),
    .reg_write_data(reg_write_data),


    .r_done2(r_done2),
    .axi_r_ready_o2(axi_r_ready_o2),
    .axi_ar_id_o2(axi_ar_id_o2),
    .rdata(rdata),
    .w_done(w_done),
    .b_hs(b_hs)
   // output[`CPU_WIDTH-1:0]        next_pc
);


//wire[63:0] axi_r_addr,
//wire axi_burst,
//wire [3:0] send_axi_ar_id,
//wire cache_axi_req,




//wire r_done2,
//wire axi_r_ready_o2,
//wire [3:0]axi_ar_id_o2
wire axi_valid;
wire waxi_valid;



wire axi_ar_ready_i2;
wire axi_ar_valid_o2;
wire [63:0]axi_ar_addr_o2;
wire [3:0]axi_ar_id_o2;
wire [2:0] axi_ar_len_o2;
wire [7:0]  axi_ar_size_o2;
wire [1:0]  axi_ar_burst_o2;
wire axi_r_ready_o2;
wire axi_r_valid_i2;
wire [1:0] axi_r_resp_i2;
wire [63:0]         axi_r_data_i2;
wire axi_r_last_i2;
wire r_done2;
wire cache_axi_req;
wire [3:0] send_axi_ar_id;
wire axi_burst;
wire [63:0] axi_r_addr;



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


wire [7:0] axi_ar_len_o;
wire [2:0] axi_ar_size_o;
wire [1:0] axi_ar_burst_o;



wire b_hs;
wire w_done;
wire [63:0] reg_write_addr;
wire [63:0] reg_write_data;
wire [63:0] rdata;
wire [7:0] reg_write_wmask;
wire rst_n = !rst;
axi # (
)
u_axi2(
    .clock(clk),
    .reset_n(rst_n),
    .rw_req_i(cache_axi_req),
    .rw_mask(reg_write_wmask),

	.rw_valid_i(axi_valid | waxi_valid),         //IF&MEM输入信号
	 
    .data_read_o(rdata),        //IF&MEM输入信号
    .rw_w_data_i(reg_write_data),        //IF&MEM输入信号
    .rw_addr_i(axi_r_addr),          //IF&MEM输入信号
    
    .rw_burst(axi_burst),
    .ww_addr_i(reg_write_addr),


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
    .r_valid(axi_valid | waxi_valid),

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


endmodule