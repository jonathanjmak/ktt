module dynamics(
	input [5:0] note_duration,			
	input clk,
	input reset,
	input [15:0] sample_start,					
	input new_sample_ready,
	input done_with_note,	
	input beat,		
	output [15:0] final_sample,
	input new_frame
);

	wire generate_next_sample;
	wire [15:0] sample;
	
	codec_conditioner codec_conditioner(
        .clk(clk),
        .reset(reset),
        .new_sample_in(sample_start),
        .latch_new_sample_in(new_sample_ready),
        .generate_next_sample(generate_next_sample),
        .new_frame(new_frame),
        .valid_sample(sample)
    );

	// Start Attack Phase and hold: Lets make attack always be a consistant 1/8 of note length, and hold it there
	// for another 1/8th of a second, then begin decay.
	wire attack_zero, decay;
	wire [4:0] attack_count;
	reg attack_done;
	reg [15:0] attack_final, final_temp;
	wire [13:0] attack_duration, hold;
	
	// This will get the duration correct to have each count be 1/64th of the total duration
	// Effectively making the attack phase 1/8th of total duration.
	assign attack_duration = {8'd0, note_duration} << 2; 
	// Attack_zero should be true after every 1/64 of note_duration.
	assign attack_zero = attack_duration - attack_count == 0;
	// We want the hold to be 8 times as large at the attack_duration so that it also
	// takes a full 1/8th of the duration.
	assign decay = hold == attack_duration << 3;
	
	// This keeps track of how many times we should have added 1/8th of the amplitude
	// of the total sample to our output sample.
	dffre #(5) attack_ff( .clk(clk), .r(reset || done_with_note), .d(attack_count + 1'b1), .q(attack_count), .en(beat && attack_duration - attack_count == 1'b1 && !attack_done));
	
	// When this reaches a certain limit i.e. 1/64th of the total note_duration,
	// it will enable the count flop (as part of the enable).
	dffre #(14) attack_sub_ff( .clk(clk), .r(reset || done_with_note || attack_zero), .en(beat), .d(attack_count + 1'b1), .q(attack_count));
	
	// This takes care of the Sustain phase by waiting until the attack phase is
	// done, then it counts up to 1/8th of the note duration.
	dffre #(14) hold_ff( .clk(clk), .r(reset || done_with_note), .en(beat && !decay && attack_done), .d(hold + 1'b1), .q(hold));

	always @(*) begin
		case (attack_count)
		1:			{attack_final, attack_done} = {$signed(sample) >>> 2'd3, 1'b0};
		2:			{attack_final, attack_done} = {$signed(sample) >>> 2'd2, 1'b0};
		3:			{attack_final, attack_done} = {$signed(sample) >>> 2'd2 + ($signed(sample) >>> 2'd3), 1'b0};
		4:			{attack_final, attack_done} = {$signed(sample) >>> 1'b1, 1'b0};
		5:			{attack_final, attack_done} = {($signed(sample) >>> 1'b1) + ($signed(sample) >>> 2'd3), 1'b0};
		6:			{attack_final, attack_done} = {($signed(sample) >>> 1'b1) + ($signed(sample) >>> 2'd2), 1'b0};
		7:			{attack_final, attack_done} = {sample - ($signed(sample) >>> 2'd3), 1'b0};
		8:			{attack_final, attack_done} = {sample, 1'b1};
		default: {attack_final, attack_done} = {16'd0, 1'b0};
		endcase
	end
		
	// DONE WITH ATTACK AND SUSTAIN PHASE
	wire [4:0] count;
	wire [13:0] new_duration;
	wire [13:0] subtractor;
	wire zero;
	wire [13:0] result;
	wire [13:0] flop_duration;
	
	assign zero = result == 0 ;

	// This should take care of making the remaining decay last for only 3/4 of the duration.
	// Effectively making the entire Attack and Decay last the whole amount of time.
	assign flop_duration = {8'd0, note_duration} + {8'd0, note_duration} + {8'd0, note_duration} >> 1'b1;

	// Keeps track of how much we should be subtracting from sample.
	// Every time result = 0 we increment count which then shifts the 
	// temp_duration left, making result a larger number than it was before.
	dffre #(5) counter( .clk(clk), .r(reset || done_with_note), .d(count + 1'b1), .q(count), .en(zero & subtractor != 0 & decay));
	
	// Used to make new_duration long enough. We made the duration longer each 
	// time count is incremented to simulate an exponential decay.
	dffre #(14) length_of_time( .clk(clk), .r(reset || done_with_note), .d(flop_duration << count), .q(new_duration), .en(beat & decay));
	
	// This is a counter that when it reaches a certain limit (new_duration)
	// enables the counter flop, which in turn increments count and it starts over.
	dffre #(14) subtract_by( .clk(clk), .r(reset || done_with_note || zero), .d(subtractor + 1'b1), .q(subtractor), .en(beat & decay));

	// Whether it's time to drop the volume of the note again (or not)
	assign result = new_duration - subtractor;
	
	always @(*) begin
		case (count)
		1:			final_temp = sample - $signed(sample) >>> 2'd3;
		2:			final_temp = sample - $signed(sample) >>> 2'd2;
		3:			final_temp = sample - ($signed(sample) >>> 2'd2) - ($signed(sample) >>> 2'd3);
		4:			final_temp = sample - $signed(sample) >>> 1'b1;
		5:			final_temp = sample - ($signed(sample) >>> 1'b1) - ($signed(sample) >>> 2'd3);
		6:			final_temp = sample - ($signed(sample) >>> 1'b1) - ($signed(sample) >>> 2'd2);
		7:			final_temp = ($signed(sample) >>> 2'd3);
		8:			final_temp = 1'b0;
		default: final_temp = sample;
		endcase		
	end

	// For after ATTACK Phase
	assign final_sample = attack_done ? final_temp : attack_final;

endmodule