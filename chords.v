module chords(
	input clk,
	input reset,
	input new_frame,
	input play,
	input [5:0] note,
	input [5:0] duration,
	input new_note,
	input beat,
	input generate_next_sample,
	output player_ready,
	output [15:0] sample_out,
	output new_sample_ready
);

	wire [15:0] sample_one, sample_two, sample_three;
	wire player_one_done, player_two_done, player_three_done;
	wire sample_one_ready, sample_two_ready, sample_three_ready;
	wire [2:0] load_new_note;
	reg [2:0] next_load_new_note;
	
	wire signed [17:0] avg;
	assign avg = ($signed({sample_one, 2'b0})>>>2)+($signed({sample_two, 2'b0})>>>2)+($signed({sample_three, 2'b0})>>>2);

	dffr #(3) player_ff(.clk(clk),.r(reset),.d(next_load_new_note),.q(load_new_note));

	reg [15:0] sample_out_ndyn;
	always @(*)begin
		if (player_one_done) next_load_new_note = {new_note, 1'b0, 1'b0};
		else if (player_two_done) next_load_new_note = {1'b0, new_note, 1'b0};
		else if (player_three_done) next_load_new_note = {1'b0, 1'b0, new_note};
		else next_load_new_note = 3'b000;
	end
	
	always @(*) begin
		if (~(player_one_done & player_two_done & player_three_done))
			sample_out_ndyn = avg[17:2];
		else if (~((player_one_done&player_two_done)|(player_two_done&player_three_done)|(player_one_done&player_three_done)))
			sample_out_ndyn = avg[16:1];	
		else
			sample_out_ndyn = avg[15:0];
	end
	
	note_player player_one(
        .clk(clk),
        .reset(reset),
        .play_enable(play),
        .note_to_load(note),
        .duration_to_load(duration),
        .load_new_note(load_new_note[2]),
        .done_with_note(player_one_done),
        .beat(beat),
        .generate_next_sample(generate_next_sample),
        .sample_out(sample_one), // sample 1
        .new_sample_ready(sample_one_ready)
    );
	 
	note_player player_two(
        .clk(clk),
        .reset(reset),
        .play_enable(play),
        .note_to_load(note),
        .duration_to_load(duration),
        .load_new_note(load_new_note[1]),
        .done_with_note(player_two_done),
        .beat(beat),
        .generate_next_sample(generate_next_sample),
        .sample_out(sample_two), // sample 2
        .new_sample_ready(sample_two_ready)
    );
	 
	 note_player player_three(
        .clk(clk),
        .reset(reset),
        .play_enable(play),
        .note_to_load(note),
        .duration_to_load(duration),
        .load_new_note(load_new_note[0]),
        .done_with_note(player_three_done),
        .beat(beat),
        .generate_next_sample(generate_next_sample),
        .sample_out(sample_three), // sample 3
        .new_sample_ready(sample_three_ready)
    );
	 
	dynamics dut(
		.note_duration(duration),
		.clk(clk),
		.reset(reset),
		.sample_start(sample_out_ndyn),
		.done_with_note(player_ready),
		.new_sample_ready(new_sample_ready),
		.beat(beat),
		.final_sample(sample_out),
		.new_frame(new_frame)
	);
	// assign sample_out=sample_out_ndyn; //test without dynamics
	assign new_sample_ready = sample_one_ready | sample_two_ready | sample_three_ready;
	assign player_ready = player_one_done | player_two_done | player_three_done;
endmodule