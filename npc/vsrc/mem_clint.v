`include "../vsrc/rvseed_defines.v"

module mem_clint  (
    input clk,
    input rst_n,
    input mem_mmio_valid,
    input [63:0] mtimecmp,

    input [63:0] alu_src1,
    input [63:0] alu_src2,
    output reg clint_timer_irq,
    output reg [63:0] read_data,
    output reg clint
);
reg [63:0] mtime = 64'd0;
//reg [63:0] mtimecmp = 64'd100;

always@(posedge clk)begin
    if(!rst_n)begin
        mtime <= 64'd0;
    end
    else begin
        mtime <= mtime + 1'b1;
    end
end

always@(*)begin
    if(mem_mmio_valid )begin
        if(alu_src1 + alu_src2 == 64'h0000_0000_0200_4000)begin
            clint = 1'b1;
            read_data = mtimecmp;
        end
        else if(alu_src1 + alu_src2 == 64'h0000_0000_0200_BFF8)begin
            clint = 1'b1;
            read_data = mtime;
        end
        else begin
            clint = 1'b0;
            read_data = 64'd0;
        end
    end
    else begin
        clint = 1'b0;
        read_data = 64'd0;
    end
end

always@(posedge clk)begin
    if(!rst_n)begin
        clint_timer_irq <= 1'b0;
    end
    else if(mtime == mtimecmp)begin
        clint_timer_irq <= 1'b1;
    end
    else if(mtime <mtimecmp)begin
        clint_timer_irq <= 1'b0;
    end
    else begin
        clint_timer_irq <= clint_timer_irq;
    end
end





endmodule