`timescale 1ns / 1ps
module wave_display_tb(
    );

reg clk, reset, valid, read_index;
reg [10:0] x; // [0..1279]
reg [9:0] y; // [0..1023]
reg [7:0] read_value;
wire chip_vsync;
    
wire [8:0] read_address;
wire valid_pixel;
wire [7:0] r, g, b;

dvi_controller_top dvi_controller ( .clk(clk), .enable(1'b1), .reset(reset), .r(r), .g(g), .b(b), .x(x), .y(y), .chip_vsync(chip_vsync));

wave_display wave_display (
	.clk(clk), .reset(reset), .x(x), .y(y), .valid(valid), .read_value(read_value), 
	.read_index(read_index), .read_address(read_address), .valid_pixel(valid_pixel),   .r(r), .g(g), .b(b));

fake_sample_ram sample(.clk(clk), .addr(read_address), .dout(read_value));


// Clock and reset
	initial begin
        clk = 1'b0;
		  forever #2 clk = ~clk;
	end

	initial begin
		reset = 1'b1;
		#4;
		reset = 1'b0;
		#4;
		
		valid = 1'b1;
		read_index = 1'b0;
		
		#36;
		@(negedge chip_vsync);
		#100;
	end
	
	initial @(negedge chip_vsync) begin
		valid = 1;
		read_value = 8'b1111_1111;
		for (y=0; y <10'd1023; y=y+1) begin
			for (x=0; x<11'd1279;  x=x+1) begin
				#4;
			end
		end
	end
endmodule
