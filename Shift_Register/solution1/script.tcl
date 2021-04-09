############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Shift_Register
set_top shift_reg
add_files Shift_Register/shift_reg_tmpl.h
add_files Shift_Register/shift_reg_template.cpp
add_files Shift_Register/shift_reg_sreset.cpp
add_files Shift_Register/shift_reg_load.cpp
add_files Shift_Register/shift_reg_ip.cpp
add_files Shift_Register/shift_reg_en.cpp
add_files Shift_Register/shift_reg_class.cpp
add_files Shift_Register/shift_reg_basic.cpp
add_files Shift_Register/shift_reg.h
add_files Shift_Register/shift_reg.cpp
add_files Shift_Register/shift_class.h
add_files -tb Shift_Register/shift_reg_tb.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg400-1}
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog -vivado_optimization_level 2 -vivado_phys_opt place -vivado_report_level 0
config_sdx -optimization_level none -target none
#source "./Shift_Register/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -rtl verilog -format ip_catalog
