set moduleName top
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
set C_modelName {top}
set C_modelType { void 0 }
set C_modelArgList {
	{ leadone_in_V int 32 regular {pointer 0}  }
	{ leadone_out_V int 5 regular {pointer 1}  }
	{ leadone_ret int 1 regular {pointer 1}  }
	{ mux_in_0_V int 8 regular {pointer 0}  }
	{ mux_in_1_V int 8 regular {pointer 0}  }
	{ mux_in_2_V int 8 regular {pointer 0}  }
	{ mux_in_3_V int 8 regular {pointer 0}  }
	{ mux_in_4_V int 8 regular {pointer 0}  }
	{ mux_in_5_V int 8 regular {pointer 0}  }
	{ mux_in_6_V int 8 regular {pointer 0}  }
	{ mux_in_7_V int 8 regular {pointer 0}  }
	{ mux_sel_onehot_V int 8 regular  }
	{ mux_sel0_V int 3 regular  }
	{ mux_sel1_V int 3 regular  }
	{ mux_s uint 1 regular  }
	{ mux_ret_V int 8 regular {pointer 1}  }
	{ max_in_0 int 32 regular {pointer 0}  }
	{ max_in_1 int 32 regular {pointer 0}  }
	{ max_in_2 int 32 regular {pointer 0}  }
	{ max_in_3 int 32 regular {pointer 0}  }
	{ max_in_4 int 32 regular {pointer 0}  }
	{ max_in_5 int 32 regular {pointer 0}  }
	{ max_in_6 int 32 regular {pointer 0}  }
	{ max_in_7 int 32 regular {pointer 0}  }
	{ max_out int 32 regular {pointer 1}  }
	{ mode int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "leadone_in_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "leadone_in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "leadone_out_V", "interface" : "wire", "bitwidth" : 5, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":4,"cElement": [{"cName": "leadone_out.V","cData": "uint5","bit_use": { "low": 0,"up": 4},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "leadone_ret", "interface" : "wire", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "leadone_ret","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "mux_in_0_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "mux_in.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "mux_in_1_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "mux_in.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "mux_in_2_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "mux_in.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "mux_in_3_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "mux_in.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "mux_in_4_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "mux_in.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "mux_in_5_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "mux_in.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "mux_in_6_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "mux_in.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "mux_in_7_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "mux_in.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "mux_sel_onehot_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "mux_sel_onehot.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "mux_sel0_V", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY", "bitSlice":[{"low":0,"up":2,"cElement": [{"cName": "mux_sel0.V","cData": "uint3","bit_use": { "low": 0,"up": 2},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "mux_sel1_V", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY", "bitSlice":[{"low":0,"up":2,"cElement": [{"cName": "mux_sel1.V","cData": "uint3","bit_use": { "low": 0,"up": 2},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "mux_s", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "mux_s","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "mux_ret_V", "interface" : "wire", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "mux_ret.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "max_in_0", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "max_in","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "max_in_1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "max_in","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "max_in_2", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "max_in","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "max_in_3", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "max_in","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "max_in_4", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "max_in","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "max_in_5", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "max_in","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "max_in_6", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "max_in","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "max_in_7", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "max_in","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "max_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "max_out","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "mode", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "mode","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 36
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ leadone_in_V sc_in sc_lv 32 signal 0 } 
	{ leadone_out_V sc_out sc_lv 5 signal 1 } 
	{ leadone_out_V_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ leadone_ret sc_out sc_logic 1 signal 2 } 
	{ leadone_ret_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ mux_in_0_V sc_in sc_lv 8 signal 3 } 
	{ mux_in_1_V sc_in sc_lv 8 signal 4 } 
	{ mux_in_2_V sc_in sc_lv 8 signal 5 } 
	{ mux_in_3_V sc_in sc_lv 8 signal 6 } 
	{ mux_in_4_V sc_in sc_lv 8 signal 7 } 
	{ mux_in_5_V sc_in sc_lv 8 signal 8 } 
	{ mux_in_6_V sc_in sc_lv 8 signal 9 } 
	{ mux_in_7_V sc_in sc_lv 8 signal 10 } 
	{ mux_sel_onehot_V sc_in sc_lv 8 signal 11 } 
	{ mux_sel0_V sc_in sc_lv 3 signal 12 } 
	{ mux_sel1_V sc_in sc_lv 3 signal 13 } 
	{ mux_s sc_in sc_logic 1 signal 14 } 
	{ mux_ret_V sc_out sc_lv 8 signal 15 } 
	{ mux_ret_V_ap_vld sc_out sc_logic 1 outvld 15 } 
	{ max_in_0 sc_in sc_lv 32 signal 16 } 
	{ max_in_1 sc_in sc_lv 32 signal 17 } 
	{ max_in_2 sc_in sc_lv 32 signal 18 } 
	{ max_in_3 sc_in sc_lv 32 signal 19 } 
	{ max_in_4 sc_in sc_lv 32 signal 20 } 
	{ max_in_5 sc_in sc_lv 32 signal 21 } 
	{ max_in_6 sc_in sc_lv 32 signal 22 } 
	{ max_in_7 sc_in sc_lv 32 signal 23 } 
	{ max_out sc_out sc_lv 32 signal 24 } 
	{ max_out_ap_vld sc_out sc_logic 1 outvld 24 } 
	{ mode sc_in sc_lv 32 signal 25 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "leadone_in_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "leadone_in_V", "role": "default" }} , 
 	{ "name": "leadone_out_V", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "leadone_out_V", "role": "default" }} , 
 	{ "name": "leadone_out_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "leadone_out_V", "role": "ap_vld" }} , 
 	{ "name": "leadone_ret", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "leadone_ret", "role": "default" }} , 
 	{ "name": "leadone_ret_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "leadone_ret", "role": "ap_vld" }} , 
 	{ "name": "mux_in_0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mux_in_0_V", "role": "default" }} , 
 	{ "name": "mux_in_1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mux_in_1_V", "role": "default" }} , 
 	{ "name": "mux_in_2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mux_in_2_V", "role": "default" }} , 
 	{ "name": "mux_in_3_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mux_in_3_V", "role": "default" }} , 
 	{ "name": "mux_in_4_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mux_in_4_V", "role": "default" }} , 
 	{ "name": "mux_in_5_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mux_in_5_V", "role": "default" }} , 
 	{ "name": "mux_in_6_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mux_in_6_V", "role": "default" }} , 
 	{ "name": "mux_in_7_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mux_in_7_V", "role": "default" }} , 
 	{ "name": "mux_sel_onehot_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mux_sel_onehot_V", "role": "default" }} , 
 	{ "name": "mux_sel0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "mux_sel0_V", "role": "default" }} , 
 	{ "name": "mux_sel1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "mux_sel1_V", "role": "default" }} , 
 	{ "name": "mux_s", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mux_s", "role": "default" }} , 
 	{ "name": "mux_ret_V", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mux_ret_V", "role": "default" }} , 
 	{ "name": "mux_ret_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "mux_ret_V", "role": "ap_vld" }} , 
 	{ "name": "max_in_0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "max_in_0", "role": "default" }} , 
 	{ "name": "max_in_1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "max_in_1", "role": "default" }} , 
 	{ "name": "max_in_2", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "max_in_2", "role": "default" }} , 
 	{ "name": "max_in_3", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "max_in_3", "role": "default" }} , 
 	{ "name": "max_in_4", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "max_in_4", "role": "default" }} , 
 	{ "name": "max_in_5", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "max_in_5", "role": "default" }} , 
 	{ "name": "max_in_6", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "max_in_6", "role": "default" }} , 
 	{ "name": "max_in_7", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "max_in_7", "role": "default" }} , 
 	{ "name": "max_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "max_out", "role": "default" }} , 
 	{ "name": "max_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "max_out", "role": "ap_vld" }} , 
 	{ "name": "mode", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "mode", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "8", "9", "10", "12", "13", "14", "15", "18", "19", "21", "23"],
		"CDFG" : "top",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "5",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_max_algorithmic_fu_284"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_max_fu_305"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_mux_onehot_if_fu_326"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_leading_ones_brutefo_fu_378"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_leading_ones_log2_fu_384"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_leading_ones_fu_417"}],
		"Port" : [
			{"Name" : "leadone_in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "leadone_out_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "leadone_ret", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "mux_in_0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mux_in_1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mux_in_2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mux_in_3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mux_in_4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mux_in_5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mux_in_6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mux_in_7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mux_sel_onehot_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mux_sel0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mux_sel1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "mux_s", "Type" : "None", "Direction" : "I"},
			{"Name" : "mux_ret_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "max_in_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "max_in_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "max_in_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "max_in_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "max_in_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "max_in_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "max_in_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "max_in_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "max_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "mode", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_max_algorithmic_fu_284", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7"],
		"CDFG" : "max_algorithmic",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4", "EstimateLatencyMax" : "4",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_4_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_5_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_6_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_7_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_max_algorithmic_fu_284.top_mux_83_32_1_1_U71", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_max_algorithmic_fu_284.top_mux_83_32_1_1_U72", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_max_algorithmic_fu_284.top_mux_83_32_1_1_U73", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_max_algorithmic_fu_284.top_mux_83_32_1_1_U74", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_max_algorithmic_fu_284.top_mux_83_32_1_1_U75", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_max_algorithmic_fu_284.top_mux_83_32_1_1_U76", "Parent" : "1"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_max_fu_305", "Parent" : "0",
		"CDFG" : "max",
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
			{"Name" : "din_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_4_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_5_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_6_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_7_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_mux_onehot_if_fu_326", "Parent" : "0",
		"CDFG" : "mux_onehot_if",
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
			{"Name" : "din_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sel_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret7_leading_ones_templat_fu_349", "Parent" : "0", "Child" : ["11"],
		"CDFG" : "leading_ones_templat",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret7_leading_ones_templat_fu_349.call_ret_leading_ones_32_s_fu_12", "Parent" : "10",
		"CDFG" : "leading_ones_32_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.op2_V_assign_2_s_mux_onehot_fu_355", "Parent" : "0",
		"CDFG" : "mux_onehot",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sel_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_leading_ones_brutefo_fu_378", "Parent" : "0",
		"CDFG" : "leading_ones_brutefo",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_leading_ones_log2_fu_384", "Parent" : "0",
		"CDFG" : "leading_ones_log2",
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
			{"Name" : "din_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.op2_V_assign_4_s_mux_binary2onehot_op_fu_390", "Parent" : "0", "Child" : ["16", "17"],
		"CDFG" : "mux_binary2onehot_op",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sel0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "sel1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.op2_V_assign_4_s_mux_binary2onehot_op_fu_390.top_mux_83_8_1_1_U22", "Parent" : "15"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.op2_V_assign_4_s_mux_binary2onehot_op_fu_390.top_mux_83_8_1_1_U23", "Parent" : "15"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_leading_ones_fu_417", "Parent" : "0",
		"CDFG" : "leading_ones",
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
			{"Name" : "din_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.op2_V_assign_5_s_mux_binary_opt_fu_423", "Parent" : "0", "Child" : ["20"],
		"CDFG" : "mux_binary_opt",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sel0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "sel1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.op2_V_assign_5_s_mux_binary_opt_fu_423.top_mux_83_8_1_1_U9", "Parent" : "19"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.op2_V_assign_1_s_mux_binary_fu_450", "Parent" : "0", "Child" : ["22"],
		"CDFG" : "mux_binary",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sel_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.op2_V_assign_1_s_mux_binary_fu_450.top_mux_83_8_1_1_U53", "Parent" : "21"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.op2_V_assign_s_mux_2to1_fu_473", "Parent" : "0",
		"CDFG" : "mux_2to1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "din_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "din_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sel", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	top {
		leadone_in_V {Type I LastRead 0 FirstWrite -1}
		leadone_out_V {Type O LastRead -1 FirstWrite 0}
		leadone_ret {Type O LastRead -1 FirstWrite 0}
		mux_in_0_V {Type I LastRead 0 FirstWrite -1}
		mux_in_1_V {Type I LastRead 0 FirstWrite -1}
		mux_in_2_V {Type I LastRead 0 FirstWrite -1}
		mux_in_3_V {Type I LastRead 0 FirstWrite -1}
		mux_in_4_V {Type I LastRead 0 FirstWrite -1}
		mux_in_5_V {Type I LastRead 0 FirstWrite -1}
		mux_in_6_V {Type I LastRead 0 FirstWrite -1}
		mux_in_7_V {Type I LastRead 0 FirstWrite -1}
		mux_sel_onehot_V {Type I LastRead 0 FirstWrite -1}
		mux_sel0_V {Type I LastRead 0 FirstWrite -1}
		mux_sel1_V {Type I LastRead 0 FirstWrite -1}
		mux_s {Type I LastRead 0 FirstWrite -1}
		mux_ret_V {Type O LastRead -1 FirstWrite 0}
		max_in_0 {Type I LastRead 0 FirstWrite -1}
		max_in_1 {Type I LastRead 0 FirstWrite -1}
		max_in_2 {Type I LastRead 0 FirstWrite -1}
		max_in_3 {Type I LastRead 0 FirstWrite -1}
		max_in_4 {Type I LastRead 0 FirstWrite -1}
		max_in_5 {Type I LastRead 0 FirstWrite -1}
		max_in_6 {Type I LastRead 0 FirstWrite -1}
		max_in_7 {Type I LastRead 0 FirstWrite -1}
		max_out {Type O LastRead -1 FirstWrite 1}
		mode {Type I LastRead 0 FirstWrite -1}}
	max_algorithmic {
		din_0_read {Type I LastRead 0 FirstWrite -1}
		din_1_read {Type I LastRead 0 FirstWrite -1}
		din_2_read {Type I LastRead 0 FirstWrite -1}
		din_3_read {Type I LastRead 1 FirstWrite -1}
		din_4_read {Type I LastRead 2 FirstWrite -1}
		din_5_read {Type I LastRead 2 FirstWrite -1}
		din_6_read {Type I LastRead 3 FirstWrite -1}
		din_7_read {Type I LastRead 4 FirstWrite -1}}
	max {
		din_0_read {Type I LastRead 0 FirstWrite -1}
		din_1_read {Type I LastRead 0 FirstWrite -1}
		din_2_read {Type I LastRead 0 FirstWrite -1}
		din_3_read {Type I LastRead 0 FirstWrite -1}
		din_4_read {Type I LastRead 0 FirstWrite -1}
		din_5_read {Type I LastRead 0 FirstWrite -1}
		din_6_read {Type I LastRead 0 FirstWrite -1}
		din_7_read {Type I LastRead 0 FirstWrite -1}}
	mux_onehot_if {
		din_0_V_read {Type I LastRead 1 FirstWrite -1}
		din_1_V_read {Type I LastRead 1 FirstWrite -1}
		din_2_V_read {Type I LastRead 1 FirstWrite -1}
		din_3_V_read {Type I LastRead 1 FirstWrite -1}
		din_4_V_read {Type I LastRead 1 FirstWrite -1}
		din_5_V_read {Type I LastRead 1 FirstWrite -1}
		din_6_V_read {Type I LastRead 1 FirstWrite -1}
		din_7_V_read {Type I LastRead 1 FirstWrite -1}
		sel_V {Type I LastRead 0 FirstWrite -1}}
	leading_ones_templat {
		din_V_read {Type I LastRead 0 FirstWrite -1}}
	leading_ones_32_s {
		din_V_read {Type I LastRead 0 FirstWrite -1}}
	mux_onehot {
		din_0_V_read {Type I LastRead 0 FirstWrite -1}
		din_1_V_read {Type I LastRead 0 FirstWrite -1}
		din_2_V_read {Type I LastRead 0 FirstWrite -1}
		din_3_V_read {Type I LastRead 0 FirstWrite -1}
		din_4_V_read {Type I LastRead 0 FirstWrite -1}
		din_5_V_read {Type I LastRead 0 FirstWrite -1}
		din_6_V_read {Type I LastRead 0 FirstWrite -1}
		din_7_V_read {Type I LastRead 0 FirstWrite -1}
		sel_V {Type I LastRead 0 FirstWrite -1}}
	leading_ones_brutefo {
		din_V {Type I LastRead 0 FirstWrite -1}}
	leading_ones_log2 {
		din_V {Type I LastRead 0 FirstWrite -1}}
	mux_binary2onehot_op {
		din_0_V_read {Type I LastRead 0 FirstWrite -1}
		din_1_V_read {Type I LastRead 0 FirstWrite -1}
		din_2_V_read {Type I LastRead 0 FirstWrite -1}
		din_3_V_read {Type I LastRead 0 FirstWrite -1}
		din_4_V_read {Type I LastRead 0 FirstWrite -1}
		din_5_V_read {Type I LastRead 0 FirstWrite -1}
		din_6_V_read {Type I LastRead 0 FirstWrite -1}
		din_7_V_read {Type I LastRead 0 FirstWrite -1}
		sel0_V {Type I LastRead 0 FirstWrite -1}
		sel1_V {Type I LastRead 0 FirstWrite -1}
		s {Type I LastRead 0 FirstWrite -1}}
	leading_ones {
		din_V {Type I LastRead 0 FirstWrite -1}}
	mux_binary_opt {
		din_0_V_read {Type I LastRead 0 FirstWrite -1}
		din_1_V_read {Type I LastRead 0 FirstWrite -1}
		din_2_V_read {Type I LastRead 0 FirstWrite -1}
		din_3_V_read {Type I LastRead 0 FirstWrite -1}
		din_4_V_read {Type I LastRead 0 FirstWrite -1}
		din_5_V_read {Type I LastRead 0 FirstWrite -1}
		din_6_V_read {Type I LastRead 0 FirstWrite -1}
		din_7_V_read {Type I LastRead 0 FirstWrite -1}
		sel0_V {Type I LastRead 0 FirstWrite -1}
		sel1_V {Type I LastRead 0 FirstWrite -1}
		s {Type I LastRead 0 FirstWrite -1}}
	mux_binary {
		din_0_V_read {Type I LastRead 0 FirstWrite -1}
		din_1_V_read {Type I LastRead 0 FirstWrite -1}
		din_2_V_read {Type I LastRead 0 FirstWrite -1}
		din_3_V_read {Type I LastRead 0 FirstWrite -1}
		din_4_V_read {Type I LastRead 0 FirstWrite -1}
		din_5_V_read {Type I LastRead 0 FirstWrite -1}
		din_6_V_read {Type I LastRead 0 FirstWrite -1}
		din_7_V_read {Type I LastRead 0 FirstWrite -1}
		sel_V {Type I LastRead 0 FirstWrite -1}}
	mux_2to1 {
		din_0_V_read {Type I LastRead 0 FirstWrite -1}
		din_1_V_read {Type I LastRead 0 FirstWrite -1}
		sel {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "5"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "6"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	leadone_in_V { ap_none {  { leadone_in_V in_data 0 32 } } }
	leadone_out_V { ap_vld {  { leadone_out_V out_data 1 5 }  { leadone_out_V_ap_vld out_vld 1 1 } } }
	leadone_ret { ap_vld {  { leadone_ret out_data 1 1 }  { leadone_ret_ap_vld out_vld 1 1 } } }
	mux_in_0_V { ap_none {  { mux_in_0_V in_data 0 8 } } }
	mux_in_1_V { ap_none {  { mux_in_1_V in_data 0 8 } } }
	mux_in_2_V { ap_none {  { mux_in_2_V in_data 0 8 } } }
	mux_in_3_V { ap_none {  { mux_in_3_V in_data 0 8 } } }
	mux_in_4_V { ap_none {  { mux_in_4_V in_data 0 8 } } }
	mux_in_5_V { ap_none {  { mux_in_5_V in_data 0 8 } } }
	mux_in_6_V { ap_none {  { mux_in_6_V in_data 0 8 } } }
	mux_in_7_V { ap_none {  { mux_in_7_V in_data 0 8 } } }
	mux_sel_onehot_V { ap_none {  { mux_sel_onehot_V in_data 0 8 } } }
	mux_sel0_V { ap_none {  { mux_sel0_V in_data 0 3 } } }
	mux_sel1_V { ap_none {  { mux_sel1_V in_data 0 3 } } }
	mux_s { ap_none {  { mux_s in_data 0 1 } } }
	mux_ret_V { ap_vld {  { mux_ret_V out_data 1 8 }  { mux_ret_V_ap_vld out_vld 1 1 } } }
	max_in_0 { ap_none {  { max_in_0 in_data 0 32 } } }
	max_in_1 { ap_none {  { max_in_1 in_data 0 32 } } }
	max_in_2 { ap_none {  { max_in_2 in_data 0 32 } } }
	max_in_3 { ap_none {  { max_in_3 in_data 0 32 } } }
	max_in_4 { ap_none {  { max_in_4 in_data 0 32 } } }
	max_in_5 { ap_none {  { max_in_5 in_data 0 32 } } }
	max_in_6 { ap_none {  { max_in_6 in_data 0 32 } } }
	max_in_7 { ap_none {  { max_in_7 in_data 0 32 } } }
	max_out { ap_vld {  { max_out out_data 1 32 }  { max_out_ap_vld out_vld 1 1 } } }
	mode { ap_none {  { mode in_data 0 32 } } }
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
