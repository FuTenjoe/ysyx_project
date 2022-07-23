`include "../vsrc/rvseed_defines.v"

module pc_predict (
    input                       clk,     // system clock
    input                       rst_n,   // active low reset
    input  control_rest,
    input      [`CPU_WIDTH-1:0] id_next_pc, // from ex
    output reg                  ena, 
    output reg [`CPU_WIDTH-1:0] curr_pc,  // current pc addr
    input rest_id_mem
);



always @ (posedge clk or negedge rst_n) begin
    if(~rst_n)
        ena <= 1'b0;
    else
        ena <= 1'b1;      
end
always @ (posedge clk or negedge rst_n) begin
    if(~rst_n)begin
        curr_pc <= 32'h8000_0000; 
    end
    else if(rest_id_mem == 1'b1)begin
        curr_pc <= curr_pc; 
    end
    else if (rest_id_mem == 1'b0)begin
        if(control_rest == 1'b1)
             curr_pc <= id_next_pc;
        else 
            curr_pc <= curr_pc + 4;
    end
end    

endmodule
