`include "../vsrc/rvseed_defines.v"

module id_control_rest (
    input clk,
    input rst_n,
    input   branch,     // branch flag
    input   jump,       // jump flag
    output  reg control_rest,
    input rest_from_id,
    input mret_flag,
    input ecall_flag,
    input clint_timer_irq
    
   
);

always @(*) begin
    if((branch == 1'b1 | jump == 1'b1|mret_flag == 1'b1|ecall_flag == 1'b1 | clint_timer_irq==1'b1) )
        control_rest = 1'b1;
    else 
        control_rest = 1'b0;
end



endmodule
