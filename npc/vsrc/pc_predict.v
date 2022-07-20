`include "../vsrc/rvseed_defines.v"

module pc_predict (
    input                       clk,     // system clock
    input                       rst_n,   // active low reset
    input  control_rest,
    input      [`CPU_WIDTH-1:0] ex_next_pc, // from ex
    output reg                  ena, 
    output reg [`CPU_WIDTH-1:0] curr_pc,  // current pc addr
    input ex_pc_ready,
    output pc_no_use,
    input rest_from_id,
    input [63:0] id_pc
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
        pc_no_use <= 1'b0;
    end
    else if((control_rest == 1'b1) & (ex_pc_ready == 1'b0))begin
        curr_pc <= 32'h8000_0000;
        pc_no_use <= 1'b1;
    end
    else if((control_rest == 1'b1) & (ex_pc_ready == 1'b1))begin
        curr_pc <= ex_next_pc;
        pc_no_use <= 1'b0;
    end
    else if(rest_from_id == 1'b1 )begin
        curr_pc <= id_pc;
        pc_no_use <= 1'b0;
    end
    else begin
        curr_pc <= curr_pc + 4;
        pc_no_use <= 1'b0;
    end
end    

endmodule
