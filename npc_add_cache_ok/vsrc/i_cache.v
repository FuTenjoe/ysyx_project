`include "../vsrc/rvseed_defines.v"
//二路组相连cache 2k*2   256/8=32B, deep = 64
//tag = 54'b[63:10] index = 7'b[10:4] offset = 4'b[3:0];

module i_cache (
 	input clk,
	input rst_n,
	//cpu cache
	input [63:0] cpu_req_addr,
	input cpu_req_valid,
	//input cpu_req_rw,
	output  [63:0] cpu_data_read,
	output   cpu_ready,
	//main memory cache
	output reg [63:0] mem_req_addr,
	output reg mem_req_valid,   //读使能
	input [63:0] mem_data_read,
	input mem_ready,
	input mem_done,
	output reg [310:0] cache_data[0:127],
	input control_rest
);

parameter IDLE= 0,CompareTag = 1, Allocate = 2,CompareTag2 = 3;
parameter V= 310;
parameter TagMSB = 309, TagLSB= 256, BlockMSB =255, BlockLSB = 0;
//(*KEEP = "TRUE"*) reg [308:0] cache_data[0:127];
reg [1:0] state,next_state;
reg hit;
reg hit1,hit2;
reg way;     //若hit，则way无意义，若miss，则way表示分配的那一路

wire [6:0]cpu_req_index;
wire [53:0]cpu_req_tag;
wire [3:0]cpu_req_offset;

assign cpu_req_offset= cpu_req_addr[3:0];
assign cpu_req_index= cpu_req_addr[10:4];
assign cpu_req_tag= cpu_req_addr[63:10]; 

integer i;//初始化cache
initial
begin
    for(i=0;i<128;i=i+1)
        cache_data[i]=311'd0;
end
always@(posedge clk)begin
	if(!rst_n)
		state<=IDLE;
	else
		state<=next_state;
end

always@(*)begin
	case(state)
		IDLE:if(cpu_req_valid & !control_rest)
				next_state=CompareTag;
			 else
				next_state=IDLE;
		CompareTag:if(hit)                     //若hit
					  next_state=IDLE;
				   else
					  next_state=Allocate;
		Allocate:if(shift_ready)
					  next_state=CompareTag2;
				 else
					  next_state=Allocate;
		CompareTag2:if(hit)                     //若hit
					  next_state=IDLE;
				   else
					  next_state=Allocate;
		default:next_state=IDLE;
	endcase
end

always@(*)begin
	if(state==CompareTag)begin
		if(cache_data[2*cpu_req_index][V]==1'b1 && cache_data[2*cpu_req_index][TagMSB:TagLSB]==cpu_req_tag)
				hit1=1'b1;
			else
				hit1=1'b0;
		end
	else if (state==CompareTag2)begin
		if(cache_data[2*delay_cpu_req_index][V]==1'b1 && cache_data[2*cpu_req_index][TagMSB:TagLSB]==delay_cpu_req_tag)
			hit1=1'b1;
		else
			hit1=1'b0;
	end
	else
		hit1=1'b0;
end

always@(*)begin
	if(state==CompareTag)begin
		if(cache_data[2*cpu_req_index+1][V]==1'b1&&cache_data[2*cpu_req_index+1][TagMSB:TagLSB]==cpu_req_tag)
			hit2=1'b1;
		else
			hit2=1'b0;
	end
	else if(state==CompareTag2)begin
		if(cache_data[2*delay_cpu_req_index+1][V]==1'b1&&cache_data[2*cpu_req_index+1][TagMSB:TagLSB]==delay_cpu_req_tag)
			hit2=1'b1;
		else
			hit2=1'b0;
	end
	else
		hit2=1'b0;
end
reg [63:0] delay_cpu_req_addr;
always@(posedge clk)begin
	if(state==CompareTag && ~hit)
		delay_cpu_req_addr <= cpu_req_addr;
	else
		delay_cpu_req_addr <= delay_cpu_req_addr;
end

wire [3:0] delay_cpu_req_offset= delay_cpu_req_addr[3:0];
wire [6:0] delay_cpu_req_index= delay_cpu_req_addr[10:4];
wire [53:0] delay_cpu_req_tag= delay_cpu_req_addr[63:10]; 

always@(*)begin
	if(state==CompareTag | state==CompareTag2)
		hit=hit1||hit2;
	else
		hit=1'b0;
end
reg dd_r_done;
always@(posedge clk)begin
	if(!rst_n)
		dd_r_done <= 1'd0;
	else
		dd_r_done <= mem_done;
end
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

assign cpu_ready = ((state==CompareTag && hit) ||(state==CompareTag2 && hit)) ? 1'b1:1'b0;
assign cpu_data_read = (state==CompareTag && hit) ? (hit1?cache_data[2*cpu_req_index][64*cpu_req_offset[3:2] +:64] : cache_data[2*cpu_req_index+1][64*cpu_req_offset[3:2] +:64]):(state==CompareTag2 && hit) ?(hit1 ? cache_data[2*delay_cpu_req_index][64*delay_cpu_req_offset[3:2] +:64]:cache_data[2*delay_cpu_req_index+1][64*delay_cpu_req_offset[3:2] +:64]) : 64'd0;

reg [3:0] count;

always@(posedge clk)begin
if(!rst_n)begin
	count <= 1'b0;
	//shift_ready <= 1'd0;
	
end
else begin
	if(state==Allocate)begin                           //load new block from memory to cache
		if(!mem_ready)begin
			mem_req_valid<=1'b1;
			mem_req_addr<={cpu_req_addr[63:4],4'd0};
			//mem_req_rw<=1'b0;
			count <= 4'd0;
			//shift_ready <= 1'd0;
		end
		else begin
			if(!dd_r_done && mem_ready)begin
				if(count ==3'd3)begin
					mem_req_valid<=1'b0;
					cache_data[2*cpu_req_index+way][310:192] <= {1'b1,delay_cpu_req_tag,mem_data_read};
					count <= 4'd0;
					//shift_ready <= 1'd1;
					
				end
				else begin
					mem_req_valid<=1'b0;
					cache_data[2*cpu_req_index+way][64*count+:64] <= {mem_data_read};
					count <= count + 1'b1;
					//shift_ready <= shift_ready;
				end
			end
			else begin
				cache_data <=cache_data;
				count <= 4'd0;
				//shift_ready <= 1'd1;
			end
		end
	end
	else begin
		mem_req_valid<=1'b0;
		//shift_ready <= 1'd0;
	end
end
end
wire shift_ready = (count == 3'd3) ? 1'b1: 1'b0;
endmodule