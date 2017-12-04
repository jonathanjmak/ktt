`define MAX_TIME 16'hFFFF
`define MS_200 14'b10010110000000

module echo (
	input clk,
	input reset,
	input [15:0] sample_in,
	input new_sample_ready,
	input echo_enable,
	output [15:0] sample_to_codec
);
	
	wire curr_sample_ready, delayed_sample_ready;
	dffr sample_ready_ff (.clk(clk),.r(reset),.d(new_sample_ready),.q(curr_sample_ready));
    dffr delayed_sample_ready_ff (.clk(clk),.r(reset),.d(curr_sample_ready),.q(delayed_sample_ready));
	
	wire [13:0] count;
	dffre #(14) counter_ff(.clk(clk), .r(reset), .en(~read_enable & (new_sample_ready & ~curr_sample_ready)), 
						  .d(count + 14'b1), .q(count));

	wire read_enable = (~reset & count == `MS_200 );

	wire [15:0] write_addr, read_addr;
	wire write_reached_max = (write_addr == `MAX_TIME);
	dffre #(16) w_adrr_ff (.clk(clk), .r(reset|(write_addr == `MAX_TIME)), .en(curr_sample_ready & ~delayed_sample_ready), 
						   .d(write_addr + 16'b1), .q(write_addr));	

	wire read_reached_max = (read_addr == `MAX_TIME);
	dffre #(16) r_adrr_ff (.clk(clk),.r(reset|read_reached_max), .en(read_enable & (new_sample_ready & ~curr_sample_ready)),
						   .d(read_addr + 16'b1), .q(read_addr));

	wire [15:0] sample, delayed_sample;	
	assign sample = reset? sample_in:sample_adj;
	dffr #(16) delayed_sample_ff (.clk(clk),.r(reset),.d(sample),.q(delayed_sample));

	assign sample_adj = reset? 16'b0:((read_enable & echo_enable) ?
											 (((sample_cond)>=`MAX_TIME)? `MAX_TIME:sample_cond):sample_in);

	wire [15:0] echoed_sample_out, sample_adj;
	wire [15:0] invert_echo_divide = ~((~echoed_sample_out + 16'b1) >> 1)+16'b1;
	wire [15:0] sample_cond = sample_in+(echoed_sample_out[15])? invert_echo_divide:(echoed_sample_out >>1);
	
	assign sample_to_codec = delayed_sample;
	ram_1w2r #(.WIDTH(16), .DEPTH(16)) delay_ram (
		.clka(clk),
		.wea(curr_sample_ready),
		.addra(write_addr),
		.dina(delayed_sample),
		.douta(),
		.clkb(clk),
		.addrb(read_addr),
		.doutb(echoed_sample_out)
	);
	
endmodule