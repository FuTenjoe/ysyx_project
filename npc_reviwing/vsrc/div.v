`include "../vsrc/rvseed_defines.v"

module div
	#(parameter N=32,
      parameter M=32,
      parameter N_ACT = M+N-1)
    (
      input                     clk,
      input                     rstn,

      input                     div_valid ,  //数据使能
      input [N-1:0]             dividend,   //被除数
      input [M-1:0]             divisor,    //除数
	  input div_sign,     //0为无符号数
      input alu_sec,   //0为商

      output                    res_rdy ,
      output [N_ACT-M:0]        merchant ,  //商位宽：N
      output [M-1:0]            remainder,   //最终余数
      output [N-1:0] div_res
	  ); 

    wire [N_ACT-M-1:0]   dividend_t [N_ACT-M:0] ;
    wire [M-1:0]         divisor_t [N_ACT-M:0] ;
    wire [M-1:0]         remainder_t [N_ACT-M:0];
    wire [N_ACT-M:0]     rdy_t ;
    wire [N_ACT-M:0]     merchant_t [N_ACT-M:0] ;
	
	wire [N-1:0] sign_dividend;
	wire [M-1:0] sign_divisor;
	wire [1:0] res_sign;
	assign sign_dividend = (div_sign) ? (dividend[N-1]==1'b1 ? (~dividend+ 1'b1) : dividend) : dividend;
	assign sign_divisor = (div_sign) ? (divisor[M-1] == 1'b1 ? ~divisor + 1'b1 : divisor) : divisor;
	assign res_sign = (div_sign)? (dividend[N-1]==1'b1 ?(divisor[M-1] == 1'b1 ? 2'b01: 2'b11):(divisor[M-1] == 1'b1 ? 2'b10: 2'b00)) : 2'b00;

reg delay1_div_finish;
reg delay2_div_finish;
reg delay_div_valid;

always@(posedge clk or negedge rstn)begin
    if(!rstn)begin
        delay1_div_finish <= 1'b0;
        delay2_div_finish <= 1'b0;
        delay_div_valid <= 1'b0;
    end
    else begin
        delay1_div_finish <= res_rdy;
        delay2_div_finish <= delay1_div_finish;
        delay_div_valid <= div_valid;
    end
end
wire en2;
assign en2  = (div_valid &(!delay_div_valid)) || (div_valid & delay_div_valid & delay2_div_finish);
    //初始化首个运算单元
    divider_cell      #(.N(N_ACT), .M(M))
       u_divider_step0
    ( .clk              (clk),
      .rstn             (rstn),
      //.en               (div_valid),
      .en               (en2),
      //用被除数最高位 1bit 数据做第一次单步运算的被除数，高位补0
      .dividend         ({{(M){1'b0}}, sign_dividend[N-1]}),
      .divisor          (sign_divisor),                  
      .merchant_ci      ({(N_ACT-M+1){1'b0}}),   //商初始为0
      .dividend_ci      (sign_dividend[N_ACT-M-1:0]), //原始被除数
      //output
      .dividend_kp      (dividend_t[N_ACT-M]),   //原始被除数信息传递
      .divisor_kp       (divisor_t[N_ACT-M]),    //原始除数信息传递
      .rdy              (rdy_t[N_ACT-M]),
      .merchant         (merchant_t[N_ACT-M]),   //第一次商结果
      .remainder        (remainder_t[N_ACT-M])   //第一次余数
      );

    genvar               i ;
    generate
        for(i=1; i<=N_ACT-M; i=i+1) begin: sqrt_stepx
            divider_cell      #(.N(N_ACT), .M(M))
              u_divider_step
              (.clk              (clk),
               .rstn             (rstn),
               .en               (rdy_t[N_ACT-M-i+1]),
               .dividend         ({remainder_t[N_ACT-M-i+1], dividend_t[N_ACT-M-i+1][N_ACT-M-i]}),   //余数与原始被除数单bit数据拼接
               .divisor          (divisor_t[N_ACT-M-i+1]),
               .merchant_ci      (merchant_t[N_ACT-M-i+1]),
               .dividend_ci      (dividend_t[N_ACT-M-i+1]),
               //output
               .divisor_kp       (divisor_t[N_ACT-M-i]),
               .dividend_kp      (dividend_t[N_ACT-M-i]),
               .rdy              (rdy_t[N_ACT-M-i]),
               .merchant         (merchant_t[N_ACT-M-i]),
               .remainder        (remainder_t[N_ACT-M-i])
              );
        end // block: sqrt_stepx
    endgenerate
 reg redy1;
 reg redy2;
 reg redy3;
always@(posedge clk or negedge rstn)begin
    if(!rstn)begin
        redy1 <= 1'b0;
        redy2 <= 1'b0;
        redy3 <= 1'b0;
    end
    else if(redy2 == 1'b1)begin
        redy1 <= 1'b0;
        redy2 <= 1'b0;
        redy3 <= 1'b0;
    end
    else if(div_valid)begin
        redy1 <= rdy_t[2];
        redy2 <= redy1;
        redy3 <= redy2;
    end
    else begin
        redy1 <= 1'b0;
        redy2 <= 1'b0;
        redy3 <= 1'b0;
    end
end

    //assign res_rdy       = rdy_t[0];
    assign res_rdy       = redy2 ? 1'b1: 1'b0 ; 
    assign merchant      = res_sign[1] ? ~merchant_t[0]+1'b1 : merchant_t[0];  //最后一次商结果作为最终的商
    assign remainder     = res_sign[0] ? ~remainder_t[0]+1'b1 : remainder_t[0]; //最后一次余数作为最终的余数
    assign div_res  = alu_sec ? remainder : merchant;
endmodule