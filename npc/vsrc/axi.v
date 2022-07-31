`include "../vsrc/rvseed_defines.v"

module axi(
    input                       clk,     // system clock
    input                       rst_n,   // active low reset
    //AXI-Lite bus
    //Read address channel
    input [63:0] curr_pc,
    input if_valid,
    output [`AXI_ADRESS_WIDTH -1 :0] maxi_araddr_o,   //读地址，读突发操作中第一次数据传输的地址
    input maxi_arready,   //从设备已准备好接收地址和相关的控制信号
    output maxi_arvalid_o,   //	主设备给出的地址和相关控制信号有效

    //output [7:0]                        maxi_arlen,  //读个数
    //output [2:0]                        maxi_arsize,  //读字节数

    //Read data channel
    input maxi_rvalid,  //从设备给出的数据和响应信息有效
    output maxi_rready_o,    //主设备已准备好接收读取的数据和响应信息
    input [63:0] maxi_rdata,  //读出的数据
    input  axi_r_last,
    output [31:0] axi_inst_o,

    //Write address channel
    input wb_valid,
    input [63:0] wb_waddr,
    output [`AXI_ADRESS_WIDTH -1 :0] maxi_awaddr_o,  //写地址，写突发操作中第一次数据传输的地址
    output maxi_awvalid_o,          //主设备给出的地址和相关控制信号有效
    input maxi_awready,           //从设备已准备好接收地址和相关的控制信号
     
    //Write data channel
    input [63:0] wb_data,
    output maxi_wvalid_o,            //主设备给出的数据和字节选通信号有效
    input maxi_wready,          //从设备已准备好接收数据选通信号
    output [63:0] maxi_wdata_o,    //写出的数据

    //Write response channel
    input maxi_bvalid,        //从设备给出的写响应信号有效
    output maxi_bready_o,       //主设备已准备好接收写响应信号
 


    //Registers
    output reg [63:0] axi_reg1,
    output reg [63:0] axi_reg2
);
//读状态状态机
parameter READ_IDLE = 3'd0, READ_REQ = 3'd1, READ_READY = 3'd2, READ_LAST = 3'd3;
reg [2:0] current_state,next_state;

reg [`AXI_ADRESS_WIDTH -1 :0] maxi_araddr;
reg maxi_arvalid;
reg maxi_rready;
reg [31:0] axi_inst;
assign maxi_araddr_o = maxi_araddr;
assign maxi_arvalid_o = maxi_arvalid;
assign maxi_rready_o = maxi_rready;
assign axi_inst_o = axi_inst;

always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        current_state <= 3'd0;
    end
    else begin
        current_state <= next_state;
    end
end

always@(*)begin
    case(current_state)
    READ_IDLE:begin
        if(if_valid)begin
            next_state = READ_REQ;
        end
        else
            next_state = READ_IDLE;
    end
    READ_REQ:begin
        if(maxi_arready)begin
            next_state = READ_READY;  //完成读地址握手
        end
        else begin
            next_state = READ_REQ;
        end
    end
    READ_READY:begin
        next_state = READ_LAST;
    end
    READ_LAST:begin
        if(maxi_rvalid && axi_r_last)begin
            next_state = READ_IDLE;
        end
        else begin
            next_state = READ_LAST;
        end
    end
    default: next_state = READ_IDLE;
    endcase
end

