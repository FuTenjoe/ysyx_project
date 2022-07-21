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
    output reg rest_from_id
    

);


//reg [63:0] buff;
// register write
// register 1 read
reg write_1;

/*always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        write_1 <= 1'b0;
        write_2 <= 1'b0;
        write_3 <= 1'b0;
    end
    else if(reg1_raddr == reg_waddr | reg2_raddr == reg_waddr)begin
        if(write_3 != 1'b1)begin
            write_1 <= write_ready;
            write_2 <= write_1;
            write_3 <= write_2;
        end
        else begin
            write_1 <= 1'b0;
            write_2 <= 1'b0;
            write_3 <= 1'b0;
        end
    end
end*/
reg [2:0]test;
always@(posedge clk or negedge rst_n)begin
    if(id_pc != 32'h0000_0000 & id_pc != 32'h8000_0000 )begin
        if(!rst_n)begin
            write_1 <= 1'b0;
            test <= 3'd0;
        end
        else if(reg1_raddr == reg_waddr | reg2_raddr == reg_waddr)begin
            if(write_1 == 1'b1)begin
                write_1 <= 1'b0;
                test <= 3'd1;
            end
            else begin
                write_1 <= 1'b1;
                test <= 3'd2;
            end
        end
        else begin
            write_1 <= 1'b0;
            test <= 3'd3;
         end
    end
    end
    else begin
        write_1 <= 1'b0;
        test <= 3'd3;
    end
end
reg write_ld_1;
reg write_ld_2;

always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        write_ld_1 <= 1'b0;
        write_ld_2 <= 1'b0;
    end
    else if(reg1_raddr == reg_waddr | reg2_raddr == reg_waddr)begin
        if(write_ld_2 != 1'b1)begin
            write_ld_1 <= write_ready;
            write_ld_2 <= write_ld_1;
        end
        else begin
            write_ld_1 <= 1'b0;
            write_ld_2 <= 1'b0;
        end
    end
end

always @(*) begin
    if(id_pc != 32'h0000_0000 & id_pc != 32'h8000_0000 )begin
        if(rd_buf_flag == 3'd1|rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6)begin
            if(reg1_raddr == reg_waddr | reg2_raddr == reg_waddr)begin
                if( write_ld_2 == 1'b0)
                    rest_from_id = 1'b1;
                else 
                    rest_from_id = 1'b0;
            end
        end
        else begin
            if(reg1_raddr == reg_waddr | reg2_raddr == reg_waddr)begin
                if(write_1 == 1'b0)
                    rest_from_id = 1'b1;
                else 
                    rest_from_id = 1'b0;
            end
            else
                rest_from_id = 1'b0;
        end
    end
    else 
        rest_from_id = 1'b0;
        
end



endmodule
