`include "../vsrc/rvseed_defines.v"

module pc_predict (
    input                       clk,     // system clock
    input                       rst_n,   // active low reset
    input  control_rest,
    input      [`CPU_WIDTH-1:0] ex_next_pc, // from ex
    output reg                  ena, 
    output reg [`CPU_WIDTH-1:0] curr_pc,  // current pc addr
    input ex_pc_ready,
    input rest_from_id,
    input [63:0] id_pc,
    output reg  delay_rest
);

always@(posedge clk or negedge rst_n)begin
    if(control_rest == 1'b1)
        delay_rest <= control_rest;
    else
        delay_rest <= 1'b0;
end


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
/*    else if((control_rest == 1'b1) & (pc_ok1 == 1'b0))begin
        curr_pc <= 32'h8000_0000;
        //curr_pc <= curr_pc;
       
    end*/
    else if((control_rest == 1'b1) )begin
            curr_pc <= ex_next_pc;
    end
    else if((delay_rest == 1'b1) )begin
            curr_pc <= ex_next_pc;
    end
    else if(rest_from_id == 1'b1 )begin
        curr_pc <= curr_pc; 
    end
    else begin
        curr_pc <= curr_pc + 4;
    end
end    

endmodule
