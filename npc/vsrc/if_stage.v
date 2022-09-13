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
    output b_hs
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
  .r_done(delay_r_done),
  .if_valid(if_valid),
  .ar_hs(ar_hs),
  .return_id(axi_ar_id_o),
  .if_send_id(if_send_id),
  .mem_no_use(mem_no_use),
  .ex_rd_buf_flag(ex_rd_buf_flag),
  .mem_res_valid(mem_res_valid),
  .wb_res_valid(wb_res_valid)
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
wire [3:0] axi_id;
wire [63:0] axi_addr;
//wire [3:0] axi_send_id = if_send_id
//wire axi_ena = ena&~control_rest;
wire r_done;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        delay_r_done <= 1'b0;
    end
    else begin
        delay_r_done <= r_done;
    end
end
//assign inst_use = delay_r_done? 1'b1:1'b0;
assign inst = (delay_r_done && axi_ar_id_o==4'd1)?rdata[31:0] : 32'b0010011;
//wire ar_hs;
//wire axi_ena = ena & ~control_rest & (~id_mul | sh_fnsh_flag);
axi_clint u_axi_clint(
    .clk(clk),
    .rst_n(rst_n),
    .if_valid(if_valid),
    .if_send_id(if_send_id),
    .pc(curr_pc),
    .mem_valid(mem_valid),
    .mem_send_id(mem_send_id),
    .mem_addr(mem_addr),
    .r_done(r_done),
    .return_id(axi_ar_id_o),
    .axi_valid(axi_valid),
    .axi_id(axi_id),
    .axi_addr(axi_addr)

);

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

axi # (
)
u_axi(
    .clock(clk),
    .reset_n(rst_n),
    .rw_req_i(axi_req),
    .rw_mask(reg_write_wmask),

	.rw_valid_i(axi_valid | waxi_valid),         //IF&MEM输入信号
	.rw_ready_o(rw_ready_o),         //IF&MEM输入信号
    .data_read_o(rdata),        //IF&MEM输入信号
    .rw_w_data_i(reg_write_data),        //IF&MEM输入信号
    .rw_addr_i(axi_addr),          //IF&MEM输入信号
//input  [1:0]                        rw_size_i,          //IF&MEM输入信号
    .ww_addr_i(reg_write_addr),


    // Advanced eXtensible Interface
    .axi_aw_ready_i(axi_aw_ready_i),    //从设备已准备好接收地址和相关的控制信号          
    .axi_aw_valid_o(axi_aw_valid_o),  
    .axi_aw_addr_o(axi_aw_addr_o),
   // output [2:0]                        axi_aw_prot_o,
  //  output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
  //  output [AXI_USER_WIDTH-1:0]         axi_aw_user_o,
  //  output [7:0]                        axi_aw_len_o,
  //  output [2:0]                        axi_aw_size_o,
  //  output [1:0]                        axi_aw_burst_o,
  //  output                              axi_aw_lock_o,
 //   output [3:0]                        axi_aw_cache_o,
  //  output [3:0]                        axi_aw_qos_o,
 //   output [3:0]                        axi_aw_region_o,

    .axi_w_ready_i(axi_w_ready_i),                
    .axi_w_valid_o(axi_w_valid_o),
    .axi_w_data_o(axi_w_data_o),
    .axi_w_strb_o(axi_w_strb_o),
    .axi_w_last_o(axi_w_last_o),
  //  output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
    
    .axi_b_ready_o(axi_b_ready_o),                
    .axi_b_valid_i(axi_b_valid_i),
 //   input  [1:0]axi_b_resp_i,                 
 //   input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
 //   input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,


    .axi_ar_ready_i(axi_ar_ready_i),                
    .axi_ar_valid_o(axi_ar_valid_o),
    .axi_ar_addr_o(axi_ar_addr_o),
//  output [2:0]                        axi_ar_prot_o,
    .axi_ar_id_o(axi_ar_id_o),
//output [AXI_USER_WIDTH-1:0]         axi_ar_user_o,
//output [7:0]                        axi_ar_len_o,
//    output [2:0]                        axi_ar_size_o,
//    output [1:0]                        axi_ar_burst_o,
 //   output                              axi_ar_lock_o,
//    output [3:0]                        axi_ar_cache_o,
//    output [3:0]                        axi_ar_qos_o,
//    output [3:0]                        axi_ar_region_o,
    
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
//    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i   //用户定义信号，可选
);


