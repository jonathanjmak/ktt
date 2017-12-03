`timescale 1ns / 1ps
`include "dvi_defines.v"

module visual_enhancements (
    input clk,
);
	
	wire [63:0] username_tmp;

   wire [`log2NUM_COLS-1:0] x;
	assign x = {1'b0, x_q[`log2NUM_COLS-1:1]};
	
   wire [`log2NUM_ROWS-1:0] y;
	assign y = {1'b0, y_q[`log2NUM_ROWS-1:1]};
	
	note note_display (
      .clk(clk),
      .rst(rst),
            
      .value(username_tmp),
      
      .x(x-16),
      .y(y-24),
   );
	
endmodule
