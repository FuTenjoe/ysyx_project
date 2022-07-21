`include "../vsrc/rvseed_defines.v"

module id_control_rest (
    input rest_from_id,
    input   branch,     // branch flag
    input   jump,       // jump flag
    output  reg control_rest
    
   
);


//reg [63:0] buff;
// register write
// register 1 read
always @(*) begin
    if(branch == 1'b1 | jump == 1'b1)
        if(rest_from_id == 1'b0)
        control_rest = 1'b1;
        else if(rest_from_id == 1'b1)
        control_rest = rest_from_id;
    else 
        control_rest = 1'b0;
end



endmodule
