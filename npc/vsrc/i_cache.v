`include "../vsrc/rvseed_defines.v"
//二路组相连cache 2k*2   256/8=32B, deep = 64
//tag = 53'b[63:11] index = 6'b[10:5] offset = 5'b[4:2];

module i_cache (
    input clk,
    input rst_n,
    //dram side
    input [63:0] dram_data,
    input dram_val,
    output reg dram_req,
    output [63:0] dram_req_addr,
    //cpu side
    input [63:0] cpu_addr,
    input ins_req,                   //instruction request
    output reg [63:0] instruction,   //inst for cpu
    output rom_abort 
);
parameter BLOCK_SIZE = 4;
reg [63:0] counter;
reg [63:0] cpu_addr_dly;
reg ins_req_dly;
reg dram_reg_dly;
reg [63:0] dram_data_shift[3:0];
reg [309:0] I_SRAM_data0, I_SRAM_data1;                             // {1 , 53, 256} 
wire [3090] I_SRAM_data;  //cache
wire hit0, hit1;
wire [309:0] wr_cache_data;
wire dram_data_ready;  //主存信号
reg [309:0] I_SRAM0[0:63], I_SRAM1[0:63];
reg [3:0] LRU_c0[0:63],LRU_c1[0:63];
integer i;
assign wr_cache_data = {1'b1, cpu_addr_dly[31:11],dram_data_shift[3],dram_data_shift[2],dram_data_shift[1],dram_data_shift[0]};

always@(posedge clk)begin
  if(!rst_n)begin
    for(i=0; i<256; i=i+1)begin
        I_SRAM0[i] <= 278'b0;
        I_SRAM1[i] <= 278'b0;
    end
  end
  else if(dram_data_ready)begin
    if(I_SRAM0[cpu_addr_dly[10:5]][309] && I_SRAM1[cpu_addr_dly[10:5]][309])begin
      if(LRU_c0[cpu_addr_dly[10:5]] > LRU_c1[cpu_addr_dly[10:5]])
        I_SRAM0[cpu_addr_dly[10:5]] <= wr_cache_data;
      else
        I_SRAM1[cpu_addr_dly[10:5]] <= wr_cache_data;
    end
    else if(I_SRAM0[cpu_addr_dly[10:5]][309])
      I_SRAM1[cpu_addr_dly[10:5]] <= wr_cache_data;   
    else
      I_SRAM0[cpu_addr_dly[10:5]] <= wr_cache_data;
  end
  else begin
    I_SRAM0 <= I_SRAM0;
    I_SRAM1 <= I_SRAM1;
  end
end

//LRU counter block
always@(posedge clk)begin
  if(!rst_n)begin
    for(i=0;i<256;i=i+1)begin
      LRU_c0[i] <= 4'b0;
      LRU_c1[i] <= 4'b0;
    end
  end
  else if(!rom_abort && hit0)begin
    for(i=0;i<63;i=i+1)begin
      LRU_c1[i] <= LRU_c1[i] + (LRU_c1[i]!=4'b1111);   
      if(i == {26'b0,cpu_addr_dly[10:5]} || i == {26'b0,cpu_addr[10:5]})
        LRU_c0[i] <= 4'b0;
      else begin
        LRU_c0[i] <= LRU_c0[i] + (LRU_c0[i]!=4'b1111);
      end
    end
  end
  else if(!rom_abort && hit1)begin
    for(i=0; i<63; i=i+1)begin
      LRU_c0[i] <= LRU_c0[i] + (LRU_c0[i]!=4'b1111);
      if(i == {26'b0,cpu_addr_dly[10:5]} || i == {26'b0,cpu_addr[10:5]})
        LRU_c1[i] <= 4'b0;
      else begin
				LRU_c1[i] <= LRU_c1[i] + (LRU_c1[i]!=4'b1111);   
      end
    end
  end
  else begin
    LRU_c0 <= LRU_c0;
    LRU_c1 <= LRU_c1;
  end
end

always@(posedge clk)begin
  if(!rst_n)begin
    I_SRAM_data0 <= 310'b0;
    I_SRAM_data1 <= 310'b0;
  end
  else if(ins_req |({dram_reg_dly, dram_req} == 2'b10))begin
    I_SRAM_data0 <= I_SRAM0[cpu_addr[10:5]];
    I_SRAM_data1 <= I_SRAM1[cpu_addr[10:5]];
  end
  else begin
    I_SRAM_data0 <= I_SRAM_data0;
    I_SRAM_data1 <= I_SRAM_data1;
  end
end

//output signals
assign hit0 = I_SRAM_data0[309] & (I_SRAM_data0[308:256] == cpu_addr_dly[63:11]);
assign hit1 = I_SRAM_data1[309] & (I_SRAM_data1[308:256] == cpu_addr_dly[63:11]);
assign hit = hit0 | hit1;
assign rom_abort = (~hit & ins_req_dly) | dram_req | dram_req_dly;
assign dram_data_ready = (BLOCK_SIZE == counter);
assign I_SRAM_data = hit1 ? I_SRAM_data1 : I_SRAM_data0;

always@(*)begin
  case(cpu_addr_dly[4:3])
  2'd0: instruction = I_SRAM_data[63:0];
  2'd1: instruction = I_SRAM_data[127:64];
  2'd2: instruction = I_SRAM_data[191:128];
  2'd3: instruction = I_SRAM_data[255:192];
  default: instruction = I_SRAM_data[63:0];
  endcase
end

always@(posedge clk)begin
  if(!rst_n)
    dram_req <= 1'b0;
  else if(~hit & ins_req_dly)
    dram_req <= 1'b1;
  else if(dram_data_ready)
    dram_req <= 1'b0;
  else
    dram_req <= dram_req;
end

always@(posedge clk)begin
  if(!rst_n)
  dram_req_dly <= 1'b0;
  else
  dram_req_dly <= dram_req;
end
//送入总线的地址
assign dram_req_addr = {32'b0,cpu_addr_dly[31:5],5'b0};
//input signal buffer
always@(posedge clk)begin
  if(!rst_n)
    ins_req_dly <= 1'b0;
  else 
    ins_req_dly <= ins_req;
end

always@(posedge clk)begin
  if(!rst_n)
    cpu_addr_dly <= 63'd0;
  else if((ins_req_dly & ~hit) || dram_req)
    cpu_addr_dly <= cpu_addr_dly;
  else if(ins_req)
    cpu_addr_dly <= cpu_addr;
end

//block counter
always@(posedge clk)begin
  if(!rst_n)
    counter <= 64'd0;
  else if(dram_data_ready)
    counter <= 64'd0;
  else if(dram_val)
    counter <= counter + 1'b1;
end

//dram data buffer 主存
always@(posedge clk)begin
  if(!rst_n)begin
    dram_data_shift[0] <= 64'd0;
    dram_data_shift[1] <= 64'd0;
    dram_data_shift[2] <= 64'd0;
    dram_data_shift[3] <= 64'd0;
  end
  else if(dram_data_ready)begin
    dram_data_shift[0] <= 64'd0;
    dram_data_shift[1] <= 64'd0;
    dram_data_shift[2] <= 64'd0;
    dram_data_shift[3] <= 64'd0;
  end
  else if(dram_val)begin
    dram_data_shift[0] <= dram_data_shift[1];
    dram_data_shift[1] <= dram_data_shift[2];
    dram_data_shift[2] <= dram_data_shift[3];
    dram_data_shift[3] <= dram_data;
  end
end



endmodule