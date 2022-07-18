`include "../vsrc/rvseed_defines.v"

module mem_stage(
    input [2:0] rd_buf_flag,
    input [`ALU_OP_WIDTH-1:0] alu_op,
    input [`CPU_WIDTH-1:0] alu_src1,
    input [`CPU_WIDTH-1:0] alu_src2,
    //output reg [63:0] rd_buf_lw,
    output reg [63:0] alu_res
    
);

reg [63:0] rd_buf_lw;
always@(*)begin
    case (alu_op)
        `ALU_ADD: begin 
        if(rd_buf_flag == 3'd1)
            alu_res = rd_buf_lw[31:0];
        else if(rd_buf_flag == 3'd2)
            alu_res = rd_buf_lw[63:0];
        else if(rd_buf_flag == 3'd4)
            alu_res = rd_buf_lw[7:0]; 
        else if(rd_flag == 3'd6)   //lh
            alu_res = rd_buf_lw[15:0]; 
        end
        default: alu_res = alu_res;
    endcase
end



import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
always @(*) begin
    if(rd_buf_flag == 3'd1 | rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6)
        pmem_read(alu_src1 +  alu_src2, rd_buf_lw);
end
endmodule