always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        maxi_araddr <= 32'h8000_0000;
        maxi_arvalid <= 1'b0;
        maxi_rready <= 1'b0;
    end
    else begin
        case(current_state)
        READ_IDLE:begin
            maxi_araddr <= 32'h8000_0000;
            maxi_arvalid <= 1'b0;
            maxi_rready <= 1'b0;
            axi_inst <= axi_inst;
        end
        READ_REQ:begin
            maxi_araddr <= curr_pc;
            maxi_arvalid <= 1'b1;
            maxi_rready <= 1'b0;
            axi_inst <= axi_inst;
        end
        READ_READY:begin
            maxi_araddr <= maxi_araddr;
            maxi_arvalid <= 1'b0;      //无效也不影响
            maxi_rready <= 1'b1;
            axi_inst <= axi_inst;
        end
        READ_LAST:begin
            maxi_araddr <= maxi_araddr;
            maxi_arvalid <= 1'b0;
            maxi_rready <= 1'b0;
            axi_inst <= maxi_rdata;
        end
        default:begin
            maxi_araddr <= 32'h8000_0000;
            maxi_arvalid <= 1'b0;
            maxi_rready <= 1'b0;
            axi_inst <= axi_inst;
        end
        endcase
    end
end


//写状态状态机

parameter WRITE_IDLE = 3'd0, WRITE_REQ = 3'd1, WRITE_READY = 3'd2, WRITE_LAST = 3'd3;
reg [2:0] w_current_state,w_next_state;

reg [`AXI_ADRESS_WIDTH -1 :0] maxi_awaddr;
reg maxi_awvalid;
reg maxi_wvalid;
reg [63:0] maxi_wdata;
reg maxi_bready;
assign maxi_awaddr_o = maxi_awaddr;
assign maxi_awvalid_o = maxi_awvalid;
assign maxi_wdata_o = maxi_wdata;
assign maxi_bready_o = maxi_bready;
assign maxi_wvalid_o = maxi_wvalid;

always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        w_current_state <= 3'd0;
    end
    else begin
        w_current_state <= w_next_state;
    end
end

always@(*)begin
    case(w_current_state)
    WRITE_IDLE:begin
        if(wb_valid)begin
            w_next_state = WRITE_REQ;
        end
        else begin
            w_next_state = WRITE_IDLE;
        end
    end
    WRITE_REQ:begin
        if(maxi_awready)begin
            w_next_state = WRITE_READY;
        end
        else begin
            w_next_state = WRITE_REQ;
        end
    end
    WRITE_READY:begin
        if(maxi_wready)begin
            w_next_state = WRITE_LAST;
        end
        else begin
            w_next_state = WRITE_LAST;
        end
    end
    WRITE_LAST:begin
        if(maxi_bvalid)begin
            w_next_state = WRITE_IDLE;
        end
        else begin
            w_next_state = WRITE_LAST;
        end
    end
    default: w_next_state = WRITE_IDLE;
    endcase
end

always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        maxi_awaddr <= 32'h0;
        maxi_awvalid <= 1'b0;
        maxi_wvalid <= 1'b0;
        maxi_wdata <= 64'h0;
        maxi_bready <= 1'b0;
    end
    else begin
        case(w_current_state)
        WRITE_IDLE:begin
            maxi_awaddr <= 32'h0;
            maxi_awvalid <= 1'b0;
            maxi_wvalid <= 1'b0;
            maxi_wdata <= 64'h0;
            maxi_bready <= 1'b0;
        end
        WRITE_REQ:begin
            maxi_awaddr <= wb_waddr;
            maxi_awvalid <= 1'b1;
            maxi_wvalid <= 1'b0;
            maxi_wdata <= 64'h0;
            maxi_bready <= 1'b0;
        end
        WRITE_READY:begin
            maxi_awaddr <= maxi_awaddr;
            maxi_awvalid <= 1'b0;
            maxi_wvalid <= 1'b1;
            maxi_wdata <= wb_data;
            maxi_bready <= 1'b0;
        end
        WRITE_LAST:begin
            maxi_awaddr <= maxi_awaddr;
            maxi_awvalid <= 1'b0;
            maxi_wvalid <= 1'b0;
            maxi_wdata <= maxi_wdata;
            maxi_bready <= 1'b1;
        end
        default:begin
            maxi_awaddr <= 32'h0;
            maxi_awvalid <= 1'b0;
            maxi_wvalid <= 1'b0;
            maxi_wdata <= 64'h0;
            maxi_bready <= 1'b0;
        end
        endcase
    end
end

endmodule
