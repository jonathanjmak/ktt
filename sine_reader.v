  `define MAX_ADDR 20'b1111_1111_1111_1111_1111

  module sine_reader(
      input clk,
      input reset,
      input [19:0] step_size,
      input generate_next,
      output sample_ready,
      output wire [15:0] sample
  );

      wire [21:0] current_addr;
      wire [21:0] next_addr;

      dffre #(22) sine_ff(.clk(clk), .r(reset|done), .en(generate_next), .d(next_addr), .q(current_addr));

  	 assign  next_addr = current_addr+step_size;
	 
    wire almost_ready;
    dff #(.WIDTH(1)) ready_1 (
        .clk(clk),
        .d(generate_next),
        .q(almost_ready)
    );
    dff #(.WIDTH(1)) ready_2 (
        .clk(clk),
        .d(almost_ready),
        .q(sample_ready)
    );
	 
     wire [15:0] sine_rom_output;
	 
  	 wire [19:0] addr_input;
  	 assign addr_input = (current_addr[20]) ? (`MAX_ADDR-(current_addr-`MAX_ADDR)): current_addr;

      // cut off last 10 bits for address
      sine_rom sine_rom(.clk(clk), .addr(addr_input[19:10]), .dout(sine_rom_output));

      // flip horizontally (i.e. invertion by addition) for quadrants 3 and 4s
      // updating quadrant before sine_rom_output is updated
      assign sample = ((current_addr[21:20] == 2'b10) || (current_addr[21:20] == 2'b11)) ?
                       (16'b0 - sine_rom_output) : sine_rom_output;
  endmodule