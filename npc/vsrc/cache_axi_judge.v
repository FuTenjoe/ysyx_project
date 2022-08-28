`include "../vsrc/rvseed_defines.v"

module cache_axi_judge (
    input if_mem_req_valid,
    input mem_valid,
    input dd_r_done2,
    input [3:0] return_id,
    input [63:0] if_mem_req_addr,
    input [63:0] mem_addr,
    input w_axi_valid,

    output axi_valid,
    output axi_req,
    output [3:0] axi_ar_id,
    output axi_burst,
    output reg [63:0] axi_r_addr
);

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
        if(if_mem_req_valid &  mem_valid)
            next_state = F1;
        else if((if_mem_req_valid) & !(if_mem_req_valid &  mem_valid))
            next_state = NEXT1;
        else if((mem_valid) & !(if_mem_req_valid &  mem_valid))
            next_state = NEXT2;
        else
            next_state = IDLE;
    end
    NEXT1:begin
        if(cpu_ready)
            next_state = FN;
        else
            next_state = NEXT1;
    end
    NEXT2:begin
        if(r_done && return_id == 1'd2)
            next_state = FN;
        else
            next_state = NEXT2;
    end
    F1:begin
        if(r_done && return_id == 1'd2 )
            next_state = F2;
        else 
            next_state = F1;
    end
    F2:begin
        if(cpu_ready)
            next_state = FN;
        else
            next_state = F2;
    end
    FN:next_state = IDLE;
    default :next_state = IDLE;
    endcase
end

assign axi_valid = (present_state == 3'd1 ||present_state == 3'd2 ||present_state == 3'd4 || present_state == 3'd5) ? 1'b1:1'b0;
assign axi_burst = (present_state == 3'd4 ||present_state == 3'd2) ? 1'b1:1'b0;
assign axi_ar_id = (present_state == 3'd4 ||present_state == 3'd2) ? 4'd1:((present_state ==3'd1 || present_state == 3'd5 ) ? 4'd2:4'd0);
assign axi_req = w_axi_valid ? 1'b1:1'b0;
always@(posedge clk )begin
    if(!rst_n)begin
      //  axi_valid <= 1'b0;
      //  axi_id <= 4'd0;
        axi_r_addr <= 64'd0;
    end
    else begin
        case(present_state)
        IDLE:begin
       //     axi_valid <= 1'b0;
       //     axi_id <= 4'd0;
            axi_r_addr <= 64'd0;
        end
        NEXT1:begin
        //    axi_valid <= 1'b1;
        //    axi_id <= 3'd1;
            axi_r_addr <= if_mem_req_addr;
        end
        NEXT2:begin
        //    axi_valid <= 1'b1;
        //    axi_id <=  3'd2;
            axi_r_addr <= mem_addr;
        end
        F1:begin
         //   axi_valid <= 1'b1;
         //   axi_id <= 3'd2;
            axi_r_addr <= mem_addr;
        end
        F2:begin
        //    axi_valid <= 1'b1;
        //    axi_id <= 3'd1;
            axi_r_addr <= if_mem_req_addr;
        end
        FN:begin
        //    axi_valid <= 1'b0;
        //    axi_id <= 4'd0;
            axi_r_addr <= 64'd0;
        end
        default:begin
        //    axi_valid <= 1'b0;
        //    axi_id <= 4'd0;
            axi_r_addr <= 64'd0;
        end
    endcase
    end
end


endmodule