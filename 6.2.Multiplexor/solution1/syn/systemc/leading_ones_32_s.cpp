// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "leading_ones_32_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic leading_ones_32_s::ap_const_logic_1 = sc_dt::Log_1;
const bool leading_ones_32_s::ap_const_boolean_1 = true;
const sc_lv<1> leading_ones_32_s::ap_const_lv1_0 = "0";
const sc_lv<1> leading_ones_32_s::ap_const_lv1_1 = "1";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_10 = "10000";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_1F = "11111";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<16> leading_ones_32_s::ap_const_lv16_0 = "0000000000000000";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_18 = "11000";
const sc_lv<8> leading_ones_32_s::ap_const_lv8_0 = "00000000";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_1C = "11100";
const sc_lv<4> leading_ones_32_s::ap_const_lv4_0 = "0000";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_1A = "11010";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_1B = "11011";
const sc_lv<2> leading_ones_32_s::ap_const_lv2_0 = "00";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_1E = "11110";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_19 = "11001";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_1D = "11101";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_14 = "10100";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_17 = "10111";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_12 = "10010";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_13 = "10011";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_16 = "10110";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_11 = "10001";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_15 = "10101";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_8 = "1000";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_F = "1111";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_C = "1100";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_A = "1010";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_B = "1011";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_E = "1110";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_9 = "1001";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_D = "1101";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_4 = "100";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_7 = "111";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_2 = "10";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_3 = "11";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_6 = "110";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_1 = "1";
const sc_lv<32> leading_ones_32_s::ap_const_lv32_5 = "101";
const sc_logic leading_ones_32_s::ap_const_logic_0 = sc_dt::Log_0;

