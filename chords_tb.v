`timescale 1ns/1ps

module chords_tb();

reg clk; 
reg reset;
reg play;
reg [5:0] note; 
reg [5:0] duration;
reg new_note;
reg beat;
reg gen_next;
wire [15:0] sample_out;
wire samp_rdy;

chords chord_module(	
	.clk(clk), 
	.reset(reset),
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
		#28 gen_next = 1'b1;
		#4 gen_next = 1'b0;
	end
		
end

initial begin
	#2
	//Initialize values
	play = 1'b1;
	note = 6'b0;
	duration = 6'b0;
	new_note = 1'b0;
	
	//Reset the system
	reset = 1'b1;
	#2
	reset = 1'b0;
	
	//Input a note and let it finish
		#2
		note = 6'd37;
		duration = 6'd4;
		new_note = 1'b1;
		#2
		new_note = 1'b0;
		
		#500
	
	//Input two notes and let them finish
		note = 6'd37; //A4
		duration = 6'd4;
		new_note = 1'b1;
		#4
		new_note = 1'b0;
		#4
		
		note = 6'd41; //C#4
		duration = 6'd4;
		new_note = 1'b1;
		#4
		new_note = 1'b0;
		
		#500
	
	//Input three notes and let them finish
	
		note = 6'd37; //A4
		duration = 6'd4;
		new_note = 1'b1;
		#4
		new_note = 1'b0;
		#4
		note = 6'd41; //C#4
		duration = 6'd4;
		new_note = 1'b1;
		#4
		new_note = 1'b0;
		#4
		note = 6'd44; //E4
		duration = 6'd4;
		new_note = 1'b1;
		#4
		new_note = 1'b0;
		
		#470
	
	//Input three notes in sequence (instead of at the same time)
	
		note = 6'd37; //A4
		duration = 6'd4;
		new_note = 1'b1;
		#4
		new_note = 1'b0;
		
		#100
		
		note = 6'd41; //C#4
		duration = 6'd4;
		new_note = 1'b1;
		#4
		new_note = 1'b0;
		
		#100
		
		note = 6'd44; //E4
		duration = 6'd4;
		new_note = 1'b1;
		#4
		new_note = 1'b0;
		
		#500
	
	$finish;
end
endmodule
