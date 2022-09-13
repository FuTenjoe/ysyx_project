`include "../vsrc/rvseed_defines.v"
//直接相连cache 4k   256/8=32B, deep = 128
//tag = 52'b[63:12] index = 7'b[11:5] offset = 5'b[4:2];

module d_cache (
  	input clk,
	input rst_n,
	//cpu - cache
	input [63:0] cpu_req_addr,
	input cpu_req_valid,
	input cpu_req_rw,
	input [63:0] cpu_data_write,
	input [7:0] cpu_wmask,
	output reg  [63:0] cpu_data_read,
	output  cpu_ready,
	//
	output reg [63:0] mem_req_addr,
	output reg	mem_req_rw,
	output reg mem_req_valid,
	output reg [63:0] mem_data_write,
	input [63:0] mem_data_read,
	input mem_ready,
	input mem_r_done,
	input mem_w_done,
	input mem_w_ready,
	output reg [7:0] mem_wmask
	
    );
parameter IDLE = 0, CompareTag=1, Allocate = 2, CompareTag2 = 3,WriteBack = 4;
parameter V= 309,D=308;
parameter TagMSB = 307, TagLSB= 256, BlockMSB =255, BlockLSB = 0;
reg [309:0] cache_data [0:127];
reg [2:0] state,next_state;
reg hit;
reg hit1,hit2;
reg way;

wire [7:0]cpu_req_index;
wire [51:0]cpu_req_tag;
wire [3:0]cpu_req_offset;

assign cpu_req_offset= cpu_req_addr[3:0];
assign cpu_req_index= cpu_req_addr[11:4];
assign cpu_req_tag= cpu_req_addr[63:12]; 

integer i;
initial begin
    for(i=0;i<128;i=i+1)
        cache_data[i]=309'd0;
end
	
always@(posedge clk)begin
	if(!rst_n)
		state <= IDLE;
	else
		state <= next_state;
end

always@(*)begin
	case(state)
		IDLE:begin
			if(cpu_req_valid)    //访存读
				next_state = CompareTag;
			else
				next_state = IDLE;
		end
		CompareTag:begin
			if(hit)
				next_state = IDLE;
			else if(cache_data[2*cpu_req_index+way][V:D] == 2'b11)
				next_state = WriteBack;
			else 
				next_state = Allocate;
		end
		Allocate:begin
			if(mem_ready)
				next_state = CompareTag2;
			else 
				next_state = Allocate;
		end
		WriteBack:begin
			if(mem_ready)
				next_state = Allocate;
			else
				next_state = WriteBack;
		end
		default:next_state = IDLE;
	endcase
end
reg [63:0] delay_cpu_req_addr;
reg delay_cpu_req_rw;
always@(posedge clk)begin
	if(state==CompareTag && ~hit)begin
		delay_cpu_req_addr <= cpu_req_addr;
		delay_cpu_req_rw <= cpu_req_rw;
	end
	else begin
		delay_cpu_req_addr <= delay_cpu_req_addr;
		delay_cpu_req_rw <=delay_cpu_req_rw;
	end
end

wire [3:0] delay_cpu_req_offset= delay_cpu_req_addr[3:0];
wire [7:0] delay_cpu_req_index= delay_cpu_req_addr[11:4];
wire [51:0] delay_cpu_req_tag= delay_cpu_req_addr[63:12];

always@(*)begin
	if(state == CompareTag)begin
		if(cache_data[2*cpu_req_index][V] == 1'b1 && cache_data[2*cpu_req_index][TagMSB:TagLSB]==cpu_req_tag)
			hit1 = 1'b1;
		else 
			hit1 = 1'b0;
	end
	else if(state == CompareTag2)begin
		if(cache_data[2*delay_cpu_req_index][V] == 1'b1 && cache_data[2*delay_cpu_req_index][TagMSB:TagLSB]==delay_cpu_req_tag)
			hit1 = 1'b1;
		else 
			hit1 = 1'b0;
	end
	else
		hit1 = 1'b0;
end

always@(*)begin
	if(state == CompareTag)begin
		if(cache_data[2*cpu_req_index+1][V] == 1'b1 && cache_data[2*cpu_req_index+1][TagMSB:TagLSB]==cpu_req_tag)
			hit2 = 1'b1;
		else 
			hit2 = 1'b0;
	end
	else if(state == CompareTag2)begin
		if(cache_data[2*delay_cpu_req_index+1][V] == 1'b1 && cache_data[2*delay_cpu_req_index+1][TagMSB:TagLSB]==delay_cpu_req_tag)
			hit2 = 1'b1;
		else 
			hit2 = 1'b0;
	end
	else
		hit2 = 1'b0;
end

always@(*)begin
	if(state==CompareTag)
		hit=hit1||hit2;
	else
		hit=1'b0;
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
	else
		way = way;
end

assign cpu_ready = ((state==CompareTag && hit) ||(state==CompareTag2 && hit)) ? 1'b1:1'b0;
always@(*)begin
	if(state == CompareTag)begin
		if(!cpu_req_rw)begin
			if(hit1)
				cpu_data_read = cache_data[2*cpu_req_index][64*cpu_req_offset[3:2]+:64];
			else
				cpu_data_read = cache_data[2*cpu_req_index+1][64*cpu_req_offset[3:2]+:64];
		end
		else begin
			if(hit1)begin
				cache_data[2*cpu_req_index][64*cpu_req_offset[3:2]+:64] <= cpu_data_write;
				cache_data[2*cpu_req_index][D] = 1'b1;
			end
			else begin
				cache_data[2*cpu_req_index+1][64*cpu_req_offset[3:2]+:64] <= cpu_data_write;
				cache_data[2*cpu_req_index+1][D] = 1'b1;
			end
		end
	end
	else if(state == CompareTag2)begin
		if(!delay_cpu_req_rw)begin
			if(hit1)
				cpu_data_read = cache_data[2*delay_cpu_req_index][64*delay_cpu_req_offset[3:2]+:64];
			else
				cpu_data_read = cache_data[2*delay_cpu_req_index+1][64*delay_cpu_req_offset[3:2]+:64];
		end
		else begin
			if(hit1)begin
				cache_data[2*delay_cpu_req_index][64*delay_cpu_req_offset[3:2]+:64] <= cpu_data_write;
				cache_data[2*delay_cpu_req_index][D] = 1'b1;
			end
			else begin
				cache_data[2*delay_cpu_req_index+1][64*delay_cpu_req_offset[3:2]+:64] <= cpu_data_write;
				cache_data[2*delay_cpu_req_index+1][D] = 1'b1;
			end
		end
	end
end

reg dd_r_done;
reg dd_w_done;
always@(posedge clk)begin
	if(!rst_n)begin
		dd_r_done <= 1'd0;
		dd_w_done <= 1'd0;
	end
	else begin
		dd_r_done <= mem_r_done;
		dd_w_done <= mem_w_done;
	end
end

reg [2:0] w_count;
reg [2:0] count;
always@(posedge clk)begin
	if(state == Allocate)begin
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
					cache_data[2*cpu_req_index+way][308:192] <= {1'b1,delay_cpu_req_tag,mem_data_read};
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
				//cache_data <=cache_data;
				count <= 4'd0;
				//shift_ready <= 1'd1;
			end
		end
	end
	else if(state == WriteBack)begin
		if(!mem_w_ready)begin
			w_count <= 3'd0;
			if(w_count == 3'd3)begin
				mem_req_valid <= 1'b1;
				mem_req_addr <= {cpu_req_addr[63:4],2'b11,2'b00};
				mem_data_write <= cache_data[2*cpu_req_index+way][255:192];
				mem_wmask <= cpu_wmask;
				mem_req_rw <= 1'b1;
				w_count <= 3'd0;
			end
			else begin
				mem_req_valid <= 1'b1;
				mem_req_addr <= {cpu_req_addr[63:4],count[1:0],2'b00};
				mem_data_write <= cache_data[2*cpu_req_index+way][64*w_count+:64];
				mem_wmask <= cpu_wmask;
				mem_req_rw <= 1'b1;
				w_count <= w_count+1'b1;
			end
		end
		else begin
			mem_req_valid <= 1'b0;
			w_count <= 3'd0;
		end
	end
	else begin
		mem_req_valid <= 1'b0;
		w_count <= 3'd0;
	end
end
	

endmodule
