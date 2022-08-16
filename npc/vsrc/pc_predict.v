`include "../vsrc/rvseed_defines.v"

module pc_predict (
    input                       clk,     // system clock
    input                       rst_n,   // active low reset
    input  control_rest,
    input      [`CPU_WIDTH-1:0] id_next_pc, // from ex
    output reg                  ena, 
    output reg [`CPU_WIDTH-1:0] axi_curr_pc,  // current pc addr
    input rest_id_mem,
    input [`CPU_WIDTH-1:0] id_curr_pc,
    input sig_jalr,
    input id_mul,
    input sh_fnsh_flag,
    input id_div,
    input div_finish,
    input r_done,
    output dd_r_done,
    output reg [1:0]md_r_done
    //output r_valid
);

reg delay_sig_jalr;
reg [`CPU_WIDTH-1:0] curr_pc;

//reg [`CPU_WIDTH-1:0] reg_axi_curr_pc;

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
//wire dd_r_done;
//reg reg_dd_r_done;
//assign dd_r_done = ( rest_id_mem|sig_jalr|delay_sig_jalr|control_rest|id_mul) ? 1'b1:1'b0;
//reg [1:0]md_r_done;
parameter IDLE = 2'd0,ARTH = 2'd1, AF=2'd2, TEND = 2'd3;
reg [1:0] present_state,next_state;
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
            if(id_div|id_mul)
                next_state =ARTH;
            else 
                next_state =IDLE;
        end
        ARTH:begin
            if(div_finish|sh_fnsh_flag)
                next_state = AF;
            else
                next_state = ARTH;
        end
        AF:begin
            if(r_done)
                next_state =TEND;
            else
                next_state = AF;
        end
        TEND:begin
            next_state =IDLE;
        end
    default: next_state = IDLE;
    endcase
end
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        md_r_done <= 2'd0;
    end
    else begin
        case(present_state)
        IDLE:md_r_done <= 2'd0;
        ARTH:md_r_done <= 2'd1;
        AF:md_r_done <= 2'd1;
        TEND:md_r_done <= 2'd2;
        default:md_r_done <= 2'd0;
        endcase
    end
end






reg test;

always @ (posedge clk or negedge rst_n) begin
    if(~rst_n)begin
        curr_pc <= 32'h8000_0000; 
        test <= 1'b1; 
    end
    //else if(r_done|dd_r_done)begin
    else if(id_mul)begin
        if(sh_fnsh_flag == 1'b0)begin
            curr_pc <= curr_pc;
        end
    /*    else begin
            curr_pc <= curr_pc + 4;
        end*/
    end
    else if(id_div)begin
       if(div_finish == 1'b0)begin
            curr_pc <= curr_pc;
        end
    /*    else begin
            curr_pc <= curr_pc + 4;
        end*/
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
            curr_pc <= id_next_pc;
            test <= 1'b1;
        end
        else if(r_done)
            curr_pc <= curr_pc + 4;
    end
    //end
end

assign axi_curr_pc = curr_pc;

endmodule