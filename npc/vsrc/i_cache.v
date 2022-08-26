`include "../vsrc/rvseed_defines.v"
//二路组相连cache 2k*2   256/8=32B, deep = 64
//tag = 52'b[63:12] index = 7'b[11:5] offset = 5'b[4:2];

module i_cache (
 	input clk,
	input rst_n,
	//cpu cache
	input [63:0] cpu_req_addr,
	input cpu_req_valid,
	//input cpu_req_rw,
	output reg [63:0] cpu_data_read,
	output reg cpu_ready,
	//main memory cache
	output reg [63:0] mem_req_addr,
	output reg mem_req_valid,   //读使能
	input [63:0] mem_data_read,
	input mem_ready,
	input mem_done
);

parameter IDLE= 0,CompareTag = 1, Allocate = 2;
parameter V= 308;
parameter TagMSB = 307, TagLSB= 256, BlockMSB =255, BlockLSB = 0;
reg [308:0] cache_data[0:127];
reg [1:0] state,next_state;
reg hit;
reg hit1,hit2;
reg way;     //若hit，则way无意义，若miss，则way表示分配的那一路

wire [6:0]cpu_req_index;
wire [51:0]cpu_req_tag;
wire [4:0]cpu_req_offset;

assign cpu_req_offset= cpu_req_addr[4:0];
assign cpu_req_index= cpu_req_addr[11:5];
assign cpu_req_tag= cpu_req_addr[63:12]; 

integer i;//初始化cache
initial
begin
    for(i=0;i<128;i=i+1)
        cache_data[i]=309'd0;
end
always@(posedge clk)begin
	if(!rst_n)
		state<=IDLE;
	else
		state<=next_state;
end
reg shift_ready;
always@(*)begin
	case(state)
		IDLE:if(cpu_req_valid)
				next_state=CompareTag;
			 else
				next_state=IDLE;
		CompareTag:if(hit)                     //若hit
					  next_state=IDLE;
				   else
					  next_state=Allocate;
		Allocate:if(shift_ready)
					  next_state=CompareTag;
				 else
					  next_state=Allocate;
		default:next_state=IDLE;
	endcase
end

always@(*)begin
	if(state==CompareTag)begin
		if(need_allocate == 1'b0)begin
			if(cache_data[2*cpu_req_index][V]==1'b1&&cache_data[2*cpu_req_index][TagMSB:TagLSB]==cpu_req_tag)
				hit1=1'b1;
			else
				hit1=1'b0;
		end
		else if (need_allocate)begin
			if(cache_data[2*delay_cpu_req_index][V]==1'b1&&cache_data[2*cpu_req_index][TagMSB:TagLSB]==delay_cpu_req_tag)
				hit1=1'b1;
			else
				hit1=1'b0;
		end
	end
	else
		hit1=1'b0;
end

always@(*)begin
	if(state==CompareTag)begin
	if(need_allocate == 1'b0)begin
		if(cache_data[2*cpu_req_index+1][V]==1'b1&&cache_data[2*cpu_req_index+1][TagMSB:TagLSB]==cpu_req_tag)
			hit2=1'b1;
		else
			hit2=1'b0;
	end
	else if(need_allocate)begin
		if(cache_data[2*delay_cpu_req_index+1][V]==1'b1&&cache_data[2*cpu_req_index+1][TagMSB:TagLSB]==delay_cpu_req_tag)
			hit2=1'b1;
		else
			hit2=1'b0;
	end
	end
	else
		hit2=1'b0;
end
	
always@(*)begin
	if(state==CompareTag)
		hit=hit1||hit2;
	else
		hit=1'b0;
end
reg need_allocate;
always@(*)begin
	if((state==CompareTag)&&(hit==1'b0))begin   //未命中
		case({cache_data[2*cpu_req_index][V],cache_data[2*cpu_req_index+1][V]})
			2'b01:way=1'b0;                    //第0路可用
			2'b10:way=1'b1;                    //第1路可用
			2'b00:way=1'b0;                    //第0、1路均可用
			2'b11:way=1'b0;                    //第0、1路均不可用，默认替换第0路
			default:way=1'b0;
		endcase
	end
	else begin
		way = way;
	end
end
reg [63:0] delay_cpu_req_addr;
always@(posedge clk)begin
	if((state==CompareTag)&&(hit==1'b0))begin   //未命中
		delay_cpu_req_addr <= cpu_req_addr;
		need_allocate <= 1'b1;
	end
	else begin
		delay_cpu_req_addr <= delay_cpu_req_addr;
		need_allocate <= 1'b0;
	end
end
wire delay_cpu_req_offset= delay_cpu_req_addr[4:0];
wire delay_cpu_req_index= delay_cpu_req_addr[11:5];
wire delay_cpu_req_tag= delay_cpu_req_addr[63:12]; 


always@(posedge clk)begin
	if(state==CompareTag&&hit)begin
		cpu_ready<=1'b1;
			if(hit1)
				cpu_data_read<=cache_data[2*cpu_req_index][64*cpu_req_offset[4:2] +:64];
			else
				cpu_data_read<=cache_data[2*cpu_req_index+1][64*cpu_req_offset[4:2] +:64];
	end
	else begin
		cpu_ready<=1'b0;
		cpu_data_read <= cpu_data_read;
	end
end
reg [3:0] count;
reg test;
always@(posedge clk)begin
if(!rst_n)begin
	count <= 1'b0;
	shift_ready <= 1'd0;
	test <= 1'd0;
end
else begin
	if(state==Allocate)begin                           //load new block from memory to cache
		if(!mem_ready)begin
			mem_req_valid<=1'b1;
			mem_req_addr<={cpu_req_addr[63:5],5'd0};
			//mem_req_rw<=1'b0;
			count <= 4'd0;
			shift_ready <= 1'd0;
		end
		else begin
			if(!mem_done && mem_ready)begin
			if(count ==3'd3)begin
				mem_req_valid<=1'b0;
				cache_data[2*cpu_req_index+way][308:192] <= {1'b1,cpu_req_tag,mem_data_read};
				count <= 4'd0;
				shift_ready <= 1'd1;
				test <= 1'd1;
			end
			else begin
				mem_req_valid<=1'b0;
				cache_data[2*cpu_req_index+way][64*count+:64] <= {mem_data_read};
				count <= count + 1'b1;
				shift_ready <= shift_ready;
			end
			end
			else begin
			cache_data <=cache_data;
			count <= 4'd0;
			shift_ready <= 1'd1;
			end
		end
	end
	else begin
		mem_req_valid<=1'b0;
	end
end
end
	
endmodule