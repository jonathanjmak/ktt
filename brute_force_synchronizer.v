//  brute_force_sychronizer
//  26-Jan-2007 David Black-Schaffer
//   Basic 3-flip-flop brute-force synchronizer.
//   Inputs pass through a 3-ff chain and come out synchronized.
//
module brute_force_synchronizer #(parameter WIDTH=1)(
    input clk,  // Standard system clock.
    input [WIDTH-1:0] in,   // Async input 
    output [WIDTH-1:0] out  // Virtually guaranteed sync output.
);

    // Our chain of three FFs.
    wire ff1_out, ff2_out;

    dff #(WIDTH) ff1(.clk(clk), .d(in), .q(ff1_out));
    dff #(WIDTH) ff2(.clk(clk), .d(ff1_out), .q(ff2_out));
    dff #(WIDTH) ff3(.clk(clk), .d(ff2_out), .q(out));

endmodule
