set moduleName dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type loop_rewind
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {dense_resource_rf_leq_nin<ap_ufixed,ap_fixed,config2_mult>.0.0.0.0.0.0.0}
set C_modelType { int 48 }
set C_modelArgList {
	{ kernel_data_V_8 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_0 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_1411 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_2412 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_3413 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_4414 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_5415 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_6 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_7 int 8 regular {pointer 0} {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "kernel_data_V_8", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_0", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_1411", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_2412", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_3413", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_4414", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_5415", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_6", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_7", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 48} ]}
# RTL Port declarations: 
set portNum 21
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ kernel_data_V_8 sc_in sc_lv 8 signal 0 } 
	{ kernel_data_V_0 sc_in sc_lv 8 signal 1 } 
	{ kernel_data_V_1411 sc_in sc_lv 8 signal 2 } 
	{ kernel_data_V_2412 sc_in sc_lv 8 signal 3 } 
	{ kernel_data_V_3413 sc_in sc_lv 8 signal 4 } 
	{ kernel_data_V_4414 sc_in sc_lv 8 signal 5 } 
	{ kernel_data_V_5415 sc_in sc_lv 8 signal 6 } 
	{ kernel_data_V_6 sc_in sc_lv 8 signal 7 } 
	{ kernel_data_V_7 sc_in sc_lv 8 signal 8 } 
	{ ap_return_0 sc_out sc_lv 8 signal -1 } 
	{ ap_return_1 sc_out sc_lv 8 signal -1 } 
	{ ap_return_2 sc_out sc_lv 8 signal -1 } 
	{ ap_return_3 sc_out sc_lv 8 signal -1 } 
	{ ap_return_4 sc_out sc_lv 8 signal -1 } 
	{ ap_return_5 sc_out sc_lv 8 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "kernel_data_V_8", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_8", "role": "default" }} , 
 	{ "name": "kernel_data_V_0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_0", "role": "default" }} , 
 	{ "name": "kernel_data_V_1411", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_1411", "role": "default" }} , 
 	{ "name": "kernel_data_V_2412", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_2412", "role": "default" }} , 
 	{ "name": "kernel_data_V_3413", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_3413", "role": "default" }} , 
 	{ "name": "kernel_data_V_4414", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_4414", "role": "default" }} , 
 	{ "name": "kernel_data_V_5415", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_5415", "role": "default" }} , 
 	{ "name": "kernel_data_V_6", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_6", "role": "default" }} , 
 	{ "name": "kernel_data_V_7", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_7", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "11",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "kernel_data_V_8", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_1411", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_2412", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_3413", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_4414", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_5415", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w2_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0 {
		kernel_data_V_8 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_0 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_1411 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_2412 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_3413 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_4414 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_5415 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_6 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_7 {Type I LastRead 2 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "10", "Max" : "11"}
	, {"Name" : "Interval", "Min" : "9", "Max" : "9"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	kernel_data_V_8 { ap_none {  { kernel_data_V_8 in_data 0 8 } } }
	kernel_data_V_0 { ap_none {  { kernel_data_V_0 in_data 0 8 } } }
	kernel_data_V_1411 { ap_none {  { kernel_data_V_1411 in_data 0 8 } } }
	kernel_data_V_2412 { ap_none {  { kernel_data_V_2412 in_data 0 8 } } }
	kernel_data_V_3413 { ap_none {  { kernel_data_V_3413 in_data 0 8 } } }
	kernel_data_V_4414 { ap_none {  { kernel_data_V_4414 in_data 0 8 } } }
	kernel_data_V_5415 { ap_none {  { kernel_data_V_5415 in_data 0 8 } } }
	kernel_data_V_6 { ap_none {  { kernel_data_V_6 in_data 0 8 } } }
	kernel_data_V_7 { ap_none {  { kernel_data_V_7 in_data 0 8 } } }
}
set moduleName dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type loop_rewind
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {dense_resource_rf_leq_nin<ap_ufixed,ap_fixed,config2_mult>.0.0.0.0.0.0.0}
set C_modelType { int 48 }
set C_modelArgList {
	{ kernel_data_V_8 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_0 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_1411 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_2412 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_3413 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_4414 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_5415 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_6 int 8 regular {pointer 0} {global 0}  }
	{ kernel_data_V_7 int 8 regular {pointer 0} {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "kernel_data_V_8", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_0", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_1411", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_2412", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_3413", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_4414", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_5415", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_6", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "kernel_data_V_7", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 48} ]}
# RTL Port declarations: 
set portNum 21
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ kernel_data_V_8 sc_in sc_lv 8 signal 0 } 
	{ kernel_data_V_0 sc_in sc_lv 8 signal 1 } 
	{ kernel_data_V_1411 sc_in sc_lv 8 signal 2 } 
	{ kernel_data_V_2412 sc_in sc_lv 8 signal 3 } 
	{ kernel_data_V_3413 sc_in sc_lv 8 signal 4 } 
	{ kernel_data_V_4414 sc_in sc_lv 8 signal 5 } 
	{ kernel_data_V_5415 sc_in sc_lv 8 signal 6 } 
	{ kernel_data_V_6 sc_in sc_lv 8 signal 7 } 
	{ kernel_data_V_7 sc_in sc_lv 8 signal 8 } 
	{ ap_return_0 sc_out sc_lv 8 signal -1 } 
	{ ap_return_1 sc_out sc_lv 8 signal -1 } 
	{ ap_return_2 sc_out sc_lv 8 signal -1 } 
	{ ap_return_3 sc_out sc_lv 8 signal -1 } 
	{ ap_return_4 sc_out sc_lv 8 signal -1 } 
	{ ap_return_5 sc_out sc_lv 8 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "kernel_data_V_8", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_8", "role": "default" }} , 
 	{ "name": "kernel_data_V_0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_0", "role": "default" }} , 
 	{ "name": "kernel_data_V_1411", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_1411", "role": "default" }} , 
 	{ "name": "kernel_data_V_2412", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_2412", "role": "default" }} , 
 	{ "name": "kernel_data_V_3413", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_3413", "role": "default" }} , 
 	{ "name": "kernel_data_V_4414", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_4414", "role": "default" }} , 
 	{ "name": "kernel_data_V_5415", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_5415", "role": "default" }} , 
 	{ "name": "kernel_data_V_6", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_6", "role": "default" }} , 
 	{ "name": "kernel_data_V_7", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_data_V_7", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "11",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "kernel_data_V_8", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_1411", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_2412", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_3413", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_4414", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_5415", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_data_V_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w2_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0 {
		kernel_data_V_8 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_0 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_1411 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_2412 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_3413 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_4414 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_5415 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_6 {Type I LastRead 2 FirstWrite -1}
		kernel_data_V_7 {Type I LastRead 2 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "10", "Max" : "11"}
	, {"Name" : "Interval", "Min" : "9", "Max" : "9"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	kernel_data_V_8 { ap_none {  { kernel_data_V_8 in_data 0 8 } } }
	kernel_data_V_0 { ap_none {  { kernel_data_V_0 in_data 0 8 } } }
	kernel_data_V_1411 { ap_none {  { kernel_data_V_1411 in_data 0 8 } } }
	kernel_data_V_2412 { ap_none {  { kernel_data_V_2412 in_data 0 8 } } }
	kernel_data_V_3413 { ap_none {  { kernel_data_V_3413 in_data 0 8 } } }
	kernel_data_V_4414 { ap_none {  { kernel_data_V_4414 in_data 0 8 } } }
	kernel_data_V_5415 { ap_none {  { kernel_data_V_5415 in_data 0 8 } } }
	kernel_data_V_6 { ap_none {  { kernel_data_V_6 in_data 0 8 } } }
	kernel_data_V_7 { ap_none {  { kernel_data_V_7 in_data 0 8 } } }
}
