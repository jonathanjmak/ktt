`timescale 1ns/1ps

module chords_tb();

reg clk; 
reg reset;
reg play;
reg [5:0] note; 
reg [5:0] duration;
reg new_note;
reg beat;
reg new_frame;
reg gen_next;
wire [15:0] sample_out;
wire samp_rdy;

chords chord_module(	
	.clk(clk), 
	.reset(reset),
	.new_frame(new_frame),
	.play(play),
	.note(note), 
	.duration(duration),
	.new_note(new_note),
	.beat(beat),
	.generate_next_sample(gen_next),
	.sample_out(sample_out),
	.new_sample_ready(samp_rdy)
);

//Initialize clock				
initial begin
	clk = 1'b0;
	forever #2 clk = ~clk;
end

//Initialize beat
initial begin
	beat = 1'b0;
	forever begin
		#96 beat = 1'b1;
		#4 beat = 1'b0;
	end
end

initial begin
	gen_next = 1'b0;
	#6
	forever begin
		#28 new_frame = 1'b1;
		gen_next = 1'b1;
		#4 new_frame = 1'b0;
		gen_next = 1'b0;
	end
		
end

initial begin
	#2
	play = 1'b1;
	note = 6'b0;
	duration = 6'b0;
	new_note = 1'b0;
	
	reset = 1'b1;
	#20
	reset = 1'b0;
	
	note = 6'd37;
	duration = 6'd4;
	new_note = 1'b1;
	#4;
	new_note = 1'b0;
	
	#500;

	note = 6'd37; //A4
	duration = 6'd4;
	new_note = 1'b1;
	#4;
	new_note = 1'b0;
	#4;
	
	note = 6'd41; //C#4
	duration = 6'd4;
	new_note = 1'b1;
	#4;
	new_note = 1'b0;
	
	#500;
	
	note = 6'd37; //A4
	duration = 6'd4;
	new_note = 1'b1;
	#4;
	new_note = 1'b0;
	#4;
	note = 6'd41; //C#4
	duration = 6'd4;
	new_note = 1'b1;
	#4;
	new_note = 1'b0;
	#4;
	note = 6'd44; //E4
	duration = 6'd4;
	new_note = 1'b1;
	#4;
	new_note = 1'b0;
	
	#470;
	
	note = 6'd37; //A4
	duration = 6'd4;
	new_note = 1'b1;
	#4
	new_note = 1'b0;
	
	#100;
	
	note = 6'd41; //C#4
	duration = 6'd4;
	new_note = 1'b1;
	#4
	new_note = 1'b0;
	
	#100;
	
	note = 6'd44; //E4
	duration = 6'd4;
	new_note = 1'b1;
	#4
	new_note = 1'b0;
	
	#500;
	
	$finish;
	end
endmodule