module song_reader_tb();

    reg clk, reset, play, note_done;
    reg [1:0] song;
    wire [5:0] note;
    wire [5:0] duration;
    wire song_done, new_note;

    song_reader dut(
        .clk(clk),
        .reset(reset),
        .play(play),
        .song(song),
        .song_done(song_done),
        .note(note),
        .duration(duration),
        .new_note(new_note),
        .note_done(note_done)
    );

    // Clock and reset
    initial begin
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #5 clk = ~clk;
        reset = 1'b0; 
        forever #5 clk = ~clk;
    end

    // Tests
    initial begin
	 
		$display("Playing note %d of song %d, which is duration %d", note, song, duration);
		play = 1;
		song = 0;
		
		
		note_done = 1;
		#10;
		note_done = 0;
		
		repeat (12) begin
			note_done = 1;
			#10;
			note_done = 0;
			
			#120;
			note_done = 1;
			#10;
			note_done = 0;
			
			#80;
			note_done = 1;
			#10;
			note_done = 0;
			
			#120;
			note_done = 1;
			#10;
			note_done = 0;
			#80;
		end
    end

endmodule


