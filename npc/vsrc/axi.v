`include "../vsrc/rvseed_defines.v"

module axi(
    input                       clk,     // system clock
    input                       rst_n,   // active low reset
    //AXI-Lite bus
    //Read address channel
    input [63:0] curr_pc,
    input if_valid,
    output [`AXI_ADRESS_WIDTH -1 :0] maxi_araddr,   //读地址，读突发操作中第一次数据传输的地址
    input maxi_arready,   //从设备已准备好接收地址和相关的控制信号
    output maxi_arvalid,   //	主设备给出的地址和相关控制信号有效

    //output [7:0]                        maxi_arlen,  //读个数
    //output [2:0]                        maxi_arsize,  //读字节数

    //Read data channel
    input maxi_rvalid,  //从设备给出的数据和响应信息有效
    output maxi_rready,    //主设备已准备好接收读取的数据和响应信息
    input [63:0] maxi_rdata,  //读出的数据
    input  axi_r_last,
    output reg [31:0] axi_inst
    //Registers
    //output reg [63:0] axi_reg1,
    //output reg [63:0] axi_reg2
);

parameter READ_IDLE = 3'd0, READ_REQ = 3'd1, READ_READY = 3'd2, READ_LAST = 3'd3;
reg [2:0] current_state,next_state;

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
            next_state = READ_IDLE;
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
            maxi_arvalid <= 1'b0;
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


endmodule
