 `define WAIT 2'b00
 `define ARMED 2'b01
 `define ACTIVE 2'b10
 
 module wave_capture (
    input clk,
    input reset,
    input new_sample_ready,
    input [15:0] new_sample_in,
    input wave_display_idle,

    output wire [8:0] write_address,
    output wire write_enable,
    output wire [7:0] write_sample,
    output wire read_index
);

	// FSM of the three states is kept track with curr_state and next_state
	wire [1:0] curr_state;
	reg [1:0] next_state;
	dffr #(2) state_ff(.clk(clk),.r(reset),.d(next_state),.q(curr_state));
	always @(*) begin
		case(curr_state)
			`WAIT: next_state = wave_display_idle? `ARMED: `WAIT; // It is in the wait state until wave_display_idle goes high
			`ARMED: next_state = zero_crossing? `ACTIVE: `ARMED; // It is armed until a positive zero crossing is seen. It goes to 'ACTIVE' after seeing it.
			`ACTIVE: next_state = (counter == 8'd255)? `WAIT: `ACTIVE; // It is in the active state until it is done writing, where the 8 most significant bits of the next 256 audio samples are stored. After, it moves to wait.
			default: next_state = 2'b11; 
		endcase
	end

	// Zero crossing is defined as a negative number followed by a positive number.
	wire zero_crossing;
	assign zero_crossing = ((curr_state == `ARMED) & (prev_sample_out>new_sample_in[15]));

	// Compares previous and current values to determine whether there has been a positive zero crossing or not. 
	wire prev_sample_out;
	dffre#(1) zero_cross_ff(.clk(clk),.r(reset), .en(new_sample_ready),.d(new_sample_in[15]),.q(prev_sample_out));

	// Counter counts how long to read
	wire [7:0] counter;
	dffre#(8) cntr(.clk(clk),.r(reset||(curr_state==`ARMED)), .en(new_sample_ready&(curr_state==`ACTIVE)),
	.d(counter+1'b1),.q(counter));

	// Read index is flipped accordingly
	dffre#(1) flip_read(.clk(clk),.r(reset), .en(wave_display_idle&(curr_state==`WAIT)),
	.d(~read_index),.q(read_index));
	
	// Assign outputs
	assign write_sample = ((curr_state==`ACTIVE)|zero_crossing)?(8'd128 + new_sample_in[15:8]):8'hFF;
	assign write_address = {~read_index, counter};
	assign write_enable = (new_sample_ready & ((curr_state == `ACTIVE)|zero_crossing));

endmodule