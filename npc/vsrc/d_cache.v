`include "../vsrc/rvseed_defines.v"
//直接相连cache 4k   256/8=32B, deep = 128
//tag = 52'b[63:12] index = 7'b[11:5] offset = 5'b[4:2];

module d_cache (
  input clk,
  input rst_n,
  //dram side (write)
  output dram_wr_req,    //request writing data to dram
  output [63:0] dram_wr_addr, //write data address
  output [63:0] dram_wr_data,  //write data
  input dram_wr_val,       //valid to write 

  //dram side (read)
  output dram_rd_req,        //request reading data from dram
  output [63:0] dram_rd_addr,//read data address
  input [63:0] dram_rd_data,  //read data
  input dram_rd_val,   // axi give valid to read 

  //cpu side
  input [63:0] cpu_addr,    //cpu address
  input data_req,
  input wren,       //write /read
  input [63:0] cpu_wr_data,  // write data come from cpu
  output [63:0] cpu_rd_data, // read data and send to cpu
  output hit,     //cache hit or miss
  output ram_abort    //waiting for cache
);

parameter BLOCK_SIZE = 4;
parameter CPU_EXEC= 0;
parameter WR_DRAM = 1;
parameter RD_DRAM = 2;
integer i;

reg [1:0] present_state;
wire [309:0] D_SRAM_block;   //{val 1, dir 1, tag52, data256}
reg [63:0] D_SRAM_word;   //one word of the block
wire dirty;
reg [51:0] tag_dly;
reg [63:0] cpu_addr_dly;
reg [63:0] cpu_wr_data_dly;
reg cpu_wr_wait_flag;   
wire dram_wr_ready;
wire dram_rd_ready;
reg dram_rd_req_dly;
reg [63:0] wr_counter, rd_counter   //counter for the block
reg [63:0] dram_data_shift[0:3];   //4*64 
reg [309:0] D_SRAM[0:127];    //the data_cache storage space

//physical write/read address for dram
assign dram_wr_addr = {tag_dly,cpu_addr[11:5],5'b0};
assign dram_rd_addr = {cpu_addr_dly[63:5],5'b0};

//cpu /dram writes data_cache
always@(posedge clk)begin
  if(!rst_n)begin
    for(i=0; i<128; i=i+1)begin
      D_SRAM[i] <= 310'd0;
    end
  end
  else if(dram_rd_ready)begin    //dram write cache block
    D_SRAM[cpu_addr_dly[11:5]] <= {1'b1,1'b0,cpu_addr_dly[63:12],dram_data_shift[3],dram_data_shift[2],dram_data_shift[1],dram_data_shift[0]};
  end
  else if(hit & data_req & wren)begin
    D_SRAM[cpu_addr[11:5]][308] <= 1'b1;    //dirty 位置1
    case(cpu_addr[4:3])
      2'd0: D_SRAM[cpu_addr[11:5]][63:0] <= cpu_wr_data;
      2'd1: D_SRAM[cpu_addr[11:5]][127:64] <= cpu_wr_data;
      2'd2: D_SRAM[cpu_addr[11:5]][191:128] <= cpu_wr_data;
      2'd3: D_SRAM[cpu_addr[11:5]][255:192] <= cpu_wr_data;
      default: D_SRAM[cpu_addr[11:5]] <= D_SRAM[cpu_addr[11:5]];
    endcase
  end
  else if(cpu_wr_wait_flag &({dram_rd_req_dly,dram_rd_req} == 2'b10))begin
    D_SRAM[cpu_addr_dly[11:5]][308] <= 1'b1;
    //发生缺失，将目标数据块搬入Cache后，使能CPU之前，向D-Cache写入原数据cpu_wr_data的备份（xx_dly）
    case(cpu_addr_dly[4:3])
      2'd0: D_SRAM[cpu_addr_dly[11:5]][63:0] <= cpu_wr_data_dly;
      2'd1: D_SRAM[cpu_addr_dly[11:5]][127:64] <= cpu_wr_data_dly;
      2'd2: D_SRAM[cpu_addr_dly[11:5]][191:128] <= cpu_wr_data_dly;
      2'd3: D_SRAM[cpu_addr_dly[11:5]][255:192] <= cpu_wr_data_dly;
      default: D_SRAM[cpu_addr_dly[11:5]] <= D_SRAM[cpu_addr_dly[11:5]];
    endcase
  end
  else begin
    D_SRAM[cpu_addr[11:5]] <= D_SRAM[cpu_addr[11:5]];
    D_SRAM[cpu_addr_dly[11:5]] <= D_SRAM[cpu_addr_dly[11:5]];
  end
end

//data cache writes dram
always@(posedge clk)begin
  if(!rst_n)
    dram_wr_data <= 64'd0;
  else if(dram_wr_req)begin
    case(wr_counter[1:0])    // 取出D-Cache中想要的块，逐字赋值给dram_wr_data写入主存
      2'd0: dram_wr_data <= D_SRAM[cpu_addr_dly[11:5]][63:0];
      2'd1: dram_wr_data <= D_SRAM[cpu_addr_dly[11:5]][127:64];
      2'd2: dram_wr_data <= D_SRAM[cpu_addr_dly[11:5]][191:128];
      2'd3: dram_wr_data <= D_SRAM[cpu_addr_dly[11:5]][255:192];
      default: dram_wr_data <= D_SRAM[cpu_addr_dly[11:5]][63:0];
    endcase
  end
  else 
    dram_wr_data <= dram_wr_data;
end

//cpu read cache
assign cpu_rs_data = D_SRAM_word;
assign D_SRAM_block = D_SRAM[cpu_addr[11:5]];

always@(posedge clk)begin
  if(!rst_n)begin
    D_SRAM_word <= 64'd0;
  end
  else if(hit & data_req &~wren)begin   // 从目标块D_SRAM_block中取出正确的字D_SRAM_word，用于CPU读
    case(cpu_addr[4:3])
      2'd0: D_SRAM_word <= D_SRAM_block[63:0];
      2'd1: D_SRAM_word <= D_SRAM_block[127:64];
      2'd2: D_SRAM_word <= D_SRAM_block[191:128];
      2'd3: D_SRAM_word <= D_SRAM_block[255:192];
      default: D_SRAM_word <= D_SRAM_block[63:0];
    endcase
  end
  else begin
    D_SRAM_word <= D_SRAM_word;
  end
end

// set hit and dirty bit(if the block has been changed by cpu)
assign hit = D_SRAM_block[309] & (cpu_addr[63:12] == D_SRAM_block[307:256]);
assign dirty = D_SRAM_block[308];
//write/read data_cache miss, waiting...
assign ram_abort = (dram_wr_req || dram_rd_req || dram_rd_req_dly);
//data_cache state machine
always@(posedge clk)begin
  if(!rst_n)
    present_state <= CPU_EXEC;
  else begin
    case(present_state)
    CPU_EXEC:begin
      if(~hit & dirty & data_req)  //dirty block write back to dram
        present_state <= WR_DRAM;
      else if(~hit & data_req)
        present_state <= RD_SRAM;
      else
        present_state <= CPU_EXEC;
    end
    WR_DRAM:begin
      if(dram_wr_ready)
        present_state <= RD_DRAM;
      else
        present_state <= WR_DRAM;
    end
    RD_DRAM:begin
      if(dram_rd_ready)
        present_state <= CPU_EXEC;
      else
        present_state <= RD_DRAM;
    end
    default: present_state <= CPU_EXEC;
  endcase
  end
end

  //dram write/read request
assign dram_wr_req = (present_state == WR_DRAM);
assign dram_rd_req = (present_state == RD_DRAM);
  //dram read request delay
always@(posedge clk)begin
  if(!rst_n)
    dram_rd_req_dly <= 1'b0;
  else
    dram_rd_req_dly <= dram_rd_req;
end
//cpu_tag
always@(posedge clk)begin
  if(!rst_n)
    tag_dly <= 52'd0;
  else if((~hit & dirty & data_req) & ~dram_wr_req & ~dram_rd_req);
    tag_dly <= D_SRAM_block[307:256];
  else 
    tag_dly <= tag_dly;
end
//cpu_address
always@(posedge clk)begin
  if(!rst_n)
    cpu_addr_dly <= 64'd0;
  else if((~hit & dirty & data_req & wren) | (~hit & data_req) )
    cpu_addr_dly <= cpu_addr;
  else
    cpu_addr_dly <= cpu_addr;
end
//cpu write data
always@(posedge clk)begin
  if(!rst_n)
    cpu_wr_data_dly <= 64'd0;
  else if(~hit & data_req & wren)
    cpu_wr_data_dly <= cpu_wr_data;
  else
    cpu_wr_data_dly <= cpu_wr_data_dly;
end
//cpu write wait flag (wait until target block has been moved to cache)
always@(posedge clk)begin
  if(!rst_n)
    cpu_wr_wait_flag <= 1'd0;
  else if(~hit & data_req & wren)
    cpu_wr_wait_flag <= 1'd1;
  else if(~dram_wr_req & ~dram_rd_req)
    cpu_wr_wait_flag <= 1'd0;
  else 
    cpu_wr_wait_flag <= cpu_wr_wait_flag;
end
//block counter
always@(posedge clk)begin
  if(!rst_n)begin
    wr_counter <= 64'd0;
  end
  else begin
    if(dram_wr_ready)
      wr_counter <= 64'd0;
    else if(dram_wr_val & dram_wr_req)
      wr_counter <= wr_counter + 1'b1;
    else
      wr_counter <= wr_counter;
  end
end

always@(posedge clk)begin
  if(!rst_n)begin
    rd_counter <= 64'd0;
  end
  else if(dram_rd_ready)
    rd_counter <= 64'd0;
  else if(dram_rd_val & dram_rd_req)
    rd_counter <= rd_counter + 1'b1;
  else
    rd_counter <= rd_counter;
end
assign dram_wr_ready = (wr_counter == BLOCK_SIZE);
assign dram_rd_ready = (rd_counter == BLOCK_SIZE);

//dram data buffer
always@(posedge clk)begin
  if(!rst_n)begin
    dram_data_shift[0] <= 64'd0;
    dram_data_shift[1] <= 64'd0;
    dram_data_shift[2] <= 64'd0;
    dram_data_shift[3] <= 64'd0;
  end
  else if(dram_rd_ready)begin
    dram_data_shift[0] <= 64'd0;
    dram_data_shift[1] <= 64'd0;
    dram_data_shift[2] <= 64'd0;
    dram_data_shift[3] <= 64'd0;
  end
  else if(dram_rd_val)begin
    dram_data_shift[0] <= dram_data_shift[1];
    dram_data_shift[1] <= dram_data_shift[2];
    dram_data_shift[2] <= dram_data_shift[3];
    dram_data_shift[3] <= dram_rd_data;
  end
end
endmodule