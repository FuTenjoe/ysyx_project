`include "../vsrc/rvseed_defines.v"

module mux_dt_pipe (
    //input rest_from_id,
    input clk,
    input rst_n,
    input [63:0]  reg1_rdata_fr_read,
    input [63:0]  reg2_rdata_fr_read,
    input      [`REG_ADDR_WIDTH-1:0] reg1_raddr, // register 1 read address
    input      [`REG_ADDR_WIDTH-1:0] reg2_raddr, // register 2 read address
    input [`REG_ADDR_WIDTH-1:0] reg_waddr,
    input [2:0]rd_buf_flag,
    output   reg   [63:0]  reg1_rdata, // register 1 read address
    output   reg   [63:0]  reg2_rdata,  // register 2 read address
    input [63:0] from_ex_alu_res,
    input [63:0] from_mem_alu_res,
    input control_rest,
    input [63:0]ex_reg1_data,
    input  [63:0]ex_reg2_data
);
reg [2:0]test;
always@(*)begin
      //  if(control_rest != 1'b1)begin
            if(rd_buf_flag == 3'd1|rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6)begin
                test<= 1'b0;
                if(reg1_raddr == reg_waddr)begin
                    reg1_rdata = from_mem_alu_res;
                    reg2_rdata = reg2_rdata_fr_read;
                end
                else if(reg2_raddr == reg_waddr)begin
                    reg1_rdata = reg1_rdata_fr_read;
                    reg2_rdata = from_mem_alu_res;
                   
                end
                else begin
                    reg1_rdata = reg1_rdata_fr_read;
                    reg2_rdata = reg2_rdata_fr_read;
                end
            end
            else begin
                if(reg1_raddr == reg_waddr)begin
                    reg1_rdata = from_ex_alu_res;
                    reg2_rdata = reg2_rdata_fr_read;
                    test = 3'b1;
                end
                else if(reg2_raddr == reg_waddr)begin
                    reg1_rdata = reg1_rdata_fr_read;
                    reg2_rdata = from_ex_alu_res;
                    test = 3'd2;
                end
                else begin
                    reg1_rdata = reg1_rdata_fr_read;
                    reg2_rdata = reg2_rdata_fr_read;
                    test = 3'd3;
                end
            end
       // end
    /*    else begin
            reg1_rdata <= reg1_rdata_fr_read;
            reg2_rdata <= reg2_rdata_fr_read;
        end*/
end




endmodule
