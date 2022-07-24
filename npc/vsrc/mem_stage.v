`include "../vsrc/rvseed_defines.v"

module mem_stage(
    input [2:0] rd_buf_flag,
    input [`ALU_OP_WIDTH-1:0] alu_op,
    input [`CPU_WIDTH-1:0] alu_src1,
    input [`CPU_WIDTH-1:0] alu_src2,
    input no_use,
    //output reg [63:0] rd_buf_lw,
    output reg [63:0] alu_res,
    input [63:0] mem_from_ex_alu_res,
    output [63:0] wb_hazard_result
    
);

reg [63:0] rd_buf_lw;
always@(*)begin
    if(no_use == 1'b0)begin
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
    else
        alu_res = alu_res;
end

always@(*)begin
    if(rd_buf_flag == 3'd1 | rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6)
        wb_hazard_result = alu_res;
    else
        wb_hazard_result = mem_from_ex_alu_res;
end

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
always @(*) begin
    if(no_use == 1'b0)begin
        if(rd_buf_flag == 3'd1 | rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6)
            pmem_read(alu_src1 +  alu_src2, rd_buf_lw);
    end
end
endmodule