`include "../vsrc/rvseed_defines.v"

module id_rest (
    input clk,
    input rst_n,
    input [64:0] id_c,
    input      [`REG_ADDR_WIDTH-1:0] reg1_raddr, // register 1 read address
    input      [`REG_ADDR_WIDTH-1:0] reg2_raddr, // register 2 read address
    input [`REG_ADDR_WIDTH-1:0] wb_reg_waddr,
    input write_ready,
    output reg rest_from_id
   
);


//reg [63:0] buff;
// register write
// register 1 read
reg write_1;
reg write_2;
//reg write_3;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        write_1 <= 1'b0;
        write_2 <= 1'b0;
      
    end
    else if( write_2 == 1'b1 & write_1 == 1'b1)begin
        write_1 <= 1'b0;
        write_2 <= 1'b0;
      
    end
    else if(reg1_raddr == wb_reg_waddr | reg2_raddr == wb_reg_waddr)begin
        write_1 <= write_ready;
        write_2 <= write_1;
        
    end
end

always @(*) begin
    if(id_pc != 32'h8000_0000)begin
        if(reg1_raddr == wb_reg_waddr | reg2_raddr == wb_reg_waddr)begin
            if(write_2 == 1'b0)
                rest_from_id = 1'b1;
            else
                rest_from_id = 1'b0;
        end
    end
    else 
        rest_from_id = 1'b0;
            
end



endmodule
