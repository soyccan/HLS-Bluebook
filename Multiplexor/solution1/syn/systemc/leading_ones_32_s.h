// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _leading_ones_32_s_HH_
#define _leading_ones_32_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct leading_ones_32_s : public sc_module {
    // Port declarations 4
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > din_V_read;
    sc_out< sc_lv<1> > ap_return_0;
    sc_out< sc_lv<5> > ap_return_1;


    // Module declarations
    leading_ones_32_s(sc_module_name name);
    SC_HAS_PROCESS(leading_ones_32_s);

    ~leading_ones_32_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<4> > idx_V_32_fu_309_p3;
    sc_signal< sc_lv<4> > ap_phi_mux_idxu_V_14_phi_fu_107_p4;
    sc_signal< sc_lv<1> > icmp_ln22_fu_147_p2;
    sc_signal< sc_lv<1> > icmp_ln22_2_fu_163_p2;
    sc_signal< sc_lv<4> > idx_V_24_fu_458_p1;
    sc_signal< sc_lv<4> > idx_V_16_fu_628_p3;
    sc_signal< sc_lv<4> > ap_phi_mux_idxl_V_14_phi_fu_116_p4;
    sc_signal< sc_lv<1> > icmp_ln22_1_fu_482_p2;
    sc_signal< sc_lv<4> > idx_V_8_fu_777_p1;
    sc_signal< sc_lv<5> > idx_V_33_fu_463_p3;
    sc_signal< sc_lv<5> > ap_phi_mux_ssdm_int_V_write_ass_phi_fu_125_p4;
    sc_signal< sc_lv<5> > idx_V_fu_782_p1;
    sc_signal< sc_lv<16> > upper_V_fu_131_p4;
    sc_signal< sc_lv<8> > upper_V_2_fu_153_p4;
    sc_signal< sc_lv<4> > upper_V_24_fu_169_p4;
    sc_signal< sc_lv<2> > upper_V_25_fu_185_p4;
    sc_signal< sc_lv<2> > upper_V_26_fu_201_p4;
    sc_signal< sc_lv<1> > upper_V_31_fu_217_p3;
    sc_signal< sc_lv<1> > upper_V_32_fu_229_p3;
    sc_signal< sc_lv<1> > upper_V_33_fu_245_p3;
    sc_signal< sc_lv<1> > upper_V_34_fu_257_p3;
    sc_signal< sc_lv<1> > icmp_ln22_13_fu_195_p2;
    sc_signal< sc_lv<2> > idx_V_25_fu_225_p1;
    sc_signal< sc_lv<2> > idx_V_26_fu_237_p3;
    sc_signal< sc_lv<2> > idxl_V_13_fu_273_p3;
    sc_signal< sc_lv<1> > icmp_ln22_14_fu_211_p2;
    sc_signal< sc_lv<2> > idx_V_27_fu_253_p1;
    sc_signal< sc_lv<2> > idx_V_28_fu_265_p3;
    sc_signal< sc_lv<2> > idxu_V_12_fu_285_p3;
    sc_signal< sc_lv<1> > icmp_ln22_12_fu_179_p2;
    sc_signal< sc_lv<3> > idx_V_29_fu_281_p1;
    sc_signal< sc_lv<3> > idx_V_30_fu_293_p3;
    sc_signal< sc_lv<3> > idx_V_34_fu_301_p3;
    sc_signal< sc_lv<4> > upper_V_17_fu_318_p4;
    sc_signal< sc_lv<2> > upper_V_18_fu_334_p4;
    sc_signal< sc_lv<2> > upper_V_19_fu_350_p4;
    sc_signal< sc_lv<1> > upper_V_35_fu_366_p3;
    sc_signal< sc_lv<1> > upper_V_36_fu_378_p3;
    sc_signal< sc_lv<1> > upper_V_37_fu_394_p3;
    sc_signal< sc_lv<1> > upper_V_38_fu_406_p3;
    sc_signal< sc_lv<1> > icmp_ln22_10_fu_344_p2;
    sc_signal< sc_lv<2> > idx_V_17_fu_374_p1;
    sc_signal< sc_lv<2> > idx_V_18_fu_386_p3;
    sc_signal< sc_lv<2> > idxl_V_9_fu_422_p3;
    sc_signal< sc_lv<1> > icmp_ln22_11_fu_360_p2;
    sc_signal< sc_lv<2> > idx_V_19_fu_402_p1;
    sc_signal< sc_lv<2> > idx_V_20_fu_414_p3;
    sc_signal< sc_lv<2> > idxu_V_9_fu_434_p3;
    sc_signal< sc_lv<1> > icmp_ln22_9_fu_328_p2;
    sc_signal< sc_lv<3> > idx_V_21_fu_430_p1;
    sc_signal< sc_lv<3> > idx_V_22_fu_442_p3;
    sc_signal< sc_lv<3> > idx_V_35_fu_450_p3;
    sc_signal< sc_lv<8> > upper_V_1_fu_472_p4;
    sc_signal< sc_lv<4> > upper_V_10_fu_488_p4;
    sc_signal< sc_lv<2> > upper_V_11_fu_504_p4;
    sc_signal< sc_lv<2> > upper_V_12_fu_520_p4;
    sc_signal< sc_lv<1> > upper_V_39_fu_536_p3;
    sc_signal< sc_lv<1> > upper_V_40_fu_548_p3;
    sc_signal< sc_lv<1> > upper_V_41_fu_564_p3;
    sc_signal< sc_lv<1> > upper_V_42_fu_576_p3;
    sc_signal< sc_lv<1> > icmp_ln22_7_fu_514_p2;
    sc_signal< sc_lv<2> > idx_V_9_fu_544_p1;
    sc_signal< sc_lv<2> > idx_V_10_fu_556_p3;
    sc_signal< sc_lv<2> > idxl_V_6_fu_592_p3;
    sc_signal< sc_lv<1> > icmp_ln22_8_fu_530_p2;
    sc_signal< sc_lv<2> > idx_V_11_fu_572_p1;
    sc_signal< sc_lv<2> > idx_V_12_fu_584_p3;
    sc_signal< sc_lv<2> > idxu_V_5_fu_604_p3;
    sc_signal< sc_lv<1> > icmp_ln22_6_fu_498_p2;
    sc_signal< sc_lv<3> > idx_V_13_fu_600_p1;
    sc_signal< sc_lv<3> > idx_V_14_fu_612_p3;
    sc_signal< sc_lv<3> > idx_V_36_fu_620_p3;
    sc_signal< sc_lv<4> > upper_V_3_fu_637_p4;
    sc_signal< sc_lv<2> > upper_V_4_fu_653_p4;
    sc_signal< sc_lv<2> > upper_V_5_fu_669_p4;
    sc_signal< sc_lv<1> > upper_V_43_fu_685_p3;
    sc_signal< sc_lv<1> > upper_V_44_fu_697_p3;
    sc_signal< sc_lv<1> > upper_V_45_fu_713_p3;
    sc_signal< sc_lv<1> > upper_V_46_fu_725_p3;
    sc_signal< sc_lv<1> > icmp_ln22_4_fu_663_p2;
    sc_signal< sc_lv<2> > idx_V_1_fu_693_p1;
    sc_signal< sc_lv<2> > idx_V_2_fu_705_p3;
    sc_signal< sc_lv<2> > idxl_V_2_fu_741_p3;
    sc_signal< sc_lv<1> > icmp_ln22_5_fu_679_p2;
    sc_signal< sc_lv<2> > idx_V_3_fu_721_p1;
    sc_signal< sc_lv<2> > idx_V_4_fu_733_p3;
    sc_signal< sc_lv<2> > idxu_V_2_fu_753_p3;
    sc_signal< sc_lv<1> > icmp_ln22_3_fu_647_p2;
    sc_signal< sc_lv<3> > idx_V_5_fu_749_p1;
    sc_signal< sc_lv<3> > idx_V_6_fu_761_p3;
    sc_signal< sc_lv<3> > idx_V_37_fu_769_p3;
    sc_signal< sc_lv<1> > icmp_ln883_fu_141_p2;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_phi_mux_idxl_V_14_phi_fu_116_p4();
    void thread_ap_phi_mux_idxu_V_14_phi_fu_107_p4();
    void thread_ap_phi_mux_ssdm_int_V_write_ass_phi_fu_125_p4();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_icmp_ln22_10_fu_344_p2();
    void thread_icmp_ln22_11_fu_360_p2();
    void thread_icmp_ln22_12_fu_179_p2();
    void thread_icmp_ln22_13_fu_195_p2();
    void thread_icmp_ln22_14_fu_211_p2();
    void thread_icmp_ln22_1_fu_482_p2();
    void thread_icmp_ln22_2_fu_163_p2();
    void thread_icmp_ln22_3_fu_647_p2();
    void thread_icmp_ln22_4_fu_663_p2();
    void thread_icmp_ln22_5_fu_679_p2();
    void thread_icmp_ln22_6_fu_498_p2();
    void thread_icmp_ln22_7_fu_514_p2();
    void thread_icmp_ln22_8_fu_530_p2();
    void thread_icmp_ln22_9_fu_328_p2();
    void thread_icmp_ln22_fu_147_p2();
    void thread_icmp_ln883_fu_141_p2();
    void thread_idx_V_10_fu_556_p3();
    void thread_idx_V_11_fu_572_p1();
    void thread_idx_V_12_fu_584_p3();
    void thread_idx_V_13_fu_600_p1();
    void thread_idx_V_14_fu_612_p3();
    void thread_idx_V_16_fu_628_p3();
    void thread_idx_V_17_fu_374_p1();
    void thread_idx_V_18_fu_386_p3();
    void thread_idx_V_19_fu_402_p1();
    void thread_idx_V_1_fu_693_p1();
    void thread_idx_V_20_fu_414_p3();
    void thread_idx_V_21_fu_430_p1();
    void thread_idx_V_22_fu_442_p3();
    void thread_idx_V_24_fu_458_p1();
    void thread_idx_V_25_fu_225_p1();
    void thread_idx_V_26_fu_237_p3();
    void thread_idx_V_27_fu_253_p1();
    void thread_idx_V_28_fu_265_p3();
    void thread_idx_V_29_fu_281_p1();
    void thread_idx_V_2_fu_705_p3();
    void thread_idx_V_30_fu_293_p3();
    void thread_idx_V_32_fu_309_p3();
    void thread_idx_V_33_fu_463_p3();
    void thread_idx_V_34_fu_301_p3();
    void thread_idx_V_35_fu_450_p3();
    void thread_idx_V_36_fu_620_p3();
    void thread_idx_V_37_fu_769_p3();
    void thread_idx_V_3_fu_721_p1();
    void thread_idx_V_4_fu_733_p3();
    void thread_idx_V_5_fu_749_p1();
    void thread_idx_V_6_fu_761_p3();
    void thread_idx_V_8_fu_777_p1();
    void thread_idx_V_9_fu_544_p1();
    void thread_idx_V_fu_782_p1();
    void thread_idxl_V_13_fu_273_p3();
    void thread_idxl_V_2_fu_741_p3();
    void thread_idxl_V_6_fu_592_p3();
    void thread_idxl_V_9_fu_422_p3();
    void thread_idxu_V_12_fu_285_p3();
    void thread_idxu_V_2_fu_753_p3();
    void thread_idxu_V_5_fu_604_p3();
    void thread_idxu_V_9_fu_434_p3();
    void thread_upper_V_10_fu_488_p4();
    void thread_upper_V_11_fu_504_p4();
    void thread_upper_V_12_fu_520_p4();
    void thread_upper_V_17_fu_318_p4();
    void thread_upper_V_18_fu_334_p4();
    void thread_upper_V_19_fu_350_p4();
    void thread_upper_V_1_fu_472_p4();
    void thread_upper_V_24_fu_169_p4();
    void thread_upper_V_25_fu_185_p4();
    void thread_upper_V_26_fu_201_p4();
    void thread_upper_V_2_fu_153_p4();
    void thread_upper_V_31_fu_217_p3();
    void thread_upper_V_32_fu_229_p3();
    void thread_upper_V_33_fu_245_p3();
    void thread_upper_V_34_fu_257_p3();
    void thread_upper_V_35_fu_366_p3();
    void thread_upper_V_36_fu_378_p3();
    void thread_upper_V_37_fu_394_p3();
    void thread_upper_V_38_fu_406_p3();
    void thread_upper_V_39_fu_536_p3();
    void thread_upper_V_3_fu_637_p4();
    void thread_upper_V_40_fu_548_p3();
    void thread_upper_V_41_fu_564_p3();
    void thread_upper_V_42_fu_576_p3();
    void thread_upper_V_43_fu_685_p3();
    void thread_upper_V_44_fu_697_p3();
    void thread_upper_V_45_fu_713_p3();
    void thread_upper_V_46_fu_725_p3();
    void thread_upper_V_4_fu_653_p4();
    void thread_upper_V_5_fu_669_p4();
    void thread_upper_V_fu_131_p4();
};

}

using namespace ap_rtl;

#endif