`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:12:05 11/20/2014
// Design Name:   SHOPPINGMALL
// Module Name:   G:/SHOPPING_MALL/SHOPPINGMALL/SHOPPINGMALL_tb.v
// Project Name:  SHOPPINGMALL
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SHOPPINGMALL
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SHOPPINGMALL_tb;

	// Inputs
	reg reset1;
	reg reset;
	reg clock1;
	reg clock;

	// Outputs
	wire [3:0] yy;

	// Instantiate the Unit Under Test (UUT)
	SHOPPINGMALL uut (
		.reset1(reset1), 
		.reset(reset), 
		.clock1(clock1), 
		.clock(clock), 
		.yy(yy)
	);
integer t;
	initial begin
		// Initialize Inputs
		
		reset1 = 0;
		reset = 0;
		clock1 = 0;
		clock = 0;

		// Wait 100 ns for global reset to finish
		#100;
	reset=1;
		
        
		// Add stimulus here

	end
      
endmodule

