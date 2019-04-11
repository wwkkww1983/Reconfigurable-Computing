############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project my_ip_hls
set_top my_ip_hls
add_files my_ip_hls/core.cpp
add_files my_ip_hls/ip2ps_fifo.cpp
add_files my_ip_hls/my_ip_hls.cpp
add_files my_ip_hls/my_ip_hls.hpp
add_files my_ip_hls/ps2ip_fifo.cpp
add_files -tb my_ip_hls/my_ip_hls_tb.cpp
open_solution "solution1"
set_part {xc7z045ffg900-2} -tool vivado
create_clock -period 10 -name default
#source "./my_ip_hls/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
