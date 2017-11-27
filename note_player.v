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

    // note duration so far
    note_timer note_tmr(
		.clk(clk), 
		.reset(reset),
		.update_note_length(load_new_note),
		.note_length(duration_to_load),
		.pause(~play_enable),
		.play(beat),
		.note_did_end(done_with_note)
	);

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
		.sample_ready(new_sample_ready),
		.sample(sample_out)
	);

endmodule
