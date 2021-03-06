// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "leading_ones_templat.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic leading_ones_templat::ap_const_logic_1 = sc_dt::Log_1;
const bool leading_ones_templat::ap_const_boolean_1 = true;
const sc_logic leading_ones_templat::ap_const_logic_0 = sc_dt::Log_0;

leading_ones_templat::leading_ones_templat(sc_module_name name) : sc_module(name), mVcdFile(0) {
    call_ret_leading_ones_32_s_fu_12 = new leading_ones_32_s("call_ret_leading_ones_32_s_fu_12");
    call_ret_leading_ones_32_s_fu_12->ap_ready(call_ret_leading_ones_32_s_fu_12_ap_ready);
    call_ret_leading_ones_32_s_fu_12->din_V_read(din_V_read);
    call_ret_leading_ones_32_s_fu_12->ap_return_0(call_ret_leading_ones_32_s_fu_12_ap_return_0);
    call_ret_leading_ones_32_s_fu_12->ap_return_1(call_ret_leading_ones_32_s_fu_12_ap_return_1);

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return_0);
    sensitive << ( call_ret_leading_ones_32_s_fu_12_ap_return_0 );

    SC_METHOD(thread_ap_return_1);
    sensitive << ( call_ret_leading_ones_32_s_fu_12_ap_return_1 );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "leading_ones_templat_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, din_V_read, "(port)din_V_read");
    sc_trace(mVcdFile, ap_return_0, "(port)ap_return_0");
    sc_trace(mVcdFile, ap_return_1, "(port)ap_return_1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, call_ret_leading_ones_32_s_fu_12_ap_ready, "call_ret_leading_ones_32_s_fu_12_ap_ready");
    sc_trace(mVcdFile, call_ret_leading_ones_32_s_fu_12_ap_return_0, "call_ret_leading_ones_32_s_fu_12_ap_return_0");
    sc_trace(mVcdFile, call_ret_leading_ones_32_s_fu_12_ap_return_1, "call_ret_leading_ones_32_s_fu_12_ap_return_1");
#endif

    }
}

leading_ones_templat::~leading_ones_templat() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete call_ret_leading_ones_32_s_fu_12;
}

void leading_ones_templat::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void leading_ones_templat::thread_ap_return_0() {
    ap_return_0 = call_ret_leading_ones_32_s_fu_12_ap_return_0.read();
}

void leading_ones_templat::thread_ap_return_1() {
    ap_return_1 = call_ret_leading_ones_32_s_fu_12_ap_return_1.read();
}

}

