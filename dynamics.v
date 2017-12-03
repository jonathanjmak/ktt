// endmodule
`define IDLE 2'b00
`define ATTACK 2'b01
`define DECAY 2'b10
`define SUSTAIN 2'b11

module dynamics(
	input clk,
	input reset,
	input [2:0] amplitude_in, // the amplitude of the note to play
	input [5:0] duration, // the duration of the note to play
	input [5:0] attack, // attack value
	input [5:0] decay, // decay value
	input new_note, // Tells us when we have a new note to load
	input beat, // This is our 1/48th second beat
	output [2:0] amplitude_out
);

	wire [1:0] state;
    reg [1:0] next_state;
    dffr #(2) fsm_ff(.clk(clk), .r(reset), .d(next_state), .q(state));

    wire [5:0] count, next_count;
    dffre#(6) counter_ff(.clk(clk), .r(reset), .en(beat), .d(next_count), .q(count));
	assign next_count = (state == `IDLE)? 6'd0:(duration == count)? count:count + 6'd1;

	wire [2:0] curr_amp;
    reg [2:0] next_amp;
    dffr #(3) amp_ff(.clk(clk), .r(reset), .d(next_amp), .q(curr_amp));

    wire [5:0] attack_2 = attack>>1;
    wire [5:0] attack_4 = attack>>2;
    wire [5:0] decay_2 = decay>>1;
    wire [5:0] decay_4 = decay>>2;

    always @(*) begin
		case(state)
			`IDLE: begin
					next_state = new_note? `ATTACK:`IDLE;
					next_amp = amplitude_in;
				end
			`ATTACK: begin
					next_state = (count==attack)? `SUSTAIN:`ATTACK;
					if (attack == 0) next_amp = amplitude_in;
					else if (attack_4 > count) next_amp = 0;
					else if (attack_4 <= count & attack_2 > count) next_amp = (amplitude_in < 3'd3)? 1:amplitude_in - 3'd4;
					else if (attack_2 <= count & attack > count) next_amp = (amplitude_in == 0)? 0:amplitude_in - 3'd1;
					else next_amp = amplitude_in;
				end
			`SUSTAIN: begin
					next_state = (count+decay >= duration) ? `DECAY:`SUSTAIN;
					next_amp = amplitude_in;
				end
			`DECAY: begin
					next_state = (count==duration) ? `IDLE : `DECAY;
					if(decay == 0) next_amp = amplitude_in;
					else if(decay_4 > (duration - count)) next_amp = 0;
					else if(decay_4 <= (duration - count) && decay_2 > (duration - count)) next_amp = (amplitude_in < 3'd3)? 1:amplitude_in - 3'd4;
					else if(decay_2 <= (duration - count) && decay > (duration - count)) next_amp = (amplitude_in == 0)? 0:(amplitude_in - 1);
					else next_amp = amplitude_in;
				end
			default: begin
				next_state = state;
				next_amp = amplitude_in;
				end
		endcase
    end  

    assign amplitude_out = (curr_amp==3'd0)? 3'd1:curr_amp;

endmodule