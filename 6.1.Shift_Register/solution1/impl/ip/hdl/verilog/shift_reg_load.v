// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module shift_reg_load (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        din,
        load_data_0_read,
        load_data_1_read,
        load_data_2_read,
        load_data_3_read,
        load_data_4_read,
        load_data_5_read,
        load_data_6_read,
        load_data_7_read,
        load_data_8_read,
        load_data_9_read,
        load_data_10_read,
        load_data_11_read,
        load,
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

parameter    ap_ST_fsm_state1 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [7:0] din;
input  [7:0] load_data_0_read;
input  [7:0] load_data_1_read;
input  [7:0] load_data_2_read;
input  [7:0] load_data_3_read;
input  [7:0] load_data_4_read;
input  [7:0] load_data_5_read;
input  [7:0] load_data_6_read;
input  [7:0] load_data_7_read;
input  [7:0] load_data_8_read;
input  [7:0] load_data_9_read;
input  [7:0] load_data_10_read;
input  [7:0] load_data_11_read;
input   load;
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
reg[7:0] ap_return_0;
reg[7:0] ap_return_1;
reg[7:0] ap_return_2;
reg[7:0] ap_return_3;
reg[7:0] ap_return_4;
reg[7:0] ap_return_5;
reg[7:0] ap_return_6;
reg[7:0] ap_return_7;
reg[7:0] ap_return_8;
reg[7:0] ap_return_9;
reg[7:0] ap_return_10;
reg[7:0] ap_return_11;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [7:0] regs_7_10;
reg   [7:0] regs_7_9;
reg   [7:0] regs_7_8;
reg   [7:0] regs_7_7;
reg   [7:0] regs_7_6;
reg   [7:0] regs_7_5;
reg   [7:0] regs_7_4;
reg   [7:0] regs_7_3;
reg   [7:0] regs_7_2;
reg   [7:0] regs_7_1;
reg   [7:0] regs_7_0;
wire   [7:0] select_ln15_1_fu_156_p3;
wire   [7:0] select_ln15_2_fu_174_p3;
wire   [7:0] select_ln15_3_fu_192_p3;
wire   [7:0] select_ln15_4_fu_210_p3;
wire   [7:0] select_ln15_5_fu_228_p3;
wire   [7:0] select_ln15_6_fu_246_p3;
wire   [7:0] select_ln15_7_fu_264_p3;
wire   [7:0] select_ln15_8_fu_282_p3;
wire   [7:0] select_ln15_9_fu_300_p3;
wire   [7:0] select_ln15_10_fu_318_p3;
wire   [7:0] select_ln15_11_fu_332_p3;
wire   [0:0] select_ln15_fu_144_p0;
wire   [0:0] select_ln15_1_fu_156_p0;
wire   [0:0] select_ln15_2_fu_174_p0;
wire   [0:0] select_ln15_3_fu_192_p0;
wire   [0:0] select_ln15_4_fu_210_p0;
wire   [0:0] select_ln15_5_fu_228_p0;
wire   [0:0] select_ln15_6_fu_246_p0;
wire   [0:0] select_ln15_7_fu_264_p0;
wire   [0:0] select_ln15_8_fu_282_p0;
wire   [0:0] select_ln15_9_fu_300_p0;
wire   [0:0] select_ln15_10_fu_318_p0;
wire   [0:0] select_ln15_11_fu_332_p0;
wire   [7:0] select_ln15_fu_144_p3;
reg   [7:0] ap_return_0_preg;
reg   [7:0] ap_return_1_preg;
reg   [7:0] ap_return_2_preg;
reg   [7:0] ap_return_3_preg;
reg   [7:0] ap_return_4_preg;
reg   [7:0] ap_return_5_preg;
reg   [7:0] ap_return_6_preg;
reg   [7:0] ap_return_7_preg;
reg   [7:0] ap_return_8_preg;
reg   [7:0] ap_return_9_preg;
reg   [7:0] ap_return_10_preg;
reg   [7:0] ap_return_11_preg;
reg   [0:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
#0 regs_7_10 = 8'd0;
#0 regs_7_9 = 8'd0;
#0 regs_7_8 = 8'd0;
#0 regs_7_7 = 8'd0;
#0 regs_7_6 = 8'd0;
#0 regs_7_5 = 8'd0;
#0 regs_7_4 = 8'd0;
#0 regs_7_3 = 8'd0;
#0 regs_7_2 = 8'd0;
#0 regs_7_1 = 8'd0;
#0 regs_7_0 = 8'd0;
#0 ap_return_0_preg = 8'd0;
#0 ap_return_1_preg = 8'd0;
#0 ap_return_2_preg = 8'd0;
#0 ap_return_3_preg = 8'd0;
#0 ap_return_4_preg = 8'd0;
#0 ap_return_5_preg = 8'd0;
#0 ap_return_6_preg = 8'd0;
#0 ap_return_7_preg = 8'd0;
#0 ap_return_8_preg = 8'd0;
#0 ap_return_9_preg = 8'd0;
#0 ap_return_10_preg = 8'd0;
#0 ap_return_11_preg = 8'd0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_0_preg <= 8'd0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_return_0_preg <= select_ln15_11_fu_332_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_10_preg <= 8'd0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_return_10_preg <= select_ln15_1_fu_156_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_11_preg <= 8'd0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_return_11_preg <= select_ln15_fu_144_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_1_preg <= 8'd0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_return_1_preg <= select_ln15_10_fu_318_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_2_preg <= 8'd0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_return_2_preg <= select_ln15_9_fu_300_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_3_preg <= 8'd0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_return_3_preg <= select_ln15_8_fu_282_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_4_preg <= 8'd0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_return_4_preg <= select_ln15_7_fu_264_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_5_preg <= 8'd0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_return_5_preg <= select_ln15_6_fu_246_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_6_preg <= 8'd0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_return_6_preg <= select_ln15_5_fu_228_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_7_preg <= 8'd0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_return_7_preg <= select_ln15_4_fu_210_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_8_preg <= 8'd0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_return_8_preg <= select_ln15_3_fu_192_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_return_9_preg <= 8'd0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_return_9_preg <= select_ln15_2_fu_174_p3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        regs_7_0 <= select_ln15_11_fu_332_p3;
        regs_7_1 <= select_ln15_10_fu_318_p3;
        regs_7_10 <= select_ln15_1_fu_156_p3;
        regs_7_2 <= select_ln15_9_fu_300_p3;
        regs_7_3 <= select_ln15_8_fu_282_p3;
        regs_7_4 <= select_ln15_7_fu_264_p3;
        regs_7_5 <= select_ln15_6_fu_246_p3;
        regs_7_6 <= select_ln15_5_fu_228_p3;
        regs_7_7 <= select_ln15_4_fu_210_p3;
        regs_7_8 <= select_ln15_3_fu_192_p3;
        regs_7_9 <= select_ln15_2_fu_174_p3;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_return_0 = select_ln15_11_fu_332_p3;
    end else begin
        ap_return_0 = ap_return_0_preg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_return_1 = select_ln15_10_fu_318_p3;
    end else begin
        ap_return_1 = ap_return_1_preg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_return_10 = select_ln15_1_fu_156_p3;
    end else begin
        ap_return_10 = ap_return_10_preg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_return_11 = select_ln15_fu_144_p3;
    end else begin
        ap_return_11 = ap_return_11_preg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_return_2 = select_ln15_9_fu_300_p3;
    end else begin
        ap_return_2 = ap_return_2_preg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_return_3 = select_ln15_8_fu_282_p3;
    end else begin
        ap_return_3 = ap_return_3_preg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_return_4 = select_ln15_7_fu_264_p3;
    end else begin
        ap_return_4 = ap_return_4_preg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_return_5 = select_ln15_6_fu_246_p3;
    end else begin
        ap_return_5 = ap_return_5_preg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_return_6 = select_ln15_5_fu_228_p3;
    end else begin
        ap_return_6 = ap_return_6_preg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_return_7 = select_ln15_4_fu_210_p3;
    end else begin
        ap_return_7 = ap_return_7_preg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_return_8 = select_ln15_3_fu_192_p3;
    end else begin
        ap_return_8 = ap_return_8_preg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_return_9 = select_ln15_2_fu_174_p3;
    end else begin
        ap_return_9 = ap_return_9_preg;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign select_ln15_10_fu_318_p0 = load;

assign select_ln15_10_fu_318_p3 = ((select_ln15_10_fu_318_p0[0:0] === 1'b1) ? load_data_1_read : regs_7_0);

assign select_ln15_11_fu_332_p0 = load;

assign select_ln15_11_fu_332_p3 = ((select_ln15_11_fu_332_p0[0:0] === 1'b1) ? load_data_0_read : din);

assign select_ln15_1_fu_156_p0 = load;

assign select_ln15_1_fu_156_p3 = ((select_ln15_1_fu_156_p0[0:0] === 1'b1) ? load_data_10_read : regs_7_9);

assign select_ln15_2_fu_174_p0 = load;

assign select_ln15_2_fu_174_p3 = ((select_ln15_2_fu_174_p0[0:0] === 1'b1) ? load_data_9_read : regs_7_8);

assign select_ln15_3_fu_192_p0 = load;

assign select_ln15_3_fu_192_p3 = ((select_ln15_3_fu_192_p0[0:0] === 1'b1) ? load_data_8_read : regs_7_7);

assign select_ln15_4_fu_210_p0 = load;

assign select_ln15_4_fu_210_p3 = ((select_ln15_4_fu_210_p0[0:0] === 1'b1) ? load_data_7_read : regs_7_6);

assign select_ln15_5_fu_228_p0 = load;

assign select_ln15_5_fu_228_p3 = ((select_ln15_5_fu_228_p0[0:0] === 1'b1) ? load_data_6_read : regs_7_5);

assign select_ln15_6_fu_246_p0 = load;

assign select_ln15_6_fu_246_p3 = ((select_ln15_6_fu_246_p0[0:0] === 1'b1) ? load_data_5_read : regs_7_4);

assign select_ln15_7_fu_264_p0 = load;

assign select_ln15_7_fu_264_p3 = ((select_ln15_7_fu_264_p0[0:0] === 1'b1) ? load_data_4_read : regs_7_3);

assign select_ln15_8_fu_282_p0 = load;

assign select_ln15_8_fu_282_p3 = ((select_ln15_8_fu_282_p0[0:0] === 1'b1) ? load_data_3_read : regs_7_2);

assign select_ln15_9_fu_300_p0 = load;

assign select_ln15_9_fu_300_p3 = ((select_ln15_9_fu_300_p0[0:0] === 1'b1) ? load_data_2_read : regs_7_1);

assign select_ln15_fu_144_p0 = load;

assign select_ln15_fu_144_p3 = ((select_ln15_fu_144_p0[0:0] === 1'b1) ? load_data_11_read : regs_7_10);

endmodule //shift_reg_load
