`include "../vsrc/rvseed_defines.v"

module axi # (
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

	input                               rw_valid_i,         //IF&MEM输入信号
	output                              rw_ready_o,         //IF&MEM输入信号
    input rw_req_i,
    input [7:0] rw_mask,
    output reg [RW_DATA_WIDTH-1:0]      data_read_o,        //IF&MEM输入信号
    input  [RW_DATA_WIDTH-1:0]          rw_w_data_i,        //IF&MEM输入信号
    input  [RW_ADDR_WIDTH-1:0]          rw_addr_i,          //IF&MEM输入信号   读通道
    input  [1:0]                        rw_size_i,          //IF&MEM输入信号
    input  [63:0]           ww_addr_i,

    // Advanced eXtensible Interface
    input                               axi_aw_ready_i,    //从设备已准备好接收地址和相关的控制信号          
    output                              axi_aw_valid_o,  
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,
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

    input                               axi_w_ready_i,                
    output                              axi_w_valid_o,
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o,
    output [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,
    output                              axi_w_last_o,
  //  output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
    
    output                              axi_b_ready_o,                
    input                               axi_b_valid_i,
 //   input  [1:0]                        axi_b_resp_i,           //不用？        
 //   input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
 //   input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,

    input                               axi_ar_ready_i,                
    output                              axi_ar_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,
 //   output [2:0]                        axi_ar_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o,         //加id
 //   output [AXI_USER_WIDTH-1:0]         axi_ar_user_o,
 //   output [7:0]                        axi_ar_len_o,
 //   output [2:0]                        axi_ar_size_o,
 //   output [1:0]                        axi_ar_burst_o,
 //   output                              axi_ar_lock_o,
 //   output [3:0]                        axi_ar_cache_o,
 //   output [3:0]                        axi_ar_qos_o,
 //   output [3:0]                        axi_ar_region_o,
    
    output                              axi_r_ready_o,                 
    input                               axi_r_valid_i,                
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,
    input                               axi_r_last_i,
    output r_done,
    output ar_hs,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i,      //加id
 //   input  [AXI_USER_WIDTH-1:0]         axi_r_user_i   //用户定义信号，可选

    output w_done,
    output b_hs
);
    wire w_trans    = rw_req_i == `REQ_WRITE;
    wire r_trans    = rw_req_i == `REQ_READ;
//    wire w_valid    = rw_valid_i & w_trans;
 //   wire r_valid    = rw_valid_i & r_trans;
    wire w_valid    = rw_valid_i & w_trans;
    wire r_valid    = rw_valid_i & r_trans;
    assign axi_w_strb_o = rw_mask;
    //handshake
    wire aw_hs = axi_aw_ready_i & axi_aw_valid_o;  //写地址
    wire w_hs = axi_w_ready_i & axi_w_valid_o;  //写数据
    assign b_hs = axi_b_ready_o & axi_b_valid_i;  //写请求
    assign ar_hs = axi_ar_ready_i & axi_ar_valid_o;  //读地址
    wire r_hs = axi_r_ready_o & axi_r_valid_i;  //读数据 

    assign w_done = w_hs & axi_w_last_o;  //写数据完标志
    assign r_done = r_hs & axi_r_last_i;  
//  wire trans_done = w_trans ? b_hs : r_done;  


    // ------------------State Machine------------------TODO
    parameter [1:0] W_STATE_IDLE = 2'b00, W_STATE_ADDR = 2'b01, W_STATE_WRITE = 2'b10, W_STATE_RESP = 2'b11;
    parameter [1:0] R_STATE_IDLE = 2'b00, R_STATE_ADDR = 2'b01, R_STATE_READ  = 2'b10;

    reg [1:0] w_state, r_state;
    wire w_state_idle = w_state == W_STATE_IDLE, w_state_addr = w_state == W_STATE_ADDR, w_state_write = w_state == W_STATE_WRITE, w_state_resp = w_state == W_STATE_RESP;
    wire r_state_idle = r_state == R_STATE_IDLE, r_state_addr = r_state == R_STATE_ADDR, r_state_read  = r_state == R_STATE_READ;
    // 写通道状态切换
    always @(posedge clock) begin
        if (!reset_n) begin
            w_state <= W_STATE_IDLE;
        end
        else begin
                case (w_state)
                    W_STATE_IDLE:  if (w_valid) w_state <= W_STATE_ADDR;
                    W_STATE_ADDR:  if (aw_hs)   w_state <= W_STATE_WRITE;
                    W_STATE_WRITE: if (w_done)  w_state <= W_STATE_RESP;
                    W_STATE_RESP:  if (b_hs)    w_state <= W_STATE_IDLE;
                endcase
        end
    end

    // 读通道状态切换
    always @(posedge clock) begin
        if (!reset_n) begin
            r_state <= R_STATE_IDLE;
        end
        else begin
            //if (r_valid) begin
                case (r_state)
                    R_STATE_IDLE: if (r_valid)  r_state <= R_STATE_ADDR;
                    R_STATE_ADDR:begin
                         if (ar_hs)    r_state <= R_STATE_READ;
                    end
                    R_STATE_READ: if (r_done)   r_state <= R_STATE_IDLE;
                    default:;
                endcase
           // end
        end
    end

// ------------------Number of transmission------------------
/*    reg [7:0] len;
    wire len_reset      = ~reset_n | (w_trans & w_state_idle) | (r_trans & r_state_idle);
    //wire len_incr_en    = (len != axi_len) & (w_hs | r_hs);
    always @(posedge clock) begin
        if (len_reset) begin
            len <= 0;
        end
        else if (len_incr_en) begin
            len <= len + 1;
        end
    end*/


    // ------------------Process Data------------------
    parameter ALIGNED_WIDTH = $clog2(AXI_DATA_WIDTH / 8);  //以2为底取对数结果向上取整
    parameter OFFSET_WIDTH  = $clog2(AXI_DATA_WIDTH);
    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    parameter MASK_WIDTH    = AXI_DATA_WIDTH * 2;
    parameter TRANS_LEN     = RW_DATA_WIDTH / AXI_DATA_WIDTH;
    parameter BLOCK_TRANS   = TRANS_LEN > 1 ? 1'b1 : 1'b0;

/*    wire aligned            = BLOCK_TRANS | rw_addr_i[ALIGNED_WIDTH-1:0] == 0;
    wire size_b             = rw_size_i == `SIZE_B;
    wire size_h             = rw_size_i == `SIZE_H;
    wire size_w             = rw_size_i == `SIZE_W;
    wire size_d             = rw_size_i == `SIZE_D;
    wire [3:0] addr_op1     = {{4-ALIGNED_WIDTH{1'b0}}, rw_addr_i[ALIGNED_WIDTH-1:0]};
    wire [3:0] addr_op2     = ({4{size_b}} & {4'b0})
                                | ({4{size_h}} & {4'b1})
                                | ({4{size_w}} & {4'b11})
                                | ({4{size_d}} & {4'b111})
                                ;
    wire [3:0] addr_end     = addr_op1 + addr_op2;
    wire overstep           = addr_end[3:ALIGNED_WIDTH] != 0;

    wire [7:0] axi_len      = aligned ? TRANS_LEN - 1 : {{7{1'b0}}, overstep};
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    
    wire [AXI_ADDR_WIDTH-1:0] axi_addr          = {rw_addr_i[AXI_ADDR_WIDTH-1:ALIGNED_WIDTH], {ALIGNED_WIDTH{1'b0}}};
    wire [OFFSET_WIDTH-1:0] aligned_offset_l    = {{OFFSET_WIDTH-ALIGNED_WIDTH{1'b0}}, {rw_addr_i[ALIGNED_WIDTH-1:0]}} << 3;
    wire [OFFSET_WIDTH-1:0] aligned_offset_h    = AXI_DATA_WIDTH - aligned_offset_l;
    wire [MASK_WIDTH-1:0] mask                  = (({MASK_WIDTH{size_b}} & {{MASK_WIDTH-8{1'b0}}, 8'hff})
                                                    | ({MASK_WIDTH{size_h}} & {{MASK_WIDTH-16{1'b0}}, 16'hffff})
                                                    | ({MASK_WIDTH{size_w}} & {{MASK_WIDTH-32{1'b0}}, 32'hffffffff})
                                                    | ({MASK_WIDTH{size_d}} & {{MASK_WIDTH-64{1'b0}}, 64'hffffffff_ffffffff})
                                                    ) << aligned_offset_l;
    wire [AXI_DATA_WIDTH-1:0] mask_l            = mask[AXI_DATA_WIDTH-1:0];
    wire [AXI_DATA_WIDTH-1:0] mask_h            = mask[MASK_WIDTH-1:AXI_DATA_WIDTH];

    wire [AXI_ID_WIDTH-1:0] axi_id              = {AXI_ID_WIDTH{1'b0}};
    wire [AXI_USER_WIDTH-1:0] axi_user          = {AXI_USER_WIDTH{1'b0}};

    reg rw_ready;
    wire rw_ready_nxt = trans_done;
    wire rw_ready_en      = trans_done | rw_ready;
    always @(posedge clock) begin
        if (!reset_n) begin
            rw_ready <= 0;
        end
        else if (rw_ready_en) begin
            rw_ready <= rw_ready_nxt;
        end
    end
    assign rw_ready_o     = rw_ready;

    reg [1:0] rw_resp;
    wire rw_resp_nxt = w_trans ? axi_b_resp_i : axi_r_resp_i;
    wire resp_en = trans_done;
    always @(posedge clock) begin
        if (!reset_n) begin
            rw_resp <= 0;
        end
        else if (resp_en) begin
            rw_resp <= rw_resp_nxt;
        end
    end
    assign rw_resp_o      = rw_resp;*/
  // ------------------Write Transaction------------------
   assign axi_aw_valid_o =  w_state_addr;
   assign axi_aw_addr_o = ww_addr_i;
   assign axi_w_valid_o = w_state_write;
   assign axi_w_data_o = rw_w_data_i;
   assign axi_b_ready_o = w_state_resp;
   assign axi_w_last_o = w_state_write;
    // ------------------Read Transaction------------------

    // Read address channel signals
    assign axi_ar_valid_o   = r_state_addr;
    assign axi_ar_addr_o    = rw_addr_i;
    assign axi_ar_id_o = axi_r_id_i;
 //   assign axi_ar_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
 //   assign axi_ar_id_o      = axi_id;                                                                           //初始化信号即可                        
 //   assign axi_ar_user_o    = axi_user;                                                                         //初始化信号即可
   // assign axi_ar_len_o     = axi_len;                                                                          
   // assign axi_ar_size_o    = axi_size;
    //assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;
   // assign axi_ar_lock_o    = 1'b0;                                                                             //初始化信号即可
   // assign axi_ar_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;                                 //初始化信号即可
 //   assign axi_ar_qos_o     = 4'h0;                                                                             //初始化信号即可

    // Read data channel signals
     assign axi_r_ready_o    = r_state_read;

//    wire [AXI_DATA_WIDTH-1:0] axi_r_data_l  = (axi_r_data_i & mask_l) >> aligned_offset_l;
    wire [AXI_DATA_WIDTH-1:0] axi_r_data_l  = axi_r_data_i ;
 //   wire [AXI_DATA_WIDTH-1:0] axi_r_data_h  = (axi_r_data_i & mask_h) << aligned_offset_h;

    generate
        for (genvar i = 0; i < TRANS_LEN; i += 1) begin
            always @(posedge clock) begin
                if (!reset_n) begin
                    data_read_o[i*AXI_DATA_WIDTH+:AXI_DATA_WIDTH] <= 0;
                end
                else if (axi_r_ready_o & axi_r_valid_i) begin
                 /*   if (~aligned & overstep) begin
                        if (len[0]) begin
                            data_read_o[AXI_DATA_WIDTH-1:0] <= data_read_o[AXI_DATA_WIDTH-1:0] | axi_r_data_h;
                        end
                        else begin
                            data_read_o[AXI_DATA_WIDTH-1:0] <= axi_r_data_l;
                        end
                    end
                    else if (len == i) begin*/
                        data_read_o[i*AXI_DATA_WIDTH+:AXI_DATA_WIDTH] <= axi_r_data_l;

                    end
                end
        end
        
    endgenerate

    // Write data channel signals
  




endmodule