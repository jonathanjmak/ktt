`timescale 1ns / 1ps
module note_display(
  input clk,
  input [5:0] current_addr, // CHANGE THIS TO LARGER WIDTH WHEN WE EXTEND SONG ROM
  input [10:0] x,
  input [9:0] y,
  input valid,
  output valid_pixel,
  output [7:0] r,g,b
  // output reg [63:0] value,
  // input [`log2NUM_COLS-1:0] x_char,
  // input [`log2NUM_ROWS-1:0] y_char,
);

wire [5:0] next_1_note, next_2_note, previous_1_note, previous_2_note;
wire [15:0] next_1_data, next_2_data, previous_1_data, previous_2_data;

song_rom next_1_note_rom(.clk(clk), .addr(current_addr + 6'd1), .dout(next_1_data));
song_rom next_2_note_rom(.clk(clk), .addr(current_addr + 6'd2), .dout(next_2_data));
song_rom previous_1_note_rom(.clk(clk), .addr(current_addr - 6'd2), .dout(previous_1_data)); // skip addr 1, just gives duration (see lab handout)
song_rom previous_2_note_rom(.clk(clk), .addr(current_addr - 6'd3), .dout(previous_2_data));

assign next_1_note = next_1_data[14:9];
assign next_2_note = next_2_data[14:9];
assign previous_1_note = previous_1_data[14:9];
assign previous_2_note = previous_2_data[14:9];

reg [8:0] n1_note_addr, n2_note_addr, curr_note_addr, p1_note_addr, p2_note_addr;
wire [23:0] n1_data,n2_data, curr_data, p1_data, p2_data; // change tcgrom to be 24 bits wide (each note is 3 characters e.g. 3F#)

tcgrom n1_note_char_rom(.addr(n1_note_addr), .data(n1_data));
tcgrom n2_note_char_rom(.addr(n2_note_addr), .data(n2_data));
tcgrom curr_note_char_rom(.addr(curr_note_addr), .data(curr_data));
tcgrom p1_note_char_rom(.addr(p1_note_addr), .data(p1_data));
tcgrom p2_note_char_rom(.addr(p2_note_addr), .data(p2_data));

//active_pixel = current_line[(x-current_start)];

//////////////////////////////////////////////////

// reg [8:0] rom_base_addr;
// wire [8:0] rom_addr = rom_base_addr + y[2:0];
// wire [7:0] rom_data;

// tcgrom char_rom (.addr(rom_addr), .data(rom_data));

// // Get char-to-display
// reg [7:0] disp_char;
// integer k;
// always @(*) begin
//   if (x < 64) begin
//      for (k = 0; k < 8; k = k+1) begin
//         disp_char[k] = value[{x[5:3],3'b0}+k];
//      end
//   end else begin
//      disp_char = 8'b0;
//   end
// end


// // Convert ASCII to rom offset
// always @(*) begin
//   if (disp_char >= 8'd65 && disp_char <= 8'd90)
//      rom_base_addr = (disp_char - 9'd64) << 3;
//   else if (disp_char >= 8'd48 && disp_char <= 8'd57)
//      // The TCG rom offset for 0 just happens to be the same as the ASCII offset for 0, wooooahhhhh
//      rom_base_addr = {1'b0, disp_char} << 3;
//   else
//      rom_base_addr = 9'h100;
// end

// // Convert rom data into pixel values
// reg char_px;
// wire [7:0] rom_bit_select = 8'b10000000 >> x[2:0];
// always @(*) begin
//   if (x<64 && y<8) begin
//      char_px = |(rom_data & rom_bit_select);
//   end else
//      char_px = 1'b0;
// end


/*
// Mux color signals
always @(*) begin
	if (char_px)
		r = 8'hFF;
	else if (cursor_px)
		r = 8'hAA;
	else 
		r = 8'd00;	
	end

assign g = r;
assign b = r;*/

endmodule
