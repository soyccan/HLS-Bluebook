############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project LabA-HLS
set_top top
add_files LabA-HLS/Abs.cpp
add_files LabA-HLS/Abs.h
add_files LabA-HLS/Top.cpp
add_files LabA-HLS/Top.h
add_files -tb LabA-HLS/AbsTester.cpp
open_solution "solution1"
set_part {xc7z020clg400-1}
create_clock -period 5 -name default
#source "./LabA-HLS/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
