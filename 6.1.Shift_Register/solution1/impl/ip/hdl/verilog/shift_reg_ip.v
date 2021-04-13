// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module shift_reg_ip (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        din,
        en,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5,
        ap_return_6,
        ap_return_7,
        ap_return_8,
        ap_return_9,
        ap_return_10,
        ap_return_11
);

parameter    ap_ST_fsm_state1 = 13'd1;
parameter    ap_ST_fsm_state2 = 13'd2;
parameter    ap_ST_fsm_state3 = 13'd4;
parameter    ap_ST_fsm_state4 = 13'd8;
parameter    ap_ST_fsm_state5 = 13'd16;
parameter    ap_ST_fsm_state6 = 13'd32;
parameter    ap_ST_fsm_state7 = 13'd64;
parameter    ap_ST_fsm_state8 = 13'd128;
parameter    ap_ST_fsm_state9 = 13'd256;
parameter    ap_ST_fsm_state10 = 13'd512;
parameter    ap_ST_fsm_state11 = 13'd1024;
parameter    ap_ST_fsm_state12 = 13'd2048;
parameter    ap_ST_fsm_state13 = 13'd4096;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [7:0] din;
input   en;
output  [7:0] ap_return_0;
output  [7:0] ap_return_1;
output  [7:0] ap_return_2;
output  [7:0] ap_return_3;
output  [7:0] ap_return_4;
output  [7:0] ap_return_5;
output  [7:0] ap_return_6;
output  [7:0] ap_return_7;
output  [7:0] ap_return_8;
output  [7:0] ap_return_9;
output  [7:0] ap_return_10;
output  [7:0] ap_return_11;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [12:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [3:0] Sreg_Array_address0;
reg    Sreg_Array_ce0;
reg    Sreg_Array_we0;
wire   [31:0] Sreg_Array_q0;
wire   [7:0] trunc_ln25_fu_78_p1;
reg   [7:0] trunc_ln25_reg_297;
wire    ap_CS_fsm_state2;
wire   [7:0] trunc_ln25_1_fu_92_p1;
reg   [7:0] trunc_ln25_1_reg_302;
wire    ap_CS_fsm_state3;
wire   [7:0] trunc_ln25_2_fu_106_p1;
reg   [7:0] trunc_ln25_2_reg_307;
wire    ap_CS_fsm_state4;
wire   [7:0] trunc_ln25_3_fu_120_p1;
reg   [7:0] trunc_ln25_3_reg_312;
wire    ap_CS_fsm_state5;
wire   [7:0] trunc_ln25_4_fu_134_p1;
reg   [7:0] trunc_ln25_4_reg_317;
wire    ap_CS_fsm_state6;
wire   [7:0] trunc_ln25_5_fu_148_p1;
reg   [7:0] trunc_ln25_5_reg_322;
wire    ap_CS_fsm_state7;
wire   [7:0] trunc_ln25_6_fu_162_p1;
reg   [7:0] trunc_ln25_6_reg_327;
wire    ap_CS_fsm_state8;
wire   [7:0] trunc_ln25_7_fu_176_p1;
reg   [7:0] trunc_ln25_7_reg_332;
wire    ap_CS_fsm_state9;
wire   [7:0] trunc_ln25_8_fu_190_p1;
reg   [7:0] trunc_ln25_8_reg_337;
wire    ap_CS_fsm_state10;
wire   [7:0] trunc_ln25_9_fu_204_p1;
reg   [7:0] trunc_ln25_9_reg_342;
wire    ap_CS_fsm_state11;
wire   [7:0] trunc_ln25_10_fu_218_p1;
reg   [7:0] trunc_ln25_10_reg_347;
wire    ap_CS_fsm_state12;
wire   [31:0] sext_ln20_fu_54_p1;
wire    ap_CS_fsm_state13;
wire   [7:0] trunc_ln25_11_fu_232_p1;
reg   [12:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 13'd1;
end

shift_reg_ip_Sregbkb #(
    .DataWidth( 32 ),
    .AddressRange( 12 ),
    .AddressWidth( 4 ))
Sreg_Array_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(Sreg_Array_address0),
    .ce0(Sreg_Array_ce0),
    .we0(Sreg_Array_we0),
    .d0(sext_ln20_fu_54_p1),
    .q0(Sreg_Array_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        trunc_ln25_10_reg_347 <= trunc_ln25_10_fu_218_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        trunc_ln25_1_reg_302 <= trunc_ln25_1_fu_92_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        trunc_ln25_2_reg_307 <= trunc_ln25_2_fu_106_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        trunc_ln25_3_reg_312 <= trunc_ln25_3_fu_120_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        trunc_ln25_4_reg_317 <= trunc_ln25_4_fu_134_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        trunc_ln25_5_reg_322 <= trunc_ln25_5_fu_148_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        trunc_ln25_6_reg_327 <= trunc_ln25_6_fu_162_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        trunc_ln25_7_reg_332 <= trunc_ln25_7_fu_176_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        trunc_ln25_8_reg_337 <= trunc_ln25_8_fu_190_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        trunc_ln25_9_reg_342 <= trunc_ln25_9_fu_204_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        trunc_ln25_reg_297 <= trunc_ln25_fu_78_p1;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        Sreg_Array_address0 = 4'd11;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        Sreg_Array_address0 = 4'd10;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        Sreg_Array_address0 = 4'd9;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        Sreg_Array_address0 = 4'd8;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        Sreg_Array_address0 = 4'd7;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        Sreg_Array_address0 = 4'd6;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        Sreg_Array_address0 = 4'd5;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        Sreg_Array_address0 = 4'd4;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        Sreg_Array_address0 = 4'd2;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        Sreg_Array_address0 = 4'd1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        Sreg_Array_address0 = 4'd0;
    end else if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state1))) begin
        Sreg_Array_address0 = 4'd3;
    end else begin
        Sreg_Array_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        Sreg_Array_ce0 = en;
    end else begin
        Sreg_Array_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        Sreg_Array_we0 = en;
    end else begin
        Sreg_Array_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state13) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if ((1'b1 == ap_CS_fsm_state13)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign ap_return_0 = trunc_ln25_reg_297;

assign ap_return_1 = trunc_ln25_1_reg_302;

assign ap_return_10 = trunc_ln25_10_reg_347;

assign ap_return_11 = trunc_ln25_11_fu_232_p1;

assign ap_return_2 = trunc_ln25_2_reg_307;

assign ap_return_3 = trunc_ln25_3_reg_312;

assign ap_return_4 = trunc_ln25_4_reg_317;

assign ap_return_5 = trunc_ln25_5_reg_322;

assign ap_return_6 = trunc_ln25_6_reg_327;

assign ap_return_7 = trunc_ln25_7_reg_332;

assign ap_return_8 = trunc_ln25_8_reg_337;

assign ap_return_9 = trunc_ln25_9_reg_342;

assign sext_ln20_fu_54_p1 = $signed(din);

assign trunc_ln25_10_fu_218_p1 = Sreg_Array_q0[7:0];

assign trunc_ln25_11_fu_232_p1 = Sreg_Array_q0[7:0];

assign trunc_ln25_1_fu_92_p1 = Sreg_Array_q0[7:0];

assign trunc_ln25_2_fu_106_p1 = Sreg_Array_q0[7:0];

assign trunc_ln25_3_fu_120_p1 = Sreg_Array_q0[7:0];

assign trunc_ln25_4_fu_134_p1 = Sreg_Array_q0[7:0];

assign trunc_ln25_5_fu_148_p1 = Sreg_Array_q0[7:0];

assign trunc_ln25_6_fu_162_p1 = Sreg_Array_q0[7:0];

assign trunc_ln25_7_fu_176_p1 = Sreg_Array_q0[7:0];

assign trunc_ln25_8_fu_190_p1 = Sreg_Array_q0[7:0];

assign trunc_ln25_9_fu_204_p1 = Sreg_Array_q0[7:0];

assign trunc_ln25_fu_78_p1 = Sreg_Array_q0[7:0];

endmodule //shift_reg_ip