leading_ones_32_s::leading_ones_32_s(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_phi_mux_idxl_V_14_phi_fu_116_p4);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( idx_V_16_fu_628_p3 );
    sensitive << ( icmp_ln22_1_fu_482_p2 );
    sensitive << ( idx_V_8_fu_777_p1 );

    SC_METHOD(thread_ap_phi_mux_idxu_V_14_phi_fu_107_p4);
    sensitive << ( idx_V_32_fu_309_p3 );
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_2_fu_163_p2 );
    sensitive << ( idx_V_24_fu_458_p1 );

    SC_METHOD(thread_ap_phi_mux_ssdm_int_V_write_ass_phi_fu_125_p4);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( idx_V_33_fu_463_p3 );
    sensitive << ( idx_V_fu_782_p1 );

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return_0);
    sensitive << ( icmp_ln883_fu_141_p2 );

    SC_METHOD(thread_ap_return_1);
    sensitive << ( ap_phi_mux_ssdm_int_V_write_ass_phi_fu_125_p4 );

    SC_METHOD(thread_icmp_ln22_10_fu_344_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_2_fu_163_p2 );
    sensitive << ( upper_V_18_fu_334_p4 );
    sensitive << ( icmp_ln22_9_fu_328_p2 );

    SC_METHOD(thread_icmp_ln22_11_fu_360_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_2_fu_163_p2 );
    sensitive << ( upper_V_19_fu_350_p4 );
    sensitive << ( icmp_ln22_9_fu_328_p2 );

    SC_METHOD(thread_icmp_ln22_12_fu_179_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_2_fu_163_p2 );
    sensitive << ( upper_V_24_fu_169_p4 );

    SC_METHOD(thread_icmp_ln22_13_fu_195_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_2_fu_163_p2 );
    sensitive << ( upper_V_25_fu_185_p4 );
    sensitive << ( icmp_ln22_12_fu_179_p2 );

    SC_METHOD(thread_icmp_ln22_14_fu_211_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_2_fu_163_p2 );
    sensitive << ( upper_V_26_fu_201_p4 );
    sensitive << ( icmp_ln22_12_fu_179_p2 );

    SC_METHOD(thread_icmp_ln22_1_fu_482_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( upper_V_1_fu_472_p4 );

    SC_METHOD(thread_icmp_ln22_2_fu_163_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( upper_V_2_fu_153_p4 );

    SC_METHOD(thread_icmp_ln22_3_fu_647_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_1_fu_482_p2 );
    sensitive << ( upper_V_3_fu_637_p4 );

    SC_METHOD(thread_icmp_ln22_4_fu_663_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_1_fu_482_p2 );
    sensitive << ( upper_V_4_fu_653_p4 );
    sensitive << ( icmp_ln22_3_fu_647_p2 );

    SC_METHOD(thread_icmp_ln22_5_fu_679_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_1_fu_482_p2 );
    sensitive << ( upper_V_5_fu_669_p4 );
    sensitive << ( icmp_ln22_3_fu_647_p2 );

    SC_METHOD(thread_icmp_ln22_6_fu_498_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_1_fu_482_p2 );
    sensitive << ( upper_V_10_fu_488_p4 );

    SC_METHOD(thread_icmp_ln22_7_fu_514_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_1_fu_482_p2 );
    sensitive << ( upper_V_11_fu_504_p4 );
    sensitive << ( icmp_ln22_6_fu_498_p2 );

    SC_METHOD(thread_icmp_ln22_8_fu_530_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_1_fu_482_p2 );
    sensitive << ( upper_V_12_fu_520_p4 );
    sensitive << ( icmp_ln22_6_fu_498_p2 );

    SC_METHOD(thread_icmp_ln22_9_fu_328_p2);
    sensitive << ( icmp_ln22_fu_147_p2 );
    sensitive << ( icmp_ln22_2_fu_163_p2 );
    sensitive << ( upper_V_17_fu_318_p4 );

    SC_METHOD(thread_icmp_ln22_fu_147_p2);
    sensitive << ( upper_V_fu_131_p4 );

    SC_METHOD(thread_icmp_ln883_fu_141_p2);
    sensitive << ( din_V_read );

    SC_METHOD(thread_idx_V_10_fu_556_p3);
    sensitive << ( upper_V_40_fu_548_p3 );

    SC_METHOD(thread_idx_V_11_fu_572_p1);
    sensitive << ( upper_V_41_fu_564_p3 );

    SC_METHOD(thread_idx_V_12_fu_584_p3);
    sensitive << ( upper_V_42_fu_576_p3 );

    SC_METHOD(thread_idx_V_13_fu_600_p1);
    sensitive << ( idxl_V_6_fu_592_p3 );

    SC_METHOD(thread_idx_V_14_fu_612_p3);
    sensitive << ( idxu_V_5_fu_604_p3 );

    SC_METHOD(thread_idx_V_16_fu_628_p3);
    sensitive << ( idx_V_36_fu_620_p3 );

    SC_METHOD(thread_idx_V_17_fu_374_p1);
    sensitive << ( upper_V_35_fu_366_p3 );

    SC_METHOD(thread_idx_V_18_fu_386_p3);
    sensitive << ( upper_V_36_fu_378_p3 );

    SC_METHOD(thread_idx_V_19_fu_402_p1);
    sensitive << ( upper_V_37_fu_394_p3 );

    SC_METHOD(thread_idx_V_1_fu_693_p1);
    sensitive << ( upper_V_43_fu_685_p3 );

    SC_METHOD(thread_idx_V_20_fu_414_p3);
    sensitive << ( upper_V_38_fu_406_p3 );

    SC_METHOD(thread_idx_V_21_fu_430_p1);
    sensitive << ( idxl_V_9_fu_422_p3 );

    SC_METHOD(thread_idx_V_22_fu_442_p3);
    sensitive << ( idxu_V_9_fu_434_p3 );

    SC_METHOD(thread_idx_V_24_fu_458_p1);
    sensitive << ( idx_V_35_fu_450_p3 );

    SC_METHOD(thread_idx_V_25_fu_225_p1);
    sensitive << ( upper_V_31_fu_217_p3 );

    SC_METHOD(thread_idx_V_26_fu_237_p3);
    sensitive << ( upper_V_32_fu_229_p3 );

    SC_METHOD(thread_idx_V_27_fu_253_p1);
    sensitive << ( upper_V_33_fu_245_p3 );

    SC_METHOD(thread_idx_V_28_fu_265_p3);
    sensitive << ( upper_V_34_fu_257_p3 );

    SC_METHOD(thread_idx_V_29_fu_281_p1);
    sensitive << ( idxl_V_13_fu_273_p3 );

    SC_METHOD(thread_idx_V_2_fu_705_p3);
    sensitive << ( upper_V_44_fu_697_p3 );

    SC_METHOD(thread_idx_V_30_fu_293_p3);
    sensitive << ( idxu_V_12_fu_285_p3 );

    SC_METHOD(thread_idx_V_32_fu_309_p3);
    sensitive << ( idx_V_34_fu_301_p3 );

    SC_METHOD(thread_idx_V_33_fu_463_p3);
    sensitive << ( ap_phi_mux_idxu_V_14_phi_fu_107_p4 );

    SC_METHOD(thread_idx_V_34_fu_301_p3);
    sensitive << ( icmp_ln22_12_fu_179_p2 );
    sensitive << ( idx_V_29_fu_281_p1 );
    sensitive << ( idx_V_30_fu_293_p3 );

    SC_METHOD(thread_idx_V_35_fu_450_p3);
    sensitive << ( icmp_ln22_9_fu_328_p2 );
    sensitive << ( idx_V_21_fu_430_p1 );
    sensitive << ( idx_V_22_fu_442_p3 );

    SC_METHOD(thread_idx_V_36_fu_620_p3);
    sensitive << ( icmp_ln22_6_fu_498_p2 );
    sensitive << ( idx_V_13_fu_600_p1 );
    sensitive << ( idx_V_14_fu_612_p3 );

    SC_METHOD(thread_idx_V_37_fu_769_p3);
    sensitive << ( icmp_ln22_3_fu_647_p2 );
    sensitive << ( idx_V_5_fu_749_p1 );
    sensitive << ( idx_V_6_fu_761_p3 );

    SC_METHOD(thread_idx_V_3_fu_721_p1);
    sensitive << ( upper_V_45_fu_713_p3 );

    SC_METHOD(thread_idx_V_4_fu_733_p3);
    sensitive << ( upper_V_46_fu_725_p3 );

    SC_METHOD(thread_idx_V_5_fu_749_p1);
    sensitive << ( idxl_V_2_fu_741_p3 );

    SC_METHOD(thread_idx_V_6_fu_761_p3);
    sensitive << ( idxu_V_2_fu_753_p3 );

    SC_METHOD(thread_idx_V_8_fu_777_p1);
    sensitive << ( idx_V_37_fu_769_p3 );

    SC_METHOD(thread_idx_V_9_fu_544_p1);
    sensitive << ( upper_V_39_fu_536_p3 );

    SC_METHOD(thread_idx_V_fu_782_p1);
    sensitive << ( ap_phi_mux_idxl_V_14_phi_fu_116_p4 );

    SC_METHOD(thread_idxl_V_13_fu_273_p3);
    sensitive << ( icmp_ln22_13_fu_195_p2 );
    sensitive << ( idx_V_25_fu_225_p1 );
    sensitive << ( idx_V_26_fu_237_p3 );

    SC_METHOD(thread_idxl_V_2_fu_741_p3);
    sensitive << ( icmp_ln22_4_fu_663_p2 );
    sensitive << ( idx_V_1_fu_693_p1 );
    sensitive << ( idx_V_2_fu_705_p3 );

    SC_METHOD(thread_idxl_V_6_fu_592_p3);
    sensitive << ( icmp_ln22_7_fu_514_p2 );
    sensitive << ( idx_V_9_fu_544_p1 );
    sensitive << ( idx_V_10_fu_556_p3 );

    SC_METHOD(thread_idxl_V_9_fu_422_p3);
    sensitive << ( icmp_ln22_10_fu_344_p2 );
    sensitive << ( idx_V_17_fu_374_p1 );
    sensitive << ( idx_V_18_fu_386_p3 );

    SC_METHOD(thread_idxu_V_12_fu_285_p3);
    sensitive << ( icmp_ln22_14_fu_211_p2 );
    sensitive << ( idx_V_27_fu_253_p1 );
    sensitive << ( idx_V_28_fu_265_p3 );

    SC_METHOD(thread_idxu_V_2_fu_753_p3);
    sensitive << ( icmp_ln22_5_fu_679_p2 );
    sensitive << ( idx_V_3_fu_721_p1 );
    sensitive << ( idx_V_4_fu_733_p3 );

    SC_METHOD(thread_idxu_V_5_fu_604_p3);
    sensitive << ( icmp_ln22_8_fu_530_p2 );
    sensitive << ( idx_V_11_fu_572_p1 );
    sensitive << ( idx_V_12_fu_584_p3 );

    SC_METHOD(thread_idxu_V_9_fu_434_p3);
    sensitive << ( icmp_ln22_11_fu_360_p2 );
    sensitive << ( idx_V_19_fu_402_p1 );
    sensitive << ( idx_V_20_fu_414_p3 );

    SC_METHOD(thread_upper_V_10_fu_488_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_11_fu_504_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_12_fu_520_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_17_fu_318_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_18_fu_334_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_19_fu_350_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_1_fu_472_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_24_fu_169_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_25_fu_185_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_26_fu_201_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_2_fu_153_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_31_fu_217_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_32_fu_229_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_33_fu_245_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_34_fu_257_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_35_fu_366_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_36_fu_378_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_37_fu_394_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_38_fu_406_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_39_fu_536_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_3_fu_637_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_40_fu_548_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_41_fu_564_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_42_fu_576_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_43_fu_685_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_44_fu_697_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_45_fu_713_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_46_fu_725_p3);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_4_fu_653_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_5_fu_669_p4);
    sensitive << ( din_V_read );

    SC_METHOD(thread_upper_V_fu_131_p4);
    sensitive << ( din_V_read );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "leading_ones_32_s_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, idx_V_32_fu_309_p3, "idx_V_32_fu_309_p3");
    sc_trace(mVcdFile, ap_phi_mux_idxu_V_14_phi_fu_107_p4, "ap_phi_mux_idxu_V_14_phi_fu_107_p4");
    sc_trace(mVcdFile, icmp_ln22_fu_147_p2, "icmp_ln22_fu_147_p2");
    sc_trace(mVcdFile, icmp_ln22_2_fu_163_p2, "icmp_ln22_2_fu_163_p2");
    sc_trace(mVcdFile, idx_V_24_fu_458_p1, "idx_V_24_fu_458_p1");
    sc_trace(mVcdFile, idx_V_16_fu_628_p3, "idx_V_16_fu_628_p3");
    sc_trace(mVcdFile, ap_phi_mux_idxl_V_14_phi_fu_116_p4, "ap_phi_mux_idxl_V_14_phi_fu_116_p4");
    sc_trace(mVcdFile, icmp_ln22_1_fu_482_p2, "icmp_ln22_1_fu_482_p2");
    sc_trace(mVcdFile, idx_V_8_fu_777_p1, "idx_V_8_fu_777_p1");
    sc_trace(mVcdFile, idx_V_33_fu_463_p3, "idx_V_33_fu_463_p3");
    sc_trace(mVcdFile, ap_phi_mux_ssdm_int_V_write_ass_phi_fu_125_p4, "ap_phi_mux_ssdm_int_V_write_ass_phi_fu_125_p4");
    sc_trace(mVcdFile, idx_V_fu_782_p1, "idx_V_fu_782_p1");
    sc_trace(mVcdFile, upper_V_fu_131_p4, "upper_V_fu_131_p4");
    sc_trace(mVcdFile, upper_V_2_fu_153_p4, "upper_V_2_fu_153_p4");
    sc_trace(mVcdFile, upper_V_24_fu_169_p4, "upper_V_24_fu_169_p4");
    sc_trace(mVcdFile, upper_V_25_fu_185_p4, "upper_V_25_fu_185_p4");
    sc_trace(mVcdFile, upper_V_26_fu_201_p4, "upper_V_26_fu_201_p4");
    sc_trace(mVcdFile, upper_V_31_fu_217_p3, "upper_V_31_fu_217_p3");
    sc_trace(mVcdFile, upper_V_32_fu_229_p3, "upper_V_32_fu_229_p3");
    sc_trace(mVcdFile, upper_V_33_fu_245_p3, "upper_V_33_fu_245_p3");
    sc_trace(mVcdFile, upper_V_34_fu_257_p3, "upper_V_34_fu_257_p3");
    sc_trace(mVcdFile, icmp_ln22_13_fu_195_p2, "icmp_ln22_13_fu_195_p2");
    sc_trace(mVcdFile, idx_V_25_fu_225_p1, "idx_V_25_fu_225_p1");
    sc_trace(mVcdFile, idx_V_26_fu_237_p3, "idx_V_26_fu_237_p3");
    sc_trace(mVcdFile, idxl_V_13_fu_273_p3, "idxl_V_13_fu_273_p3");
    sc_trace(mVcdFile, icmp_ln22_14_fu_211_p2, "icmp_ln22_14_fu_211_p2");
    sc_trace(mVcdFile, idx_V_27_fu_253_p1, "idx_V_27_fu_253_p1");
    sc_trace(mVcdFile, idx_V_28_fu_265_p3, "idx_V_28_fu_265_p3");
    sc_trace(mVcdFile, idxu_V_12_fu_285_p3, "idxu_V_12_fu_285_p3");
    sc_trace(mVcdFile, icmp_ln22_12_fu_179_p2, "icmp_ln22_12_fu_179_p2");
    sc_trace(mVcdFile, idx_V_29_fu_281_p1, "idx_V_29_fu_281_p1");
    sc_trace(mVcdFile, idx_V_30_fu_293_p3, "idx_V_30_fu_293_p3");
    sc_trace(mVcdFile, idx_V_34_fu_301_p3, "idx_V_34_fu_301_p3");
    sc_trace(mVcdFile, upper_V_17_fu_318_p4, "upper_V_17_fu_318_p4");
    sc_trace(mVcdFile, upper_V_18_fu_334_p4, "upper_V_18_fu_334_p4");
    sc_trace(mVcdFile, upper_V_19_fu_350_p4, "upper_V_19_fu_350_p4");
    sc_trace(mVcdFile, upper_V_35_fu_366_p3, "upper_V_35_fu_366_p3");
    sc_trace(mVcdFile, upper_V_36_fu_378_p3, "upper_V_36_fu_378_p3");
    sc_trace(mVcdFile, upper_V_37_fu_394_p3, "upper_V_37_fu_394_p3");
    sc_trace(mVcdFile, upper_V_38_fu_406_p3, "upper_V_38_fu_406_p3");
    sc_trace(mVcdFile, icmp_ln22_10_fu_344_p2, "icmp_ln22_10_fu_344_p2");
    sc_trace(mVcdFile, idx_V_17_fu_374_p1, "idx_V_17_fu_374_p1");
    sc_trace(mVcdFile, idx_V_18_fu_386_p3, "idx_V_18_fu_386_p3");
    sc_trace(mVcdFile, idxl_V_9_fu_422_p3, "idxl_V_9_fu_422_p3");
    sc_trace(mVcdFile, icmp_ln22_11_fu_360_p2, "icmp_ln22_11_fu_360_p2");
    sc_trace(mVcdFile, idx_V_19_fu_402_p1, "idx_V_19_fu_402_p1");
    sc_trace(mVcdFile, idx_V_20_fu_414_p3, "idx_V_20_fu_414_p3");
    sc_trace(mVcdFile, idxu_V_9_fu_434_p3, "idxu_V_9_fu_434_p3");
    sc_trace(mVcdFile, icmp_ln22_9_fu_328_p2, "icmp_ln22_9_fu_328_p2");
    sc_trace(mVcdFile, idx_V_21_fu_430_p1, "idx_V_21_fu_430_p1");
    sc_trace(mVcdFile, idx_V_22_fu_442_p3, "idx_V_22_fu_442_p3");
    sc_trace(mVcdFile, idx_V_35_fu_450_p3, "idx_V_35_fu_450_p3");
    sc_trace(mVcdFile, upper_V_1_fu_472_p4, "upper_V_1_fu_472_p4");
    sc_trace(mVcdFile, upper_V_10_fu_488_p4, "upper_V_10_fu_488_p4");
    sc_trace(mVcdFile, upper_V_11_fu_504_p4, "upper_V_11_fu_504_p4");
    sc_trace(mVcdFile, upper_V_12_fu_520_p4, "upper_V_12_fu_520_p4");
    sc_trace(mVcdFile, upper_V_39_fu_536_p3, "upper_V_39_fu_536_p3");
    sc_trace(mVcdFile, upper_V_40_fu_548_p3, "upper_V_40_fu_548_p3");
    sc_trace(mVcdFile, upper_V_41_fu_564_p3, "upper_V_41_fu_564_p3");
    sc_trace(mVcdFile, upper_V_42_fu_576_p3, "upper_V_42_fu_576_p3");
    sc_trace(mVcdFile, icmp_ln22_7_fu_514_p2, "icmp_ln22_7_fu_514_p2");
    sc_trace(mVcdFile, idx_V_9_fu_544_p1, "idx_V_9_fu_544_p1");
    sc_trace(mVcdFile, idx_V_10_fu_556_p3, "idx_V_10_fu_556_p3");
    sc_trace(mVcdFile, idxl_V_6_fu_592_p3, "idxl_V_6_fu_592_p3");
    sc_trace(mVcdFile, icmp_ln22_8_fu_530_p2, "icmp_ln22_8_fu_530_p2");
    sc_trace(mVcdFile, idx_V_11_fu_572_p1, "idx_V_11_fu_572_p1");
    sc_trace(mVcdFile, idx_V_12_fu_584_p3, "idx_V_12_fu_584_p3");
    sc_trace(mVcdFile, idxu_V_5_fu_604_p3, "idxu_V_5_fu_604_p3");
    sc_trace(mVcdFile, icmp_ln22_6_fu_498_p2, "icmp_ln22_6_fu_498_p2");
    sc_trace(mVcdFile, idx_V_13_fu_600_p1, "idx_V_13_fu_600_p1");
    sc_trace(mVcdFile, idx_V_14_fu_612_p3, "idx_V_14_fu_612_p3");
    sc_trace(mVcdFile, idx_V_36_fu_620_p3, "idx_V_36_fu_620_p3");
    sc_trace(mVcdFile, upper_V_3_fu_637_p4, "upper_V_3_fu_637_p4");
    sc_trace(mVcdFile, upper_V_4_fu_653_p4, "upper_V_4_fu_653_p4");
    sc_trace(mVcdFile, upper_V_5_fu_669_p4, "upper_V_5_fu_669_p4");
    sc_trace(mVcdFile, upper_V_43_fu_685_p3, "upper_V_43_fu_685_p3");
    sc_trace(mVcdFile, upper_V_44_fu_697_p3, "upper_V_44_fu_697_p3");
    sc_trace(mVcdFile, upper_V_45_fu_713_p3, "upper_V_45_fu_713_p3");
    sc_trace(mVcdFile, upper_V_46_fu_725_p3, "upper_V_46_fu_725_p3");
    sc_trace(mVcdFile, icmp_ln22_4_fu_663_p2, "icmp_ln22_4_fu_663_p2");
    sc_trace(mVcdFile, idx_V_1_fu_693_p1, "idx_V_1_fu_693_p1");
    sc_trace(mVcdFile, idx_V_2_fu_705_p3, "idx_V_2_fu_705_p3");
    sc_trace(mVcdFile, idxl_V_2_fu_741_p3, "idxl_V_2_fu_741_p3");
    sc_trace(mVcdFile, icmp_ln22_5_fu_679_p2, "icmp_ln22_5_fu_679_p2");
    sc_trace(mVcdFile, idx_V_3_fu_721_p1, "idx_V_3_fu_721_p1");
    sc_trace(mVcdFile, idx_V_4_fu_733_p3, "idx_V_4_fu_733_p3");
    sc_trace(mVcdFile, idxu_V_2_fu_753_p3, "idxu_V_2_fu_753_p3");
    sc_trace(mVcdFile, icmp_ln22_3_fu_647_p2, "icmp_ln22_3_fu_647_p2");
    sc_trace(mVcdFile, idx_V_5_fu_749_p1, "idx_V_5_fu_749_p1");
    sc_trace(mVcdFile, idx_V_6_fu_761_p3, "idx_V_6_fu_761_p3");
    sc_trace(mVcdFile, idx_V_37_fu_769_p3, "idx_V_37_fu_769_p3");
    sc_trace(mVcdFile, icmp_ln883_fu_141_p2, "icmp_ln883_fu_141_p2");
#endif

    }
}

