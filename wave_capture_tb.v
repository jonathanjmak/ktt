`timescale 1ns / 1ps
module wave_capture_tb(
    );
	 
    reg clk, reset, new_sample_ready, wave_display_idle, generate_next;
	 reg [19:0] step_size;
	 wire [15:0] new_sample_in;
	 
	 wire [8:0] write_address;
    wire write_enable, read_index;
    wire[7:0] write_sample;


sine_reader reader(
        .clk(clk),
        .reset(reset),
        .step_size(step_size),
        .generate_next(generate_next),
        .sample_ready(new_sample_ready),
        .sample(new_sample_in)
    );
	 
wave_capture capture(
		  .clk(clk),
        .reset(reset),
        .new_sample_ready(new_sample_ready),
        .wave_display_idle(wave_display_idle),
		  .new_sample_in(new_sample_in),
        .write_address(write_address),
        .write_enable(write_enable),
		  .write_sample(write_sample),
		  .read_index(read_index)
	);
	
	// Clock and reset
	initial begin
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #5 clk = ~clk;
        reset = 1'b0;
        forever #5 clk = ~clk;
	end
	
	initial begin
		step_size = {10'd128, 10'd0};
		#20;
		#7000;
		step_size[19:10] = 10'd512;
		#3500;
		
   end
	
	initial begin
		generate_next = 1'b0;
		new_sample_ready = 1'b1;
		@(negedge reset);
		@(negedge clk);
		
		// Delay to make sure it works on 100MHz clock
		forever begin
			#100;
			@(negedge clk);
			generate_next = 1'b1;
			@(negedge clk);
			generate_next = 1'b0;
			#100;
		end		
	end
	
	initial begin
		wave_display_idle = 1'b1; // armed state
		@(negedge reset);
		@(negedge clk);
		
		forever begin
			#100;
			@(negedge clk);
			wave_display_idle = 1'b0;
			@(negedge clk);
			wave_display_idle = 1'b1;
			#100;
		end		
	end
	
	 
	
	
endmodule


