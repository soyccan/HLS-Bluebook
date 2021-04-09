# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 24 \
    name din_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_din_0_V_read \
    op interface \
    ports { din_0_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 25 \
    name din_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_din_1_V_read \
    op interface \
    ports { din_1_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 26 \
    name din_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_din_2_V_read \
    op interface \
    ports { din_2_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 27 \
    name din_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_din_3_V_read \
    op interface \
    ports { din_3_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 28 \
    name din_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_din_4_V_read \
    op interface \
    ports { din_4_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 29 \
    name din_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_din_5_V_read \
    op interface \
    ports { din_5_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 30 \
    name din_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_din_6_V_read \
    op interface \
    ports { din_6_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 31 \
    name din_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_din_7_V_read \
    op interface \
    ports { din_7_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 32 \
    name sel0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_sel0_V \
    op interface \
    ports { sel0_V { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 33 \
    name sel1_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_sel1_V \
    op interface \
    ports { sel1_V { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 34 \
    name s \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_s \
    op interface \
    ports { s { I 1 bit } } \
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
    ports { ap_ready { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 8 vector } } \
} "
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