leading_ones_32_s::~leading_ones_32_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void leading_ones_32_s::thread_ap_phi_mux_idxl_V_14_phi_fu_116_p4() {
    if (esl_seteq<1,1,1>(icmp_ln22_fu_147_p2.read(), ap_const_lv1_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln22_1_fu_482_p2.read())) {
            ap_phi_mux_idxl_V_14_phi_fu_116_p4 = idx_V_8_fu_777_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_1_fu_482_p2.read())) {
            ap_phi_mux_idxl_V_14_phi_fu_116_p4 = idx_V_16_fu_628_p3.read();
        } else {
            ap_phi_mux_idxl_V_14_phi_fu_116_p4 = "XXXX";
        }
    } else {
        ap_phi_mux_idxl_V_14_phi_fu_116_p4 = "XXXX";
    }
}

void leading_ones_32_s::thread_ap_phi_mux_idxu_V_14_phi_fu_107_p4() {
    if (esl_seteq<1,1,1>(icmp_ln22_fu_147_p2.read(), ap_const_lv1_0)) {
        if (esl_seteq<1,1,1>(icmp_ln22_2_fu_163_p2.read(), ap_const_lv1_1)) {
            ap_phi_mux_idxu_V_14_phi_fu_107_p4 = idx_V_24_fu_458_p1.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_2_fu_163_p2.read())) {
            ap_phi_mux_idxu_V_14_phi_fu_107_p4 = idx_V_32_fu_309_p3.read();
        } else {
            ap_phi_mux_idxu_V_14_phi_fu_107_p4 = "XXXX";
        }
    } else {
        ap_phi_mux_idxu_V_14_phi_fu_107_p4 = "XXXX";
    }
}

