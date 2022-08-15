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
    input r_done
    //output r_valid
);

reg delay_sig_jalr;
reg [`CPU_WIDTH-1:0] curr_pc;
reg dd_r_done;
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
always @ (posedge clk or negedge rst_n) begin
    if(~rst_n)begin
       dd_r_done <= 1'b0;
    end
    else begin
        if(id_mul | id_div | rest_id_mem|sig_jalr|delay_sig_jalr|control_rest)begin
            dd_r_done <= r_done
        end
        else 
            dd_r_done <= 1'b0;
    end
end
reg test;

always @ (posedge clk or negedge rst_n) begin
    if(~rst_n)begin
        curr_pc <= 32'h8000_0000; 
        test <= 1'b0; 
    end
    else if(r_done|dd_r_done)begin
    if(id_mul)begin
        if(sh_fnsh_flag == 1'b0)begin
            curr_pc <= curr_pc;
        end
        else begin
            curr_pc <= curr_pc + 4;
        end
    end
    else if(id_div)begin
       if(div_finish == 1'b0)begin
            curr_pc <= curr_pc;
        end
        else begin
            curr_pc <= curr_pc + 4;
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
            curr_pc <= id_next_pc;
            test <= 1'b1;
        end
        else 
            curr_pc <= curr_pc + 4;
    end
    end
end

assign axi_curr_pc = curr_pc;

endmodule