axi_slave # (
)
u_axi_slave(
    .clock(clk),
    .reset_n(rst_n),
    .axi_ar_ready_o(axi_ar_ready_i),    //从设备已准备好接收地址和相关的控制信号            
    .axi_ar_valid_i(axi_ar_valid_o),
    .axi_ar_addr_i(axi_ar_addr_o),
  //  input [2:0]                         axi_ar_prot_i,    //主设备保护类型
 // .axi_ar_id_i(axi_ar_id_o),  //标识读地址组
   // input [AXI_USER_WIDTH-1:0]         axi_ar_user_i,  //用户定义信号
   // input [7:0]                         axi_ar_len_i, //突发长度，这个字段标识每次突发传输的传输次数
   // input [2:0]                        axi_ar_size_i,  //突发大小，这个字段表示每次突发传输的大小
  //  input [1:0]                         axi_ar_burst_i,  //突发类型，包括突发类型和突发大小信息，该字段决定了每次突发传输时地址的计算方法
  //  input                              axi_ar_lock_i,   //锁定类型，提供关于传输时原子特性的额外信息
  //  input [3:0]                        axi_ar_cache_i,   //存储器类型
  //  input [3:0]                        axi_ar_qos_i,  //服务质量，即每次读传输的QoS标识符，仅AXI4支持
   // input [3:0]                        axi_ar_region_i,  //区域标识符，允许一个从设备的单个物理接口用作多个逻辑接口，仅AXI4支持
    
    .axi_r_ready_i(axi_r_ready_o),   //  	主设备已准备好接收读取的数据和响应信息              
    .axi_r_valid_o(axi_r_valid_i),  //从设备给出的数据和响应信息有效              
    .axi_r_resp_o(axi_r_resp_i), //读响应，这信号表示读传输的状态
    .axi_r_data_o(axi_r_data_i),
    .axi_r_last_o(axi_r_last_i),  //该信号用于标识当前传输是否为突发传输中的最后一次传输
 //   output  [AXI_ID_WIDTH-1:0]          axi_r_id_o,  //读数据ID，该信号用于标识读数据传输
   // output  [AXI_USER_WIDTH-1:0]        axi_r_user_o   //用户定义信号，可选
    .r_valid(axi_valid),
    .axi_req(axi_req),
    

    
    .axi_aw_ready_o(axi_aw_ready_i),    //从设备已准备好接收地址和相关的控制信号          
    .axi_aw_valid_i(axi_aw_valid_o),  
    .axi_aw_addr_i(axi_aw_addr_o),
   // output [2:0]                        axi_aw_prot_o,
  //  output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
  //  output [AXI_USER_WIDTH-1:0]         axi_aw_user_o,
  //  output [7:0]                        axi_aw_len_o,
  //  output [2:0]                        axi_aw_size_o,
  //  output [1:0]                        axi_aw_burst_o,
  //  output                              axi_aw_lock_o,
 //   output [3:0]                        axi_aw_cache_o,
  //  output [3:0]                        axi_aw_qos_o,
 //   output [3:0]                        axi_aw_region_o,

    .axi_w_ready_o(axi_w_ready_i),                
    .axi_w_valid_i(axi_w_valid_o),
    .axi_w_data_i(axi_w_data_o),
    .axi_w_strb_i(axi_w_strb_o),
    .axi_w_last_i(axi_w_last_o),
  //  output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
    
    .axi_b_ready_i(axi_b_ready_o),                
    .axi_b_valid_o(axi_b_valid_i)
  //  output  [1:0]                      axi_b_resp_o                 
 //   input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
 //   input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,


);

/*import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
//import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
wire [63:0] rdata;
always @(*) begin
  pmem_read(curr_pc, rdata);
end
assign inst = rdata[31:0];*/
endmodule