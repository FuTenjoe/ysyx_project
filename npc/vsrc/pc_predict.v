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
   // input r_done,
    output reg if_valid,
    input ar_hs,
    input [3:0] return_id,
    output reg [3:0] if_send_id,
    input mem_no_use,
    input [2:0] ex_rd_buf_flag,
    input mem_res_valid,
   // input waxi_valid,
    input wb_res_valid,
    input mret_flag,
    input ecall_flag,
    input w_start,
    input cpu_ready,
    input id_mem_cache
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


parameter IDLE=3'd0,NEXT=3'd1,EN=3'd2,FN=3'd3,MEM=3'd4,WRITE=3'd5,NEXT2=3'd6,NMEM=7;
reg [2:0] present_state,next_state;
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
        IDLE:begin
            //if(ex_rd_buf_flag==3'd1| ex_rd_buf_flag==3'd2|ex_rd_buf_flag==3'd4|ex_rd_buf_flag==3'd6)
            if(id_mem_cache)
                next_state = MEM;
            else
                next_state = NEXT;
        end
        MEM:begin
            if(mem_res_valid)
                next_state = WRITE;
            else
                next_state = MEM;
        end
        WRITE:begin
            if(wb_res_valid)
                next_state = NEXT2;
            else
                next_state = WRITE;
        end
        NEXT:begin
            if(w_start)
                next_state = WRITE;
        /*    else if(ar_hs && return_id ==4'd1)
                next_state = EN;*/
            
            else if(id_mem_cache)
                next_state = MEM;
            else
                next_state = NMEM;
        end
        NMEM:begin
                if(!id_mem_cache)
                next_state = NEXT2;
                else
                next_state = MEM;
            
        end
        NEXT2:begin
                next_state = EN;  
        end
        EN:begin
            if(cpu_ready )
                next_state =FN;
            else
                next_state =EN;
        end
        FN:begin
            if(id_mem_cache)
                next_state = MEM;
            else
            next_state =IDLE;
        end
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
            if_valid <= 1'b0;
            if_send_id <= 4'd0;
        end
        MEM:begin
            if_valid <= 1'b0;
            if_send_id <= 4'd0;
        end
        WRITE:begin
            if_valid <= 1'b0;
            if_send_id <= 4'd0;
        end
        NEXT:begin
            if_valid <= 1'b0;
            if_send_id <= 4'd0;
        end
        NMEM:begin
            if_valid <= 1'b0;
            if_send_id <= 4'd0;
        end
        NEXT2:begin
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
        if((sh_fnsh_flag | div_finish)&&cpu_ready)begin
            md_next_state = TEND;
        end
        else if((sh_fnsh_flag | div_finish)& (!cpu_ready))begin
            md_next_state = AF;
        end
        else begin
            md_next_state =ARTH;
        end
    end
    AF:begin
        if(cpu_ready)
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

reg delay_control_rest;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        delay_control_rest <= 1'b0;
    end
    else begin
        delay_control_rest <= control_rest;
    end
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
       // else if((r_done && md_add_pc!=2'd1 && md_add_pc!=2'd2 &&(return_id == 4'd1))|(md_add_pc==2'd3))
       //else if((cpu_ready && md_add_pc!=2'd1 && md_add_pc!=2'd2 && !delay_control_rest )|(md_add_pc==2'd3))
       else if((cpu_ready && md_add_pc!=2'd1 && md_add_pc!=2'd2 && !delay_control_rest &&(return_id == 4'd1))|(md_add_pc==2'd3))
            curr_pc <= curr_pc + 4;
    end
end    

endmodule