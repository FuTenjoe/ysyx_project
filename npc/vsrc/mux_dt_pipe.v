`include "../vsrc/rvseed_defines.v"

module mux_dt_pipe (
    //input rest_from_id,
    input clk,
    input rst_n,
    input      [`REG_ADDR_WIDTH-1:0] reg1_raddr, // register 1 read address
    input      [`REG_ADDR_WIDTH-1:0] reg2_raddr, // register 2 read address
    input [`REG_ADDR_WIDTH-1:0] reg_waddr,
    input [2:0]rd_buf_flag,
    output   reg   [63:0]  reg1_rdata, // register 1 read address
    output   reg   [63:0]  reg2_rdata,  // register 2 read address
    input [63:0] from_ex_alu_res,
    input [63:0] from_mem_alu_res,
    input control_rest,
    input rest_from_id,
    input reg [63:0] reg_f [0:`REG_DATA_DEPTH-1],
    input s_flag,
    output reg [63:0] end_write_addr,
    input [63:0] wb_hazard_result,
    input  [`REG_ADDR_WIDTH-1:0]  mem_reg_waddr,
    input rest_id_mem,
    input rest_wb_hazard
);
reg [2:0]test;
reg [2:0] data_rest_cond;
reg delay_rest_id_mem;
reg [`REG_ADDR_WIDTH-1:0] delay_reg_waddr;
reg [2:0] delay_data_rest_cond;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        delay_data_rest_cond <= 3'd0;
        delay_rest_id_mem <= 1'b0;
        delay_reg_waddr <= 5'd0;
    end
    else begin
        delay_data_rest_cond <= data_rest_cond;
        delay_rest_id_mem <= rest_id_mem;
        delay_reg_waddr <= reg_waddr;
    end
end



always@(*)begin
    data_rest_cond = {rest_from_id,rest_id_mem,rest_wb_hazard};
    case(data_rest_cond)
        3'b000:begin
            reg1_rdata = reg_f[reg1_raddr];
            reg2_rdata = reg_f[reg2_raddr];
        end
        3'b100:begin
            if(reg1_raddr == reg_waddr)begin
                reg1_rdata = from_ex_alu_res;
                reg2_rdata = reg_f[reg2_raddr];
            end
            else if(reg2_raddr == reg_waddr)begin
                reg1_rdata = reg_f[reg1_raddr];
                reg2_rdata = from_ex_alu_res;
            end
        end
        3'b110:begin
            if(reg1_raddr == delay_reg_waddr)begin
                reg1_rdata = from_mem_alu_res;
                reg2_rdata = reg_f[reg2_raddr];
            end
            else if(reg2_raddr == delay_reg_waddr)begin
                reg1_rdata = reg_f[reg1_raddr];
                reg2_rdata = from_mem_alu_res;
            end
        end
        3'b101:begin
            if(delay_data_rest_cond == 3'b100)begin
                    if(reg1_raddr == reg_waddr)begin
                    reg1_rdata = from_ex_alu_res;
                    reg2_rdata = reg_f[reg2_raddr];
                end
                else if(reg2_raddr == reg_waddr)begin
                    reg1_rdata = reg_f[reg1_raddr];
                    reg2_rdata = from_ex_alu_res;
                end
            end
            else if(delay_data_rest_cond == 3'b110)begin
                    if(reg1_raddr == reg_waddr)begin
                    reg1_rdata = from_mem_alu_res;
                    reg2_rdata = reg_f[reg2_raddr];
                end
                else if(reg2_raddr == reg_waddr)begin
                    reg1_rdata = reg_f[reg1_raddr];
                    reg2_rdata = from_mem_alu_res;
                end
            end
            else begin
                if((reg1_raddr == mem_reg_waddr) &(reg2_raddr == reg_waddr))begin
                    reg1_rdata = wb_hazard_result;
                    reg2_rdata = from_ex_alu_res;
                end
                else if((reg1_raddr == mem_reg_waddr) &(reg2_raddr != reg_waddr))begin
                    reg1_rdata = wb_hazard_result;
                    reg2_rdata = reg_f[reg2_raddr];
                end
                else if((reg2_raddr == mem_reg_waddr)&(reg1_raddr == reg_waddr) )begin
                    reg1_rdata = from_ex_alu_res;
                    reg2_rdata = wb_hazard_result;
                end
                else if((reg2_raddr == mem_reg_waddr)&(reg1_raddr != reg_waddr))begin
                    reg1_rdata = reg_f[reg1_raddr];
                    reg2_rdata = wb_hazard_result;
                end
            end
        end
        3'b111:begin
            if((reg1_raddr == mem_reg_waddr) & (reg2_raddr == reg_waddr))begin
                reg1_rdata = wb_hazard_result;
                reg2_rdata = from_mem_alu_res;
            end
            else if((reg1_raddr == reg_waddr) & (reg2_raddr == mem_reg_waddr))begin
                reg1_rdata = from_mem_alu_res;
                reg2_rdata = wb_hazard_result;
            end
        end
        default:begin
             reg1_rdata = reg_f[reg1_raddr];
            reg2_rdata = reg_f[reg2_raddr];
        end
    endcase
end

always@(*)begin
    if(s_flag)
        end_write_addr = reg_f[reg_waddr];
    else
        end_write_addr = 64'd0;
end



endmodule
