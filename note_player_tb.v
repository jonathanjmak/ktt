module note_player_tb();

    reg clk, reset, play_enable, generate_next_sample;
    reg [5:0] note_to_load;
    reg [5:0] duration_to_load;
    reg load_new_note;
    wire done_with_note, new_sample_ready, beat;
    wire [15:0] sample_out;

    note_player np(
        .clk(clk),
        .reset(reset),
        .play_enable(play_enable),
        .note_to_load(note_to_load),
        .duration_to_load(duration_to_load),
        .load_new_note(load_new_note),
        .done_with_note(done_with_note),
        .beat(beat),
        .generate_next_sample(generate_next_sample),
        .sample_out(sample_out),
        .new_sample_ready(new_sample_ready)
    );

    beat_generator #(.WIDTH(17), .STOP(1500)) beat_generator(
        .clk(clk),
        .reset(reset),
        .en(1'b1),
        .beat(beat)
    );

    // Clock and reset
    initial begin
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #1 clk = ~clk;
        reset = 1'b0;
        forever #1 clk = ~clk;
    end
	 
	  initial begin
		generate_next_sample = 1'b0; 
		@(negedge clk);
		
		forever begin
			#600;
			@(negedge clk);
			generate_next_sample = 1'b1;
			@(negedge clk);
			generate_next_sample = 1'b0;
		end
    end

    // Tests
    initial begin
		duration_to_load = 6'b11;
		note_to_load = 6'd1;
		@(negedge reset);
		#15;
		@(negedge clk);
		load_new_note = 1'b1;
		@(negedge clk);
		load_new_note = 1'b0;
		play_enable = 1'b1;
		
		while (~done_with_note) @(negedge clk);
		
		#20;
		@(negedge clk);
		load_new_note = 1'b1;
		@(negedge clk);
		load_new_note = 1'b0;
		
		note_to_load = 6'd10;
		@(negedge clk);
		load_new_note = 1'b1;
		@(negedge clk);
		load_new_note = 1'b0;
		#32000;
		@(negedge clk);
		play_enable = 1'b0; //pause
		#16000;
		@(negedge clk);
		play_enable = 1'b1;
		#300000;
    end

endmodule
