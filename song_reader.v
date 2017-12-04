// `define WAIT_ONE 3'b000
// `define READ 3'b001
// `define WAIT_TWO 3'b010
// `define SEND 3'b011
// `define WAIT_THREE 3'b100
// `define WAIT_PLAYER 3'b101

// module song_reader(
//     input clk,
//     input reset,
//     input play,
// 	 input player_ready,
//     input [1:0] song,
// 	 input beat,
//     output song_done,
//     output wire [5:0] note,
//     output [5:0] duration,
//     output new_note
// );

//     wire [8:0] address;
// 	 assign address = {song, curr_addr};
	 	 
// 	 wire [6:0] curr_addr;
// 	 wire [6:0] next_addrr;
// 	 dffr #(7) read_addr_ff(.clk(clk), .r(reset), .d(next_addrr), .q(curr_addr));
	 
// 	 wire [2:0] state;
// 	 reg [2:0] next_state;
// 	 dffr #(3) state_ff(.clk(clk), .r(reset), .d(next_state), .q(state));
	 
// 	 wire [15:0] rom_output;
// 	 song_rom song_rom(.clk(clk), .addr(address), .dout(rom_output)); // update ROM data to be 16 bits
	 	 
// 	 wire advance;
// 	 wire [5:0] tmr_duration;
// 	 wire timer_done;
// 	 wire update_duration;
	 
// 	 note_timer note_tmr(
// 		.clk(clk), 
// 		.reset(reset),
// 		.update_note_length(update_duration),
// 		.note_length(tmr_duration),
// 		.pause(~play),
// 		.beat(beat),
// 		.note_did_end(timer_done)
// 	 );
// 	 assign tmr_duration = reset? 6'b0:duration;
	 
// 	 wire [3:0] metadata;
// 	 assign {advance, note, duration, metadata} = rom_output;
	 
// 	 assign song_done = ((state == `READ)&(curr_addr == 7'b111_1111))|
// 							  ((state==`SEND)& (rom_output == 16'b0));
// 	 assign next_addrr = (state == `READ)? curr_addr+1: curr_addr; 
// 	 assign new_note = (state == `WAIT_PLAYER)&(~advance & player_ready);
// 	 assign update_duration = ((state == `SEND) & advance);
	 
// 	 always @(*) begin
// 		case (state)
// 			`WAIT_ONE: begin // WAIT_ONE
// 				next_state = reset? `WAIT_ONE:`READ;
// 			end
// 			`READ: begin // READ
// 				next_state = reset? `WAIT_ONE:`WAIT_TWO;
// 			end
// 			`WAIT_TWO: begin // WAIT_TWO
// 				next_state = reset? `WAIT_ONE:`WAIT_PLAYER;
// 			end
// 			`WAIT_PLAYER: begin // WAIT_PLAYER
// 				next_state = reset? `WAIT_ONE:((advance|(~advance & player_ready))?`SEND:`WAIT_PLAYER);
// 			end
// 			`SEND: begin // SEND
// 				next_state = reset? `WAIT_ONE:`WAIT_THREE;
// 			end
// 			`WAIT_THREE: begin // WAIT_THREE
// 				next_state = reset? `WAIT_ONE:((timer_done)? `READ: `WAIT_THREE);
// 			end
// 			default: next_state = reset? `WAIT_ONE: ((state == 5'b0)? `WAIT_ONE:state);
// 		endcase
// 	 end

// endmodule

`define WAIT1 3'b000
`define READ 3'b001
`define WAIT2 3'b010
`define SEND 3'b011
`define WAIT3 3'b100
`define WAIT_FOR_PLAYER 3'b101

module song_reader(  	
			input clk,
			input reset,
			input play,
			input player_available,
			input wire [1:0] song, 
			input beat, //BEAT!
			output song_done, //goes to mcu
			output wire [5:0] note, //note pushed out to chords.v
			output [5:0] duration,
			output new_note);

wire on;

