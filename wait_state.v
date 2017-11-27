module wait_state(
	input clk,
	input reset,
	input wave_display_idle,
	input active,
	output flip_index
);

	wire condition_in = wave_display_idle & ~active;
	wire condition_out;
	
	one_pulse pulser(.clk(clk),.reset(reset),.in(condition_in), .out(condition_out));
	
	wire buffer_done;
	reg next_buffer_done;
	
	dffr buffer_done_ff(.clk(clk),.r(reset),.d(next_buffer_done),.q(buffer_done));
	
	always @(*) begin
		if (active) next_buffer_done = 1;
		else if (buffer_done) next_buffer_done = condition_out;
		else next_buffer_done = 0;
	end
	
	assign flip_index = (condition_out&buffer_done);
	
endmodule
