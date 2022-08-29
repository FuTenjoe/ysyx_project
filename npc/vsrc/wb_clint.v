`include "../vsrc/rvseed_defines.v"

module wb_clint  (
    input clk,
    input rst_n,
    input [63:0] mmio_reg_waddr,
    
    
    input [63:0]reg_wdata,

    input wr_mmio_valid,

    output reg [63:0] mtimecmp,
    output reg wr_finish
   
   
);

//reg [63:0] mtimecmp = 64'd100;

always@(posedge clk)begin
    if(!rst_n)begin
        wr_finish <= 1'b0;
        mtimecmp <= 64'd10;
    end
    else begin
        if(wr_mmio_valid && mmio_reg_waddr == 64'h0000_0000_0200_4000)begin
            wr_finish <= 1'b1;
            mtimecmp <= reg_wdata;
        end
        else begin
            wr_finish <= 1'b0;
            mtimecmp <= mtimecmp;
        end
    end
end


endmodule