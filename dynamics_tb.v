`define toggle(a) @negedge(clk) a = ~a; @negedge(clk) a = ~a

module dynamics_tb();

	// Inputs
	reg clk;
	reg reset;
	reg [2:0] amplitude;
	reg [5:0] duration;
	reg [5:0] attack;
	reg [5:0] decay;
	reg new_note;
	reg beat;

	// Outputs
	wire [2:0] out_amp;

	dynamics dut (
		.clk(clk), 
		.reset(reset), 
		.amplitude_in(amplitude), 
		.duration(duration), 
		.attack(attack),
		.decay(decay), 
		.new_note(new_note), 
		.beat(beat),
		.amplitude_out(out_amp)
	);

    initial begin
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #5 clk = ~clk;
        reset = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
        beat = 1'b0;
        forever begin
		#50 beat = 1'b1;
		#10 beat = 1'b0;
	end
    end

    initial begin
	attack = 6'd0;
	decay = 6'd0;
	amplitude = 3'b100;
	duration = 6'b110011;
	new_note = 1'b0;


	#30
	
	attack = 6'b001100;
	#30 new_note = 1'b1;
	#10 new_note = 1'b0;

	#6000

	decay = 6'b001100;
	#10 new_note = 1'b1;
	#10 new_note = 1'b0;

	#6000
	attack = 6'd0;
	#30 new_note = 1'b1;
	#10 new_note = 1'b0;

	#6000
	$finish;
    end
      
endmodule