void leading_ones_32_s::thread_ap_phi_mux_ssdm_int_V_write_ass_phi_fu_125_p4() {
    if (esl_seteq<1,1,1>(icmp_ln22_fu_147_p2.read(), ap_const_lv1_1)) {
        ap_phi_mux_ssdm_int_V_write_ass_phi_fu_125_p4 = idx_V_fu_782_p1.read();
    } else if (esl_seteq<1,1,1>(icmp_ln22_fu_147_p2.read(), ap_const_lv1_0)) {
        ap_phi_mux_ssdm_int_V_write_ass_phi_fu_125_p4 = idx_V_33_fu_463_p3.read();
    } else {
        ap_phi_mux_ssdm_int_V_write_ass_phi_fu_125_p4 =  (sc_lv<5>) ("XXXXX");
    }
}

void leading_ones_32_s::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void leading_ones_32_s::thread_ap_return_0() {
    ap_return_0 = icmp_ln883_fu_141_p2.read();
}

void leading_ones_32_s::thread_ap_return_1() {
    ap_return_1 = ap_phi_mux_ssdm_int_V_write_ass_phi_fu_125_p4.read();
}

void leading_ones_32_s::thread_icmp_ln22_10_fu_344_p2() {
    icmp_ln22_10_fu_344_p2 = (!upper_V_18_fu_334_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_18_fu_334_p4.read() == ap_const_lv2_0);
}

