module note_timer(
    input clk,
    input reset,
    input update_note_length,
    input [5:0] note_length,
    input pause,
    input play,
    output note_did_end
);

	wire [5:0] counter;
	reg [5:0] next;

	dffr #(6) tmr_ff(.clk(clk), .r(reset), .d(next), .q(counter));

	always @(*) begin
		if (reset) next = 0;
		else if (update_note_length) next = note_length;
		else if (play) next = (counter==6'b0) ? 6'b0 : (counter-1);
		else if (pause) next = counter;
		else next = counter; // do nothing as default
	end

	// signal that the note  has ended
	wire reached_end, end_val;
	dffr note_ff(.clk(clk), .r(reset), .d(reached_end), .q(end_val));

	// reached_end is false until counter reaches 0 and no update applied
	assign reached_end = (~update_note_length & (counter == 6'b0));
	assign note_did_end = (~end_val & reached_end); // handles 1 cycle timing delay

endmodule