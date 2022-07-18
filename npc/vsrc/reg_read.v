`include "../vsrc/rvseed_defines.v"

module reg_read (
    input                            clk,
    input                            rst_n,
    input reg [63:0] reg_f [0:`REG_DATA_DEPTH-1],
    input      [`REG_ADDR_WIDTH-1:0] reg1_raddr, // register 1 read address
    input      [`REG_ADDR_WIDTH-1:0] reg2_raddr, // register 2 read address
    output reg [63:0]      reg1_rdata, // register 1 read data
    output reg [63:0]      reg2_rdata, // register 2 read data
   
);


//reg [63:0] buff;
// register write
// register 1 read
always @(*) begin
    if(reg1_raddr == `REG_ADDR_WIDTH'b0)
        reg1_rdata = `CPU_WIDTH'b0;
    else
        reg1_rdata = reg_f[reg1_raddr];
end

// register 2 read
always @(*) begin
    if(reg2_raddr == `REG_ADDR_WIDTH'b0)
        reg2_rdata = `CPU_WIDTH'b0;
    else
        reg2_rdata = reg_f[reg2_raddr];
end



endmodule
