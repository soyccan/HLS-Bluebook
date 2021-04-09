############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Multiplexor
set_top top
add_files Multiplexor/top.cpp
add_files Multiplexor/nextpow2.h
add_files Multiplexor/mux_onehot_if.cpp
add_files Multiplexor/mux_onehot.cpp
add_files Multiplexor/mux_binary_opt.cpp
add_files Multiplexor/mux_binary2onehot_opt.cpp
add_files Multiplexor/mux_binary.cpp
add_files Multiplexor/mux_2to1.cpp
add_files Multiplexor/mux.h
add_files Multiplexor/max_tmpl.h
add_files Multiplexor/max_algorithmic.cpp
add_files Multiplexor/max.h
add_files Multiplexor/max.cpp
add_files Multiplexor/log2ceil.h
add_files Multiplexor/leading_ones_tmpl.h
add_files Multiplexor/leading_ones_template.cpp
add_files Multiplexor/leading_ones_log2.cpp
add_files Multiplexor/leading_ones_bruteforce.cpp
add_files Multiplexor/leading_ones.h
add_files Multiplexor/leading_ones.cpp
add_files -tb Multiplexor/testbench.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg400-1}
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
#source "./Multiplexor/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -rtl verilog -format ip_catalog
