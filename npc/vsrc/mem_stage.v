`include "../vsrc/rvseed_defines.v"

module mem_stage(
    input clk, //clint新加
    input rst_n,
    input [63:0] mem_pc,
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
    input [63:0] axi_rdata,
    output [2:0] mem_rd_buf_flag,
    
    input [11:0] mem_csr_addr,   //异常中断
    output reg [63:0] mepc,
    output reg [63:0] mcause,
    output reg [63:0] mtvec,
    output reg [63:0] mstatus,
    input [63:0] mtimecmp,
    output clint_timer_irq,
    output reg [63:0] mie
);
reg [2:0] reg_rd_buf_flag;
wire [63:0] rd_buf_lw;
///assign rd_buf_lw = (present_state == FN)?axi_rdata:64'd0;
reg [63:0] alu_res;

wire o_core_ready = mstatus[3] & mie[7];
always@(*)begin
    if(clint_timer_irq)begin
            mepc = mem_pc;
            mcause = 64'h8000_0000_0000_0007;
           // mtvec = alu_src1 | alu_src2;
            mstatus[7] = reg_mstatus[3];
            mstatus[3] = 1'b0;
    end
    else begin
    case (alu_op)
        `ALU_ADD: begin 
        if(reg_rd_buf_flag == 3'd1)
            alu_res = rd_buf_lw[31:0];
        else if(reg_rd_buf_flag == 3'd2)
            alu_res = rd_buf_lw[63:0];
        else if(reg_rd_buf_flag == 3'd4)
            alu_res = rd_buf_lw[7:0]; 
        else if(reg_rd_buf_flag == 3'd6)   //lh
            alu_res = rd_buf_lw[15:0]; 
        end
        `ALU_CSRRS:begin
            alu_res = alu_res;
            case(mem_csr_addr)
            12'd833:mepc = alu_src1 | alu_src2;
            12'd834:mcause = alu_src1 | alu_src2;
            12'd773:mtvec = alu_src1 | alu_src2;
            12'd768:mstatus = alu_src1 | alu_src2;
            default:;
            endcase
        end
        `ALU_CSRRW:begin
            alu_res = alu_res;
            case(mem_csr_addr)
            12'd833:mepc = alu_src1;
            12'd834:mcause = alu_src1;
            12'd773:mtvec = alu_src1;
            12'd768:mstatus = alu_src1;
            default:;
            endcase
        end
        `ALU_ECALL:begin
            alu_res = alu_res;
            mepc = mem_pc;
            mcause = 64'd11;
            mstatus[7] = reg_mstatus[3];
            mstatus[3] = 1'b0;
        end
        `ALU_MRET:begin
            alu_res = alu_res;
            mstatus[3] = reg_mstatus[7];
            mstatus[7] = 1'b1;
        end
        default: alu_res = alu_res;
    endcase
    end
end
reg [63:0]reg_mstatus;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
        reg_mstatus<= 64'ha000_1800;
    end
    else 
        reg_mstatus <= mstatus;
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
parameter [2:0]IDLE=0, MEM=1, EN=2, FN=3, MMIOMEM=4;
reg[2:0] present_state,next_state;
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
        if((rd_buf_flag == 3'd1 | rd_buf_flag == 3'd2 |rd_buf_flag == 3'd4 |rd_buf_flag == 3'd6) &&(alu_src1 + alu_src2!=64'h0000_0000_0200_4000 && alu_src1 + alu_src2!= 64'h0000_0000_0200_BFF8 ))
            next_state = MEM;
        else if(alu_src1 + alu_src2==64'h0000_0000_0200_4000 || alu_src1 + alu_src2== 64'h0000_0000_0200_BFF8 )
            next_state =    MMIOMEM ;
        else  
            next_state = IDLE;
    end
    MMIOMEM:begin
        if(clint)
            next_state = FN;
        else 
            next_state = MMIOMEM;
    end
    MEM:begin
       // if(ar_hs)
            next_state = EN;
    end
    EN:begin
        if(r_done && return_id==4'd2)
            next_state = FN;
        else 
            next_state = EN;
    end
    FN: next_state = IDLE;
    default: next_state = IDLE;
    endcase
end
wire [63:0] mem_io_r_data;
assign  mem_no_use = (present_state == MEM|present_state==EN) ? 1'b0:1'b1;
assign mem_res_valid = (present_state==FN) ? 1'b1:1'b0;
assign mem_axi_valid = (present_state == MEM) ? 1'b1:1'b0;
assign rd_buf_lw = (clint)? mem_io_r_data :((r_done) ? axi_rdata :64'd0);
assign mem_rd_buf_flag = (present_state == FN) ? reg_rd_buf_flag:3'd0;
wire mem_mmio_valid = (present_state == MMIOMEM) ? 1'b1:1'b0;

reg [63:0] reg_mem_addr;
wire clint;



mem_clint  u_mem_clint(
    .clk(clk),
    .rst_n(rst_n),
    .mem_mmio_valid(mem_mmio_valid),
    .mtimecmp(mtimecmp),

    .alu_src1(alu_src1),
    .alu_src2(alu_src2),
    .o_core_ready(o_core_ready),
    .clint_timer_irq(clint_timer_irq),
    .read_data(mem_io_r_data),
    .clint(clint)
);
//reg [2:0] reg_rd_buf_flag;
always@(posedge clk or negedge rst_n)begin
    if(!rst_n)begin
       // mem_res_valid <= 1'b0;
        //mem_axi_valid <= 1'b0;
        mem_send_id <= 4'd0;
        reg_mem_addr <= 64'd0;
        reg_rd_buf_flag <= 3'd0;
        //rd_buf_lw <= 64'd0;
      //  mem_no_use <= 1'b1;
    end
    else begin
        case(present_state)
        IDLE:begin
        //    mem_res_valid <= 1'b0;
        //    mem_axi_valid <= 1'b0;
            mem_send_id <= 4'd2;
            reg_mem_addr <= alu_src1 + alu_src2;
            reg_rd_buf_flag <=rd_buf_flag;
        //    rd_buf_lw <= 64'd0;
        //    mem_no_use <= 1'b1;
        end
        MMIOMEM:begin
             mem_send_id <= 4'd2;
            reg_mem_addr <=reg_mem_addr;
            reg_rd_buf_flag <= reg_rd_buf_flag;
        end
        MEM:begin
        //    mem_res_valid <= 1'b0;
       //     mem_axi_valid <= 1'b1;
            mem_send_id <= 4'd2;
            reg_mem_addr <= reg_mem_addr;
            reg_rd_buf_flag <= reg_rd_buf_flag;
          //  rd_buf_lw <= 64'd0;
        //    mem_no_use <= 1'b0;
        end
        EN:begin
        //    mem_res_valid <= 1'b0;
        //    mem_axi_valid <= 1'b0;
            mem_send_id <= 4'd2;
            reg_mem_addr <= reg_mem_addr;
            reg_rd_buf_flag <= reg_rd_buf_flag;
        //    rd_buf_lw <= 64'd0;
        //    mem_no_use <= 1'b0;
        end
        FN:begin
        //    mem_res_valid <= 1'b1;
        //    mem_axi_valid <= 1'b0;
            mem_send_id <= 4'd0;
            reg_mem_addr <= 64'd0;
            reg_rd_buf_flag <= reg_rd_buf_flag;
        //    rd_buf_lw <= axi_rdata;
        //    mem_no_use <= 1'b1;
        end
        default:begin
        //    mem_res_valid <= 1'b0;
        //    mem_axi_valid <= 1'b0;
            mem_send_id <= 4'd0;
            reg_mem_addr <= 64'd0;
            reg_rd_buf_flag <= 3'd0;
        //    rd_buf_lw <= 64'd0;
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