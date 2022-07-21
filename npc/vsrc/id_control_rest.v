`include "../vsrc/rvseed_defines.v"

module id_control_rest (
    input   branch,     // branch flag
    input   jump,       // jump flag
    output  reg control_rest
    
   
);


//reg [63:0] buff;
// register write
// register 1 read
always @(*) begin
    if(branch == 1'b1 | jump == 1'b1)
        control_rest = 1'b1;
    else 
        control_rest = 1'b0;
end



endmodule
