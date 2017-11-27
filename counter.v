module counter #(parameter WIDTH = 8, parameter COUNT_VAL=255)(
	input clk,
	input reset,
	input beat,
	input enable,
	output [WIDTH-1:0] count
);
	reg [WIDTH-1:0] next_count;
	
	dffr #(.WIDTH(WIDTH)) counter(.clk(clk),.r(reset),.d(next_count), .q(count));
	
	always @(*) begin
		if (reset) next_count = 0;
		else if (enable & beat) next_count = (count == COUNT_VAL) ? 0 : count+1;
		else next_count = count;
	end
endmodule
