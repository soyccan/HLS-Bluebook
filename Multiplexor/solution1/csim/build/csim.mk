# ==============================================================
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# ==============================================================
CSIM_DESIGN = 1

__SIM_FPO__ = 1

__SIM_MATHHLS__ = 1

__SIM_OPENCV__ = 1

__SIM_FFT__ = 1

__SIM_FIR__ = 1

__SIM_DDS__ = 1

ObjDir = obj

HLS_SOURCES = ../../../testbench.cpp ../../../leading_ones.cpp ../../../leading_ones_bruteforce.cpp ../../../leading_ones_log2.cpp ../../../leading_ones_template.cpp ../../../max.cpp ../../../max_algorithmic.cpp ../../../mux_2to1.cpp ../../../mux_binary.cpp ../../../mux_binary2onehot_opt.cpp ../../../mux_binary_opt.cpp ../../../mux_onehot.cpp ../../../mux_onehot_if.cpp ../../../top.cpp

TARGET := csim.exe

AUTOPILOT_ROOT := C:/Xilinx/Vivado/2019.2
AUTOPILOT_MACH := win64
ifdef AP_GCC_M32
  AUTOPILOT_MACH := Linux_x86
  IFLAG += -m32
endif
ifndef AP_GCC_PATH
  AP_GCC_PATH := C:/Xilinx/Vivado/2019.2/tps/win64/msys64/mingw64/bin
endif
AUTOPILOT_TOOL := ${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools
AP_CLANG_PATH := ${AUTOPILOT_ROOT}/tps/win64/msys64/mingw64/bin
AUTOPILOT_TECH := ${AUTOPILOT_ROOT}/common/technology


IFLAG += -I "${AUTOPILOT_TOOL}/systemc/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include/opencv"
IFLAG += -I "${AUTOPILOT_ROOT}/include/ap_sysc"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC/AESL_FP_comp"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC/AESL_comp"
IFLAG += -I "${AUTOPILOT_TOOL}/auto_cc/include"
IFLAG += -D__SIM_FPO__

IFLAG += -D__SIM_OPENCV__

IFLAG += -D__SIM_FFT__

IFLAG += -D__SIM_FIR__

IFLAG += -D__SIM_DDS__

IFLAG += -D__DSP48E1__
IFLAG += -g
IFLAG += -DNT
LFLAG += -Wl,--enable-auto-import 
DFLAG += -D__xilinx_ip_top= -DAESL_TB
CCFLAG += 
TOOLCHAIN += 



include ./Makefile.rules

all: $(TARGET)



$(ObjDir)/testbench.o: ../../../testbench.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../testbench.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/testbench.d

$(ObjDir)/leading_ones.o: ../../../leading_ones.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../leading_ones.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/leading_ones.d

$(ObjDir)/leading_ones_bruteforce.o: ../../../leading_ones_bruteforce.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../leading_ones_bruteforce.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/leading_ones_bruteforce.d

$(ObjDir)/leading_ones_log2.o: ../../../leading_ones_log2.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../leading_ones_log2.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/leading_ones_log2.d

$(ObjDir)/leading_ones_template.o: ../../../leading_ones_template.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../leading_ones_template.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/leading_ones_template.d

$(ObjDir)/max.o: ../../../max.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../max.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/max.d

$(ObjDir)/max_algorithmic.o: ../../../max_algorithmic.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../max_algorithmic.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/max_algorithmic.d

$(ObjDir)/mux_2to1.o: ../../../mux_2to1.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../mux_2to1.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/mux_2to1.d

$(ObjDir)/mux_binary.o: ../../../mux_binary.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../mux_binary.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/mux_binary.d

$(ObjDir)/mux_binary2onehot_opt.o: ../../../mux_binary2onehot_opt.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../mux_binary2onehot_opt.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/mux_binary2onehot_opt.d

$(ObjDir)/mux_binary_opt.o: ../../../mux_binary_opt.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../mux_binary_opt.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/mux_binary_opt.d

$(ObjDir)/mux_onehot.o: ../../../mux_onehot.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../mux_onehot.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/mux_onehot.d

$(ObjDir)/mux_onehot_if.o: ../../../mux_onehot_if.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../mux_onehot_if.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/mux_onehot_if.d

$(ObjDir)/top.o: ../../../top.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../top.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/top.d
