`include "../vsrc/rvseed_defines.v"

module mem_stage(
    input [2:0] rd_buf_flag,
    input [`ALU_OP_WIDTH-1:0] alu_op,
    input [`CPU_WIDTH-1:0] alu_src1,
    input [`CPU_WIDTH-1:0] alu_src2,
    //input no_use,
    //output reg [63:0] rd_buf_lw,
    output reg [63:0] sign_alu_res,
    input [63:0] mem_from_ex_alu_res,
    input [3:0] mem_expand_signed,
    output [63:0] wb_hazard_result,
    input mem_cunqu_hazard
    
);

reg [63:0] rd_buf_lw;
reg [63:0] alu_res;
always@(*)begin
    
    case (alu_op)
        `ALU_ADD: begin 
        if(rd_buf_flag == 3'd1)
            alu_res = rd_buf_lw[31:0];
        else if(rd_buf_flag == 3'd2)
            alu_res = rd_buf_lw[63:0];
        else if(rd_buf_flag == 3'd4)
            alu_res = rd_buf_lw[7:0]; 
        else if(rd_buf_flag == 3'd6)   //lh
            alu_res = rd_buf_lw[15:0]; 
        end
        default: alu_res = alu_res;
    endcase
    
end
always@(*)begin
    case(mem_expand_signed)
    4'd0:
        sign_alu_res = alu_res;   //jalr  
    4'd1:begin
        sign_alu_res = {{32{alu_res[31]}},alu_res[31:0]};   //lw  addw  divw
       
    end
    4'd2:begin
        sign_alu_res = alu_res[31:0];            //addw错误
    end
    4'd3:begin
        sign_alu_res = {{48{alu_res[15]}},alu_res[15:0]}; //lh
        
    end
    default:begin   
        sign_alu_res = alu_res; 
    end
    endcase
end


always@(*)begin
    if((rd_buf_flag == 3'd1 | rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6) )
        wb_hazard_result = sign_alu_res;
    else
        wb_hazard_result = mem_from_ex_alu_res;
end

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
always @(*) begin
    if(rd_buf_flag == 3'd1 | rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6)
        pmem_read(alu_src1 +  alu_src2, rd_buf_lw);
    else
        rd_buf_lw = 64'd0;
end
endmodule