void leading_ones_32_s::thread_icmp_ln22_11_fu_360_p2() {
    icmp_ln22_11_fu_360_p2 = (!upper_V_19_fu_350_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_19_fu_350_p4.read() == ap_const_lv2_0);
}

void leading_ones_32_s::thread_icmp_ln22_12_fu_179_p2() {
    icmp_ln22_12_fu_179_p2 = (!upper_V_24_fu_169_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_24_fu_169_p4.read() == ap_const_lv4_0);
}

void leading_ones_32_s::thread_icmp_ln22_13_fu_195_p2() {
    icmp_ln22_13_fu_195_p2 = (!upper_V_25_fu_185_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_25_fu_185_p4.read() == ap_const_lv2_0);
}

void leading_ones_32_s::thread_icmp_ln22_14_fu_211_p2() {
    icmp_ln22_14_fu_211_p2 = (!upper_V_26_fu_201_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_26_fu_201_p4.read() == ap_const_lv2_0);
}

void leading_ones_32_s::thread_icmp_ln22_1_fu_482_p2() {
    icmp_ln22_1_fu_482_p2 = (!upper_V_1_fu_472_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_1_fu_472_p4.read() == ap_const_lv8_0);
}

void leading_ones_32_s::thread_icmp_ln22_2_fu_163_p2() {
    icmp_ln22_2_fu_163_p2 = (!upper_V_2_fu_153_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_2_fu_153_p4.read() == ap_const_lv8_0);
}

