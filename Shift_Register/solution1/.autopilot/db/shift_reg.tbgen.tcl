set moduleName shift_reg
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {shift_reg}
set C_modelType { void 0 }
set C_modelArgList {
	{ din0 int 8 regular  }
	{ din1 int 32 regular  }
	{ load_data_0 int 8 regular {pointer 0}  }
	{ load_data_1 int 8 regular {pointer 0}  }
	{ load_data_2 int 8 regular {pointer 0}  }
	{ load_data_3 int 8 regular {pointer 0}  }
	{ load_data_4 int 8 regular {pointer 0}  }
	{ load_data_5 int 8 regular {pointer 0}  }
	{ load_data_6 int 8 regular {pointer 0}  }
	{ load_data_7 int 8 regular {pointer 0}  }
	{ load_data_8 int 8 regular {pointer 0}  }
	{ load_data_9 int 8 regular {pointer 0}  }
	{ load_data_10 int 8 regular {pointer 0}  }
	{ load_data_11 int 8 regular {pointer 0}  }
	{ dout0_0 int 8 regular {pointer 1}  }
	{ dout0_1 int 8 regular {pointer 1}  }
	{ dout0_2 int 8 regular {pointer 1}  }
	{ dout0_3 int 8 regular {pointer 1}  }
	{ dout0_4 int 8 regular {pointer 1}  }
	{ dout0_5 int 8 regular {pointer 1}  }
	{ dout0_6 int 8 regular {pointer 1}  }
	{ dout0_7 int 8 regular {pointer 1}  }
	{ dout0_8 int 8 regular {pointer 1}  }
	{ dout0_9 int 8 regular {pointer 1}  }
	{ dout0_10 int 8 regular {pointer 1}  }
	{ dout0_11 int 8 regular {pointer 1}  }
	{ dout1_0 int 32 regular {pointer 1}  }
	{ dout1_1 int 32 regular {pointer 1}  }
	{ dout1_2 int 32 regular {pointer 1}  }
	{ dout1_3 int 32 regular {pointer 1}  }
	{ srst uint 1 regular  }
	{ load uint 1 regular  }
	{ en uint 1 regular  }
	{ select_V int 3 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "din0", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "din0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "din1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "din1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "load_data_0", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "load_data","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "load_data_1", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "load_data","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "load_data_2", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "load_data","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "load_data_3", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "load_data","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "load_data_4", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "load_data","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "load_data_5", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "load_data","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "load_data_6", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "load_data","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "load_data_7", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "load_data","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "load_data_8", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "load_data","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "load_data_9", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "load_data","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "load_data_10", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "load_data","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 10,"up" : 10,"step" : 2}]}]}]} , 
 	{ "Name" : "load_data_11", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "load_data","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 11,"up" : 11,"step" : 2}]}]}]} , 
 	{ "Name" : "dout0_0", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "dout0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "dout0_1", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "dout0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "dout0_2", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "dout0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "dout0_3", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "dout0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "dout0_4", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "dout0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "dout0_5", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "dout0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "dout0_6", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "dout0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "dout0_7", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "dout0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "dout0_8", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "dout0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "dout0_9", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "dout0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "dout0_10", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "dout0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 10,"up" : 10,"step" : 2}]}]}]} , 
 	{ "Name" : "dout0_11", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "dout0","cData": "signed char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 11,"up" : 11,"step" : 2}]}]}]} , 
 	{ "Name" : "dout1_0", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dout1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "dout1_1", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dout1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "dout1_2", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dout1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "dout1_3", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dout1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "srst", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "srst","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "load", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "load","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "en", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "en","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "select_V", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY", "bitSlice":[{"low":0,"up":2,"cElement": [{"cName": "select.V","cData": "uint3","bit_use": { "low": 0,"up": 2},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 56
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ din0 sc_in sc_lv 8 signal 0 } 
	{ din1 sc_in sc_lv 32 signal 1 } 
	{ load_data_0 sc_in sc_lv 8 signal 2 } 
	{ load_data_1 sc_in sc_lv 8 signal 3 } 
	{ load_data_2 sc_in sc_lv 8 signal 4 } 
	{ load_data_3 sc_in sc_lv 8 signal 5 } 
	{ load_data_4 sc_in sc_lv 8 signal 6 } 
	{ load_data_5 sc_in sc_lv 8 signal 7 } 
	{ load_data_6 sc_in sc_lv 8 signal 8 } 
	{ load_data_7 sc_in sc_lv 8 signal 9 } 
	{ load_data_8 sc_in sc_lv 8 signal 10 } 
	{ load_data_9 sc_in sc_lv 8 signal 11 } 
	{ load_data_10 sc_in sc_lv 8 signal 12 } 
	{ load_data_11 sc_in sc_lv 8 signal 13 } 
	{ dout0_0 sc_out sc_lv 8 signal 14 } 
	{ dout0_0_ap_vld sc_out sc_logic 1 outvld 14 } 
	{ dout0_1 sc_out sc_lv 8 signal 15 } 
	{ dout0_1_ap_vld sc_out sc_logic 1 outvld 15 } 
	{ dout0_2 sc_out sc_lv 8 signal 16 } 
	{ dout0_2_ap_vld sc_out sc_logic 1 outvld 16 } 
	{ dout0_3 sc_out sc_lv 8 signal 17 } 
	{ dout0_3_ap_vld sc_out sc_logic 1 outvld 17 } 
	{ dout0_4 sc_out sc_lv 8 signal 18 } 
	{ dout0_4_ap_vld sc_out sc_logic 1 outvld 18 } 
	{ dout0_5 sc_out sc_lv 8 signal 19 } 
	{ dout0_5_ap_vld sc_out sc_logic 1 outvld 19 } 
	{ dout0_6 sc_out sc_lv 8 signal 20 } 
	{ dout0_6_ap_vld sc_out sc_logic 1 outvld 20 } 
	{ dout0_7 sc_out sc_lv 8 signal 21 } 
	{ dout0_7_ap_vld sc_out sc_logic 1 outvld 21 } 
	{ dout0_8 sc_out sc_lv 8 signal 22 } 
	{ dout0_8_ap_vld sc_out sc_logic 1 outvld 22 } 
	{ dout0_9 sc_out sc_lv 8 signal 23 } 
	{ dout0_9_ap_vld sc_out sc_logic 1 outvld 23 } 
	{ dout0_10 sc_out sc_lv 8 signal 24 } 
	{ dout0_10_ap_vld sc_out sc_logic 1 outvld 24 } 
	{ dout0_11 sc_out sc_lv 8 signal 25 } 
	{ dout0_11_ap_vld sc_out sc_logic 1 outvld 25 } 
	{ dout1_0 sc_out sc_lv 32 signal 26 } 
	{ dout1_0_ap_vld sc_out sc_logic 1 outvld 26 } 
	{ dout1_1 sc_out sc_lv 32 signal 27 } 
	{ dout1_1_ap_vld sc_out sc_logic 1 outvld 27 } 
	{ dout1_2 sc_out sc_lv 32 signal 28 } 
	{ dout1_2_ap_vld sc_out sc_logic 1 outvld 28 } 
	{ dout1_3 sc_out sc_lv 32 signal 29 } 
	{ dout1_3_ap_vld sc_out sc_logic 1 outvld 29 } 
	{ srst sc_in sc_logic 1 signal 30 } 
	{ load sc_in sc_logic 1 signal 31 } 
	{ en sc_in sc_logic 1 signal 32 } 
	{ select_V sc_in sc_lv 3 signal 33 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "din0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "din0", "role": "default" }} , 
 	{ "name": "din1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "din1", "role": "default" }} , 
 	{ "name": "load_data_0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "load_data_0", "role": "default" }} , 
 	{ "name": "load_data_1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "load_data_1", "role": "default" }} , 
 	{ "name": "load_data_2", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "load_data_2", "role": "default" }} , 
 	{ "name": "load_data_3", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "load_data_3", "role": "default" }} , 
 	{ "name": "load_data_4", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "load_data_4", "role": "default" }} , 
 	{ "name": "load_data_5", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "load_data_5", "role": "default" }} , 
 	{ "name": "load_data_6", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "load_data_6", "role": "default" }} , 
 	{ "name": "load_data_7", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "load_data_7", "role": "default" }} , 
 	{ "name": "load_data_8", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "load_data_8", "role": "default" }} , 
 	{ "name": "load_data_9", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "load_data_9", "role": "default" }} , 
 	{ "name": "load_data_10", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "load_data_10", "role": "default" }} , 
 	{ "name": "load_data_11", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "load_data_11", "role": "default" }} , 
 	{ "name": "dout0_0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dout0_0", "role": "default" }} , 
 	{ "name": "dout0_0_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout0_0", "role": "ap_vld" }} , 
 	{ "name": "dout0_1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dout0_1", "role": "default" }} , 
 	{ "name": "dout0_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout0_1", "role": "ap_vld" }} , 
 	{ "name": "dout0_2", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dout0_2", "role": "default" }} , 
 	{ "name": "dout0_2_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout0_2", "role": "ap_vld" }} , 
 	{ "name": "dout0_3", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dout0_3", "role": "default" }} , 
 	{ "name": "dout0_3_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout0_3", "role": "ap_vld" }} , 
 	{ "name": "dout0_4", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dout0_4", "role": "default" }} , 
 	{ "name": "dout0_4_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout0_4", "role": "ap_vld" }} , 
 	{ "name": "dout0_5", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dout0_5", "role": "default" }} , 
 	{ "name": "dout0_5_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout0_5", "role": "ap_vld" }} , 
 	{ "name": "dout0_6", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dout0_6", "role": "default" }} , 
 	{ "name": "dout0_6_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout0_6", "role": "ap_vld" }} , 
 	{ "name": "dout0_7", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dout0_7", "role": "default" }} , 
 	{ "name": "dout0_7_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout0_7", "role": "ap_vld" }} , 
 	{ "name": "dout0_8", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dout0_8", "role": "default" }} , 
 	{ "name": "dout0_8_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout0_8", "role": "ap_vld" }} , 
 	{ "name": "dout0_9", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dout0_9", "role": "default" }} , 
 	{ "name": "dout0_9_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout0_9", "role": "ap_vld" }} , 
 	{ "name": "dout0_10", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dout0_10", "role": "default" }} , 
 	{ "name": "dout0_10_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout0_10", "role": "ap_vld" }} , 
 	{ "name": "dout0_11", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dout0_11", "role": "default" }} , 
 	{ "name": "dout0_11_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout0_11", "role": "ap_vld" }} , 
 	{ "name": "dout1_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dout1_0", "role": "default" }} , 
 	{ "name": "dout1_0_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout1_0", "role": "ap_vld" }} , 
 	{ "name": "dout1_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dout1_1", "role": "default" }} , 
 	{ "name": "dout1_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout1_1", "role": "ap_vld" }} , 
 	{ "name": "dout1_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dout1_2", "role": "default" }} , 
 	{ "name": "dout1_2_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout1_2", "role": "ap_vld" }} , 
 	{ "name": "dout1_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dout1_3", "role": "default" }} , 
 	{ "name": "dout1_3_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dout1_3", "role": "ap_vld" }} , 
 	{ "name": "srst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "srst", "role": "default" }} , 
 	{ "name": "load", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "load", "role": "default" }} , 
 	{ "name": "en", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "en", "role": "default" }} , 
 	{ "name": "select_V", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "select_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "7", "8"],
		"CDFG" : "shift_reg",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "13",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shift_reg_class_fu_470"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shift_reg_en_fu_522"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shift_reg_ip_fu_626"}],
		"Port" : [
			{"Name" : "din0", "Type" : "None", "Direction" : "I"},
			{"Name" : "din1", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_8", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_9", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_10", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_11", "Type" : "None", "Direction" : "I"},
			{"Name" : "dout0_0", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout0_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout0_2", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout0_3", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout0_4", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout0_5", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout0_6", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout0_7", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout0_8", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout0_9", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout0_10", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout0_11", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout1_0", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout1_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout1_2", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "dout1_3", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "srst", "Type" : "None", "Direction" : "I"},
			{"Name" : "load", "Type" : "None", "Direction" : "I"},
			{"Name" : "en", "Type" : "None", "Direction" : "I"},
			{"Name" : "select_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "regs_5_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "call_ret2_shift_reg_basic_fu_636", "Port" : "regs_5_10"}]},
			{"Name" : "regs_5_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "call_ret2_shift_reg_basic_fu_636", "Port" : "regs_5_9"}]},
			{"Name" : "regs_5_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "call_ret2_shift_reg_basic_fu_636", "Port" : "regs_5_8"}]},
			{"Name" : "regs_5_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "call_ret2_shift_reg_basic_fu_636", "Port" : "regs_5_7"}]},
			{"Name" : "regs_5_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "call_ret2_shift_reg_basic_fu_636", "Port" : "regs_5_6"}]},
			{"Name" : "regs_5_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "call_ret2_shift_reg_basic_fu_636", "Port" : "regs_5_5"}]},
			{"Name" : "regs_5_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "call_ret2_shift_reg_basic_fu_636", "Port" : "regs_5_4"}]},
			{"Name" : "regs_5_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "call_ret2_shift_reg_basic_fu_636", "Port" : "regs_5_3"}]},
			{"Name" : "regs_5_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "call_ret2_shift_reg_basic_fu_636", "Port" : "regs_5_2"}]},
			{"Name" : "regs_5_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "call_ret2_shift_reg_basic_fu_636", "Port" : "regs_5_1"}]},
			{"Name" : "regs_5_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "call_ret2_shift_reg_basic_fu_636", "Port" : "regs_5_0"}]},
			{"Name" : "regs_6_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_shift_reg_en_fu_522", "Port" : "regs_6_10"}]},
			{"Name" : "regs_6_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_shift_reg_en_fu_522", "Port" : "regs_6_9"}]},
			{"Name" : "regs_6_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_shift_reg_en_fu_522", "Port" : "regs_6_8"}]},
			{"Name" : "regs_6_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_shift_reg_en_fu_522", "Port" : "regs_6_7"}]},
			{"Name" : "regs_6_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_shift_reg_en_fu_522", "Port" : "regs_6_6"}]},
			{"Name" : "regs_6_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_shift_reg_en_fu_522", "Port" : "regs_6_5"}]},
			{"Name" : "regs_6_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_shift_reg_en_fu_522", "Port" : "regs_6_4"}]},
			{"Name" : "regs_6_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_shift_reg_en_fu_522", "Port" : "regs_6_3"}]},
			{"Name" : "regs_6_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_shift_reg_en_fu_522", "Port" : "regs_6_2"}]},
			{"Name" : "regs_6_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_shift_reg_en_fu_522", "Port" : "regs_6_1"}]},
			{"Name" : "regs_6_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_shift_reg_en_fu_522", "Port" : "regs_6_0"}]},
			{"Name" : "regs_6_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_shift_reg_en_fu_522", "Port" : "regs_6_11"}]},
			{"Name" : "regs_7_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "call_ret4_shift_reg_load_fu_554", "Port" : "regs_7_10"}]},
			{"Name" : "regs_7_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "call_ret4_shift_reg_load_fu_554", "Port" : "regs_7_9"}]},
			{"Name" : "regs_7_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "call_ret4_shift_reg_load_fu_554", "Port" : "regs_7_8"}]},
			{"Name" : "regs_7_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "call_ret4_shift_reg_load_fu_554", "Port" : "regs_7_7"}]},
			{"Name" : "regs_7_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "call_ret4_shift_reg_load_fu_554", "Port" : "regs_7_6"}]},
			{"Name" : "regs_7_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "call_ret4_shift_reg_load_fu_554", "Port" : "regs_7_5"}]},
			{"Name" : "regs_7_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "call_ret4_shift_reg_load_fu_554", "Port" : "regs_7_4"}]},
			{"Name" : "regs_7_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "call_ret4_shift_reg_load_fu_554", "Port" : "regs_7_3"}]},
			{"Name" : "regs_7_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "call_ret4_shift_reg_load_fu_554", "Port" : "regs_7_2"}]},
			{"Name" : "regs_7_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "call_ret4_shift_reg_load_fu_554", "Port" : "regs_7_1"}]},
			{"Name" : "regs_7_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "call_ret4_shift_reg_load_fu_554", "Port" : "regs_7_0"}]},
			{"Name" : "regs_8_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret5_shift_reg_sreset_fu_598", "Port" : "regs_8_10"}]},
			{"Name" : "regs_8_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret5_shift_reg_sreset_fu_598", "Port" : "regs_8_9"}]},
			{"Name" : "regs_8_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret5_shift_reg_sreset_fu_598", "Port" : "regs_8_8"}]},
			{"Name" : "regs_8_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret5_shift_reg_sreset_fu_598", "Port" : "regs_8_7"}]},
			{"Name" : "regs_8_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret5_shift_reg_sreset_fu_598", "Port" : "regs_8_6"}]},
			{"Name" : "regs_8_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret5_shift_reg_sreset_fu_598", "Port" : "regs_8_5"}]},
			{"Name" : "regs_8_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret5_shift_reg_sreset_fu_598", "Port" : "regs_8_4"}]},
			{"Name" : "regs_8_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret5_shift_reg_sreset_fu_598", "Port" : "regs_8_3"}]},
			{"Name" : "regs_8_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret5_shift_reg_sreset_fu_598", "Port" : "regs_8_2"}]},
			{"Name" : "regs_8_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret5_shift_reg_sreset_fu_598", "Port" : "regs_8_1"}]},
			{"Name" : "regs_8_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret5_shift_reg_sreset_fu_598", "Port" : "regs_8_0"}]},
			{"Name" : "shift_reg0_regs_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_shift_reg_class_fu_470", "Port" : "shift_reg0_regs_7"}]},
			{"Name" : "shift_reg1_regs_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_shift_reg_class_fu_470", "Port" : "shift_reg1_regs_2"}]},
			{"Name" : "shift_reg1_regs_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_shift_reg_class_fu_470", "Port" : "shift_reg1_regs_1"}]},
			{"Name" : "shift_reg1_regs_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_shift_reg_class_fu_470", "Port" : "shift_reg1_regs_0"}]},
			{"Name" : "shift_reg0_regs_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_shift_reg_class_fu_470", "Port" : "shift_reg0_regs_6"}]},
			{"Name" : "shift_reg0_regs_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_shift_reg_class_fu_470", "Port" : "shift_reg0_regs_5"}]},
			{"Name" : "shift_reg0_regs_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_shift_reg_class_fu_470", "Port" : "shift_reg0_regs_4"}]},
			{"Name" : "shift_reg0_regs_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_shift_reg_class_fu_470", "Port" : "shift_reg0_regs_3"}]},
			{"Name" : "shift_reg0_regs_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_shift_reg_class_fu_470", "Port" : "shift_reg0_regs_2"}]},
			{"Name" : "shift_reg0_regs_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_shift_reg_class_fu_470", "Port" : "shift_reg0_regs_1"}]},
			{"Name" : "shift_reg0_regs_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_shift_reg_class_fu_470", "Port" : "shift_reg0_regs_0"}]},
			{"Name" : "shift_reg1_regs_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_shift_reg_class_fu_470", "Port" : "shift_reg1_regs_3"}]},
			{"Name" : "Sreg_Array", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_shift_reg_ip_fu_626", "Port" : "Sreg_Array"}]},
			{"Name" : "regs_9_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "call_ret1_shift_reg_template_fu_663", "Port" : "regs_9_6"}]},
			{"Name" : "regs_9_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "call_ret1_shift_reg_template_fu_663", "Port" : "regs_9_5"}]},
			{"Name" : "regs_9_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "call_ret1_shift_reg_template_fu_663", "Port" : "regs_9_4"}]},
			{"Name" : "regs_9_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "call_ret1_shift_reg_template_fu_663", "Port" : "regs_9_3"}]},
			{"Name" : "regs_9_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "call_ret1_shift_reg_template_fu_663", "Port" : "regs_9_2"}]},
			{"Name" : "regs_9_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "call_ret1_shift_reg_template_fu_663", "Port" : "regs_9_1"}]},
			{"Name" : "regs_9_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "call_ret1_shift_reg_template_fu_663", "Port" : "regs_9_0"}]},
			{"Name" : "regs_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "call_ret1_shift_reg_template_fu_663", "Port" : "regs_2"}]},
			{"Name" : "regs_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "call_ret1_shift_reg_template_fu_663", "Port" : "regs_1"}]},
			{"Name" : "regs_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "call_ret1_shift_reg_template_fu_663", "Port" : "regs_0"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shift_reg_class_fu_470", "Parent" : "0",
		"CDFG" : "shift_reg_class",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_4_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_5_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_6_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_7_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "srst", "Type" : "None", "Direction" : "I"},
			{"Name" : "load", "Type" : "None", "Direction" : "I"},
			{"Name" : "en", "Type" : "None", "Direction" : "I"},
			{"Name" : "shift_reg0_regs_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg1_regs_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg1_regs_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg1_regs_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg0_regs_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg0_regs_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg0_regs_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg0_regs_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg0_regs_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg0_regs_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg0_regs_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg1_regs_3", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shift_reg_en_fu_522", "Parent" : "0",
		"CDFG" : "shift_reg_en",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din", "Type" : "None", "Direction" : "I"},
			{"Name" : "en", "Type" : "None", "Direction" : "I"},
			{"Name" : "regs_6_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_6_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_6_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_6_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_6_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_6_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_6_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_6_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_6_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_6_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_6_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_6_11", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret4_shift_reg_load_fu_554", "Parent" : "0",
		"CDFG" : "shift_reg_load",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_4_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_5_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_6_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_7_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_8_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_9_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_10_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load_data_11_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "load", "Type" : "None", "Direction" : "I"},
			{"Name" : "regs_7_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_7_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_7_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_7_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_7_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_7_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_7_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_7_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_7_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_7_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_7_0", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret5_shift_reg_sreset_fu_598", "Parent" : "0",
		"CDFG" : "shift_reg_sreset",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din", "Type" : "None", "Direction" : "I"},
			{"Name" : "srst", "Type" : "None", "Direction" : "I"},
			{"Name" : "regs_8_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_8_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_8_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_8_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_8_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_8_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_8_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_8_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_8_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_8_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_8_0", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shift_reg_ip_fu_626", "Parent" : "0", "Child" : ["6"],
		"CDFG" : "shift_reg_ip",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "12", "EstimateLatencyMax" : "12",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din", "Type" : "None", "Direction" : "I"},
			{"Name" : "en", "Type" : "None", "Direction" : "I"},
			{"Name" : "Sreg_Array", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shift_reg_ip_fu_626.Sreg_Array_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret2_shift_reg_basic_fu_636", "Parent" : "0",
		"CDFG" : "shift_reg_basic",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din", "Type" : "None", "Direction" : "I"},
			{"Name" : "regs_5_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_5_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_5_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_5_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_5_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_5_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_5_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_5_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_5_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_5_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_5_0", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret1_shift_reg_template_fu_663", "Parent" : "0",
		"CDFG" : "shift_reg_template",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din0", "Type" : "None", "Direction" : "I"},
			{"Name" : "din1", "Type" : "None", "Direction" : "I"},
			{"Name" : "regs_9_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_9_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_9_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_9_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_9_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_9_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_9_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "regs_0", "Type" : "OVld", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
	shift_reg {
		din0 {Type I LastRead 0 FirstWrite -1}
		din1 {Type I LastRead 0 FirstWrite -1}
		load_data_0 {Type I LastRead 0 FirstWrite -1}
		load_data_1 {Type I LastRead 0 FirstWrite -1}
		load_data_2 {Type I LastRead 0 FirstWrite -1}
		load_data_3 {Type I LastRead 0 FirstWrite -1}
		load_data_4 {Type I LastRead 0 FirstWrite -1}
		load_data_5 {Type I LastRead 0 FirstWrite -1}
		load_data_6 {Type I LastRead 0 FirstWrite -1}
		load_data_7 {Type I LastRead 0 FirstWrite -1}
		load_data_8 {Type I LastRead 1 FirstWrite -1}
		load_data_9 {Type I LastRead 1 FirstWrite -1}
		load_data_10 {Type I LastRead 1 FirstWrite -1}
		load_data_11 {Type I LastRead 1 FirstWrite -1}
		dout0_0 {Type O LastRead -1 FirstWrite 1}
		dout0_1 {Type O LastRead -1 FirstWrite 1}
		dout0_2 {Type O LastRead -1 FirstWrite 1}
		dout0_3 {Type O LastRead -1 FirstWrite 1}
		dout0_4 {Type O LastRead -1 FirstWrite 1}
		dout0_5 {Type O LastRead -1 FirstWrite 1}
		dout0_6 {Type O LastRead -1 FirstWrite 1}
		dout0_7 {Type O LastRead -1 FirstWrite 1}
		dout0_8 {Type O LastRead -1 FirstWrite 1}
		dout0_9 {Type O LastRead -1 FirstWrite 1}
		dout0_10 {Type O LastRead -1 FirstWrite 1}
		dout0_11 {Type O LastRead -1 FirstWrite 1}
		dout1_0 {Type O LastRead -1 FirstWrite 1}
		dout1_1 {Type O LastRead -1 FirstWrite 1}
		dout1_2 {Type O LastRead -1 FirstWrite 1}
		dout1_3 {Type O LastRead -1 FirstWrite 1}
		srst {Type I LastRead 0 FirstWrite -1}
		load {Type I LastRead 0 FirstWrite -1}
		en {Type I LastRead 0 FirstWrite -1}
		select_V {Type I LastRead 0 FirstWrite -1}
		regs_5_10 {Type IO LastRead -1 FirstWrite -1}
		regs_5_9 {Type IO LastRead -1 FirstWrite -1}
		regs_5_8 {Type IO LastRead -1 FirstWrite -1}
		regs_5_7 {Type IO LastRead -1 FirstWrite -1}
		regs_5_6 {Type IO LastRead -1 FirstWrite -1}
		regs_5_5 {Type IO LastRead -1 FirstWrite -1}
		regs_5_4 {Type IO LastRead -1 FirstWrite -1}
		regs_5_3 {Type IO LastRead -1 FirstWrite -1}
		regs_5_2 {Type IO LastRead -1 FirstWrite -1}
		regs_5_1 {Type IO LastRead -1 FirstWrite -1}
		regs_5_0 {Type IO LastRead -1 FirstWrite -1}
		regs_6_10 {Type IO LastRead -1 FirstWrite -1}
		regs_6_9 {Type IO LastRead -1 FirstWrite -1}
		regs_6_8 {Type IO LastRead -1 FirstWrite -1}
		regs_6_7 {Type IO LastRead -1 FirstWrite -1}
		regs_6_6 {Type IO LastRead -1 FirstWrite -1}
		regs_6_5 {Type IO LastRead -1 FirstWrite -1}
		regs_6_4 {Type IO LastRead -1 FirstWrite -1}
		regs_6_3 {Type IO LastRead -1 FirstWrite -1}
		regs_6_2 {Type IO LastRead -1 FirstWrite -1}
		regs_6_1 {Type IO LastRead -1 FirstWrite -1}
		regs_6_0 {Type IO LastRead -1 FirstWrite -1}
		regs_6_11 {Type IO LastRead -1 FirstWrite -1}
		regs_7_10 {Type IO LastRead -1 FirstWrite -1}
		regs_7_9 {Type IO LastRead -1 FirstWrite -1}
		regs_7_8 {Type IO LastRead -1 FirstWrite -1}
		regs_7_7 {Type IO LastRead -1 FirstWrite -1}
		regs_7_6 {Type IO LastRead -1 FirstWrite -1}
		regs_7_5 {Type IO LastRead -1 FirstWrite -1}
		regs_7_4 {Type IO LastRead -1 FirstWrite -1}
		regs_7_3 {Type IO LastRead -1 FirstWrite -1}
		regs_7_2 {Type IO LastRead -1 FirstWrite -1}
		regs_7_1 {Type IO LastRead -1 FirstWrite -1}
		regs_7_0 {Type IO LastRead -1 FirstWrite -1}
		regs_8_10 {Type IO LastRead -1 FirstWrite -1}
		regs_8_9 {Type IO LastRead -1 FirstWrite -1}
		regs_8_8 {Type IO LastRead -1 FirstWrite -1}
		regs_8_7 {Type IO LastRead -1 FirstWrite -1}
		regs_8_6 {Type IO LastRead -1 FirstWrite -1}
		regs_8_5 {Type IO LastRead -1 FirstWrite -1}
		regs_8_4 {Type IO LastRead -1 FirstWrite -1}
		regs_8_3 {Type IO LastRead -1 FirstWrite -1}
		regs_8_2 {Type IO LastRead -1 FirstWrite -1}
		regs_8_1 {Type IO LastRead -1 FirstWrite -1}
		regs_8_0 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_7 {Type IO LastRead -1 FirstWrite -1}
		shift_reg1_regs_2 {Type IO LastRead -1 FirstWrite -1}
		shift_reg1_regs_1 {Type IO LastRead -1 FirstWrite -1}
		shift_reg1_regs_0 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_6 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_5 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_4 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_3 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_2 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_1 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_0 {Type IO LastRead -1 FirstWrite -1}
		shift_reg1_regs_3 {Type IO LastRead -1 FirstWrite -1}
		Sreg_Array {Type X LastRead -1 FirstWrite -1}
		regs_9_6 {Type IO LastRead -1 FirstWrite -1}
		regs_9_5 {Type IO LastRead -1 FirstWrite -1}
		regs_9_4 {Type IO LastRead -1 FirstWrite -1}
		regs_9_3 {Type IO LastRead -1 FirstWrite -1}
		regs_9_2 {Type IO LastRead -1 FirstWrite -1}
		regs_9_1 {Type IO LastRead -1 FirstWrite -1}
		regs_9_0 {Type IO LastRead -1 FirstWrite -1}
		regs_2 {Type IO LastRead -1 FirstWrite -1}
		regs_1 {Type IO LastRead -1 FirstWrite -1}
		regs_0 {Type IO LastRead -1 FirstWrite -1}}
	shift_reg_class {
		din {Type I LastRead 0 FirstWrite -1}
		load_data_0_read {Type I LastRead 0 FirstWrite -1}
		load_data_1_read {Type I LastRead 0 FirstWrite -1}
		load_data_2_read {Type I LastRead 0 FirstWrite -1}
		load_data_3_read {Type I LastRead 0 FirstWrite -1}
		load_data_4_read {Type I LastRead 0 FirstWrite -1}
		load_data_5_read {Type I LastRead 0 FirstWrite -1}
		load_data_6_read {Type I LastRead 0 FirstWrite -1}
		load_data_7_read {Type I LastRead 0 FirstWrite -1}
		srst {Type I LastRead 0 FirstWrite -1}
		load {Type I LastRead 0 FirstWrite -1}
		en {Type I LastRead 0 FirstWrite -1}
		shift_reg0_regs_7 {Type IO LastRead -1 FirstWrite -1}
		shift_reg1_regs_2 {Type IO LastRead -1 FirstWrite -1}
		shift_reg1_regs_1 {Type IO LastRead -1 FirstWrite -1}
		shift_reg1_regs_0 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_6 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_5 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_4 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_3 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_2 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_1 {Type IO LastRead -1 FirstWrite -1}
		shift_reg0_regs_0 {Type IO LastRead -1 FirstWrite -1}
		shift_reg1_regs_3 {Type IO LastRead -1 FirstWrite -1}}
	shift_reg_en {
		din {Type I LastRead 0 FirstWrite -1}
		en {Type I LastRead 0 FirstWrite -1}
		regs_6_10 {Type IO LastRead -1 FirstWrite -1}
		regs_6_9 {Type IO LastRead -1 FirstWrite -1}
		regs_6_8 {Type IO LastRead -1 FirstWrite -1}
		regs_6_7 {Type IO LastRead -1 FirstWrite -1}
		regs_6_6 {Type IO LastRead -1 FirstWrite -1}
		regs_6_5 {Type IO LastRead -1 FirstWrite -1}
		regs_6_4 {Type IO LastRead -1 FirstWrite -1}
		regs_6_3 {Type IO LastRead -1 FirstWrite -1}
		regs_6_2 {Type IO LastRead -1 FirstWrite -1}
		regs_6_1 {Type IO LastRead -1 FirstWrite -1}
		regs_6_0 {Type IO LastRead -1 FirstWrite -1}
		regs_6_11 {Type IO LastRead -1 FirstWrite -1}}
	shift_reg_load {
		din {Type I LastRead 0 FirstWrite -1}
		load_data_0_read {Type I LastRead 0 FirstWrite -1}
		load_data_1_read {Type I LastRead 0 FirstWrite -1}
		load_data_2_read {Type I LastRead 0 FirstWrite -1}
		load_data_3_read {Type I LastRead 0 FirstWrite -1}
		load_data_4_read {Type I LastRead 0 FirstWrite -1}
		load_data_5_read {Type I LastRead 0 FirstWrite -1}
		load_data_6_read {Type I LastRead 0 FirstWrite -1}
		load_data_7_read {Type I LastRead 0 FirstWrite -1}
		load_data_8_read {Type I LastRead 0 FirstWrite -1}
		load_data_9_read {Type I LastRead 0 FirstWrite -1}
		load_data_10_read {Type I LastRead 0 FirstWrite -1}
		load_data_11_read {Type I LastRead 0 FirstWrite -1}
		load {Type I LastRead 0 FirstWrite -1}
		regs_7_10 {Type IO LastRead -1 FirstWrite -1}
		regs_7_9 {Type IO LastRead -1 FirstWrite -1}
		regs_7_8 {Type IO LastRead -1 FirstWrite -1}
		regs_7_7 {Type IO LastRead -1 FirstWrite -1}
		regs_7_6 {Type IO LastRead -1 FirstWrite -1}
		regs_7_5 {Type IO LastRead -1 FirstWrite -1}
		regs_7_4 {Type IO LastRead -1 FirstWrite -1}
		regs_7_3 {Type IO LastRead -1 FirstWrite -1}
		regs_7_2 {Type IO LastRead -1 FirstWrite -1}
		regs_7_1 {Type IO LastRead -1 FirstWrite -1}
		regs_7_0 {Type IO LastRead -1 FirstWrite -1}}
	shift_reg_sreset {
		din {Type I LastRead 0 FirstWrite -1}
		srst {Type I LastRead 0 FirstWrite -1}
		regs_8_10 {Type IO LastRead -1 FirstWrite -1}
		regs_8_9 {Type IO LastRead -1 FirstWrite -1}
		regs_8_8 {Type IO LastRead -1 FirstWrite -1}
		regs_8_7 {Type IO LastRead -1 FirstWrite -1}
		regs_8_6 {Type IO LastRead -1 FirstWrite -1}
		regs_8_5 {Type IO LastRead -1 FirstWrite -1}
		regs_8_4 {Type IO LastRead -1 FirstWrite -1}
		regs_8_3 {Type IO LastRead -1 FirstWrite -1}
		regs_8_2 {Type IO LastRead -1 FirstWrite -1}
		regs_8_1 {Type IO LastRead -1 FirstWrite -1}
		regs_8_0 {Type IO LastRead -1 FirstWrite -1}}
	shift_reg_ip {
		din {Type I LastRead 0 FirstWrite -1}
		en {Type I LastRead 0 FirstWrite -1}
		Sreg_Array {Type X LastRead -1 FirstWrite -1}}
	shift_reg_basic {
		din {Type I LastRead 0 FirstWrite -1}
		regs_5_10 {Type IO LastRead -1 FirstWrite -1}
		regs_5_9 {Type IO LastRead -1 FirstWrite -1}
		regs_5_8 {Type IO LastRead -1 FirstWrite -1}
		regs_5_7 {Type IO LastRead -1 FirstWrite -1}
		regs_5_6 {Type IO LastRead -1 FirstWrite -1}
		regs_5_5 {Type IO LastRead -1 FirstWrite -1}
		regs_5_4 {Type IO LastRead -1 FirstWrite -1}
		regs_5_3 {Type IO LastRead -1 FirstWrite -1}
		regs_5_2 {Type IO LastRead -1 FirstWrite -1}
		regs_5_1 {Type IO LastRead -1 FirstWrite -1}
		regs_5_0 {Type IO LastRead -1 FirstWrite -1}}
	shift_reg_template {
		din0 {Type I LastRead 0 FirstWrite -1}
		din1 {Type I LastRead 0 FirstWrite -1}
		regs_9_6 {Type IO LastRead -1 FirstWrite -1}
		regs_9_5 {Type IO LastRead -1 FirstWrite -1}
		regs_9_4 {Type IO LastRead -1 FirstWrite -1}
		regs_9_3 {Type IO LastRead -1 FirstWrite -1}
		regs_9_2 {Type IO LastRead -1 FirstWrite -1}
		regs_9_1 {Type IO LastRead -1 FirstWrite -1}
		regs_9_0 {Type IO LastRead -1 FirstWrite -1}
		regs_2 {Type IO LastRead -1 FirstWrite -1}
		regs_1 {Type IO LastRead -1 FirstWrite -1}
		regs_0 {Type IO LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "13"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "14"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	din0 { ap_none {  { din0 in_data 0 8 } } }
	din1 { ap_none {  { din1 in_data 0 32 } } }
	load_data_0 { ap_none {  { load_data_0 in_data 0 8 } } }
	load_data_1 { ap_none {  { load_data_1 in_data 0 8 } } }
	load_data_2 { ap_none {  { load_data_2 in_data 0 8 } } }
	load_data_3 { ap_none {  { load_data_3 in_data 0 8 } } }
	load_data_4 { ap_none {  { load_data_4 in_data 0 8 } } }
	load_data_5 { ap_none {  { load_data_5 in_data 0 8 } } }
	load_data_6 { ap_none {  { load_data_6 in_data 0 8 } } }
	load_data_7 { ap_none {  { load_data_7 in_data 0 8 } } }
	load_data_8 { ap_none {  { load_data_8 in_data 0 8 } } }
	load_data_9 { ap_none {  { load_data_9 in_data 0 8 } } }
	load_data_10 { ap_none {  { load_data_10 in_data 0 8 } } }
	load_data_11 { ap_none {  { load_data_11 in_data 0 8 } } }
	dout0_0 { ap_vld {  { dout0_0 out_data 1 8 }  { dout0_0_ap_vld out_vld 1 1 } } }
	dout0_1 { ap_vld {  { dout0_1 out_data 1 8 }  { dout0_1_ap_vld out_vld 1 1 } } }
	dout0_2 { ap_vld {  { dout0_2 out_data 1 8 }  { dout0_2_ap_vld out_vld 1 1 } } }
	dout0_3 { ap_vld {  { dout0_3 out_data 1 8 }  { dout0_3_ap_vld out_vld 1 1 } } }
	dout0_4 { ap_vld {  { dout0_4 out_data 1 8 }  { dout0_4_ap_vld out_vld 1 1 } } }
	dout0_5 { ap_vld {  { dout0_5 out_data 1 8 }  { dout0_5_ap_vld out_vld 1 1 } } }
	dout0_6 { ap_vld {  { dout0_6 out_data 1 8 }  { dout0_6_ap_vld out_vld 1 1 } } }
	dout0_7 { ap_vld {  { dout0_7 out_data 1 8 }  { dout0_7_ap_vld out_vld 1 1 } } }
	dout0_8 { ap_vld {  { dout0_8 out_data 1 8 }  { dout0_8_ap_vld out_vld 1 1 } } }
	dout0_9 { ap_vld {  { dout0_9 out_data 1 8 }  { dout0_9_ap_vld out_vld 1 1 } } }
	dout0_10 { ap_vld {  { dout0_10 out_data 1 8 }  { dout0_10_ap_vld out_vld 1 1 } } }
	dout0_11 { ap_vld {  { dout0_11 out_data 1 8 }  { dout0_11_ap_vld out_vld 1 1 } } }
	dout1_0 { ap_vld {  { dout1_0 out_data 1 32 }  { dout1_0_ap_vld out_vld 1 1 } } }
	dout1_1 { ap_vld {  { dout1_1 out_data 1 32 }  { dout1_1_ap_vld out_vld 1 1 } } }
	dout1_2 { ap_vld {  { dout1_2 out_data 1 32 }  { dout1_2_ap_vld out_vld 1 1 } } }
	dout1_3 { ap_vld {  { dout1_3 out_data 1 32 }  { dout1_3_ap_vld out_vld 1 1 } } }
	srst { ap_none {  { srst in_data 0 1 } } }
	load { ap_none {  { load in_data 0 1 } } }
	en { ap_none {  { en in_data 0 1 } } }
	select_V { ap_none {  { select_V in_data 0 3 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
