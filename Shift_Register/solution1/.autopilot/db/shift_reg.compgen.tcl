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
    id 37 \
    name din0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_din0 \
    op interface \
    ports { din0 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 38 \
    name din1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_din1 \
    op interface \
    ports { din1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 39 \
    name load_data_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load_data_0 \
    op interface \
    ports { load_data_0 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 40 \
    name load_data_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load_data_1 \
    op interface \
    ports { load_data_1 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 41 \
    name load_data_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load_data_2 \
    op interface \
    ports { load_data_2 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 42 \
    name load_data_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load_data_3 \
    op interface \
    ports { load_data_3 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 43 \
    name load_data_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load_data_4 \
    op interface \
    ports { load_data_4 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 44 \
    name load_data_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load_data_5 \
    op interface \
    ports { load_data_5 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 45 \
    name load_data_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load_data_6 \
    op interface \
    ports { load_data_6 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 46 \
    name load_data_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load_data_7 \
    op interface \
    ports { load_data_7 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 47 \
    name load_data_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load_data_8 \
    op interface \
    ports { load_data_8 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 48 \
    name load_data_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load_data_9 \
    op interface \
    ports { load_data_9 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 49 \
    name load_data_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load_data_10 \
    op interface \
    ports { load_data_10 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 50 \
    name load_data_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load_data_11 \
    op interface \
    ports { load_data_11 { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 51 \
    name dout0_0 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout0_0 \
    op interface \
    ports { dout0_0 { O 8 vector } dout0_0_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 52 \
    name dout0_1 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout0_1 \
    op interface \
    ports { dout0_1 { O 8 vector } dout0_1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 53 \
    name dout0_2 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout0_2 \
    op interface \
    ports { dout0_2 { O 8 vector } dout0_2_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 54 \
    name dout0_3 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout0_3 \
    op interface \
    ports { dout0_3 { O 8 vector } dout0_3_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 55 \
    name dout0_4 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout0_4 \
    op interface \
    ports { dout0_4 { O 8 vector } dout0_4_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 56 \
    name dout0_5 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout0_5 \
    op interface \
    ports { dout0_5 { O 8 vector } dout0_5_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 57 \
    name dout0_6 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout0_6 \
    op interface \
    ports { dout0_6 { O 8 vector } dout0_6_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 58 \
    name dout0_7 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout0_7 \
    op interface \
    ports { dout0_7 { O 8 vector } dout0_7_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 59 \
    name dout0_8 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout0_8 \
    op interface \
    ports { dout0_8 { O 8 vector } dout0_8_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 60 \
    name dout0_9 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout0_9 \
    op interface \
    ports { dout0_9 { O 8 vector } dout0_9_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 61 \
    name dout0_10 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout0_10 \
    op interface \
    ports { dout0_10 { O 8 vector } dout0_10_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 62 \
    name dout0_11 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout0_11 \
    op interface \
    ports { dout0_11 { O 8 vector } dout0_11_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 63 \
    name dout1_0 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout1_0 \
    op interface \
    ports { dout1_0 { O 32 vector } dout1_0_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 64 \
    name dout1_1 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout1_1 \
    op interface \
    ports { dout1_1 { O 32 vector } dout1_1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 65 \
    name dout1_2 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout1_2 \
    op interface \
    ports { dout1_2 { O 32 vector } dout1_2_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 66 \
    name dout1_3 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_dout1_3 \
    op interface \
    ports { dout1_3 { O 32 vector } dout1_3_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 67 \
    name srst \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_srst \
    op interface \
    ports { srst { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 68 \
    name load \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_load \
    op interface \
    ports { load { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 69 \
    name en \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_en \
    op interface \
    ports { en { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 70 \
    name select_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_select_V \
    op interface \
    ports { select_V { I 3 vector } } \
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