void leading_ones_32_s::thread_icmp_ln22_3_fu_647_p2() {
    icmp_ln22_3_fu_647_p2 = (!upper_V_3_fu_637_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_3_fu_637_p4.read() == ap_const_lv4_0);
}

void leading_ones_32_s::thread_icmp_ln22_4_fu_663_p2() {
    icmp_ln22_4_fu_663_p2 = (!upper_V_4_fu_653_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_4_fu_653_p4.read() == ap_const_lv2_0);
}

void leading_ones_32_s::thread_icmp_ln22_5_fu_679_p2() {
    icmp_ln22_5_fu_679_p2 = (!upper_V_5_fu_669_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_5_fu_669_p4.read() == ap_const_lv2_0);
}

void leading_ones_32_s::thread_icmp_ln22_6_fu_498_p2() {
    icmp_ln22_6_fu_498_p2 = (!upper_V_10_fu_488_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_10_fu_488_p4.read() == ap_const_lv4_0);
}

void leading_ones_32_s::thread_icmp_ln22_7_fu_514_p2() {
    icmp_ln22_7_fu_514_p2 = (!upper_V_11_fu_504_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_11_fu_504_p4.read() == ap_const_lv2_0);
}

void leading_ones_32_s::thread_icmp_ln22_8_fu_530_p2() {
    icmp_ln22_8_fu_530_p2 = (!upper_V_12_fu_520_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_12_fu_520_p4.read() == ap_const_lv2_0);
}

void leading_ones_32_s::thread_icmp_ln22_9_fu_328_p2() {
    icmp_ln22_9_fu_328_p2 = (!upper_V_17_fu_318_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_17_fu_318_p4.read() == ap_const_lv4_0);
}

void leading_ones_32_s::thread_icmp_ln22_fu_147_p2() {
    icmp_ln22_fu_147_p2 = (!upper_V_fu_131_p4.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): sc_lv<1>(upper_V_fu_131_p4.read() == ap_const_lv16_0);
}

void leading_ones_32_s::thread_icmp_ln883_fu_141_p2() {
    icmp_ln883_fu_141_p2 = (!din_V_read.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(din_V_read.read() != ap_const_lv32_0);
}

void leading_ones_32_s::thread_idx_V_10_fu_556_p3() {
    idx_V_10_fu_556_p3 = esl_concat<1,1>(ap_const_lv1_1, upper_V_40_fu_548_p3.read());
}

void leading_ones_32_s::thread_idx_V_11_fu_572_p1() {
    idx_V_11_fu_572_p1 = esl_zext<2,1>(upper_V_41_fu_564_p3.read());
}

void leading_ones_32_s::thread_idx_V_12_fu_584_p3() {
    idx_V_12_fu_584_p3 = esl_concat<1,1>(ap_const_lv1_1, upper_V_42_fu_576_p3.read());
}

void leading_ones_32_s::thread_idx_V_13_fu_600_p1() {
    idx_V_13_fu_600_p1 = esl_zext<3,2>(idxl_V_6_fu_592_p3.read());
}

void leading_ones_32_s::thread_idx_V_14_fu_612_p3() {
    idx_V_14_fu_612_p3 = esl_concat<1,2>(ap_const_lv1_1, idxu_V_5_fu_604_p3.read());
}

void leading_ones_32_s::thread_idx_V_16_fu_628_p3() {
    idx_V_16_fu_628_p3 = esl_concat<1,3>(ap_const_lv1_1, idx_V_36_fu_620_p3.read());
}

void leading_ones_32_s::thread_idx_V_17_fu_374_p1() {
    idx_V_17_fu_374_p1 = esl_zext<2,1>(upper_V_35_fu_366_p3.read());
}

void leading_ones_32_s::thread_idx_V_18_fu_386_p3() {
    idx_V_18_fu_386_p3 = esl_concat<1,1>(ap_const_lv1_1, upper_V_36_fu_378_p3.read());
}

void leading_ones_32_s::thread_idx_V_19_fu_402_p1() {
    idx_V_19_fu_402_p1 = esl_zext<2,1>(upper_V_37_fu_394_p3.read());
}

void leading_ones_32_s::thread_idx_V_1_fu_693_p1() {
    idx_V_1_fu_693_p1 = esl_zext<2,1>(upper_V_43_fu_685_p3.read());
}

void leading_ones_32_s::thread_idx_V_20_fu_414_p3() {
    idx_V_20_fu_414_p3 = esl_concat<1,1>(ap_const_lv1_1, upper_V_38_fu_406_p3.read());
}

void leading_ones_32_s::thread_idx_V_21_fu_430_p1() {
    idx_V_21_fu_430_p1 = esl_zext<3,2>(idxl_V_9_fu_422_p3.read());
}

void leading_ones_32_s::thread_idx_V_22_fu_442_p3() {
    idx_V_22_fu_442_p3 = esl_concat<1,2>(ap_const_lv1_1, idxu_V_9_fu_434_p3.read());
}

void leading_ones_32_s::thread_idx_V_24_fu_458_p1() {
    idx_V_24_fu_458_p1 = esl_zext<4,3>(idx_V_35_fu_450_p3.read());
}

void leading_ones_32_s::thread_idx_V_25_fu_225_p1() {
    idx_V_25_fu_225_p1 = esl_zext<2,1>(upper_V_31_fu_217_p3.read());
}

void leading_ones_32_s::thread_idx_V_26_fu_237_p3() {
    idx_V_26_fu_237_p3 = esl_concat<1,1>(ap_const_lv1_1, upper_V_32_fu_229_p3.read());
}

void leading_ones_32_s::thread_idx_V_27_fu_253_p1() {
    idx_V_27_fu_253_p1 = esl_zext<2,1>(upper_V_33_fu_245_p3.read());
}

void leading_ones_32_s::thread_idx_V_28_fu_265_p3() {
    idx_V_28_fu_265_p3 = esl_concat<1,1>(ap_const_lv1_1, upper_V_34_fu_257_p3.read());
}

void leading_ones_32_s::thread_idx_V_29_fu_281_p1() {
    idx_V_29_fu_281_p1 = esl_zext<3,2>(idxl_V_13_fu_273_p3.read());
}

void leading_ones_32_s::thread_idx_V_2_fu_705_p3() {
    idx_V_2_fu_705_p3 = esl_concat<1,1>(ap_const_lv1_1, upper_V_44_fu_697_p3.read());
}

void leading_ones_32_s::thread_idx_V_30_fu_293_p3() {
    idx_V_30_fu_293_p3 = esl_concat<1,2>(ap_const_lv1_1, idxu_V_12_fu_285_p3.read());
}

void leading_ones_32_s::thread_idx_V_32_fu_309_p3() {
    idx_V_32_fu_309_p3 = esl_concat<1,3>(ap_const_lv1_1, idx_V_34_fu_301_p3.read());
}

void leading_ones_32_s::thread_idx_V_33_fu_463_p3() {
    idx_V_33_fu_463_p3 = esl_concat<1,4>(ap_const_lv1_1, ap_phi_mux_idxu_V_14_phi_fu_107_p4.read());
}

void leading_ones_32_s::thread_idx_V_34_fu_301_p3() {
    idx_V_34_fu_301_p3 = (!icmp_ln22_12_fu_179_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln22_12_fu_179_p2.read()[0].to_bool())? idx_V_29_fu_281_p1.read(): idx_V_30_fu_293_p3.read());
}

