module note_player(
    input clk,
    input reset,
    input play_enable,  // When high we play, when low we don't.
    input [5:0] note_to_load,  // The note to play
    input [5:0] duration_to_load,  // The duration of the note to play
    input load_new_note,  // Tells us when we have a new note to load
    output done_with_note,  // When we are done with the note this stays high.
    input beat,  // This is our 1/48th second beat
    input generate_next_sample,  // Tells us when the codec wants a new sample
    output [15:0] sample_out,  // Our sample output
    output new_sample_ready  // Tells the codec when we've got a sample
);

	wire done;
    // note duration so far
    note_timer note_tmr(
		.clk(clk), 
		.reset(reset),
		.update_note_length(load),
		.note_length(curr_duration),
		.pause(~play_enable),
		.beat(beat),
		.note_did_end(done)
	);
	
	wire [15:0] new_sample, prev_sample;
	wire next_sample_ready;
	
	wire zero_crossing = ((prev_sample[15]!=new_sample[15]));
	
	reg next_done;

	always @(*) begin
		if ((done & (zero_crossing | (prev_sample == 16'b0)))) next_done = 1;
		else if(~done) next_done = 0;
		else next_done = done_with_note;
	end

	dffr #(16) sample_ff(.clk(clk), .r(reset), .d(new_sample), .q(prev_sample));
	dffr sample_ready_ff(.clk(clk), .r(reset), .d(next_sample_ready), .q(new_sample_ready));
	dffr note_done_ff(.clk(clk), .r(reset), .d(next_done), .q(done_with_note));
	
	reg [5:0] next_note, next_duration;
	wire [5:0] curr_note, curr_duration;
	wire load;

	dffr #(6) note_ff(.clk(clk), .r(reset), .d(next_note), .q(curr_note));
	dffr #(6) duration_ff(.clk(clk), .r(reset), .d(next_duration), .q(curr_duration));
	dffr #(1) load_ff(.clk(clk), .r(reset), .d(load_new_note), .q(load));
	
	always @(*) begin
		if (load_new_note)
			{next_note, next_duration} = {note_to_load, duration_to_load};
		else {next_note, next_duration} = {curr_note, curr_duration};
	end

    wire [19:0] frequency_rom_output;
    wire [19:0] step_size;

    frequency_rom frequency_rom(
		.clk(clk),
		.addr(note_to_load),
		.dout(frequency_rom_output)
	);

   // disable step size if paused
   assign step_size = (play_enable) ? frequency_rom_output: 20'b0;
	
	// to be replaced with harmonics and dynamics utilization of readers per instrument
   sine_reader sine_reader(
		.clk(clk),
		.reset(reset),
		.step_size(step_size),
		.generate_next(generate_next_sample),
		.sample_ready(next_sample_ready),
		.sample(new_sample),
		.done((done & (zero_crossing | (prev_sample == 16'b0))))
	);
	
	assign sample_out = prev_sample;

endmodule
