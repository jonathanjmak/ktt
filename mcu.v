module mcu(
    input clk,
    input reset,
    input play_button,
    input next_button,
    output play,
    output reset_player,
    output [1:0] song,
    input song_done
);

	reg [1:0] next_song;
	reg next_play;
	
	assign reset_player = (reset | next_button | song_done); // true when reset, song ends
	
	dffr play_ff(.clk(clk), .r(reset), .d(next_play), .q(play));
	dffr #(2) song_counter_ff(.clk(clk), .r(reset), .d(next_song), .q(song));
	
	always @(*) begin
		if (reset) begin
			next_play = 0;
			next_song = 0;
		end
		else if (play_button) begin
			next_play = ~play; // pauses on play, plays on pause
			next_song = song;
		end
		else if (next_button) begin
			next_song = (song == 2'b11) ? 2'b0: song + 2'b01; // if last song loop, otherwise iterate
			next_play = 2'b0; // pause at beginning of next song
		end
		else if (song_done) begin
			next_song = (song == 2'b11) ? 2'b0: song + 2'b01; // if last song loop, otherwise iterate
			next_play = 2'b0; // pause at beginning of next song
			end
		else begin // otherwise continue playing the same song
			next_play = play;
			next_song = song;	
		end
	end

endmodule