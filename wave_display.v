`define QUAD_2_PIXEL_LOW 11'b00100000010
`define QUAD_3_PIXEL_HIGH 11'b01011111111
`define WHITE 24'hFFFFFF
`define BLACK 24'h000000

// Testing comments
module wave_display (
    input clk,
    input reset,
    input [10:0] x,  // [0..1279]
    input [9:0]  y,  // [0..1023]
    input valid,
    input [7:0] read_value,
    input read_index,
    output wire [8:0] read_address,
    output wire valid_pixel,
    output wire [7:0] r,
    output wire [7:0] g,
    output wire [7:0] b
);

	wire [8:0] prev_read_address; // update read_addr based on input, 1 cycle delay
	dffr #(9) addr_ff (.clk(clk),.r(reset),.d(read_address),.q(prev_read_address));
	
	wire [7:0] prev_read_value;
	wire enable = (read_address!=prev_read_address); // pixel width of 2, iterate every other
	dffre #(8) RAM_val (.clk(clk),.r(reset),.en(enable), .d(read_value),.q(prev_read_value));
	
	wire [7:0] valid_y = y[8:1];
	assign valid_pixel = (valid &(x[9]^x[8])&~y[9]); // defined quadrant for pixels to be output
	
	wire valid_read; // read value in valid pixel region and adheres to constrained y values
    assign valid_read = (valid_pixel &
							  (((valid_y >= read_value)&(valid_y <= prev_read_value))|
							  ((valid_y<=read_value) & (valid_y >= prev_read_value))));
							  
	assign read_address = {read_index, (x[10:8] == 3'b010), x[7:1]}; // drop LSB of X convert to 8-bit
	assign {r,g,b} = (valid_read&(x>`QUAD_2_PIXEL_LOW & x<`QUAD_3_PIXEL_HIGH)&~reset) ? `WHITE : `BLACK;
	// set line to white with constraints of valid read, go all black on reset
endmodule
