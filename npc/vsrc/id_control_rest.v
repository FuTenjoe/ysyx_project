`include "../vsrc/rvseed_defines.v"

module id_control_rest (
    input clk,
    input rst_n,
    input   branch,     // branch flag
    input   jump,       // jump flag
    output  reg control_rest
    
   
);
reg ct_rest_1;
reg ct_rest_2;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        ct_rest_1 <= 1'b0;
        //ct_rest_2 <= 1'b0;
    end
    else if(ct_rest_1 != 1'b1 & control_rest == 1'b1)
        ct_rest_1 <= control_rest;
    else
        ct_rest_1 <= 1'b0;
end
//reg [63:0] buff;
// register write
// register 1 read
always @(*) begin
    if((branch == 1'b1 | jump == 1'b1) & ct_rest_1 == 1'b0)
        control_rest = 1'b1;
    else 
        control_rest = 1'b0;
end



endmodule
