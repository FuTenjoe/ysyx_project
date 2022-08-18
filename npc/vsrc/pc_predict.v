`include "../vsrc/rvseed_defines.v"

module pc_predict (
    input                       clk,     // system clock
    input                       rst_n,   // active low reset
    input  control_rest,
    input      [`CPU_WIDTH-1:0] id_next_pc, // from ex
    output reg                  ena, 
    output reg [`CPU_WIDTH-1:0] curr_pc,  // current pc addr
    input rest_id_mem,
    input [`CPU_WIDTH-1:0] id_curr_pc,
    input sig_jalr,
    input id_mul,
    input sh_fnsh_flag,
    input id_div,
    input div_finish,
    input r_done,
    output reg if_valid,
    input ar_hs,
    input [3:0] return_id,
    output reg [3:0] if_send_id
);

reg delay_sig_jalr;

always @ (posedge clk or negedge rst_n) begin
    if(~rst_n)begin
        ena <= 1'b0;
        delay_sig_jalr <= 1'b0;
    end
    else begin
        ena <= 1'b1;      
        delay_sig_jalr <= sig_jalr;
    end
end


parameter IDLE=2'd0, EN=2'd1,FN=2'd2;
reg [1:0] present_state,next_state;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        present_state<= IDLE;
    end
    else begin
        present_state<= next_state;
    end
end
always@(*)begin
    case(present_state)
        IDLE: begin
            if(ar_hs)
                next_state = EN;
            else 
                next_state = IDLE;
        end
        EN:begin
            if(r_done && return_id == 4'd1)
                next_state =FN;
            else
                next_state =EN;
        end
        FN:next_state =IDLE;
    default:next_state = IDLE;
    endcase
end

always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        if_valid <= 1'b0;
        if_send_id <= 4'd0;
    end
    else begin
        case(present_state)
        IDLE:begin
            if_valid <= 1'b1;
            if_send_id <= 4'd1;
        end
        EN: begin
            if_valid <= 1'b0;
            if_send_id <= 4'd1;
        end
        FN: begin
            if_valid <= 1'b0;
            if_send_id <= 4'd0;
        end
        endcase
    end
end



reg [1:0]md_add_pc;
parameter [1:0] MD_IDLE=2'd0,ARTH=2'd1,AF=2'd2,TEND=2'd3;
reg [1:0] md_present_state,md_next_state;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        md_present_state <= MD_IDLE;
    end
    else begin
        md_present_state <= md_next_state;
    end
end
always@(*)begin
    case(md_present_state)
    MD_IDLE:begin
        if(id_mul | id_div)begin
            md_next_state = ARTH;
        end
        else begin
            md_next_state = MD_IDLE;
        end
    end
    ARTH:begin
        if((sh_fnsh_flag | div_finish)&r_done)begin
            md_next_state = TEND;
        end
        else if((sh_fnsh_flag | div_finish)& (!r_done))begin
            md_next_state = AF;
        end
        else begin
            md_next_state =ARTH;
        end
    end
    AF:begin
        if(r_done)
            md_next_state = TEND;
        else
            md_next_state = AF;
    end
    TEND: md_next_state = MD_IDLE;
    default: md_next_state = MD_IDLE;
    endcase
end
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        md_add_pc <= 2'd0;
    end
    case(md_present_state)
        MD_IDLE:md_add_pc <= 2'd0;
        ARTH:md_add_pc <= 2'd1;
        AF: md_add_pc <= 2'd2;
        TEND:begin
            if(!control_rest)
            md_add_pc <=2'd3;
            else
            md_add_pc <= 2'd0;
        end
        default:md_add_pc <= 2'd0;
    endcase
end

always @ (posedge clk or negedge rst_n) begin
    if(~rst_n)begin
        curr_pc <= 32'h8000_0000; 
        //add_pc <= 1'b0;
    end
    else if(id_mul)begin
        if(sh_fnsh_flag == 1'b0 && md_add_pc!=2'd3)begin
            curr_pc <= curr_pc;
        end
        else if(md_add_pc==2'd3)begin
            curr_pc <= curr_pc + 4;
           //add_pc <= 1'b1;
        end
    end
    else if(id_div)begin
        if(div_finish == 1'b0 && md_add_pc!=2'd3)begin
            curr_pc <= curr_pc;
        end
        else if(md_add_pc==2'd3)begin
            curr_pc <= curr_pc + 4;
            //add_pc <= 1'b1;
        end
    end
    else if(rest_id_mem == 1'b1)begin
        curr_pc <= curr_pc;  //?
    end
    else if(sig_jalr == 1'b1)begin
        curr_pc <= curr_pc;
    end
    else if(delay_sig_jalr == 1'b1)begin
        curr_pc <= id_next_pc;
    end
    else if (rest_id_mem == 1'b0)begin
        if(control_rest == 1'b1)begin
         /*   if(id_next_pc != curr_pc +4)
             curr_pc <= id_next_pc;
             else 
             curr_pc <= curr_pc;*/
             curr_pc <= id_next_pc;
        end
        else if((r_done && md_add_pc!=2'd1 && md_add_pc!=2'd2)|(md_add_pc==2'd3))
            curr_pc <= curr_pc + 4;
    end
end    

endmodule