void leading_ones_32_s::thread_idx_V_35_fu_450_p3() {
    idx_V_35_fu_450_p3 = (!icmp_ln22_9_fu_328_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln22_9_fu_328_p2.read()[0].to_bool())? idx_V_21_fu_430_p1.read(): idx_V_22_fu_442_p3.read());
}

void leading_ones_32_s::thread_idx_V_36_fu_620_p3() {
    idx_V_36_fu_620_p3 = (!icmp_ln22_6_fu_498_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln22_6_fu_498_p2.read()[0].to_bool())? idx_V_13_fu_600_p1.read(): idx_V_14_fu_612_p3.read());
}

void leading_ones_32_s::thread_idx_V_37_fu_769_p3() {
    idx_V_37_fu_769_p3 = (!icmp_ln22_3_fu_647_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln22_3_fu_647_p2.read()[0].to_bool())? idx_V_5_fu_749_p1.read(): idx_V_6_fu_761_p3.read());
}

void leading_ones_32_s::thread_idx_V_3_fu_721_p1() {
    idx_V_3_fu_721_p1 = esl_zext<2,1>(upper_V_45_fu_713_p3.read());
}

void leading_ones_32_s::thread_idx_V_4_fu_733_p3() {
    idx_V_4_fu_733_p3 = esl_concat<1,1>(ap_const_lv1_1, upper_V_46_fu_725_p3.read());
}

void leading_ones_32_s::thread_idx_V_5_fu_749_p1() {
    idx_V_5_fu_749_p1 = esl_zext<3,2>(idxl_V_2_fu_741_p3.read());
}

void leading_ones_32_s::thread_idx_V_6_fu_761_p3() {
    idx_V_6_fu_761_p3 = esl_concat<1,2>(ap_const_lv1_1, idxu_V_2_fu_753_p3.read());
}

void leading_ones_32_s::thread_idx_V_8_fu_777_p1() {
    idx_V_8_fu_777_p1 = esl_zext<4,3>(idx_V_37_fu_769_p3.read());
}

void leading_ones_32_s::thread_idx_V_9_fu_544_p1() {
    idx_V_9_fu_544_p1 = esl_zext<2,1>(upper_V_39_fu_536_p3.read());
}

void leading_ones_32_s::thread_idx_V_fu_782_p1() {
    idx_V_fu_782_p1 = esl_zext<5,4>(ap_phi_mux_idxl_V_14_phi_fu_116_p4.read());
}

void leading_ones_32_s::thread_idxl_V_13_fu_273_p3() {
    idxl_V_13_fu_273_p3 = (!icmp_ln22_13_fu_195_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln22_13_fu_195_p2.read()[0].to_bool())? idx_V_25_fu_225_p1.read(): idx_V_26_fu_237_p3.read());
}

void leading_ones_32_s::thread_idxl_V_2_fu_741_p3() {
    idxl_V_2_fu_741_p3 = (!icmp_ln22_4_fu_663_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln22_4_fu_663_p2.read()[0].to_bool())? idx_V_1_fu_693_p1.read(): idx_V_2_fu_705_p3.read());
}

void leading_ones_32_s::thread_idxl_V_6_fu_592_p3() {
    idxl_V_6_fu_592_p3 = (!icmp_ln22_7_fu_514_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln22_7_fu_514_p2.read()[0].to_bool())? idx_V_9_fu_544_p1.read(): idx_V_10_fu_556_p3.read());
}

void leading_ones_32_s::thread_idxl_V_9_fu_422_p3() {
    idxl_V_9_fu_422_p3 = (!icmp_ln22_10_fu_344_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln22_10_fu_344_p2.read()[0].to_bool())? idx_V_17_fu_374_p1.read(): idx_V_18_fu_386_p3.read());
}

void leading_ones_32_s::thread_idxu_V_12_fu_285_p3() {
    idxu_V_12_fu_285_p3 = (!icmp_ln22_14_fu_211_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln22_14_fu_211_p2.read()[0].to_bool())? idx_V_27_fu_253_p1.read(): idx_V_28_fu_265_p3.read());
}

void leading_ones_32_s::thread_idxu_V_2_fu_753_p3() {
    idxu_V_2_fu_753_p3 = (!icmp_ln22_5_fu_679_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln22_5_fu_679_p2.read()[0].to_bool())? idx_V_3_fu_721_p1.read(): idx_V_4_fu_733_p3.read());
}

