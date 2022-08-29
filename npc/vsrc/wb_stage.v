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
    /* verilator lint_off UNOPT */
    output reg [63:0] reg_f [0:`REG_DATA_DEPTH-1],
    /* verilator lint_off UNOPT */
    input [63:0] wb_pc,
    output [63:0] wb_delay_pc,
   // input [63:0] end_write_addr,
    input cunqu_hazard,
    output waxi_valid,
    output reg [63:0] reg_write_addr,
    output reg [63:0] reg_write_data,
    output reg [7:0] reg_write_wmask,
    output wb_res_valid,
    output  axi_req,
    input w_done,
    input b_hs,
    output w_start,
    output reg [63:0] mtimecmp
   
);
reg [63:0] reg_wdata;
always@(*)begin
    if((rd_buf_flag == 3'd1|rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6)&(cunqu_hazard == 1'b0) )begin
        reg_wdata = from_mem_alu_res;
    end
    else begin
        reg_wdata = from_ex_alu_res;
    end
end
assign w_start = rst_n && reg_wen && (reg_waddr != `REG_ADDR_WIDTH'b0)&&(s_flag==1'd1);
always @(*) begin
    if (rst_n && reg_wen && (reg_waddr != `REG_ADDR_WIDTH'b0)&&(s_flag==1'd0))begin // x0 read only
            case(expand_signed)
            4'd0:begin
                reg_f[reg_waddr] = reg_wdata;   //jalr
                
            end
            4'd1:begin
                reg_f[reg_waddr] = {{32{reg_wdata[31]}},reg_wdata[31:0]};   //lw  addw  divw
                
            end
            4'd2:begin
                reg_f[reg_waddr] = reg_wdata[31:0];            //addw错误
                
            end
            4'd3:begin
                reg_f[reg_waddr] = {{48{reg_wdata[15]}},reg_wdata[15:0]}; //lh
                
            end
            default:reg_f[reg_waddr] = reg_wdata[31:0];  
            endcase
        end
    end

/*reg [63:0] end_wb_waddr;
always@(*)begin
    
    end_wb_waddr = reg_f[reg_waddr] + s_imm;
end*/

always @(posedge clk or negedge rst_n) begin
    if(~rst_n)
        wb_delay_pc <= 64'd0;
    else
        wb_delay_pc <= wb_pc;
end
reg [63:0] wb_delay_reg_f [0:`REG_DATA_DEPTH-1];
always @(posedge clk or negedge rst_n) begin
        wb_delay_reg_f <= reg_f;
end

parameter IDLE = 0, WRITE=1, WRESP=2, WFN=3, WRMMIO=4;
reg[2:0] present_state,next_state;

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
        if(rst_n && reg_wen && (reg_waddr != `REG_ADDR_WIDTH'b0)&&(s_flag==1'd1)&& (reg_f[reg_waddr] + s_imm != 64'h0000_0000_0200_4000))
            next_state = WRITE;
        else if(rst_n && reg_wen && (reg_f[reg_waddr] + s_imm == 64'h0000_0000_0200_4000) &&(s_flag==1'd1))
            next_state = WRMMIO;
        else 
            next_state = IDLE;
    end
    WRMMIO:begin
        if(wr_finish)
            next_state = WFN;
        else
            next_state = WRMMIO;
    end
    WRITE:begin
        if(w_done)
            next_state= WRESP;
        else
            next_state = WRITE;
    end
    WRESP:begin
        if(b_hs)
            next_state = WFN;
        else
            next_state = WRESP;
    end
    WFN: next_state= IDLE;
    endcase
end

assign waxi_valid = (present_state==WRITE) ? 1'b1:1'b0;
assign wb_res_valid = (present_state==WRITE|present_state==WRESP) ? 1'b0:1'b1;
assign axi_req = (present_state==WRITE|present_state==WRESP) ? 1'b1:1'b0;
wire wr_mmio_valid = (present_state == WRMMIO)? 1'b1:1'b0;
wire [63:0] wbmmio_waddr = reg_f[reg_waddr] + s_imm;
wire wr_finish;
wb_clint u_wb_clint (
    .clk(clk),
    .rst_n(rst_n),
    .mmio_reg_waddr(wbmmio_waddr),
    .mmio_reg_wdata(reg_wdata),
    .wr_mmio_valid(wr_mmio_valid),

    .mtimecmp(mtimecmp),
    .wr_finish(wr_finish)
);


always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        reg_write_addr <= 64'd0;
        reg_write_data <= 64'd0;
        reg_write_wmask <= 8'd0;
    end
    else begin
        case(present_state)
        IDLE:begin
            reg_write_addr <= reg_f[reg_waddr] + s_imm;
            reg_write_data <= reg_wdata;
            reg_write_wmask <= wmask;
        end
        WRMMIO:begin
            reg_write_addr <= reg_write_addr;
            reg_write_data <= reg_write_data;
            reg_write_wmask <= reg_write_wmask;
        end
        WRITE:begin
            reg_write_addr <= reg_write_addr;
            reg_write_data <= reg_write_data;
            reg_write_wmask <= reg_write_wmask;
        end
        WRESP:begin
            reg_write_addr <= reg_write_addr;
            reg_write_data <= reg_write_data;
            reg_write_wmask <= reg_write_wmask;
        end
        WFN:begin
            reg_write_addr <= 64'd0;
            reg_write_data <= 64'd0;
            reg_write_wmask <= 8'd0;
        end
        default:begin
            reg_write_addr <= reg_f[reg_waddr] + s_imm;
            reg_write_data <= reg_wdata;
            reg_write_wmask <= wmask;
        end
    endcase
    end
end

import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
    initial    set_gpr_ptr(wb_delay_reg_f);  // rf为通用寄存器的二维数组变量

/*import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
//wire [63:0] rdata;

always @(*) begin
    if (rst_n && reg_wen && (reg_waddr != `REG_ADDR_WIDTH'b0)&&(s_flag==1'd1))
        // end_wb_waddr = reg_f[reg_waddr] + s_imm;
        pmem_write(reg_f[reg_waddr] + s_imm, reg_wdata, wmask);
      //pmem_write(end_write_addr + s_imm, reg_wdata, wmask);
end*/

import "DPI-C" function void ebreak();
always@(*)begin
    if(ebreak_flag == 1'b1)begin
        ebreak();
    end
end
endmodule
