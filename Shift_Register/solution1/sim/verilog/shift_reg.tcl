
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set dout1_group [add_wave_group dout1(wire) -into $coutputgroup]
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout1_3_ap_vld -into $dout1_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout1_3 -into $dout1_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout1_2_ap_vld -into $dout1_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout1_2 -into $dout1_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout1_1_ap_vld -into $dout1_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout1_1 -into $dout1_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout1_0_ap_vld -into $dout1_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout1_0 -into $dout1_group -radix hex
set dout0_group [add_wave_group dout0(wire) -into $coutputgroup]
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_11_ap_vld -into $dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_11 -into $dout0_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_10_ap_vld -into $dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_10 -into $dout0_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_9_ap_vld -into $dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_9 -into $dout0_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_8_ap_vld -into $dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_8 -into $dout0_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_7_ap_vld -into $dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_7 -into $dout0_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_6_ap_vld -into $dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_6 -into $dout0_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_5_ap_vld -into $dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_5 -into $dout0_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_4_ap_vld -into $dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_4 -into $dout0_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_3_ap_vld -into $dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_3 -into $dout0_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_2_ap_vld -into $dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_2 -into $dout0_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_1_ap_vld -into $dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_1 -into $dout0_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_0_ap_vld -into $dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/dout0_0 -into $dout0_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set select_group [add_wave_group select(wire) -into $cinputgroup]
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/select_V -into $select_group -radix hex
set en_group [add_wave_group en(wire) -into $cinputgroup]
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/en -into $en_group -radix hex
set load_group [add_wave_group load(wire) -into $cinputgroup]
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load -into $load_group -radix hex
set srst_group [add_wave_group srst(wire) -into $cinputgroup]
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/srst -into $srst_group -radix hex
set load_data_group [add_wave_group load_data(wire) -into $cinputgroup]
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load_data_11 -into $load_data_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load_data_10 -into $load_data_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load_data_9 -into $load_data_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load_data_8 -into $load_data_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load_data_7 -into $load_data_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load_data_6 -into $load_data_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load_data_5 -into $load_data_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load_data_4 -into $load_data_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load_data_3 -into $load_data_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load_data_2 -into $load_data_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load_data_1 -into $load_data_group -radix hex
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/load_data_0 -into $load_data_group -radix hex
set din1_group [add_wave_group din1(wire) -into $cinputgroup]
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/din1 -into $din1_group -radix hex
set din0_group [add_wave_group din0(wire) -into $cinputgroup]
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/din0 -into $din0_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/ap_start -into $blocksiggroup
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/ap_done -into $blocksiggroup
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/ap_idle -into $blocksiggroup
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_shift_reg_top/AESL_inst_shift_reg/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_shift_reg_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_shift_reg_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_shift_reg_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_din0 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_din1 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load_data_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load_data_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load_data_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load_data_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load_data_4 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load_data_5 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load_data_6 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load_data_7 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load_data_8 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load_data_9 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load_data_10 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load_data_11 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout0_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout0_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout0_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout0_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout0_4 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout0_5 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout0_6 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout0_7 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout0_8 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout0_9 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout0_10 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout0_11 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout1_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout1_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout1_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_dout1_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_srst -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_load -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_en -into $tb_portdepth_group -radix hex
add_wave /apatb_shift_reg_top/LENGTH_select_V -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_dout1_group [add_wave_group dout1(wire) -into $tbcoutputgroup]
add_wave /apatb_shift_reg_top/dout1_3_ap_vld -into $tb_dout1_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout1_3 -into $tb_dout1_group -radix hex
add_wave /apatb_shift_reg_top/dout1_2_ap_vld -into $tb_dout1_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout1_2 -into $tb_dout1_group -radix hex
add_wave /apatb_shift_reg_top/dout1_1_ap_vld -into $tb_dout1_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout1_1 -into $tb_dout1_group -radix hex
add_wave /apatb_shift_reg_top/dout1_0_ap_vld -into $tb_dout1_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout1_0 -into $tb_dout1_group -radix hex
set tb_dout0_group [add_wave_group dout0(wire) -into $tbcoutputgroup]
add_wave /apatb_shift_reg_top/dout0_11_ap_vld -into $tb_dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout0_11 -into $tb_dout0_group -radix hex
add_wave /apatb_shift_reg_top/dout0_10_ap_vld -into $tb_dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout0_10 -into $tb_dout0_group -radix hex
add_wave /apatb_shift_reg_top/dout0_9_ap_vld -into $tb_dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout0_9 -into $tb_dout0_group -radix hex
add_wave /apatb_shift_reg_top/dout0_8_ap_vld -into $tb_dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout0_8 -into $tb_dout0_group -radix hex
add_wave /apatb_shift_reg_top/dout0_7_ap_vld -into $tb_dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout0_7 -into $tb_dout0_group -radix hex
add_wave /apatb_shift_reg_top/dout0_6_ap_vld -into $tb_dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout0_6 -into $tb_dout0_group -radix hex
add_wave /apatb_shift_reg_top/dout0_5_ap_vld -into $tb_dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout0_5 -into $tb_dout0_group -radix hex
add_wave /apatb_shift_reg_top/dout0_4_ap_vld -into $tb_dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout0_4 -into $tb_dout0_group -radix hex
add_wave /apatb_shift_reg_top/dout0_3_ap_vld -into $tb_dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout0_3 -into $tb_dout0_group -radix hex
add_wave /apatb_shift_reg_top/dout0_2_ap_vld -into $tb_dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout0_2 -into $tb_dout0_group -radix hex
add_wave /apatb_shift_reg_top/dout0_1_ap_vld -into $tb_dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout0_1 -into $tb_dout0_group -radix hex
add_wave /apatb_shift_reg_top/dout0_0_ap_vld -into $tb_dout0_group -color #ffff00 -radix hex
add_wave /apatb_shift_reg_top/dout0_0 -into $tb_dout0_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_select_group [add_wave_group select(wire) -into $tbcinputgroup]
add_wave /apatb_shift_reg_top/select_V -into $tb_select_group -radix hex
set tb_en_group [add_wave_group en(wire) -into $tbcinputgroup]
add_wave /apatb_shift_reg_top/en -into $tb_en_group -radix hex
set tb_load_group [add_wave_group load(wire) -into $tbcinputgroup]
add_wave /apatb_shift_reg_top/load -into $tb_load_group -radix hex
set tb_srst_group [add_wave_group srst(wire) -into $tbcinputgroup]
add_wave /apatb_shift_reg_top/srst -into $tb_srst_group -radix hex
set tb_load_data_group [add_wave_group load_data(wire) -into $tbcinputgroup]
add_wave /apatb_shift_reg_top/load_data_11 -into $tb_load_data_group -radix hex
add_wave /apatb_shift_reg_top/load_data_10 -into $tb_load_data_group -radix hex
add_wave /apatb_shift_reg_top/load_data_9 -into $tb_load_data_group -radix hex
add_wave /apatb_shift_reg_top/load_data_8 -into $tb_load_data_group -radix hex
add_wave /apatb_shift_reg_top/load_data_7 -into $tb_load_data_group -radix hex
add_wave /apatb_shift_reg_top/load_data_6 -into $tb_load_data_group -radix hex
add_wave /apatb_shift_reg_top/load_data_5 -into $tb_load_data_group -radix hex
add_wave /apatb_shift_reg_top/load_data_4 -into $tb_load_data_group -radix hex
add_wave /apatb_shift_reg_top/load_data_3 -into $tb_load_data_group -radix hex
add_wave /apatb_shift_reg_top/load_data_2 -into $tb_load_data_group -radix hex
add_wave /apatb_shift_reg_top/load_data_1 -into $tb_load_data_group -radix hex
add_wave /apatb_shift_reg_top/load_data_0 -into $tb_load_data_group -radix hex
set tb_din1_group [add_wave_group din1(wire) -into $tbcinputgroup]
add_wave /apatb_shift_reg_top/din1 -into $tb_din1_group -radix hex
set tb_din0_group [add_wave_group din0(wire) -into $tbcinputgroup]
add_wave /apatb_shift_reg_top/din0 -into $tb_din0_group -radix hex
save_wave_config shift_reg.wcfg
run all
quit