void leading_ones_32_s::thread_idxu_V_5_fu_604_p3() {
    idxu_V_5_fu_604_p3 = (!icmp_ln22_8_fu_530_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln22_8_fu_530_p2.read()[0].to_bool())? idx_V_11_fu_572_p1.read(): idx_V_12_fu_584_p3.read());
}

void leading_ones_32_s::thread_idxu_V_9_fu_434_p3() {
    idxu_V_9_fu_434_p3 = (!icmp_ln22_11_fu_360_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln22_11_fu_360_p2.read()[0].to_bool())? idx_V_19_fu_402_p1.read(): idx_V_20_fu_414_p3.read());
}

void leading_ones_32_s::thread_upper_V_10_fu_488_p4() {
    upper_V_10_fu_488_p4 = din_V_read.read().range(15, 12);
}

void leading_ones_32_s::thread_upper_V_11_fu_504_p4() {
    upper_V_11_fu_504_p4 = din_V_read.read().range(11, 10);
}

void leading_ones_32_s::thread_upper_V_12_fu_520_p4() {
    upper_V_12_fu_520_p4 = din_V_read.read().range(15, 14);
}

void leading_ones_32_s::thread_upper_V_17_fu_318_p4() {
    upper_V_17_fu_318_p4 = din_V_read.read().range(23, 20);
}

void leading_ones_32_s::thread_upper_V_18_fu_334_p4() {
    upper_V_18_fu_334_p4 = din_V_read.read().range(19, 18);
}

void leading_ones_32_s::thread_upper_V_19_fu_350_p4() {
    upper_V_19_fu_350_p4 = din_V_read.read().range(23, 22);
}

void leading_ones_32_s::thread_upper_V_1_fu_472_p4() {
    upper_V_1_fu_472_p4 = din_V_read.read().range(15, 8);
}

void leading_ones_32_s::thread_upper_V_24_fu_169_p4() {
    upper_V_24_fu_169_p4 = din_V_read.read().range(31, 28);
}

void leading_ones_32_s::thread_upper_V_25_fu_185_p4() {
    upper_V_25_fu_185_p4 = din_V_read.read().range(27, 26);
}

void leading_ones_32_s::thread_upper_V_26_fu_201_p4() {
    upper_V_26_fu_201_p4 = din_V_read.read().range(31, 30);
}

void leading_ones_32_s::thread_upper_V_2_fu_153_p4() {
    upper_V_2_fu_153_p4 = din_V_read.read().range(31, 24);
}

void leading_ones_32_s::thread_upper_V_31_fu_217_p3() {
    upper_V_31_fu_217_p3 = din_V_read.read().range(25, 25);
}

void leading_ones_32_s::thread_upper_V_32_fu_229_p3() {
    upper_V_32_fu_229_p3 = din_V_read.read().range(27, 27);
}

void leading_ones_32_s::thread_upper_V_33_fu_245_p3() {
    upper_V_33_fu_245_p3 = din_V_read.read().range(29, 29);
}

void leading_ones_32_s::thread_upper_V_34_fu_257_p3() {
    upper_V_34_fu_257_p3 = din_V_read.read().range(31, 31);
}

void leading_ones_32_s::thread_upper_V_35_fu_366_p3() {
    upper_V_35_fu_366_p3 = din_V_read.read().range(17, 17);
}

void leading_ones_32_s::thread_upper_V_36_fu_378_p3() {
    upper_V_36_fu_378_p3 = din_V_read.read().range(19, 19);
}

void leading_ones_32_s::thread_upper_V_37_fu_394_p3() {
    upper_V_37_fu_394_p3 = din_V_read.read().range(21, 21);
}

void leading_ones_32_s::thread_upper_V_38_fu_406_p3() {
    upper_V_38_fu_406_p3 = din_V_read.read().range(23, 23);
}

void leading_ones_32_s::thread_upper_V_39_fu_536_p3() {
    upper_V_39_fu_536_p3 = din_V_read.read().range(9, 9);
}

void leading_ones_32_s::thread_upper_V_3_fu_637_p4() {
    upper_V_3_fu_637_p4 = din_V_read.read().range(7, 4);
}

void leading_ones_32_s::thread_upper_V_40_fu_548_p3() {
    upper_V_40_fu_548_p3 = din_V_read.read().range(11, 11);
}

void leading_ones_32_s::thread_upper_V_41_fu_564_p3() {
    upper_V_41_fu_564_p3 = din_V_read.read().range(13, 13);
}

void leading_ones_32_s::thread_upper_V_42_fu_576_p3() {
    upper_V_42_fu_576_p3 = din_V_read.read().range(15, 15);
}

void leading_ones_32_s::thread_upper_V_43_fu_685_p3() {
    upper_V_43_fu_685_p3 = din_V_read.read().range(1, 1);
}

void leading_ones_32_s::thread_upper_V_44_fu_697_p3() {
    upper_V_44_fu_697_p3 = din_V_read.read().range(3, 3);
}

void leading_ones_32_s::thread_upper_V_45_fu_713_p3() {
    upper_V_45_fu_713_p3 = din_V_read.read().range(5, 5);
}

void leading_ones_32_s::thread_upper_V_46_fu_725_p3() {
    upper_V_46_fu_725_p3 = din_V_read.read().range(7, 7);
}

void leading_ones_32_s::thread_upper_V_4_fu_653_p4() {
    upper_V_4_fu_653_p4 = din_V_read.read().range(3, 2);
}

void leading_ones_32_s::thread_upper_V_5_fu_669_p4() {
    upper_V_5_fu_669_p4 = din_V_read.read().range(7, 6);
}

void leading_ones_32_s::thread_upper_V_fu_131_p4() {
    upper_V_fu_131_p4 = din_V_read.read().range(31, 16);
}

}

