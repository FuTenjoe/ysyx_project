`include "../vsrc/rvseed_defines.v"

module id_rest (
    input clk,
    input rst_n,
    input [64:0] id_pc,
    input      [`REG_ADDR_WIDTH-1:0] reg1_raddr, // register 1 read address
    input      [`REG_ADDR_WIDTH-1:0] reg2_raddr, // register 2 read address
    input [`REG_ADDR_WIDTH-1:0] reg_waddr,
    input write_ready,
    output reg rest_from_id

);


//reg [63:0] buff;
// register write
// register 1 read
always @(*) begin
    if(id_pc != 32'h0000_0000 & id_pc != 32'h8000_0000 )begin
        if(reg1_raddr == reg_waddr | reg2_raddr == reg_waddr)
                rest_from_id = 1'b1;
        else 
                rest_from_id = 1'b0;
    end
    else 
        rest_from_id = 1'b0;
            
end



endmodule
