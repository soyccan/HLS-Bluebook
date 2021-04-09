
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set max_out_group [add_wave_group max_out(wire) -into $coutputgroup]
add_wave /apatb_top_top/AESL_inst_top/max_out_ap_vld -into $max_out_group -color #ffff00 -radix hex
add_wave /apatb_top_top/AESL_inst_top/max_out -into $max_out_group -radix hex
set mux_ret_group [add_wave_group mux_ret(wire) -into $coutputgroup]
add_wave /apatb_top_top/AESL_inst_top/mux_ret_V_ap_vld -into $mux_ret_group -color #ffff00 -radix hex
add_wave /apatb_top_top/AESL_inst_top/mux_ret_V -into $mux_ret_group -radix hex
set leadone_ret_group [add_wave_group leadone_ret(wire) -into $coutputgroup]
add_wave /apatb_top_top/AESL_inst_top/leadone_ret_ap_vld -into $leadone_ret_group -color #ffff00 -radix hex
add_wave /apatb_top_top/AESL_inst_top/leadone_ret -into $leadone_ret_group -radix hex
set leadone_out_group [add_wave_group leadone_out(wire) -into $coutputgroup]
add_wave /apatb_top_top/AESL_inst_top/leadone_out_V_ap_vld -into $leadone_out_group -color #ffff00 -radix hex
add_wave /apatb_top_top/AESL_inst_top/leadone_out_V -into $leadone_out_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set mode_group [add_wave_group mode(wire) -into $cinputgroup]
add_wave /apatb_top_top/AESL_inst_top/mode -into $mode_group -radix hex
set max_in_group [add_wave_group max_in(wire) -into $cinputgroup]
add_wave /apatb_top_top/AESL_inst_top/max_in_7 -into $max_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/max_in_6 -into $max_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/max_in_5 -into $max_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/max_in_4 -into $max_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/max_in_3 -into $max_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/max_in_2 -into $max_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/max_in_1 -into $max_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/max_in_0 -into $max_in_group -radix hex
set mux_s_group [add_wave_group mux_s(wire) -into $cinputgroup]
add_wave /apatb_top_top/AESL_inst_top/mux_s -into $mux_s_group -radix hex
set mux_sel1_group [add_wave_group mux_sel1(wire) -into $cinputgroup]
add_wave /apatb_top_top/AESL_inst_top/mux_sel1_V -into $mux_sel1_group -radix hex
set mux_sel0_group [add_wave_group mux_sel0(wire) -into $cinputgroup]
add_wave /apatb_top_top/AESL_inst_top/mux_sel0_V -into $mux_sel0_group -radix hex
set mux_sel_onehot_group [add_wave_group mux_sel_onehot(wire) -into $cinputgroup]
add_wave /apatb_top_top/AESL_inst_top/mux_sel_onehot_V -into $mux_sel_onehot_group -radix hex
set mux_in_group [add_wave_group mux_in(wire) -into $cinputgroup]
add_wave /apatb_top_top/AESL_inst_top/mux_in_7_V -into $mux_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/mux_in_6_V -into $mux_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/mux_in_5_V -into $mux_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/mux_in_4_V -into $mux_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/mux_in_3_V -into $mux_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/mux_in_2_V -into $mux_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/mux_in_1_V -into $mux_in_group -radix hex
add_wave /apatb_top_top/AESL_inst_top/mux_in_0_V -into $mux_in_group -radix hex
set leadone_in_group [add_wave_group leadone_in(wire) -into $cinputgroup]
add_wave /apatb_top_top/AESL_inst_top/leadone_in_V -into $leadone_in_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_top_top/AESL_inst_top/ap_start -into $blocksiggroup
add_wave /apatb_top_top/AESL_inst_top/ap_done -into $blocksiggroup
add_wave /apatb_top_top/AESL_inst_top/ap_idle -into $blocksiggroup
add_wave /apatb_top_top/AESL_inst_top/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_top_top/AESL_inst_top/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_top_top/AESL_inst_top/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_top_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_top_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_top_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_top_top/LENGTH_leadone_in_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_leadone_out_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_leadone_ret -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_in_0_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_in_1_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_in_2_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_in_3_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_in_4_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_in_5_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_in_6_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_in_7_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_sel_onehot_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_sel0_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_sel1_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_s -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mux_ret_V -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_max_in_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_max_in_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_max_in_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_max_in_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_max_in_4 -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_max_in_5 -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_max_in_6 -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_max_in_7 -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_max_out -into $tb_portdepth_group -radix hex
add_wave /apatb_top_top/LENGTH_mode -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_max_out_group [add_wave_group max_out(wire) -into $tbcoutputgroup]
add_wave /apatb_top_top/max_out_ap_vld -into $tb_max_out_group -color #ffff00 -radix hex
add_wave /apatb_top_top/max_out -into $tb_max_out_group -radix hex
set tb_mux_ret_group [add_wave_group mux_ret(wire) -into $tbcoutputgroup]
add_wave /apatb_top_top/mux_ret_V_ap_vld -into $tb_mux_ret_group -color #ffff00 -radix hex
add_wave /apatb_top_top/mux_ret_V -into $tb_mux_ret_group -radix hex
set tb_leadone_ret_group [add_wave_group leadone_ret(wire) -into $tbcoutputgroup]
add_wave /apatb_top_top/leadone_ret_ap_vld -into $tb_leadone_ret_group -color #ffff00 -radix hex
add_wave /apatb_top_top/leadone_ret -into $tb_leadone_ret_group -radix hex
set tb_leadone_out_group [add_wave_group leadone_out(wire) -into $tbcoutputgroup]
add_wave /apatb_top_top/leadone_out_V_ap_vld -into $tb_leadone_out_group -color #ffff00 -radix hex
add_wave /apatb_top_top/leadone_out_V -into $tb_leadone_out_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_mode_group [add_wave_group mode(wire) -into $tbcinputgroup]
add_wave /apatb_top_top/mode -into $tb_mode_group -radix hex
set tb_max_in_group [add_wave_group max_in(wire) -into $tbcinputgroup]
add_wave /apatb_top_top/max_in_7 -into $tb_max_in_group -radix hex
add_wave /apatb_top_top/max_in_6 -into $tb_max_in_group -radix hex
add_wave /apatb_top_top/max_in_5 -into $tb_max_in_group -radix hex
add_wave /apatb_top_top/max_in_4 -into $tb_max_in_group -radix hex
add_wave /apatb_top_top/max_in_3 -into $tb_max_in_group -radix hex
add_wave /apatb_top_top/max_in_2 -into $tb_max_in_group -radix hex
add_wave /apatb_top_top/max_in_1 -into $tb_max_in_group -radix hex
add_wave /apatb_top_top/max_in_0 -into $tb_max_in_group -radix hex
set tb_mux_s_group [add_wave_group mux_s(wire) -into $tbcinputgroup]
add_wave /apatb_top_top/mux_s -into $tb_mux_s_group -radix hex
set tb_mux_sel1_group [add_wave_group mux_sel1(wire) -into $tbcinputgroup]
add_wave /apatb_top_top/mux_sel1_V -into $tb_mux_sel1_group -radix hex
set tb_mux_sel0_group [add_wave_group mux_sel0(wire) -into $tbcinputgroup]
add_wave /apatb_top_top/mux_sel0_V -into $tb_mux_sel0_group -radix hex
set tb_mux_sel_onehot_group [add_wave_group mux_sel_onehot(wire) -into $tbcinputgroup]
add_wave /apatb_top_top/mux_sel_onehot_V -into $tb_mux_sel_onehot_group -radix hex
set tb_mux_in_group [add_wave_group mux_in(wire) -into $tbcinputgroup]
add_wave /apatb_top_top/mux_in_7_V -into $tb_mux_in_group -radix hex
add_wave /apatb_top_top/mux_in_6_V -into $tb_mux_in_group -radix hex
add_wave /apatb_top_top/mux_in_5_V -into $tb_mux_in_group -radix hex
add_wave /apatb_top_top/mux_in_4_V -into $tb_mux_in_group -radix hex
add_wave /apatb_top_top/mux_in_3_V -into $tb_mux_in_group -radix hex
add_wave /apatb_top_top/mux_in_2_V -into $tb_mux_in_group -radix hex
add_wave /apatb_top_top/mux_in_1_V -into $tb_mux_in_group -radix hex
add_wave /apatb_top_top/mux_in_0_V -into $tb_mux_in_group -radix hex
set tb_leadone_in_group [add_wave_group leadone_in(wire) -into $tbcinputgroup]
add_wave /apatb_top_top/leadone_in_V -into $tb_leadone_in_group -radix hex
save_wave_config top.wcfg
run all
quit

