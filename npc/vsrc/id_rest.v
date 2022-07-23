`include "../vsrc/rvseed_defines.v"

module id_rest (
    input clk,
    input rst_n,
    input [64:0] id_pc,
    input      [`REG_ADDR_WIDTH-1:0] reg1_raddr, // register 1 read address
    input      [`REG_ADDR_WIDTH-1:0] reg2_raddr, // register 2 read address
    input [`REG_ADDR_WIDTH-1:0] reg_waddr,
    input write_ready,
    input [2:0]rd_buf_flag,
    output reg rest_from_id,
    input      [`CPU_WIDTH-1:0]        inst,
    input [63:0] from_ex_alu_res,
    input [63:0] from_mem_alu_res
    output reg rest_id_mem
    

);

always @(*) begin
    if(id_pc != 32'h0000_0000 & id_pc != 32'h8000_0000 )begin
        if(rd_buf_flag == 3'd1|rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6)begin
            if(reg1_raddr == reg_waddr | reg2_raddr == reg_waddr)begin
                rest_from_id = 1'b1;
                rest_id_mem = 1'b1;
            end
            else begin
                rest_id_mem = 1'b0;
                rest_from_id = 1'b0;
            end
        end
        else begin
            if(reg1_raddr == reg_waddr | reg2_raddr == reg_waddr)begin
                rest_from_id = 1'b1;
                rest_id_mem = 1'b0;
            end
            else begin
                rest_from_id = 1'b0;
                rest_id_mem = 1'b0;
            end
        end
    end
    else  begin
        rest_from_id = 1'b0;
        rest_id_mem = 1'b0;
    end
end



endmodule
