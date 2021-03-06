// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _mux_onehot_if_HH_
#define _mux_onehot_if_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct mux_onehot_if : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > din_0_V_read;
    sc_in< sc_lv<8> > din_1_V_read;
    sc_in< sc_lv<8> > din_2_V_read;
    sc_in< sc_lv<8> > din_3_V_read;
    sc_in< sc_lv<8> > din_4_V_read;
    sc_in< sc_lv<8> > din_5_V_read;
    sc_in< sc_lv<8> > din_6_V_read;
    sc_in< sc_lv<8> > din_7_V_read;
    sc_in< sc_lv<8> > sel_V;
    sc_out< sc_lv<8> > ap_return;


    // Module declarations
    mux_onehot_if(sc_module_name name);
    SC_HAS_PROCESS(mux_onehot_if);

    ~mux_onehot_if();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > icmp_ln879_fu_94_p2;
    sc_signal< sc_lv<1> > icmp_ln879_reg_338;
    sc_signal< sc_lv<1> > icmp_ln879_1_fu_100_p2;
    sc_signal< sc_lv<1> > icmp_ln879_1_reg_345;
    sc_signal< sc_lv<1> > icmp_ln879_7_fu_136_p2;
    sc_signal< sc_lv<1> > icmp_ln879_7_reg_350;
    sc_signal< sc_lv<1> > and_ln879_1_fu_154_p2;
    sc_signal< sc_lv<1> > and_ln879_1_reg_355;
    sc_signal< sc_lv<1> > and_ln879_3_fu_190_p2;
    sc_signal< sc_lv<1> > and_ln879_3_reg_361;
    sc_signal< sc_lv<1> > and_ln879_5_fu_226_p2;
    sc_signal< sc_lv<1> > and_ln879_5_reg_366;
    sc_signal< sc_lv<1> > or_ln879_5_fu_232_p2;
    sc_signal< sc_lv<1> > or_ln879_5_reg_371;
    sc_signal< sc_lv<1> > or_ln879_9_fu_244_p2;
    sc_signal< sc_lv<1> > or_ln879_9_reg_376;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > or_ln879_fu_142_p2;
    sc_signal< sc_lv<1> > icmp_ln879_2_fu_106_p2;
    sc_signal< sc_lv<1> > xor_ln879_1_fu_148_p2;
    sc_signal< sc_lv<1> > or_ln879_1_fu_160_p2;
    sc_signal< sc_lv<1> > icmp_ln879_3_fu_112_p2;
    sc_signal< sc_lv<1> > xor_ln879_2_fu_166_p2;
    sc_signal< sc_lv<1> > or_ln879_2_fu_178_p2;
    sc_signal< sc_lv<1> > icmp_ln879_4_fu_118_p2;
    sc_signal< sc_lv<1> > xor_ln879_3_fu_184_p2;
    sc_signal< sc_lv<1> > or_ln879_3_fu_196_p2;
    sc_signal< sc_lv<1> > icmp_ln879_5_fu_124_p2;
    sc_signal< sc_lv<1> > xor_ln879_4_fu_202_p2;
    sc_signal< sc_lv<1> > or_ln879_4_fu_214_p2;
    sc_signal< sc_lv<1> > icmp_ln879_6_fu_130_p2;
    sc_signal< sc_lv<1> > xor_ln879_5_fu_220_p2;
    sc_signal< sc_lv<1> > and_ln879_4_fu_208_p2;
    sc_signal< sc_lv<1> > and_ln879_2_fu_172_p2;
    sc_signal< sc_lv<1> > or_ln879_6_fu_238_p2;
    sc_signal< sc_lv<1> > xor_ln879_fu_250_p2;
    sc_signal< sc_lv<1> > and_ln879_fu_255_p2;
    sc_signal< sc_lv<8> > select_ln879_fu_260_p3;
    sc_signal< sc_lv<8> > select_ln879_1_fu_267_p3;
    sc_signal< sc_lv<1> > or_ln879_7_fu_281_p2;
    sc_signal< sc_lv<8> > select_ln879_2_fu_274_p3;
    sc_signal< sc_lv<8> > select_ln879_3_fu_286_p3;
    sc_signal< sc_lv<1> > or_ln879_8_fu_293_p2;
    sc_signal< sc_lv<8> > select_ln879_4_fu_297_p3;
    sc_signal< sc_lv<8> > select_ln879_5_fu_304_p3;
    sc_signal< sc_lv<1> > or_ln879_10_fu_312_p2;
    sc_signal< sc_lv<1> > or_ln879_11_fu_325_p2;
    sc_signal< sc_lv<8> > select_ln879_6_fu_318_p3;
    sc_signal< sc_lv<8> > select_ln879_7_fu_330_p3;
    sc_signal< sc_lv<8> > ap_return_preg;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<8> ap_const_lv8_4;
    static const sc_lv<8> ap_const_lv8_8;
    static const sc_lv<8> ap_const_lv8_10;
    static const sc_lv<8> ap_const_lv8_20;
    static const sc_lv<8> ap_const_lv8_40;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<8> ap_const_lv8_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_and_ln879_1_fu_154_p2();
    void thread_and_ln879_2_fu_172_p2();
    void thread_and_ln879_3_fu_190_p2();
    void thread_and_ln879_4_fu_208_p2();
    void thread_and_ln879_5_fu_226_p2();
    void thread_and_ln879_fu_255_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_icmp_ln879_1_fu_100_p2();
    void thread_icmp_ln879_2_fu_106_p2();
    void thread_icmp_ln879_3_fu_112_p2();
    void thread_icmp_ln879_4_fu_118_p2();
    void thread_icmp_ln879_5_fu_124_p2();
    void thread_icmp_ln879_6_fu_130_p2();
    void thread_icmp_ln879_7_fu_136_p2();
    void thread_icmp_ln879_fu_94_p2();
    void thread_or_ln879_10_fu_312_p2();
    void thread_or_ln879_11_fu_325_p2();
    void thread_or_ln879_1_fu_160_p2();
    void thread_or_ln879_2_fu_178_p2();
    void thread_or_ln879_3_fu_196_p2();
    void thread_or_ln879_4_fu_214_p2();
    void thread_or_ln879_5_fu_232_p2();
    void thread_or_ln879_6_fu_238_p2();
    void thread_or_ln879_7_fu_281_p2();
    void thread_or_ln879_8_fu_293_p2();
    void thread_or_ln879_9_fu_244_p2();
    void thread_or_ln879_fu_142_p2();
    void thread_select_ln879_1_fu_267_p3();
    void thread_select_ln879_2_fu_274_p3();
    void thread_select_ln879_3_fu_286_p3();
    void thread_select_ln879_4_fu_297_p3();
    void thread_select_ln879_5_fu_304_p3();
    void thread_select_ln879_6_fu_318_p3();
    void thread_select_ln879_7_fu_330_p3();
    void thread_select_ln879_fu_260_p3();
    void thread_xor_ln879_1_fu_148_p2();
    void thread_xor_ln879_2_fu_166_p2();
    void thread_xor_ln879_3_fu_184_p2();
    void thread_xor_ln879_4_fu_202_p2();
    void thread_xor_ln879_5_fu_220_p2();
    void thread_xor_ln879_fu_250_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
