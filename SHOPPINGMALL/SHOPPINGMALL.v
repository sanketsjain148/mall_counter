`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:24:47 01/08/2008 
// Design Name: 
// Module Name:    SHOPPINGMALL 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SHOPPINGMALL(
    input reset1,reset,
    input clock1,clock,
    output reg[3:0] yy
    );
wire[7:0]Q;
counter c1(reset1,clock1,Q[7:4]);
counter c2(reset,clock,Q[3:0]);
subtractor4bit m1(Q[3:0],Q[7:4],yy[3:0]);
endmodule
