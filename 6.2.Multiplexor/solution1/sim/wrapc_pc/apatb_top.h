// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

extern void AESL_WRAP_top (
ap_uint<32> (&leadone_in),
ap_uint<5> (&leadone_out),
bool (&leadone_ret),
ap_int<8> mux_in[8],
ap_uint<8> mux_sel_onehot,
ap_uint<3> mux_sel0,
ap_uint<3> mux_sel1,
bool mux_s,
ap_int<8> (&mux_ret),
int max_in[8],
int (&max_out),
int mode);
