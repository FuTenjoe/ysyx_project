`include "../vsrc/rvseed_defines.v"

module axi_slave # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 32,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clock,
    input                               reset_n,
  

  
    output                              axi_ar_ready_o,    //从设备已准备好接收地址和相关的控制信号            
    input                               axi_ar_valid_i,
    input [AXI_ADDR_WIDTH-1:0]          axi_ar_addr_i,
  //  input [2:0]                         axi_ar_prot_i,    //主设备保护类型
  //  input [AXI_ID_WIDTH-1:0]            axi_ar_id_i,  //标识读地址组
   // input [AXI_USER_WIDTH-1:0]         axi_ar_user_i,  //用户定义信号
   // input [7:0]                         axi_ar_len_i, //突发长度，这个字段标识每次突发传输的传输次数
   // input [2:0]                        axi_ar_size_i,  //突发大小，这个字段表示每次突发传输的大小
  //  input [1:0]                         axi_ar_burst_i,  //突发类型，包括突发类型和突发大小信息，该字段决定了每次突发传输时地址的计算方法
  //  input                              axi_ar_lock_i,   //锁定类型，提供关于传输时原子特性的额外信息
  //  input [3:0]                        axi_ar_cache_i,   //存储器类型
  //  input [3:0]                        axi_ar_qos_i,  //服务质量，即每次读传输的QoS标识符，仅AXI4支持
   // input [3:0]                        axi_ar_region_i,  //区域标识符，允许一个从设备的单个物理接口用作多个逻辑接口，仅AXI4支持
    
    input                               axi_r_ready_i,   //  	主设备已准备好接收读取的数据和响应信息              
    output                              axi_r_valid_o,  //从设备给出的数据和响应信息有效              
    output  reg [1:0]                       axi_r_resp_o, //读响应，这信号表示读传输的状态
    output  reg [AXI_DATA_WIDTH-1:0]        axi_r_data_o,
    output                              axi_r_last_o   //该信号用于标识当前传输是否为突发传输中的最后一次传输
 //   output  [AXI_ID_WIDTH-1:0]          axi_r_id_o,  //读数据ID，该信号用于标识读数据传输
   // output  [AXI_USER_WIDTH-1:0]        axi_r_user_o   //用户定义信号，可选
	
);
    
//handshake
wire ar_hs = axi_ar_ready_o & axi_ar_valid_i;
wire r_hs = axi_r_ready_i & axi_r_valid_o;  //读数据 



//parameter [1:0] W_STATE_IDLE = 2'b00, W_STATE_ADDR = 2'b01, W_STATE_WRITE = 2'b10, W_STATE_RESP = 2'b11;
parameter [1:0] R_STATE_IDLE = 2'b00, R_STATE_ADDR = 2'b01, R_STATE_READ  = 2'b10;
reg [1:0] w_state, r_state;
wire w_state_idle = w_state == W_STATE_IDLE, w_state_addr = w_state == W_STATE_ADDR, w_state_write = w_state == W_STATE_WRITE, w_state_resp = w_state == W_STATE_RESP;
wire r_state_idle = r_state == R_STATE_IDLE, r_state_addr = r_state == R_STATE_ADDR, r_state_read  = r_state == R_STATE_READ;

wire r_done = r_hs & axi_r_last_i;  
// 写通道状态切换





// 读通道状态切换
always@(posedge clock)begin
    if (!reset_n) begin
        r_state <= R_STATE_IDLE;
    end
    else begin
        case (r_state)
            R_STATE_IDLE:               r_state <= R_STATE_ADDR;
            R_STATE_ADDR: if (ar_hs)    r_state <= R_STATE_READ;
            R_STATE_READ: if (r_done)   r_state <= R_STATE_IDLE;
            default:;
        endcase
    end
end


// ------------------Read Transaction------------------
assign axi_ar_ready_o = r_state_addr;
assign axi_r_valid_o = r_state_read;
wire [63:0] rdata;

always@(posedge clock)begin
    if(!reset_n)begin
        pmem_read(32'h8000_0000, rdata);
        axi_r_last_o <= 1'b0;
        axi_r_resp_o <= 2'b0;
    end
    else if(ar_hs)begin
        pmem_read(axi_ar_addr_i,rdata);
        axi_r_last_o <= 1'b0;
        axi_r_resp_o <= 2'b0;
    end
    else if(r_hs)begin
        axi_r_data_o <= rdata;
        axi_r_last_o <= 1'b1;
        axi_r_resp_o <= 2'b11;
    end
    else begin
        axi_r_data_o <= axi_r_data_o;
        axi_r_last_o <= axi_r_last_o;
        axi_r_resp_o <= axi_r_resp_o;
    end
end

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
//import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);

/*always @(*) begin
  pmem_read(32'h8000_0000, rdata);
end*/

endmodule