wire [2:0] next;
reg [2:0] next_reg;
wire [2:0] state;
wire [10:0] address;
wire [7:0] next_addr;
reg [7:0] next_addr_reg;
wire [15:0] rom_out;
wire [6:0] addr;
reg ready;
reg done;

wire advance;

wire [5:0] timer_duration;
wire timer_done;
reg load_new_duration;

assign address = {song, addr};

//Whether the player is on or off
dffr is_on ( .clk(clk), .r(reset), .d(play), .q(on));

//The address at which the song reader is reading
dffr #(8) address_value ( .clk(clk), .r(reset), .d(next_addr), .q(addr));

//The state of the song reader
dffr #(3) reader_state( .clk(clk), .r(reset), .d(next), .q(state));

//Timer for advance times

		note_timer note_tmr(
 		.clk(clk), 
 		.reset(reset),
 		.update_note_length(load_new_duration),
 		.note_length(timer_duration),
 		.pause(~play),
 		.beat(beat),
 		.note_did_end(timer_done));

//All the song options
song_rom songs( .clk(clk), .addr(address), .dout(rom_out));

always @(*) begin

if(on)
	case(state)
		`WAIT1: begin
				//next_reg = `READ;
				next_reg = `WAIT2;
				next_addr_reg = addr;
				ready = 1'b0;
				done = 1'b0;
				load_new_duration = 1'b0;
			end

		//NOTE: Delay this stage by one clock cycle somehow.
		`READ: begin   
				if(next_addr_reg == 8'b11111111)  //If the last address of the song has been read
					done = 1'b1;
				else
					done = 1'b0;

				next_addr_reg = addr + 8'b1;
				next_reg = `WAIT2;
				ready = 1'b0;
				load_new_duration = 1'b0;
				
			end

		`WAIT2: begin
				//next_reg = (player_available | advance) ? `SEND : `WAIT2;
				next_reg = `WAIT_FOR_PLAYER;
				next_addr_reg = addr;
				ready = 1'b0;
				//ready = 1'b1;
				done = 1'b0;
				load_new_duration = 1'b0;
			end

		`WAIT_FOR_PLAYER: begin // waiting for a 'player_available' signal before sending note
				if(!advance & player_available) begin
					next_reg = `SEND;
					ready = 1'b1;
				end
				else if(advance) begin
					next_reg = `SEND;
					ready= 1'b0;
				end
				else begin
					next_reg = `WAIT_FOR_PLAYER;
					ready = 1'b0;
				end

				done = 1'b0;
				load_new_duration = 1'b0;
				next_addr_reg = addr;
			end

		`SEND:  begin	//If the song had fewer than 32 notes and ended
				if(rom_out == 13'b0) 
					done = 1'b1;
				else 
					done = 1'b0;
					
				if(advance)
					load_new_duration = 1'b1;
			 	else
					load_new_duration = 1'b0;
				
				next_reg = `WAIT3;
				next_addr_reg = addr;
				ready = 1'b0;
				
			end

		`WAIT3: begin
				if(timer_done) 
					next_reg = `READ;
				else 
					next_reg = `WAIT3;
				
				load_new_duration = 1'b0;
				
				next_addr_reg = addr;
				ready = 1'b0;
				done = 1'b0;
			end

		default: begin
				load_new_duration = 1'b0;
				next_reg = state;
				next_addr_reg = addr;
				ready = 1'b0;
				done = 1'b0;
			end
	endcase

else begin
	next_reg = state;
	next_addr_reg = address;
	ready = 1'b0;
	done = 1'b0;
	load_new_duration = 1'b0;
end

end


assign {advance, note, duration, metadata} = rom_out;

assign next = reset ? `WAIT1 : next_reg;
assign next_addr = reset ? 7'b0 : next_addr_reg;
assign new_note = /*reset ? 1'b0 :*/ ready;
assign song_done = /*reset ? 1'b0 :*/ done;
assign timer_duration = reset ? 6'b0 : duration;

endmodule