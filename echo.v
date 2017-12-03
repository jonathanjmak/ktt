`define DELAY_TIME 14'b10010110000000 //14'b10010110000000	// Equivalent to a delay of 200 ms
`define MAX_TIME 16'hFFFF //16'hFFFF

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
	dffre #(14) counter (.clk(clk), .r(reset), .en(~read_enable & (new_sample_ready & ~curr_sample_ready)), 
						 .d(count + 14'b1), .q(count));

	wire read_enable;
	assign read_enable = reset? 0 : (count == `DELAY_TIME )? 1:0;

	// We write samples into the address tracked by this flip-flop; asserted when new_sample_ready is high.
	wire [15:0] write_addr, read_addr;
	wire write_reached_max = (write_addr == `MAX_TIME)? 1:0;
	dffre #(16) w_adrr_ff (.clk(clk), .r(reset), .en(curr_sample_ready & ~delayed_sample_ready), 
						   .d(write_addr + 16'b1), .q(write_addr));	

	// We read samples from the address tracked by this flip-flop; on when counter has reached the maximum delay time.
	wire read_reached_max = (read_addr == `MAX_TIME)? 1:0;
	dffre #(16) r_adrr_ff (.clk(clk),.r(reset),
								 .en(read_enable & (new_sample_ready & ~curr_sample_ready)),
								 .d(read_addr + 16'b1), .q(read_addr));
	
	// When read_enable goes high, we start reading samples from the RAM
	// and combining it with the current sample into the note player.
	wire [15:0] echoed_sample_out, modified_sample;
	wire [15:0] invert_echo_divide = ~((~echoed_sample_out + 16'b1) >> 1)+16'b1;
	wire [15:0] modified_sample_cond = sample_in+(echoed_sample_out[15])? invert_echo_divide:(echoed_sample_out >>1);

	assign modified_sample = reset? 16'b0:((read_enable & echo_enable) ?
											 (((modified_sample_cond)>=`MAX_TIME)? `MAX_TIME:modified_sample_cond):sample_in);
	
	wire [15:0] sample, delayed_sample;	
	assign sample = reset? sample_in:modified_sample;
	dffr #(16) delayed_sample_ff (.clk(clk),.r(reset),.d(sample),.q(delayed_sample));
	
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
	assign sample_to_codec = modified_sample;
	
endmodule