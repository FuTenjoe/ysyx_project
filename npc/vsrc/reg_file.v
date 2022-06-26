`include "../vsrc/rvseed_defines.v"

module reg_file (
    input                            clk,
    input                            rst_n,
    
    input                            reg_wen,    // register write enable
    input      [`REG_ADDR_WIDTH-1:0] reg_waddr,  // register write address
    input      [`CPU_WIDTH-1:0]      reg_wdata,  // register write data
    
    input      [`REG_ADDR_WIDTH-1:0] reg1_raddr, // register 1 read address
    input      [`REG_ADDR_WIDTH-1:0] reg2_raddr, // register 2 read address
    output reg [`CPU_WIDTH-1:0]      reg1_rdata, // register 1 read data
    output reg [`CPU_WIDTH-1:0]      reg2_rdata, // register 2 read data
    input  [7:0] wmask,
    input s_flag,
    input time_set,
    input [31:0] s_imm,
    input [3:0] expand_signed,
    
   
);

reg [63:0] reg_f [0:`REG_DATA_DEPTH-1]; 

// register write
always @(posedge clk or negedge rst_n) begin
    if (rst_n && reg_wen && (reg_waddr != `REG_ADDR_WIDTH'b0)&&(s_flag==1'd0)) // x0 read only
        case(expand_signed)
        4'd0:reg_f[reg_waddr] <= reg_wdata; 
        4'd1:reg_f[reg_waddr] <= {{32{(reg_f[reg_wdata]+s_imm)[31]}},(reg_f[reg_wdata]+s_imm)[31:0]}; 
        endcase
end

// register 1 read
always @(*) begin
    if(reg1_raddr == `REG_ADDR_WIDTH'b0)
        reg1_rdata = `CPU_WIDTH'b0;
    else
        reg1_rdata = reg_f[reg1_raddr];
end

// register 2 read
always @(*) begin
    if(reg2_raddr == `REG_ADDR_WIDTH'b0)
        reg2_rdata = `CPU_WIDTH'b0;
    else
        reg2_rdata = reg_f[reg2_raddr];
end
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
initial set_gpr_ptr(reg_f);  // rf为通用寄存器的二维数组变量

import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
//wire [63:0] rdata;
always @(*) begin
    if (rst_n && reg_wen && (reg_waddr != `REG_ADDR_WIDTH'b0)&&(s_flag==1'd1)&&(time_set==1'd1)) 
        pmem_write(reg_f[reg_waddr] + s_imm, reg_wdata, wmask);

  
end


endmodule
