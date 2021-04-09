set moduleName mux_binary2onehot_op
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 1
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {mux_binary2onehot_op}
set C_modelType { int 8 }
set C_modelArgList {
	{ din_0_V_read int 8 regular  }
	{ din_1_V_read int 8 regular  }
	{ din_2_V_read int 8 regular  }
	{ din_3_V_read int 8 regular  }
	{ din_4_V_read int 8 regular  }
	{ din_5_V_read int 8 regular  }
	{ din_6_V_read int 8 regular  }
	{ din_7_V_read int 8 regular  }
	{ sel0_V int 3 regular  }
	{ sel1_V int 3 regular  }
	{ s uint 1 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "din_0_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "din_1_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "din_2_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "din_3_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "din_4_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "din_5_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "din_6_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "din_7_V_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "sel0_V", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "sel1_V", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "s", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 8} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ din_0_V_read sc_in sc_lv 8 signal 0 } 
	{ din_1_V_read sc_in sc_lv 8 signal 1 } 
	{ din_2_V_read sc_in sc_lv 8 signal 2 } 
	{ din_3_V_read sc_in sc_lv 8 signal 3 } 
	{ din_4_V_read sc_in sc_lv 8 signal 4 } 
	{ din_5_V_read sc_in sc_lv 8 signal 5 } 
	{ din_6_V_read sc_in sc_lv 8 signal 6 } 
	{ din_7_V_read sc_in sc_lv 8 signal 7 } 
	{ sel0_V sc_in sc_lv 3 signal 8 } 
	{ sel1_V sc_in sc_lv 3 signal 9 } 
	{ s sc_in sc_logic 1 signal 10 } 
	{ ap_return sc_out sc_lv 8 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "din_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "din_0_V_read", "role": "default" }} , 
 	{ "name": "din_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "din_1_V_read", "role": "default" }} , 
 	{ "name": "din_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "din_2_V_read", "role": "default" }} , 
 	{ "name": "din_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "din_3_V_read", "role": "default" }} , 
 	{ "name": "din_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "din_4_V_read", "role": "default" }} , 
 	{ "name": "din_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "din_5_V_read", "role": "default" }} , 
 	{ "name": "din_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "din_6_V_read", "role": "default" }} , 
 	{ "name": "din_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "din_7_V_read", "role": "default" }} , 
 	{ "name": "sel0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "sel0_V", "role": "default" }} , 
 	{ "name": "sel1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "sel1_V", "role": "default" }} , 
 	{ "name": "s", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "s", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_83_8_1_1_U22", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mux_83_8_1_1_U23", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		s {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	din_0_V_read { ap_none {  { din_0_V_read in_data 0 8 } } }
	din_1_V_read { ap_none {  { din_1_V_read in_data 0 8 } } }
	din_2_V_read { ap_none {  { din_2_V_read in_data 0 8 } } }
	din_3_V_read { ap_none {  { din_3_V_read in_data 0 8 } } }
	din_4_V_read { ap_none {  { din_4_V_read in_data 0 8 } } }
	din_5_V_read { ap_none {  { din_5_V_read in_data 0 8 } } }
	din_6_V_read { ap_none {  { din_6_V_read in_data 0 8 } } }
	din_7_V_read { ap_none {  { din_7_V_read in_data 0 8 } } }
	sel0_V { ap_none {  { sel0_V in_data 0 3 } } }
	sel1_V { ap_none {  { sel1_V in_data 0 3 } } }
	s { ap_none {  { s in_data 0 1 } } }
}
