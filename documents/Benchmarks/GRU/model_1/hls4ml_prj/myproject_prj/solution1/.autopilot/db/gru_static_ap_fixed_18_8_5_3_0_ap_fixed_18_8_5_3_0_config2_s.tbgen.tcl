set moduleName gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s
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
set C_modelName {gru_static<ap_fixed<18, 8, 5, 3, 0>, ap_fixed<18, 8, 5, 3, 0>, config2>}
set C_modelType { int 90 }
set C_modelArgList {
	{ reset_state uint 1 regular  }
	{ data_0_V_read int 18 regular  }
	{ data_1_V_read int 18 regular  }
	{ data_2_V_read int 18 regular  }
	{ data_3_V_read int 18 regular  }
	{ data_4_V_read int 18 regular  }
	{ data_5_V_read int 18 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "reset_state", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "data_0_V_read", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "data_1_V_read", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "data_2_V_read", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "data_3_V_read", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "data_4_V_read", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "data_5_V_read", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 90} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ reset_state sc_in sc_logic 1 signal 0 } 
	{ data_0_V_read sc_in sc_lv 18 signal 1 } 
	{ data_1_V_read sc_in sc_lv 18 signal 2 } 
	{ data_2_V_read sc_in sc_lv 18 signal 3 } 
	{ data_3_V_read sc_in sc_lv 18 signal 4 } 
	{ data_4_V_read sc_in sc_lv 18 signal 5 } 
	{ data_5_V_read sc_in sc_lv 18 signal 6 } 
	{ ap_return_0 sc_out sc_lv 18 signal -1 } 
	{ ap_return_1 sc_out sc_lv 18 signal -1 } 
	{ ap_return_2 sc_out sc_lv 18 signal -1 } 
	{ ap_return_3 sc_out sc_lv 18 signal -1 } 
	{ ap_return_4 sc_out sc_lv 18 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "reset_state", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "reset_state", "role": "default" }} , 
 	{ "name": "data_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "data_0_V_read", "role": "default" }} , 
 	{ "name": "data_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "data_1_V_read", "role": "default" }} , 
 	{ "name": "data_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "data_2_V_read", "role": "default" }} , 
 	{ "name": "data_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "data_3_V_read", "role": "default" }} , 
 	{ "name": "data_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "data_4_V_read", "role": "default" }} , 
 	{ "name": "data_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "data_5_V_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "70", "138", "140", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156"],
		"CDFG" : "gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "8",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110"}],
		"Port" : [
			{"Name" : "reset_state", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sigmoid_table4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "grp_sigmoid_ap_fixed_ap_fixed_18_8_5_3_0_sigmoid_config2_recr_s_fu_119", "Port" : "sigmoid_table4"}]},
			{"Name" : "tanh_table2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "140", "SubInstance" : "grp_tanh_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_tanh_config2_s_fu_135", "Port" : "tanh_table2"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69"],
		"CDFG" : "dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s",
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
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_11ns_28_1_1_U1", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_11s_28_1_1_U2", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10ns_28_1_1_U3", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10s_28_1_1_U4", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_12ns_28_1_1_U5", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_8s_26_1_1_U6", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10s_28_1_1_U7", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10s_28_1_1_U8", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9s_27_1_1_U9", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10s_28_1_1_U10", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10ns_28_1_1_U11", "Parent" : "1"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_11ns_28_1_1_U12", "Parent" : "1"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_11ns_28_1_1_U13", "Parent" : "1"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_8ns_26_1_1_U14", "Parent" : "1"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_6ns_24_1_1_U15", "Parent" : "1"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10s_28_1_1_U16", "Parent" : "1"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_11ns_28_1_1_U17", "Parent" : "1"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10s_28_1_1_U18", "Parent" : "1"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_11ns_28_1_1_U19", "Parent" : "1"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10ns_28_1_1_U20", "Parent" : "1"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_12ns_28_1_1_U21", "Parent" : "1"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_11ns_28_1_1_U22", "Parent" : "1"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_12ns_28_1_1_U23", "Parent" : "1"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_11s_28_1_1_U24", "Parent" : "1"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10ns_28_1_1_U25", "Parent" : "1"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_12s_28_1_1_U26", "Parent" : "1"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_12ns_28_1_1_U27", "Parent" : "1"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_12ns_28_1_1_U28", "Parent" : "1"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10ns_28_1_1_U29", "Parent" : "1"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9ns_27_1_1_U30", "Parent" : "1"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9s_27_1_1_U31", "Parent" : "1"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10s_28_1_1_U32", "Parent" : "1"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_8s_26_1_1_U33", "Parent" : "1"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10ns_28_1_1_U34", "Parent" : "1"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_7ns_25_1_1_U35", "Parent" : "1"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10s_28_1_1_U36", "Parent" : "1"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10s_28_1_1_U37", "Parent" : "1"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9ns_27_1_1_U38", "Parent" : "1"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9ns_27_1_1_U39", "Parent" : "1"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9ns_27_1_1_U40", "Parent" : "1"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_7s_25_1_1_U41", "Parent" : "1"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_7s_25_1_1_U42", "Parent" : "1"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_8s_26_1_1_U43", "Parent" : "1"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10s_28_1_1_U44", "Parent" : "1"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9s_27_1_1_U45", "Parent" : "1"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9s_27_1_1_U46", "Parent" : "1"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9s_27_1_1_U47", "Parent" : "1"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_8ns_26_1_1_U48", "Parent" : "1"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_11ns_28_1_1_U49", "Parent" : "1"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9s_27_1_1_U50", "Parent" : "1"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_7s_25_1_1_U51", "Parent" : "1"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9s_27_1_1_U52", "Parent" : "1"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_8s_26_1_1_U53", "Parent" : "1"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_8ns_26_1_1_U54", "Parent" : "1"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10ns_28_1_1_U55", "Parent" : "1"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_7s_25_1_1_U56", "Parent" : "1"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_12s_28_1_1_U57", "Parent" : "1"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_7ns_25_1_1_U58", "Parent" : "1"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_13s_28_1_1_U59", "Parent" : "1"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10s_28_1_1_U60", "Parent" : "1"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9ns_27_1_1_U61", "Parent" : "1"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9s_27_1_1_U62", "Parent" : "1"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_9s_27_1_1_U63", "Parent" : "1"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_12s_28_1_1_U64", "Parent" : "1"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_10ns_28_1_1_U65", "Parent" : "1"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_6ns_24_1_1_U66", "Parent" : "1"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_8ns_26_1_1_U67", "Parent" : "1"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s_fu_94.myproject_mul_mul_18s_8s_26_1_1_U68", "Parent" : "1"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110", "Parent" : "0", "Child" : ["71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137"],
		"CDFG" : "dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s",
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
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U89", "Parent" : "70"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_14s_28_1_1_U90", "Parent" : "70"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U91", "Parent" : "70"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U92", "Parent" : "70"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_13s_28_1_1_U93", "Parent" : "70"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U94", "Parent" : "70"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11s_28_1_1_U95", "Parent" : "70"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_12s_28_1_1_U96", "Parent" : "70"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_14s_28_1_1_U97", "Parent" : "70"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_13s_28_1_1_U98", "Parent" : "70"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_10ns_28_1_1_U99", "Parent" : "70"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U100", "Parent" : "70"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_10s_28_1_1_U101", "Parent" : "70"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11s_28_1_1_U102", "Parent" : "70"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_13s_28_1_1_U103", "Parent" : "70"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_12s_28_1_1_U104", "Parent" : "70"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11s_28_1_1_U105", "Parent" : "70"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U106", "Parent" : "70"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_13s_28_1_1_U107", "Parent" : "70"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_13ns_28_1_1_U108", "Parent" : "70"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11s_28_1_1_U109", "Parent" : "70"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_10s_28_1_1_U110", "Parent" : "70"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_12ns_28_1_1_U111", "Parent" : "70"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U112", "Parent" : "70"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_12ns_28_1_1_U113", "Parent" : "70"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_12s_28_1_1_U114", "Parent" : "70"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_10ns_28_1_1_U115", "Parent" : "70"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U116", "Parent" : "70"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U117", "Parent" : "70"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_10s_28_1_1_U118", "Parent" : "70"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_10ns_28_1_1_U119", "Parent" : "70"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U120", "Parent" : "70"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_12ns_28_1_1_U121", "Parent" : "70"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11s_28_1_1_U122", "Parent" : "70"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U123", "Parent" : "70"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_7ns_25_1_1_U124", "Parent" : "70"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U125", "Parent" : "70"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U126", "Parent" : "70"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_10ns_28_1_1_U127", "Parent" : "70"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11s_28_1_1_U128", "Parent" : "70"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_10ns_28_1_1_U129", "Parent" : "70"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_10s_28_1_1_U130", "Parent" : "70"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_10ns_28_1_1_U131", "Parent" : "70"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_12ns_28_1_1_U132", "Parent" : "70"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_8s_26_1_1_U133", "Parent" : "70"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_12s_28_1_1_U134", "Parent" : "70"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11s_28_1_1_U135", "Parent" : "70"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_9s_27_1_1_U136", "Parent" : "70"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_12s_28_1_1_U137", "Parent" : "70"},
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U138", "Parent" : "70"},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U139", "Parent" : "70"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U140", "Parent" : "70"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_12ns_28_1_1_U141", "Parent" : "70"},
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11s_28_1_1_U142", "Parent" : "70"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_9ns_27_1_1_U143", "Parent" : "70"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11s_28_1_1_U144", "Parent" : "70"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_12ns_28_1_1_U145", "Parent" : "70"},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11s_28_1_1_U146", "Parent" : "70"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_12ns_28_1_1_U147", "Parent" : "70"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_9ns_27_1_1_U148", "Parent" : "70"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U149", "Parent" : "70"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_7ns_25_1_1_U150", "Parent" : "70"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U151", "Parent" : "70"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U152", "Parent" : "70"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_10ns_28_1_1_U153", "Parent" : "70"},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_9ns_27_1_1_U154", "Parent" : "70"},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s_fu_110.myproject_mul_mul_18s_11ns_28_1_1_U155", "Parent" : "70"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sigmoid_ap_fixed_ap_fixed_18_8_5_3_0_sigmoid_config2_recr_s_fu_119", "Parent" : "0", "Child" : ["139"],
		"CDFG" : "sigmoid_ap_fixed_ap_fixed_18_8_5_3_0_sigmoid_config2_recr_s",
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
			{"Name" : "sigmoid_table4", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sigmoid_ap_fixed_ap_fixed_18_8_5_3_0_sigmoid_config2_recr_s_fu_119.sigmoid_table4_U", "Parent" : "138"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_tanh_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_tanh_config2_s_fu_135", "Parent" : "0", "Child" : ["141"],
		"CDFG" : "tanh_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_tanh_config2_s",
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
			{"Name" : "tanh_table2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_tanh_config2_s_fu_135.tanh_table2_U", "Parent" : "140"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_18s_18s_28_1_1_U180", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_18s_18s_28_1_1_U181", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_18s_18s_28_1_1_U182", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_18s_18s_28_1_1_U183", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_18s_18s_28_1_1_U184", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_19s_18s_28_1_1_U185", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_19s_18s_28_1_1_U186", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_19s_18s_28_1_1_U187", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_19s_18s_28_1_1_U188", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mul_mul_19s_18s_28_1_1_U189", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_18s_18s_28s_28_1_1_U190", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_18s_18s_28s_28_1_1_U191", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_18s_18s_28s_28_1_1_U192", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_18s_18s_28s_28_1_1_U193", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.myproject_mac_muladd_18s_18s_28s_28_1_1_U194", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	gru_static_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_s {
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
		sigmoid_table4 {Type I LastRead -1 FirstWrite -1}
		tanh_table2 {Type I LastRead -1 FirstWrite -1}}
	dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_1_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}}
	dense_resource_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_config2_2_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}}
	sigmoid_ap_fixed_ap_fixed_18_8_5_3_0_sigmoid_config2_recr_s {
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
		sigmoid_table4 {Type I LastRead -1 FirstWrite -1}}
	tanh_ap_fixed_18_8_5_3_0_ap_fixed_18_8_5_3_0_tanh_config2_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		tanh_table2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "8", "Max" : "8"}
	, {"Name" : "Interval", "Min" : "8", "Max" : "8"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	reset_state { ap_none {  { reset_state in_data 0 1 } } }
	data_0_V_read { ap_none {  { data_0_V_read in_data 0 18 } } }
	data_1_V_read { ap_none {  { data_1_V_read in_data 0 18 } } }
	data_2_V_read { ap_none {  { data_2_V_read in_data 0 18 } } }
	data_3_V_read { ap_none {  { data_3_V_read in_data 0 18 } } }
	data_4_V_read { ap_none {  { data_4_V_read in_data 0 18 } } }
	data_5_V_read { ap_none {  { data_5_V_read in_data 0 18 } } }
}
