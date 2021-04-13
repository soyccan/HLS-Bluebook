// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "mux_binary_opt.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic mux_binary_opt::ap_const_logic_1 = sc_dt::Log_1;
const bool mux_binary_opt::ap_const_boolean_1 = true;
const sc_logic mux_binary_opt::ap_const_logic_0 = sc_dt::Log_0;

mux_binary_opt::mux_binary_opt(sc_module_name name) : sc_module(name), mVcdFile(0) {
    top_mux_83_8_1_1_U9 = new top_mux_83_8_1_1<1,1,8,8,8,8,8,8,8,8,3,8>("top_mux_83_8_1_1_U9");
    top_mux_83_8_1_1_U9->din0(din_0_V_read);
    top_mux_83_8_1_1_U9->din1(din_1_V_read);
    top_mux_83_8_1_1_U9->din2(din_2_V_read);
    top_mux_83_8_1_1_U9->din3(din_3_V_read);
    top_mux_83_8_1_1_U9->din4(din_4_V_read);
    top_mux_83_8_1_1_U9->din5(din_5_V_read);
    top_mux_83_8_1_1_U9->din6(din_6_V_read);
    top_mux_83_8_1_1_U9->din7(din_7_V_read);
    top_mux_83_8_1_1_U9->din8(tmp_fu_104_p9);
    top_mux_83_8_1_1_U9->dout(tmp_fu_104_p10);

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return);
    sensitive << ( tmp_fu_104_p10 );

    SC_METHOD(thread_select_ln9_fu_96_p0);
    sensitive << ( s );

    SC_METHOD(thread_tmp_fu_104_p9);
    sensitive << ( sel0_V );
    sensitive << ( sel1_V );
    sensitive << ( select_ln9_fu_96_p0 );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "mux_binary_opt_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, din_0_V_read, "(port)din_0_V_read");
    sc_trace(mVcdFile, din_1_V_read, "(port)din_1_V_read");
    sc_trace(mVcdFile, din_2_V_read, "(port)din_2_V_read");
    sc_trace(mVcdFile, din_3_V_read, "(port)din_3_V_read");
    sc_trace(mVcdFile, din_4_V_read, "(port)din_4_V_read");
    sc_trace(mVcdFile, din_5_V_read, "(port)din_5_V_read");
    sc_trace(mVcdFile, din_6_V_read, "(port)din_6_V_read");
    sc_trace(mVcdFile, din_7_V_read, "(port)din_7_V_read");
    sc_trace(mVcdFile, sel0_V, "(port)sel0_V");
    sc_trace(mVcdFile, sel1_V, "(port)sel1_V");
    sc_trace(mVcdFile, s, "(port)s");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, select_ln9_fu_96_p0, "select_ln9_fu_96_p0");
    sc_trace(mVcdFile, tmp_fu_104_p9, "tmp_fu_104_p9");
    sc_trace(mVcdFile, tmp_fu_104_p10, "tmp_fu_104_p10");
#endif

    }
}

mux_binary_opt::~mux_binary_opt() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete top_mux_83_8_1_1_U9;
}

void mux_binary_opt::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void mux_binary_opt::thread_ap_return() {
    ap_return = tmp_fu_104_p10.read();
}

void mux_binary_opt::thread_select_ln9_fu_96_p0() {
    select_ln9_fu_96_p0 =  (sc_lv<1>) (s.read());
}

void mux_binary_opt::thread_tmp_fu_104_p9() {
    tmp_fu_104_p9 = (!select_ln9_fu_96_p0.read()[0].is_01())? sc_lv<3>(): ((select_ln9_fu_96_p0.read()[0].to_bool())? sel0_V.read(): sel1_V.read());
}

}
