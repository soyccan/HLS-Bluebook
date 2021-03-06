// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module mux_binary2onehot_op (
        ap_ready,
        din_0_V_read,
        din_1_V_read,
        din_2_V_read,
        din_3_V_read,
        din_4_V_read,
        din_5_V_read,
        din_6_V_read,
        din_7_V_read,
        sel0_V,
        sel1_V,
        s,
        ap_return
);


output   ap_ready;
input  [7:0] din_0_V_read;
input  [7:0] din_1_V_read;
input  [7:0] din_2_V_read;
input  [7:0] din_3_V_read;
input  [7:0] din_4_V_read;
input  [7:0] din_5_V_read;
input  [7:0] din_6_V_read;
input  [7:0] din_7_V_read;
input  [2:0] sel0_V;
input  [2:0] sel1_V;
input   s;
output  [7:0] ap_return;

wire   [0:0] tmp_V_fu_140_p0;
wire   [7:0] tmp_fu_96_p10;
wire   [7:0] tmp_1_fu_118_p10;

top_mux_83_8_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 8 ),
    .din1_WIDTH( 8 ),
    .din2_WIDTH( 8 ),
    .din3_WIDTH( 8 ),
    .din4_WIDTH( 8 ),
    .din5_WIDTH( 8 ),
    .din6_WIDTH( 8 ),
    .din7_WIDTH( 8 ),
    .din8_WIDTH( 3 ),
    .dout_WIDTH( 8 ))
top_mux_83_8_1_1_U22(
    .din0(din_0_V_read),
    .din1(din_1_V_read),
    .din2(din_2_V_read),
    .din3(din_3_V_read),
    .din4(din_4_V_read),
    .din5(din_5_V_read),
    .din6(din_6_V_read),
    .din7(din_7_V_read),
    .din8(sel0_V),
    .dout(tmp_fu_96_p10)
);

top_mux_83_8_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 8 ),
    .din1_WIDTH( 8 ),
    .din2_WIDTH( 8 ),
    .din3_WIDTH( 8 ),
    .din4_WIDTH( 8 ),
    .din5_WIDTH( 8 ),
    .din6_WIDTH( 8 ),
    .din7_WIDTH( 8 ),
    .din8_WIDTH( 3 ),
    .dout_WIDTH( 8 ))
top_mux_83_8_1_1_U23(
    .din0(din_0_V_read),
    .din1(din_1_V_read),
    .din2(din_2_V_read),
    .din3(din_3_V_read),
    .din4(din_4_V_read),
    .din5(din_5_V_read),
    .din6(din_6_V_read),
    .din7(din_7_V_read),
    .din8(sel1_V),
    .dout(tmp_1_fu_118_p10)
);

assign ap_ready = 1'b1;

assign ap_return = ((tmp_V_fu_140_p0[0:0] === 1'b1) ? tmp_fu_96_p10 : tmp_1_fu_118_p10);

assign tmp_V_fu_140_p0 = s;

endmodule //mux_binary2onehot_op
