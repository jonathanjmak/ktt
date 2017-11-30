module note_timer(
    input clk,
    input reset,
    input update_note_length,
    input [5:0] note_length,
    input pause,
    input beat,
    output note_did_end
);

	wire [5:0] counter;
	reg [5:0] next;

	dffr #(6) tmr_ff(.clk(clk), .r(reset), .d(next), .q(counter));

	always @(*) begin
		if (reset) next = 0;
		else if (update_note_length) next = note_length;
		else if (pause) next = counter;
		else if (beat) next = (counter==6'b0) ? 6'b0 : (counter-1);
		else next = counter; // do nothing as default
	end

	assign note_did_end = (counter == 6'b0) & ~update_note_length;

endmodule