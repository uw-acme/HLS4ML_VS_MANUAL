set moduleName gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s
set isTopModule 0
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
set C_modelName {gru_static<ap_fixed<16, 6, 5, 3, 0>, ap_fixed<16, 6, 5, 3, 0>, config2>}
set C_modelType { int 320 }
set C_modelArgList {
	{ reset_state uint 1 regular  }
	{ data_0_V_read int 16 regular  }
	{ data_1_V_read int 16 regular  }
	{ data_2_V_read int 16 regular  }
	{ data_3_V_read int 16 regular  }
	{ data_4_V_read int 16 regular  }
	{ data_5_V_read int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "reset_state", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "data_0_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_1_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_2_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_3_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_4_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_5_V_read", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 320} ]}
# RTL Port declarations: 
set portNum 33
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ reset_state sc_in sc_logic 1 signal 0 } 
	{ data_0_V_read sc_in sc_lv 16 signal 1 } 
	{ data_1_V_read sc_in sc_lv 16 signal 2 } 
	{ data_2_V_read sc_in sc_lv 16 signal 3 } 
	{ data_3_V_read sc_in sc_lv 16 signal 4 } 
	{ data_4_V_read sc_in sc_lv 16 signal 5 } 
	{ data_5_V_read sc_in sc_lv 16 signal 6 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
	{ ap_return_2 sc_out sc_lv 16 signal -1 } 
	{ ap_return_3 sc_out sc_lv 16 signal -1 } 
	{ ap_return_4 sc_out sc_lv 16 signal -1 } 
	{ ap_return_5 sc_out sc_lv 16 signal -1 } 
	{ ap_return_6 sc_out sc_lv 16 signal -1 } 
	{ ap_return_7 sc_out sc_lv 16 signal -1 } 
	{ ap_return_8 sc_out sc_lv 16 signal -1 } 
	{ ap_return_9 sc_out sc_lv 16 signal -1 } 
	{ ap_return_10 sc_out sc_lv 16 signal -1 } 
	{ ap_return_11 sc_out sc_lv 16 signal -1 } 
	{ ap_return_12 sc_out sc_lv 16 signal -1 } 
	{ ap_return_13 sc_out sc_lv 16 signal -1 } 
	{ ap_return_14 sc_out sc_lv 16 signal -1 } 
	{ ap_return_15 sc_out sc_lv 16 signal -1 } 
	{ ap_return_16 sc_out sc_lv 16 signal -1 } 
	{ ap_return_17 sc_out sc_lv 16 signal -1 } 
	{ ap_return_18 sc_out sc_lv 16 signal -1 } 
	{ ap_return_19 sc_out sc_lv 16 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "reset_state", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "reset_state", "role": "default" }} , 
 	{ "name": "data_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_0_V_read", "role": "default" }} , 
 	{ "name": "data_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_1_V_read", "role": "default" }} , 
 	{ "name": "data_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_2_V_read", "role": "default" }} , 
 	{ "name": "data_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_3_V_read", "role": "default" }} , 
 	{ "name": "data_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_4_V_read", "role": "default" }} , 
 	{ "name": "data_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_5_V_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }} , 
 	{ "name": "ap_return_16", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_16", "role": "default" }} , 
 	{ "name": "ap_return_17", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_17", "role": "default" }} , 
 	{ "name": "ap_return_18", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_18", "role": "default" }} , 
 	{ "name": "ap_return_19", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_19", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "3", "31", "94", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155"],
		"CDFG" : "gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "38", "EstimateLatencyMax" : "39",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190"}],
		"Port" : [
			{"Name" : "reset_state", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_0"}]},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_1"}]},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_2"}]},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_3"}]},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_4"}]},
			{"Name" : "h_state_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_5"}]},
			{"Name" : "h_state_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_6"}]},
			{"Name" : "h_state_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_7"}]},
			{"Name" : "h_state_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_8"}]},
			{"Name" : "h_state_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_9"}]},
			{"Name" : "h_state_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_10"}]},
			{"Name" : "h_state_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_11"}]},
			{"Name" : "h_state_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_12"}]},
			{"Name" : "h_state_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_13"}]},
			{"Name" : "h_state_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_14"}]},
			{"Name" : "h_state_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_15"}]},
			{"Name" : "h_state_V_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_16"}]},
			{"Name" : "h_state_V_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_17"}]},
			{"Name" : "h_state_V_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_18"}]},
			{"Name" : "h_state_V_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "h_state_V_19"}]},
			{"Name" : "outidx", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176", "Port" : "outidx"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176", "Port" : "w2_V"}]},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Port" : "wr2_V"}]},
			{"Name" : "sigmoid_table4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s_fu_130", "Port" : "sigmoid_table4"}]},
			{"Name" : "tanh_table2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "94", "SubInstance" : "grp_tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_fu_236", "Port" : "tanh_table2"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s_fu_130", "Parent" : "0", "Child" : ["2"],
		"CDFG" : "sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sigmoid_table4", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s_fu_130.sigmoid_table4_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176", "Parent" : "0", "Child" : ["4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30"],
		"CDFG" : "dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "31", "EstimateLatencyMax" : "32",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "outidx", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.outidx_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.w2_V_U", "Parent" : "3"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_63_16_1_1_U1", "Parent" : "3"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_83_16_1_1_U2", "Parent" : "3"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_646_16_1_1_U3", "Parent" : "3"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_646_16_1_1_U4", "Parent" : "3"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_646_16_1_1_U5", "Parent" : "3"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_646_16_1_1_U6", "Parent" : "3"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_646_16_1_1_U7", "Parent" : "3"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_646_16_1_1_U8", "Parent" : "3"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_646_16_1_1_U9", "Parent" : "3"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_646_16_1_1_U10", "Parent" : "3"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_646_16_1_1_U11", "Parent" : "3"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_646_16_1_1_U12", "Parent" : "3"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mux_646_16_1_1_U13", "Parent" : "3"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mul_mul_16s_16s_26_1_1_U14", "Parent" : "3"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mul_mul_16s_16s_26_1_1_U15", "Parent" : "3"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mul_mul_16s_16s_26_1_1_U16", "Parent" : "3"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mul_mul_16s_16s_26_1_1_U17", "Parent" : "3"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mul_mul_16s_16s_26_1_1_U18", "Parent" : "3"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mul_mul_16s_16s_26_1_1_U19", "Parent" : "3"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mul_mul_16s_16s_26_1_1_U20", "Parent" : "3"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mul_mul_16s_16s_26_1_1_U21", "Parent" : "3"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mul_mul_16s_16s_26_1_1_U22", "Parent" : "3"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mul_mul_16s_16s_26_1_1_U23", "Parent" : "3"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mul_mul_16s_16s_26_1_1_U24", "Parent" : "3"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s_fu_176.myproject_mul_mul_16s_12s_26_1_1_U25", "Parent" : "3"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190", "Parent" : "0", "Child" : ["32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93"],
		"CDFG" : "dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "20", "EstimateLatencyMax" : "21",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "h_state_V_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_8", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_9", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_10", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_11", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_12", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_13", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_14", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_15", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_16", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_17", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_18", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_19", "Type" : "None", "Direction" : "I"},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.wr2_V_U", "Parent" : "31"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mux_205_16_1_1_U39", "Parent" : "31"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U40", "Parent" : "31"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U41", "Parent" : "31"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U42", "Parent" : "31"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U43", "Parent" : "31"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U44", "Parent" : "31"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U45", "Parent" : "31"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U46", "Parent" : "31"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U47", "Parent" : "31"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U48", "Parent" : "31"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U49", "Parent" : "31"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U50", "Parent" : "31"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U51", "Parent" : "31"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U52", "Parent" : "31"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U53", "Parent" : "31"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U54", "Parent" : "31"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U55", "Parent" : "31"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U56", "Parent" : "31"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U57", "Parent" : "31"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U58", "Parent" : "31"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U59", "Parent" : "31"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U60", "Parent" : "31"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U61", "Parent" : "31"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U62", "Parent" : "31"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U63", "Parent" : "31"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U64", "Parent" : "31"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U65", "Parent" : "31"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U66", "Parent" : "31"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U67", "Parent" : "31"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U68", "Parent" : "31"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U69", "Parent" : "31"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U70", "Parent" : "31"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U71", "Parent" : "31"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U72", "Parent" : "31"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U73", "Parent" : "31"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U74", "Parent" : "31"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U75", "Parent" : "31"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U76", "Parent" : "31"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U77", "Parent" : "31"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U78", "Parent" : "31"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U79", "Parent" : "31"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U80", "Parent" : "31"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U81", "Parent" : "31"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U82", "Parent" : "31"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U83", "Parent" : "31"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U84", "Parent" : "31"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U85", "Parent" : "31"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U86", "Parent" : "31"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U87", "Parent" : "31"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U88", "Parent" : "31"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U89", "Parent" : "31"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U90", "Parent" : "31"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U91", "Parent" : "31"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U92", "Parent" : "31"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U93", "Parent" : "31"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U94", "Parent" : "31"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U95", "Parent" : "31"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U96", "Parent" : "31"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U97", "Parent" : "31"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_16s_26_1_1_U98", "Parent" : "31"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s_fu_190.myproject_mul_mul_16s_12s_26_1_1_U99", "Parent" : "31"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_fu_236", "Parent" : "0", "Child" : ["95"],
		"CDFG" : "tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "tanh_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_fu_236.tanh_table2_U", "Parent" : "94"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U184", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U185", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U186", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U187", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U188", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U189", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U190", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U191", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U192", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U193", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U194", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U195", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U196", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U197", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U198", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U199", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U200", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U201", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U202", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_16s_16s_26_1_1_U203", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U204", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U205", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U206", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U207", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U208", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U209", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U210", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U211", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U212", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U213", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U214", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U215", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U216", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U217", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U218", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U219", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U220", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U221", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U222", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_17s_16s_26_1_1_U223", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U224", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U225", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U226", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U227", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U228", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U229", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U230", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U231", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U232", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U233", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U234", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U235", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U236", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U237", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U238", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U239", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U240", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U241", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U242", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_16s_16s_26s_26_1_1_U243", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s {
		reset_state {Type I LastRead 0 FirstWrite -1}
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		h_state_V_0 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_1 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_2 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_3 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_4 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_5 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_6 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_7 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_8 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_9 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_10 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_11 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_12 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_13 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_14 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_15 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_16 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_17 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_18 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_19 {Type IO LastRead -1 FirstWrite -1}
		outidx {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}
		sigmoid_table4 {Type I LastRead -1 FirstWrite -1}
		tanh_table2 {Type I LastRead -1 FirstWrite -1}}
	sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}
		data_32_V_read {Type I LastRead 0 FirstWrite -1}
		data_33_V_read {Type I LastRead 0 FirstWrite -1}
		data_34_V_read {Type I LastRead 0 FirstWrite -1}
		data_35_V_read {Type I LastRead 0 FirstWrite -1}
		data_36_V_read {Type I LastRead 0 FirstWrite -1}
		data_37_V_read {Type I LastRead 0 FirstWrite -1}
		data_38_V_read {Type I LastRead 0 FirstWrite -1}
		data_39_V_read {Type I LastRead 0 FirstWrite -1}
		sigmoid_table4 {Type I LastRead -1 FirstWrite -1}}
	dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_1_s {
		data_0_V_read {Type I LastRead 1 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 1 FirstWrite -1}
		outidx {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}
	dense_resource_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_2_s {
		h_state_V_0 {Type I LastRead 2 FirstWrite -1}
		h_state_V_1 {Type I LastRead 2 FirstWrite -1}
		h_state_V_2 {Type I LastRead 2 FirstWrite -1}
		h_state_V_3 {Type I LastRead 2 FirstWrite -1}
		h_state_V_4 {Type I LastRead 2 FirstWrite -1}
		h_state_V_5 {Type I LastRead 2 FirstWrite -1}
		h_state_V_6 {Type I LastRead 2 FirstWrite -1}
		h_state_V_7 {Type I LastRead 2 FirstWrite -1}
		h_state_V_8 {Type I LastRead 2 FirstWrite -1}
		h_state_V_9 {Type I LastRead 2 FirstWrite -1}
		h_state_V_10 {Type I LastRead 2 FirstWrite -1}
		h_state_V_11 {Type I LastRead 2 FirstWrite -1}
		h_state_V_12 {Type I LastRead 2 FirstWrite -1}
		h_state_V_13 {Type I LastRead 2 FirstWrite -1}
		h_state_V_14 {Type I LastRead 2 FirstWrite -1}
		h_state_V_15 {Type I LastRead 2 FirstWrite -1}
		h_state_V_16 {Type I LastRead 2 FirstWrite -1}
		h_state_V_17 {Type I LastRead 2 FirstWrite -1}
		h_state_V_18 {Type I LastRead 2 FirstWrite -1}
		h_state_V_19 {Type I LastRead 2 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}}
	tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		tanh_table2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "38", "Max" : "39"}
	, {"Name" : "Interval", "Min" : "38", "Max" : "39"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	reset_state { ap_none {  { reset_state in_data 0 1 } } }
	data_0_V_read { ap_none {  { data_0_V_read in_data 0 16 } } }
	data_1_V_read { ap_none {  { data_1_V_read in_data 0 16 } } }
	data_2_V_read { ap_none {  { data_2_V_read in_data 0 16 } } }
	data_3_V_read { ap_none {  { data_3_V_read in_data 0 16 } } }
	data_4_V_read { ap_none {  { data_4_V_read in_data 0 16 } } }
	data_5_V_read { ap_none {  { data_5_V_read in_data 0 16 } } }
}
