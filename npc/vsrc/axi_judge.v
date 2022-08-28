`include "../vsrc/rvseed_defines.v"

module axi_judge (
    input clk,
    input rst_n,
    input if_valid,
    input [3:0]if_send_id,
    input [31:0] pc,
    input mem_valid,
    input [3:0]mem_send_id,
    input [63:0] mem_addr,
   // input r_done,
   // input r_done2,
    input [3:0] return_id,
    output reg axi_valid,
    output reg [3:0]axi_id,
    output reg [63:0]axi_addr,
    output axi_burst,
    input control_rest,
    output reg [63:0] i_cache_addr,
    input id_mem_cache,
    input cpu_ready2,
    input cpu_ready
);
/*assign axi_valid = (mem_valid == 1'b1)?mem_valid:(if_valid == 1'b1)? if_valid:1'b0;
reg [3:0] reg_id;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        reg_id <= 4'd0;
    end
    else begin
        reg_id <= axi_id;
    end
end
assign axi_id = (mem_valid==1'b1) ? mem_send_id:(if_valid == 1'b1)?if_send_id:reg_id;*/

parameter [2:0] IDLE=3'd0,F1=3'd1,F2=3'd2,FN=3'd3,NEXT1=3'd4,NEXT2=3'd5;
reg [2:0] present_state,next_state;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        present_state <= IDLE;
    end
    else begin
        present_state <= next_state;
    end
end
always@(*)begin
    case(present_state)
    IDLE:begin
        if(if_valid &  mem_valid)
            next_state = F1;
        else if((if_valid) & !(if_valid &  mem_valid))
            next_state = NEXT1;
        else if((mem_valid) & !(if_valid &  mem_valid))
            next_state = NEXT2;
        else
            next_state = IDLE;
    end
    NEXT1:begin
        if(cpu_ready2)
            next_state = FN;
        else
            next_state = NEXT1;
    end
    NEXT2:begin
        if(cpu_ready)
            next_state = FN;
        else
            next_state = NEXT2;
    end
    F1:begin
        if(cpu_ready)
            next_state = F2;
        else 
            next_state = F1;
    end
    F2:begin
        if(cpu_ready2)
            next_state = FN;
        else
            next_state = F2;
    end
    FN:next_state = IDLE;
    default :next_state = IDLE;
    endcase
end
assign axi_valid = (present_state == 3'd1 |present_state == 3'd2|present_state == 3'd4|present_state == 3'd5) ? 1'b1:1'b0;
assign axi_burst = (present_state == 3'd4 |present_state == 3'd2) ? 1'b1:1'b0;

always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
      //  axi_valid <= 1'b0;
        axi_id <= 4'd0;
        axi_addr <= 64'd0;
        i_cache_addr <= 64'd0;
    end
    else begin
        case(present_state)
        IDLE:begin
       //     axi_valid <= 1'b0;
            axi_id <= 4'd0;
            axi_addr <= 64'd0;
            i_cache_addr <= 64'd0;
        end
        NEXT1:begin
        //    axi_valid <= 1'b1;
            axi_id <= if_send_id;
            axi_addr <= {32'b0,pc};
            i_cache_addr <= {32'b0,pc};
        end
        NEXT2:begin
        //    axi_valid <= 1'b1;
            axi_id <=  mem_send_id;
            axi_addr <= mem_addr;
        end
        F1:begin
         //   axi_valid <= 1'b1;
            axi_id <= mem_send_id;
            axi_addr <= mem_addr;
        end
        F2:begin
        //    axi_valid <= 1'b1;
            axi_id <= if_send_id;
            axi_addr <= {32'b0,pc};
        end
        FN:begin
        //    axi_valid <= 1'b0;
            axi_id <= 4'd0;
            axi_addr <= 64'd0;
        end
        default:begin
        //    axi_valid <= 1'b0;
            axi_id <= 4'd0;
            axi_addr <= 64'd0;
        end
    endcase
    end
end

endmodule