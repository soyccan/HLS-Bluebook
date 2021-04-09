# ==============================================================
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# ==============================================================
__SIM_FPO__ = 1
__SIM_MATHHLS__ = 1
__SIM_OPENCV__ = 1
__SIM_FFT__ = 1
__SIM_FIR__ = 1
__SIM_DDS__ = 1

TARGET := cosim.tv.exe

AUTOPILOT_ROOT := C:/Xilinx/Vivado/2019.2
AUTOPILOT_MACH := win64

ifdef COSIM_M32
  AUTOPILOT_MACH := lnx32
  IFLAG += -m32
endif
ifdef AP_GCC_M32
  AUTOPILOT_MACH := Linux_x86
  IFLAG += -m32
endif
ifndef AP_GCC_PATH
  AP_GCC_PATH := C:/Xilinx/Vivado/2019.2/tps/win64/msys64/mingw64/bin
endif
AUTOPILOT_TOOL = ${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools
AUTOPILOT_TECH = ${AUTOPILOT_ROOT}/common/technology
CCFLAG += 
TOOLCHAIN += 

IFLAG += -g

IFLAG += -I "${AUTOPILOT_ROOT}/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include/ap_sysc"
IFLAG += -I "${AUTOPILOT_ROOT}/common/technology/generic/SystemC"
IFLAG += -I "${AUTOPILOT_ROOT}/common/technology/generic/SystemC/AESL_FP_comp"
IFLAG += -I "${AUTOPILOT_ROOT}/common/technology/generic/SystemC/AESL_comp"
IFLAG += -I "${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools/systemc/include"
IFLAG += -I "${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools/auto_cc/include"
IFLAG += -D__SIM_FPO__
IFLAG += -D__SIM_OPENCV__
IFLAG += -D__SIM_FFT__
IFLAG += -D__SIM_FIR__
IFLAG += -D__SIM_DDS__
IFLAG += -D__DSP48E1__
IFLAG += -DNT
IFLAG += -Wno-unknown-pragmas
LFLAG += -L "${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools/systemc/lib" -lsystemc -lpthread
IFLAG += -D__RTL_SIMULATION__
IFLAG += -D__xilinx_ip_top=
DFLAG += -DAESL_PIPELINE
LFLAG += -Wl,--enable-auto-import

include ./Makefile.rules

all : $(TARGET)

$(ObjDir)/testbench.cpp_pre.cpp.tb.o : testbench.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling testbench.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/leading_ones.cpp_pre.cpp.tb.o : leading_ones.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling leading_ones.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/leading_ones_bruteforce.cpp_pre.cpp.tb.o : leading_ones_bruteforce.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling leading_ones_bruteforce.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/leading_ones_log2.cpp_pre.cpp.tb.o : leading_ones_log2.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling leading_ones_log2.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/leading_ones_template.cpp_pre.cpp.tb.o : leading_ones_template.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling leading_ones_template.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/max.cpp_pre.cpp.tb.o : max.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling max.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/max_algorithmic.cpp_pre.cpp.tb.o : max_algorithmic.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling max_algorithmic.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/mux_2to1.cpp_pre.cpp.tb.o : mux_2to1.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling mux_2to1.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/mux_binary.cpp_pre.cpp.tb.o : mux_binary.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling mux_binary.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/mux_binary2onehot_opt.cpp_pre.cpp.tb.o : mux_binary2onehot_opt.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling mux_binary2onehot_opt.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/mux_binary_opt.cpp_pre.cpp.tb.o : mux_binary_opt.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling mux_binary_opt.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/mux_onehot.cpp_pre.cpp.tb.o : mux_onehot.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling mux_onehot.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/mux_onehot_if.cpp_pre.cpp.tb.o : mux_onehot_if.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling mux_onehot_if.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \

$(ObjDir)/top.cpp_pre.cpp.tb.o : top.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling top.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb) $(CC) ${CCFLAG} ${TOOLCHAIN}  -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG) $< -o $@; \
