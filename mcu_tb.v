module mcu_tb();
    reg clk, reset, play_button, next_button, song_done;
    wire play, reset_player;
	 wire [1:0] song;

    mcu dut(
        .clk(clk),
        .reset(reset),
        .play_button(play_button),
        .next_button(next_button),
        .play(play),
        .reset_player(reset_player),
        .song(song),
        .song_done(song_done)
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
		play_button = 0;
		song_done = 0;
		next_button = 0;
		#50;
		
		// play then pause
		repeat(2) begin
			play_button = 1;
			#10;
			play_button = 0;
			#50;
		end
		
		// next should loop
		repeat(3) begin
			next_button = 1;
			#10;
			next_button = 0;
			#50;
		end
	
		// end song, should go to next song
		song_done = 1;
		#10;
		song_done = 0;
		#50;
		
		// play song again (paused after end song)
		play_button = 1;
		#10;
		play_button = 0;
		#50;
		
		// reset after play, should pause
		reset = 1;
		#10;
		reset = 0;
		#50;
		
   end

endmodule
