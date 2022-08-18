`include "../vsrc/rvseed_defines.v"

module mem_stage(
    input clk, //clint新加
    input rst_n,
    input [2:0] rd_buf_flag,
    input [`ALU_OP_WIDTH-1:0] alu_op,
    input [`CPU_WIDTH-1:0] alu_src1,
    input [`CPU_WIDTH-1:0] alu_src2,
    //input no_use,
    //output reg [63:0] rd_buf_lw,
    output reg [63:0] sign_alu_res,
    input [63:0] mem_from_ex_alu_res,
    input [3:0] mem_expand_signed,
    output [63:0] wb_hazard_result,
    input mem_cunqu_hazard,
    input [3:0]return_id,         //clint新加
    output  mem_axi_valid,       
    output  mem_res_valid,
    output reg [3:0] mem_send_id,
    output [`CPU_WIDTH-1:0] mem_addr,
    input ar_hs,
    input r_done,      //这里实际为延迟一周期的r_done
    output mem_no_use,   //没有用到访存时为1
    input [63:0] axi_rdata
    
);

wire [63:0] rd_buf_lw;
//assign rd_buf_lw = (r_done)?axi_rdata:64'd0;
reg [63:0] alu_res;
always@(*)begin
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
always@(*)begin
    case(mem_expand_signed)
    4'd0:
        sign_alu_res = alu_res;   //jalr  
    4'd1:begin
        sign_alu_res = {{32{alu_res[31]}},alu_res[31:0]};   //lw  addw  divw
       
    end
    4'd2:begin
        sign_alu_res = alu_res[31:0];            //addw错误
    end
    4'd3:begin
        sign_alu_res = {{48{alu_res[15]}},alu_res[15:0]}; //lh
        
    end
    default:begin   
        sign_alu_res = alu_res; 
    end
    endcase
end


always@(*)begin
    if((rd_buf_flag == 3'd1 | rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6) )begin
        wb_hazard_result = sign_alu_res;
    end
    else begin
        wb_hazard_result = mem_from_ex_alu_res;
    end
end
//wire mem_valid = rd_buf_flag == 3'd1 | rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6;
//reg mem_axi_valid;
parameter [1:0]IDLE=2'd0,MEM=2'd1,EN=2'd2,FN=2'd3;
reg[1:0] present_state,next_state;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        present_state <= IDLE;
    end
    else begin
        present_state <= next_state;
    end
end
//reg mem_res_valid;
always@(*)begin
    case(present_state)
    IDLE:begin
        if(rd_buf_flag == 3'd1 | rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6)
            next_state = MEM;
        else  
            next_state = IDLE;
    end
    MEM:begin
        if(ar_hs)
            next_state = EN;
        else 
            next_state = MEM;
    end
    EN:begin
        if(r_done&&return_id == 4'd2)
            next_state = FN;
        else 
            next_state = EN;
    end
    FN: next_state = IDLE;
    default: next_state = IDLE;
    endcase
end
assign  mem_no_use = (present_state == MEM|present_state==EN) ? 1'b0:1'b1;
assign mem_res_valid = (present_state==FN) ? 1'b1:1'b0;
assign mem_axi_valid = (present_state == MEM) ? 1'b1:1'b0;
assign rd_buf_lw = (present_state==FN) ? axi_rdata :64'd0;
reg [63:0] reg_mem_addr;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
       // mem_res_valid <= 1'b0;
        //mem_axi_valid <= 1'b0;
        mem_send_id <= 4'd0;
        reg_mem_addr <= 64'd0;
      //  mem_no_use <= 1'b1;
    end
    else begin
        case(present_state)
        IDLE:begin
        //    mem_res_valid <= 1'b0;
        //    mem_axi_valid <= 1'b0;
            mem_send_id <= 4'd2;
            reg_mem_addr <= alu_src1 + alu_src2;
        //    mem_no_use <= 1'b1;
        end
        MEM:begin
        //    mem_res_valid <= 1'b0;
       //     mem_axi_valid <= 1'b1;
            mem_send_id <= 4'd2;
            reg_mem_addr <= reg_mem_addr;
        //    mem_no_use <= 1'b0;
        end
        EN:begin
        //    mem_res_valid <= 1'b0;
        //    mem_axi_valid <= 1'b0;
            mem_send_id <= 4'd2;
            reg_mem_addr <= reg_mem_addr;
        //    mem_no_use <= 1'b0;
        end
        FN:begin
        //    mem_res_valid <= 1'b1;
        //    mem_axi_valid <= 1'b0;
            mem_send_id <= 4'd0;
            reg_mem_addr <= 64'd0;
        //    mem_no_use <= 1'b1;
        end
        default:begin
        //    mem_res_valid <= 1'b0;
        //    mem_axi_valid <= 1'b0;
            mem_send_id <= 4'd0;
            reg_mem_addr <= 64'd0;
        //    mem_no_use <= 1'b1;
        end
        endcase
    end
end

assign mem_addr = reg_mem_addr ;         

/*import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
always @(*) begin
    if(rd_buf_flag == 3'd1 | rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6)
        pmem_read(alu_src1 +  alu_src2, rd_buf_lw);
    else
        rd_buf_lw = 64'd0;
end*/
endmodule