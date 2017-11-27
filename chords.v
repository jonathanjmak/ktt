module chords(
	input clk,
	input reset,
	input play,
	input [5:0] note,
	input [5:0] duration,
	input new_note,
	input beat,
	input generate_next_sample,
	output player_ready,
	output reg [15:0] sample_out,
	output new_sample_ready
);

	wire sample_one, sample_two, sample_three;
	wire player_one_done, player_two_done, player_three_done;
	
	note_player player_one(
        .clk(clk),
        .reset(reset),
        .play_enable(play),
        .note_to_load(note_to_play),
        .duration_to_load(duration_for_note),
        .load_new_note(new_note), // load
        .done_with_note(note_done),
        .beat(beat),
        .generate_next_sample(generate_next_sample),
        .sample_out(note_sample), // sample 3
        .new_sample_ready(note_sample_ready)
    );
	 
	 note_player player_two(
        .clk(clk),
        .reset(reset),
        .play_enable(play),
        .note_to_load(note_to_play),
        .duration_to_load(duration_for_note),
        .load_new_note(new_note), // load
        .done_with_note(note_done),
        .beat(beat),
        .generate_next_sample(generate_next_sample),
        .sample_out(note_sample), // sample 2
        .new_sample_ready(note_sample_ready)
    );
	 
	 note_player player_three(
        .clk(clk),
        .reset(reset),
        .play_enable(play),
        .note_to_load(note_to_play),
        .duration_to_load(duration_for_note),
        .load_new_note(new_note), // load
        .done_with_note(note_done),
        .beat(beat),
        .generate_next_sample(generate_next_sample),
        .sample_out(note_sample), // sample 3
        .new_sample_ready(note_sample_ready)
    );
	 
	assign player_ready = player_done;
endmodule
