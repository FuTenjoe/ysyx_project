`include "../vsrc/rvseed_defines.v"

module id_rest (

    
    input      [`REG_ADDR_WIDTH-1:0] reg1_raddr, // register 1 read address
    input      [`REG_ADDR_WIDTH-1:0] reg2_raddr, // register 2 read address
    input [`REG_ADDR_WIDTH-1:0] wb_reg_waddr,
    input write_ready,
    output reg rest_from_id
   
);


//reg [63:0] buff;
// register write
// register 1 read
always @(*) begin
    if(reg1_raddr == wb_reg_waddr | reg2_raddr == wb_reg_waddr)begin
        if(write_ready == 1'b1)
            rest_from_id = 1'b0;
        else
            rest_from_id = 1'b1;
    end
    else 
        rest_from_id = 1'b0;
            
end



endmodule
