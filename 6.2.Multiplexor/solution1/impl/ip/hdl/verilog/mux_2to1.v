// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module mux_2to1 (
        ap_ready,
        din_0_V_read,
        din_1_V_read,
        sel,
        ap_return
);


output   ap_ready;
input  [7:0] din_0_V_read;
input  [7:0] din_1_V_read;
input   sel;
output  [7:0] ap_return;

wire   [0:0] select_ln6_fu_28_p0;

assign ap_ready = 1'b1;

assign ap_return = ((select_ln6_fu_28_p0[0:0] === 1'b1) ? din_1_V_read : din_0_V_read);

assign select_ln6_fu_28_p0 = sel;

endmodule //mux_2to1
