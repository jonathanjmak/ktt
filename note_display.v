`timescale 1ns / 1ps
`include "dvi_defines.v"

module note_display(
	input clk,

	output reg [63:0] value,

	input [`log2NUM_COLS-1:0] x,
	input [`log2NUM_ROWS-1:0] y
	);

reg [8:0] rom_base_addr;
wire [8:0] rom_addr = rom_base_addr + y[2:0];
wire [7:0] rom_data;

tcgrom char_rom (.addr(rom_addr), .data(rom_data));

// Get char-to-display
reg [7:0] disp_char;
integer k;
always @(*) begin
  if (x < 64) begin
     for (k = 0; k < 8; k = k+1) begin
        disp_char[k] = value[{x[5:3],3'b0}+k];
     end
  end else begin
     disp_char = 8'b0;
  end
end


// Convert ASCII to rom offset
always @(*) begin
  if (disp_char >= 8'd65 && disp_char <= 8'd90)
     rom_base_addr = (disp_char - 9'd64) << 3;
  else if (disp_char >= 8'd48 && disp_char <= 8'd57)
     // The TCG rom offset for 0 just happens to be the same as the ASCII offset for 0, wooooahhhhh
     rom_base_addr = {1'b0, disp_char} << 3;
  else
     rom_base_addr = 9'h100;
end

// Convert rom data into pixel values
reg char_px;
wire [7:0] rom_bit_select = 8'b10000000 >> x[2:0];
always @(*) begin
  if (x<64 && y<8) begin
     char_px = |(rom_data & rom_bit_select);
  end else
     char_px = 1'b0;
end

endmodule
