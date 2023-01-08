`include "../vsrc/rvseed_defines.v"

module id_rest (
    input clk,
    input rst_n,
    input [63:0] id_pc,
    input      [`REG_ADDR_WIDTH-1:0] reg1_raddr, // register 1 read address
    input      [`REG_ADDR_WIDTH-1:0] reg2_raddr, // register 2 read address
    input [`REG_ADDR_WIDTH-1:0] reg_waddr,
    //input write_ready,
    input [2:0]rd_buf_flag,
    output reg rest_from_id,
    input      [31:0]   ex_inst,
    //input [63:0] from_ex_alu_res,
    output reg rest_id_mem,
    
    input  [`REG_ADDR_WIDTH-1:0]  wb_reg_waddr,
    output rest_wb_hazard,
    input [31:0] s_imm,
    input ex_s_flag,
    input mem_s_flag,
    input [31:0] ex_s_imm,
    output reg cunqu_hazard,
    input [`CPU_WIDTH-1:0]  imm,
    input [2:0] curr_rd_buf_flag
  

);
reg delay_rest_id_mem;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)
        delay_rest_id_mem <= 1'b0;
    else
        delay_rest_id_mem <= rest_id_mem;
end
reg [1:0]test;
always @(*) begin
    //if(id_pc != 32'h0000_0000 & id_pc != 32'h8000_0000 & reg_waddr != 1'b0 & delay_rest_id_mem != 1'b1)begin
    if(id_pc != 32'h0000_0000 & id_pc != 32'h8000_0000 & delay_rest_id_mem != 1'b1)begin
        if(rd_buf_flag == 3'd1|rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6)begin
           if(((reg1_raddr == wb_reg_waddr & reg2_raddr == reg_waddr) | (reg1_raddr == reg_waddr & reg2_raddr == wb_reg_waddr))& (wb_reg_waddr!= 5'b0)&(s_imm == 32'd0))begin
                rest_from_id = 1'b1;
                rest_id_mem = 1'b1;
                rest_wb_hazard = 1'b1;
                cunqu_hazard = 1'b0;
            end
           // else if((reg1_raddr == reg_waddr | reg2_raddr == reg_waddr)&(ex_s_flag != 1'b1))begin
            else if((reg1_raddr == reg_waddr | reg2_raddr == reg_waddr)&(ex_s_flag != 1'b1 ))begin
                rest_from_id = 1'b1;
                rest_id_mem = 1'b1;
                rest_wb_hazard = 1'b0;
                cunqu_hazard = 1'b0;
            end
            else if((reg1_raddr == wb_reg_waddr | reg2_raddr == wb_reg_waddr) & (wb_reg_waddr!= 1'b0)&(s_imm == 32'd0)&(mem_s_flag != 1'b1))begin
                rest_from_id = 1'b1;
                rest_id_mem = 1'b0;
                rest_wb_hazard = 1'b1;
                cunqu_hazard = 1'b0;
            end
            else begin
                rest_id_mem = 1'b0;
                rest_from_id = 1'b0;
                rest_wb_hazard = 1'b0;
                cunqu_hazard = 1'b0;
            end
        end
        else begin
            if(((reg1_raddr == reg_waddr & reg2_raddr == wb_reg_waddr) | (reg1_raddr == wb_reg_waddr & reg2_raddr == reg_waddr))& (wb_reg_waddr!= 5'b0))begin
                rest_from_id = 1'b1;
                rest_id_mem = 1'b0;
                rest_wb_hazard = 1'b1;
                cunqu_hazard = 1'b0;
                test = 2'd1;
            end
            else if((reg1_raddr == reg_waddr | reg2_raddr == reg_waddr)&(ex_s_flag != 1'b1 )&(reg_waddr != 1'b0))begin
                rest_from_id = 1'b1;
                rest_id_mem = 1'b0;
                rest_wb_hazard = 1'b0;
                cunqu_hazard = 1'b0;
                test = 2'd3;
            end
            //else if((reg1_raddr == wb_reg_waddr || reg2_raddr == wb_reg_waddr) & (wb_reg_waddr!= 5'b0)&(mem_s_flag != 1'b1))begin
            else if(cond2 )begin
                rest_from_id = 1'b1;
                rest_id_mem = 1'b0;
                rest_wb_hazard = 1'b1;
                cunqu_hazard = 1'b0;
                test =  2'd2;
            end
            else if((reg1_raddr + imm == reg_waddr+ex_s_imm)&(ex_s_flag == 1'b1)&(curr_rd_buf_flag !=0))begin   //因为sb与后一条lbu冲突添加
                rest_from_id = 1'b1;
                rest_id_mem = 1'b0;
                rest_wb_hazard = 1'b0;
                cunqu_hazard = 1'b1;
                test = 2'd1;
            end
            else begin
                rest_from_id = 1'b0;
                rest_id_mem = 1'b0;
                rest_wb_hazard = 1'b0;
                cunqu_hazard = 1'b0;
                test = 2'd0;
            end
        end
    end
    else  begin
        rest_from_id = 1'b0;
        rest_id_mem = 1'b0;
        rest_wb_hazard = 1'b0;
        cunqu_hazard = 1'b0;
    end
end
wire cond2 = ((reg1_raddr == wb_reg_waddr || reg2_raddr == wb_reg_waddr)& (wb_reg_waddr!= 5'b0)&(mem_s_flag != 1'b1)) ?1'b1:1'b0;

wire  test3 = reg1_raddr == wb_reg_waddr? 1'b1:1'b0;


endmodule
