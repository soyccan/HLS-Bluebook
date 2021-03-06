// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="top,hls_ip_2019_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7z020-clg400-1,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=3.744000,HLS_SYN_LAT=1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=22,HLS_SYN_LUT=155,HLS_VERSION=2019_2}" *)

module top (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        val_V,
        mode,
        ap_return
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_state2 = 2'd2;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [7:0] val_V;
input  [31:0] mode;
output  [7:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [7:0] add_ln68_fu_204_p2;
reg   [7:0] add_ln68_reg_287;
reg   [0:0] p_Result_s_reg_293;
wire   [7:0] tmp_V_fu_218_p2;
reg   [7:0] tmp_V_reg_299;
wire   [0:0] icmp_ln4_fu_224_p2;
reg   [0:0] icmp_ln4_reg_305;
wire   [0:0] icmp_ln4_1_fu_230_p2;
reg   [0:0] icmp_ln4_1_reg_310;
wire   [0:0] icmp_ln4_2_fu_236_p2;
reg   [0:0] icmp_ln4_2_reg_315;
wire   [0:0] tmp_fu_60_p3;
wire   [0:0] p_Result_i7_fu_72_p3;
wire   [0:0] p_Result_1_i1_fu_86_p3;
wire   [0:0] p_Result_i1_fu_100_p3;
wire   [0:0] p_Result_3_i1_fu_114_p3;
wire   [0:0] p_Result_4_i1_fu_128_p3;
wire   [0:0] p_Result_5_i1_fu_142_p3;
wire   [0:0] p_Result_6_i1_fu_156_p3;
wire   [0:0] p_Result_7_i1_fu_170_p3;
wire   [0:0] xor_ln816_7_fu_178_p2;
wire   [0:0] xor_ln816_6_fu_164_p2;
wire   [0:0] xor_ln816_5_fu_150_p2;
wire   [0:0] xor_ln816_4_fu_136_p2;
wire   [0:0] xor_ln816_3_fu_122_p2;
wire   [0:0] xor_ln816_2_fu_108_p2;
wire   [0:0] xor_ln816_1_fu_94_p2;
wire   [0:0] xor_ln816_fu_80_p2;
wire   [7:0] zext_ln14_fu_68_p1;
wire   [7:0] p_Result_2_7_i1_fu_184_p9;
wire    ap_CS_fsm_state2;
reg   [7:0] p_Result_1_fu_247_p4;
wire   [7:0] select_ln20_fu_256_p3;
wire   [7:0] select_ln4_fu_262_p3;
wire   [7:0] select_ln5_fu_242_p3;
wire   [7:0] select_ln4_1_fu_268_p3;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 2'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        add_ln68_reg_287 <= add_ln68_fu_204_p2;
        icmp_ln4_1_reg_310 <= icmp_ln4_1_fu_230_p2;
        icmp_ln4_2_reg_315 <= icmp_ln4_2_fu_236_p2;
        icmp_ln4_reg_305 <= icmp_ln4_fu_224_p2;
        p_Result_s_reg_293 <= val_V[32'd7];
        tmp_V_reg_299 <= tmp_V_fu_218_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln68_fu_204_p2 = (zext_ln14_fu_68_p1 + p_Result_2_7_i1_fu_184_p9);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_return = ((icmp_ln4_2_reg_315[0:0] === 1'b1) ? select_ln5_fu_242_p3 : select_ln4_1_fu_268_p3);

assign icmp_ln4_1_fu_230_p2 = ((mode == 32'd1) ? 1'b1 : 1'b0);

assign icmp_ln4_2_fu_236_p2 = ((mode == 32'd0) ? 1'b1 : 1'b0);

assign icmp_ln4_fu_224_p2 = ((mode == 32'd2) ? 1'b1 : 1'b0);

always @ (*) begin
    p_Result_1_fu_247_p4 = tmp_V_reg_299;
    p_Result_1_fu_247_p4[32'd7] = |(1'd0);
end

assign p_Result_1_i1_fu_86_p3 = val_V[8'd1];

assign p_Result_2_7_i1_fu_184_p9 = {{{{{{{{xor_ln816_7_fu_178_p2}, {xor_ln816_6_fu_164_p2}}, {xor_ln816_5_fu_150_p2}}, {xor_ln816_4_fu_136_p2}}, {xor_ln816_3_fu_122_p2}}, {xor_ln816_2_fu_108_p2}}, {xor_ln816_1_fu_94_p2}}, {xor_ln816_fu_80_p2}};

assign p_Result_3_i1_fu_114_p3 = val_V[8'd3];

assign p_Result_4_i1_fu_128_p3 = val_V[8'd4];

assign p_Result_5_i1_fu_142_p3 = val_V[8'd5];

assign p_Result_6_i1_fu_156_p3 = val_V[8'd6];

assign p_Result_7_i1_fu_170_p3 = val_V[8'd7];

assign p_Result_i1_fu_100_p3 = val_V[8'd2];

assign p_Result_i7_fu_72_p3 = val_V[8'd0];

assign select_ln20_fu_256_p3 = ((p_Result_s_reg_293[0:0] === 1'b1) ? p_Result_1_fu_247_p4 : val_V);

assign select_ln4_1_fu_268_p3 = ((icmp_ln4_1_reg_310[0:0] === 1'b1) ? add_ln68_reg_287 : select_ln4_fu_262_p3);

assign select_ln4_fu_262_p3 = ((icmp_ln4_reg_305[0:0] === 1'b1) ? select_ln20_fu_256_p3 : add_ln68_reg_287);

assign select_ln5_fu_242_p3 = ((p_Result_s_reg_293[0:0] === 1'b1) ? tmp_V_reg_299 : val_V);

assign tmp_V_fu_218_p2 = (8'd0 - val_V);

assign tmp_fu_60_p3 = val_V[32'd7];

assign xor_ln816_1_fu_94_p2 = (tmp_fu_60_p3 ^ p_Result_1_i1_fu_86_p3);

assign xor_ln816_2_fu_108_p2 = (tmp_fu_60_p3 ^ p_Result_i1_fu_100_p3);

assign xor_ln816_3_fu_122_p2 = (tmp_fu_60_p3 ^ p_Result_3_i1_fu_114_p3);

assign xor_ln816_4_fu_136_p2 = (tmp_fu_60_p3 ^ p_Result_4_i1_fu_128_p3);

assign xor_ln816_5_fu_150_p2 = (tmp_fu_60_p3 ^ p_Result_5_i1_fu_142_p3);

assign xor_ln816_6_fu_164_p2 = (tmp_fu_60_p3 ^ p_Result_6_i1_fu_156_p3);

assign xor_ln816_7_fu_178_p2 = (tmp_fu_60_p3 ^ p_Result_7_i1_fu_170_p3);

assign xor_ln816_fu_80_p2 = (tmp_fu_60_p3 ^ p_Result_i7_fu_72_p3);

assign zext_ln14_fu_68_p1 = tmp_fu_60_p3;

endmodule //top
