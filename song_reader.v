`define WAIT_ONE 3'b000
`define READ 3'b001
`define WAIT_TWO 3'b010
`define SEND 3'b011
`define WAIT_THREE 3'b100
`define WAIT_PLAYER 3'b101

module song_reader(
    input clk,
    input reset,
    input play,
	 input player_ready,
    input [1:0] song,
	 input beat,
    output song_done,
    output wire [5:0] note,
    output [5:0] duration,
    output new_note
);

    wire [8:0] address;
	 assign address = {song, curr_addr};
	 	 
	 wire [6:0] curr_addr;
	 wire [6:0] next_addr;
	 dffr #(7) read_addr_ff(.clk(clk), .r(reset), .d(next_addr), .q(curr_addr));
	 
	 wire [2:0] state;
	 reg [2:0] next_state;
	 dffr #(3) state_ff(.clk(clk), .r(reset), .d(next_state), .q(state));
	 
	 wire [15:0] rom_output;
	 song_rom song_rom(.clk(clk), .addr(address), .dout(rom_output)); // update ROM data to be 16 bits
	 	 
	 wire advance;
	 wire [5:0] tmr_duration;
	 wire timer_done;
	 wire update_duration;
	 
	 note_timer note_tmr(
		.clk(clk), 
		.reset(reset),
		.update_note_length(update_duration),
		.note_length(tmr_duration),
		.pause(~play),
		.beat(beat),
		.note_did_end(timer_done)
	 );
	 assign tmr_duration = reset? 6'b0:duration;
	 
	 wire [3:0] metadata;
	 assign {advance, note, duration, metadata} = rom_output;
	 
	 assign song_done = ((state == `READ)&(curr_addr == 7'b111_1111))|
							  ((state==`SEND)& (rom_output == 16'b0));
	 assign next_addr = (state == `READ)? curr_addr+1: curr_addr; 
	 assign new_note = (state == `WAIT_PLAYER)&(~advance & player_ready);
	 assign update_duration = ((state == `SEND) & advance);
	 
	 always @(*) begin
		case (state)
			`WAIT_ONE: begin // WAIT_ONE
				next_state = reset? `WAIT_ONE:`READ;
			end
			`READ: begin // READ
				next_state = reset? `WAIT_ONE:`WAIT_TWO;
			end
			`WAIT_TWO: begin // WAIT_TWO
				next_state = reset? `WAIT_ONE:`WAIT_PLAYER;
			end
			`WAIT_PLAYER: begin // WAIT_PLAYER
				next_state = reset? `WAIT_ONE:((advance|(~advance & player_ready))?`SEND:`WAIT_PLAYER);
			end
			`SEND: begin // SEND
				next_state = reset? `WAIT_ONE:`WAIT_THREE;
			end
			`WAIT_THREE: begin // WAIT_THREE
				next_state = reset? `WAIT_ONE:((timer_done)? `READ: `WAIT_THREE);
			end
			default: next_state = reset? `WAIT_ONE: ((state == 5'b0)? `WAIT_ONE:state);
		endcase
	 end

endmodule