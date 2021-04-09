# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

set axilite_register_dict [dict create]
# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 86 \
    name leadone_in_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_leadone_in_V \
    op interface \
    ports { leadone_in_V { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 87 \
    name leadone_out_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_leadone_out_V \
    op interface \
    ports { leadone_out_V { O 5 vector } leadone_out_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 88 \
    name leadone_ret \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_leadone_ret \
    op interface \
    ports { leadone_ret { O 1 bit } leadone_ret_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 89 \
    name mux_in_0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_in_0_V \
    op interface \
    ports { mux_in_0_V { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 90 \
    name mux_in_1_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_in_1_V \
    op interface \
    ports { mux_in_1_V { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 91 \
    name mux_in_2_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_in_2_V \
    op interface \
    ports { mux_in_2_V { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 92 \
    name mux_in_3_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_in_3_V \
    op interface \
    ports { mux_in_3_V { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 93 \
    name mux_in_4_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_in_4_V \
    op interface \
    ports { mux_in_4_V { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 94 \
    name mux_in_5_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_in_5_V \
    op interface \
    ports { mux_in_5_V { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 95 \
    name mux_in_6_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_in_6_V \
    op interface \
    ports { mux_in_6_V { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 96 \
    name mux_in_7_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_in_7_V \
    op interface \
    ports { mux_in_7_V { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 97 \
    name mux_sel_onehot_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_sel_onehot_V \
    op interface \
    ports { mux_sel_onehot_V { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 98 \
    name mux_sel0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_sel0_V \
    op interface \
    ports { mux_sel0_V { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 99 \
    name mux_sel1_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_sel1_V \
    op interface \
    ports { mux_sel1_V { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 100 \
    name mux_s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_s \
    op interface \
    ports { mux_s { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 101 \
    name mux_ret_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_mux_ret_V \
    op interface \
    ports { mux_ret_V { O 8 vector } mux_ret_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 102 \
    name max_in_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_max_in_0 \
    op interface \
    ports { max_in_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 103 \
    name max_in_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_max_in_1 \
    op interface \
    ports { max_in_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 104 \
    name max_in_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_max_in_2 \
    op interface \
    ports { max_in_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 105 \
    name max_in_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_max_in_3 \
    op interface \
    ports { max_in_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 106 \
    name max_in_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_max_in_4 \
    op interface \
    ports { max_in_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 107 \
    name max_in_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_max_in_5 \
    op interface \
    ports { max_in_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 108 \
    name max_in_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_max_in_6 \
    op interface \
    ports { max_in_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 109 \
    name max_in_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_max_in_7 \
    op interface \
    ports { max_in_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 110 \
    name max_out \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_max_out \
    op interface \
    ports { max_out { O 32 vector } max_out_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 111 \
    name mode \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mode \
    op interface \
    ports { mode { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


