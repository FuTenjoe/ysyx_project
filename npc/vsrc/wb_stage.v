`include "../vsrc/rvseed_defines.v"

module wb_stage (
    input                            clk,
    input                            rst_n,
    
    input                            reg_wen,    // register write enable
    input      [`REG_ADDR_WIDTH-1:0] reg_waddr,  // register write address
    //input      [63:0]      reg_wdata,  // register write data
    input [63:0] from_ex_alu_res,
    input [63:0] from_mem_alu_res,
    input  [7:0] wmask,
    input s_flag,
    input time_set,
    input [31:0] s_imm,
    input [3:0] expand_signed,
    input [2:0]rd_buf_flag,
    input ebreak_flag,
    output reg [63:0] reg_f [0:`REG_DATA_DEPTH-1],
    output write_ready,
    input wb_no_use,
    input [63:0] wb_pc,
    output [63:0] wb_delay_pc
   
);
reg [63:0] reg_wdata;
always@(*)begin
    if(rd_buf_flag == 3'd1|rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6 )begin
        reg_wdata = from_mem_alu_res;
    end
    else begin
        reg_wdata = from_ex_alu_res;
    end
end

always @(*) begin
    if (rst_n && reg_wen && (reg_waddr != `REG_ADDR_WIDTH'b0)&&(s_flag==1'd0))begin // x0 read only
            case(expand_signed)
            4'd0:begin
                reg_f[reg_waddr] = reg_wdata;   //jalr
                write_ready = 1'b1;
            end
            4'd1:begin
                reg_f[reg_waddr] = {{32{reg_wdata[31]}},reg_wdata[31:0]};   //lw  addw  divw
                write_ready = 1'b1;
            end
            4'd2:begin
                reg_f[reg_waddr] = reg_wdata[31:0];            //addw错误
                write_ready = 1'b1;
            end
            4'd3:begin
                reg_f[reg_waddr] = {{48{reg_wdata[15]}},reg_wdata[15:0]}; //lh
                write_ready = 1'b1;
            end
            default:begin
                reg_f[reg_waddr] =reg_f[reg_waddr];
                write_ready = 1'b0;
            end
            endcase
        end
    end


always @(posedge clk or negedge rst_n) begin
    if(~rst_n)
        wb_delay_pc <= 64'd0;
    else
        wb_delay_pc <= wb_pc;
end



import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
always@(*)begin
    if(!rst_n)
        set_gpr_ptr(reg_f);  // rf为通用寄存器的二维数组变量
end
import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
//wire [63:0] rdata;
always @(*) begin
    if (rst_n && reg_wen && (reg_waddr != `REG_ADDR_WIDTH'b0)&&(s_flag==1'd1)&&(time_set==1'd1)) begin
        pmem_write(reg_f[reg_waddr] + s_imm, reg_wdata, wmask);
    end
end

import "DPI-C" function void ebreak();
always@(*)begin
    if(ebreak_flag == 1'b1)begin
        ebreak();
    end
end
endmodule
