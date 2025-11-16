set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ q_conv2d_batchnorm_input_V_data_0_V int 8 regular {axi_s 0 volatile  { q_conv2d_batchnorm_input_V_data_0_V Data } }  }
	{ layer22_out_V_data_0_V int 16 regular {axi_s 1 volatile  { layer22_out_V_data_0_V Data } }  }
	{ layer22_out_V_data_1_V int 16 regular {axi_s 1 volatile  { layer22_out_V_data_1_V Data } }  }
	{ layer22_out_V_data_2_V int 16 regular {axi_s 1 volatile  { layer22_out_V_data_2_V Data } }  }
	{ layer22_out_V_data_3_V int 16 regular {axi_s 1 volatile  { layer22_out_V_data_3_V Data } }  }
	{ layer22_out_V_data_4_V int 16 regular {axi_s 1 volatile  { layer22_out_V_data_4_V Data } }  }
	{ const_size_in_1 int 16 regular {pointer 1}  }
	{ const_size_out_1 int 16 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "q_conv2d_batchnorm_input_V_data_0_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "q_conv2d_batchnorm_input.V.data.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer22_out_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer22_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer22_out_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer22_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "layer22_out_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer22_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "layer22_out_V_data_3_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer22_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "layer22_out_V_data_4_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer22_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "const_size_in_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_in_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_out_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_out_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 28
set portList { 
	{ q_conv2d_batchnorm_input_V_data_0_V_TDATA sc_in sc_lv 8 signal 0 } 
	{ layer22_out_V_data_0_V_TDATA sc_out sc_lv 16 signal 1 } 
	{ layer22_out_V_data_1_V_TDATA sc_out sc_lv 16 signal 2 } 
	{ layer22_out_V_data_2_V_TDATA sc_out sc_lv 16 signal 3 } 
	{ layer22_out_V_data_3_V_TDATA sc_out sc_lv 16 signal 4 } 
	{ layer22_out_V_data_4_V_TDATA sc_out sc_lv 16 signal 5 } 
	{ const_size_in_1 sc_out sc_lv 16 signal 6 } 
	{ const_size_out_1 sc_out sc_lv 16 signal 7 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ const_size_in_1_ap_vld sc_out sc_logic 1 outvld 6 } 
	{ const_size_out_1_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ q_conv2d_batchnorm_input_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ q_conv2d_batchnorm_input_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ layer22_out_V_data_0_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ layer22_out_V_data_0_V_TREADY sc_in sc_logic 1 outacc 1 } 
	{ layer22_out_V_data_1_V_TVALID sc_out sc_logic 1 outvld 2 } 
	{ layer22_out_V_data_1_V_TREADY sc_in sc_logic 1 outacc 2 } 
	{ layer22_out_V_data_2_V_TVALID sc_out sc_logic 1 outvld 3 } 
	{ layer22_out_V_data_2_V_TREADY sc_in sc_logic 1 outacc 3 } 
	{ layer22_out_V_data_3_V_TVALID sc_out sc_logic 1 outvld 4 } 
	{ layer22_out_V_data_3_V_TREADY sc_in sc_logic 1 outacc 4 } 
	{ layer22_out_V_data_4_V_TVALID sc_out sc_logic 1 outvld 5 } 
	{ layer22_out_V_data_4_V_TREADY sc_in sc_logic 1 outacc 5 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "q_conv2d_batchnorm_input_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "q_conv2d_batchnorm_input_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer22_out_V_data_0_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer22_out_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer22_out_V_data_1_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer22_out_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "layer22_out_V_data_2_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer22_out_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "layer22_out_V_data_3_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer22_out_V_data_3_V", "role": "TDATA" }} , 
 	{ "name": "layer22_out_V_data_4_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer22_out_V_data_4_V", "role": "TDATA" }} , 
 	{ "name": "const_size_in_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_in_1", "role": "default" }} , 
 	{ "name": "const_size_out_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_out_1", "role": "default" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "const_size_in_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_in_1", "role": "ap_vld" }} , 
 	{ "name": "const_size_out_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_out_1", "role": "ap_vld" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "q_conv2d_batchnorm_input_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "q_conv2d_batchnorm_input_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "q_conv2d_batchnorm_input_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "q_conv2d_batchnorm_input_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "layer22_out_V_data_0_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer22_out_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "layer22_out_V_data_0_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer22_out_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "layer22_out_V_data_1_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer22_out_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "layer22_out_V_data_1_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer22_out_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "layer22_out_V_data_2_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer22_out_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "layer22_out_V_data_2_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer22_out_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "layer22_out_V_data_3_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer22_out_V_data_3_V", "role": "TVALID" }} , 
 	{ "name": "layer22_out_V_data_3_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer22_out_V_data_3_V", "role": "TREADY" }} , 
 	{ "name": "layer22_out_V_data_4_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer22_out_V_data_4_V", "role": "TVALID" }} , 
 	{ "name": "layer22_out_V_data_4_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer22_out_V_data_4_V", "role": "TREADY" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "7", "8", "9", "35", "50", "51", "52", "62", "81", "82", "83", "95", "99", "100", "101", "105", "106", "107", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245", "246", "247", "248", "249", "250", "251", "252", "253", "254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265", "266", "267", "268", "269", "270", "271", "272", "273", "274", "275", "276", "277", "278", "279", "280", "281", "282", "283", "284", "285", "286", "287", "288", "289", "290", "291", "292", "293", "294", "295", "296", "297", "298", "299", "300", "301", "302", "303", "304", "305", "306"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "29962", "EstimateLatencyMax" : "29977",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "Block_proc_U0", "ReadyCount" : "Block_proc_U0_ap_ready_count"},
			{"ID" : "2", "Name" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "ReadyCount" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0_ap_ready_count"}],
		"OutputProcess" : [
			{"ID" : "1", "Name" : "Block_proc_U0"},
			{"ID" : "111", "Name" : "linear_array_array_ap_fixed_5u_linear_config22_U0"}],
		"Port" : [
			{"Name" : "q_conv2d_batchnorm_input_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "data_V_data_V"}]},
			{"Name" : "layer22_out_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "linear_array_array_ap_fixed_5u_linear_config22_U0", "Port" : "res_V_data_0_V"}]},
			{"Name" : "layer22_out_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "linear_array_array_ap_fixed_5u_linear_config22_U0", "Port" : "res_V_data_1_V"}]},
			{"Name" : "layer22_out_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "linear_array_array_ap_fixed_5u_linear_config22_U0", "Port" : "res_V_data_2_V"}]},
			{"Name" : "layer22_out_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "linear_array_array_ap_fixed_5u_linear_config22_U0", "Port" : "res_V_data_3_V"}]},
			{"Name" : "layer22_out_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "linear_array_array_ap_fixed_5u_linear_config22_U0", "Port" : "res_V_data_4_V"}]},
			{"Name" : "const_size_in_1", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "Block_proc_U0", "Port" : "const_size_in_1"}]},
			{"Name" : "const_size_out_1", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "Block_proc_U0", "Port" : "const_size_out_1"}]},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "kernel_data_V_8"}]},
			{"Name" : "kernel_data_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "kernel_data_V_0"}]},
			{"Name" : "kernel_data_V_1427", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "kernel_data_V_1427"}]},
			{"Name" : "kernel_data_V_2428", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "kernel_data_V_2428"}]},
			{"Name" : "kernel_data_V_3429", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "kernel_data_V_3429"}]},
			{"Name" : "kernel_data_V_4430", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "kernel_data_V_4430"}]},
			{"Name" : "kernel_data_V_5431", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "kernel_data_V_5431"}]},
			{"Name" : "kernel_data_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "kernel_data_V_6"}]},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "kernel_data_V_7"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "w2_V"}]},
			{"Name" : "pX_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "pX_5"}]},
			{"Name" : "sX_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "sX_5"}]},
			{"Name" : "pY_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "pY_5"}]},
			{"Name" : "sY_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "sY_5"}]},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1426_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Port" : "line_buffer_Array_V_1426_0"}]},
			{"Name" : "pX_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "pX_1"}]},
			{"Name" : "sX_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "sX_1"}]},
			{"Name" : "pY_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "pY_1"}]},
			{"Name" : "sY_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "sY_1"}]},
			{"Name" : "kernel_data_V_4_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_6"}]},
			{"Name" : "kernel_data_V_4_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_7"}]},
			{"Name" : "kernel_data_V_4_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_8"}]},
			{"Name" : "kernel_data_V_4_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_9"}]},
			{"Name" : "kernel_data_V_4_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_10"}]},
			{"Name" : "kernel_data_V_4_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_11"}]},
			{"Name" : "kernel_data_V_4_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_12"}]},
			{"Name" : "kernel_data_V_4_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_13"}]},
			{"Name" : "kernel_data_V_4_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_14"}]},
			{"Name" : "kernel_data_V_4_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_15"}]},
			{"Name" : "kernel_data_V_4_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_16"}]},
			{"Name" : "kernel_data_V_4_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_17"}]},
			{"Name" : "kernel_data_V_4_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_18"}]},
			{"Name" : "kernel_data_V_4_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_19"}]},
			{"Name" : "kernel_data_V_4_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_20"}]},
			{"Name" : "kernel_data_V_4_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_21"}]},
			{"Name" : "kernel_data_V_4_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_22"}]},
			{"Name" : "kernel_data_V_4_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_23"}]},
			{"Name" : "kernel_data_V_4_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_30"}]},
			{"Name" : "kernel_data_V_4_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_31"}]},
			{"Name" : "kernel_data_V_4_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_32"}]},
			{"Name" : "kernel_data_V_4_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_33"}]},
			{"Name" : "kernel_data_V_4_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_34"}]},
			{"Name" : "kernel_data_V_4_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_35"}]},
			{"Name" : "kernel_data_V_4_36", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_36"}]},
			{"Name" : "kernel_data_V_4_37", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_37"}]},
			{"Name" : "kernel_data_V_4_38", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_38"}]},
			{"Name" : "kernel_data_V_4_39", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_39"}]},
			{"Name" : "kernel_data_V_4_40", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_40"}]},
			{"Name" : "kernel_data_V_4_41", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_41"}]},
			{"Name" : "kernel_data_V_4_42", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_42"}]},
			{"Name" : "kernel_data_V_4_43", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_43"}]},
			{"Name" : "kernel_data_V_4_44", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_44"}]},
			{"Name" : "kernel_data_V_4_45", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_45"}]},
			{"Name" : "kernel_data_V_4_46", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_46"}]},
			{"Name" : "kernel_data_V_4_47", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_47"}]},
			{"Name" : "kernel_data_V_4_54", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_54"}]},
			{"Name" : "kernel_data_V_4_55", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_55"}]},
			{"Name" : "kernel_data_V_4_56", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_56"}]},
			{"Name" : "kernel_data_V_4_57", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_57"}]},
			{"Name" : "kernel_data_V_4_58", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_58"}]},
			{"Name" : "kernel_data_V_4_59", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_59"}]},
			{"Name" : "kernel_data_V_4_60", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_60"}]},
			{"Name" : "kernel_data_V_4_61", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_61"}]},
			{"Name" : "kernel_data_V_4_62", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_62"}]},
			{"Name" : "kernel_data_V_4_63", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_63"}]},
			{"Name" : "kernel_data_V_4_64", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_64"}]},
			{"Name" : "kernel_data_V_4_65", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_65"}]},
			{"Name" : "kernel_data_V_4_66", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_66"}]},
			{"Name" : "kernel_data_V_4_67", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_67"}]},
			{"Name" : "kernel_data_V_4_68", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_68"}]},
			{"Name" : "kernel_data_V_4_69", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_69"}]},
			{"Name" : "kernel_data_V_4_70", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_70"}]},
			{"Name" : "kernel_data_V_4_71", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_71"}]},
			{"Name" : "kernel_data_V_4_78", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_78"}]},
			{"Name" : "kernel_data_V_4_79", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_79"}]},
			{"Name" : "kernel_data_V_4_80", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_80"}]},
			{"Name" : "kernel_data_V_4_81", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_81"}]},
			{"Name" : "kernel_data_V_4_82", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_82"}]},
			{"Name" : "kernel_data_V_4_83", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_83"}]},
			{"Name" : "kernel_data_V_4_84", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_84"}]},
			{"Name" : "kernel_data_V_4_85", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_85"}]},
			{"Name" : "kernel_data_V_4_86", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_86"}]},
			{"Name" : "kernel_data_V_4_87", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_87"}]},
			{"Name" : "kernel_data_V_4_88", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_88"}]},
			{"Name" : "kernel_data_V_4_89", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_89"}]},
			{"Name" : "kernel_data_V_4_90", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_90"}]},
			{"Name" : "kernel_data_V_4_91", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_91"}]},
			{"Name" : "kernel_data_V_4_92", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_92"}]},
			{"Name" : "kernel_data_V_4_93", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_93"}]},
			{"Name" : "kernel_data_V_4_94", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_94"}]},
			{"Name" : "kernel_data_V_4_95", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "kernel_data_V_4_95"}]},
			{"Name" : "line_buffer_Array_V_4_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_0_0"}]},
			{"Name" : "line_buffer_Array_V_4_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_1_0"}]},
			{"Name" : "line_buffer_Array_V_4_2_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_2_0"}]},
			{"Name" : "line_buffer_Array_V_4_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_0_1"}]},
			{"Name" : "line_buffer_Array_V_4_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_1_1"}]},
			{"Name" : "line_buffer_Array_V_4_2_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_2_1"}]},
			{"Name" : "line_buffer_Array_V_4_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_0_2"}]},
			{"Name" : "line_buffer_Array_V_4_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_1_2"}]},
			{"Name" : "line_buffer_Array_V_4_2_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_2_2"}]},
			{"Name" : "line_buffer_Array_V_4_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_0_3"}]},
			{"Name" : "line_buffer_Array_V_4_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_1_3"}]},
			{"Name" : "line_buffer_Array_V_4_2_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_2_3"}]},
			{"Name" : "line_buffer_Array_V_4_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_0_4"}]},
			{"Name" : "line_buffer_Array_V_4_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_1_4"}]},
			{"Name" : "line_buffer_Array_V_4_2_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_2_4"}]},
			{"Name" : "line_buffer_Array_V_4_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_0_5"}]},
			{"Name" : "line_buffer_Array_V_4_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_1_5"}]},
			{"Name" : "line_buffer_Array_V_4_2_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Port" : "line_buffer_Array_V_4_2_5"}]},
			{"Name" : "w6_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "w6_V"}]},
			{"Name" : "pX_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "pX_4"}]},
			{"Name" : "sX_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "sX_4"}]},
			{"Name" : "pY_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "pY_4"}]},
			{"Name" : "sY_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "sY_4"}]},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_6"}]},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_7"}]},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_8"}]},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_9"}]},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_10"}]},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_11"}]},
			{"Name" : "kernel_data_V_1_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_12"}]},
			{"Name" : "kernel_data_V_1_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_13"}]},
			{"Name" : "kernel_data_V_1_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_14"}]},
			{"Name" : "kernel_data_V_1_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_15"}]},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_16"}]},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_17"}]},
			{"Name" : "kernel_data_V_1_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_24"}]},
			{"Name" : "kernel_data_V_1_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_25"}]},
			{"Name" : "kernel_data_V_1_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_26"}]},
			{"Name" : "kernel_data_V_1_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_27"}]},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_28"}]},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_29"}]},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_30"}]},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_31"}]},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_32"}]},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_33"}]},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_34"}]},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_35"}]},
			{"Name" : "kernel_data_V_1_42", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_42"}]},
			{"Name" : "kernel_data_V_1_43", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_43"}]},
			{"Name" : "kernel_data_V_1_44", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_44"}]},
			{"Name" : "kernel_data_V_1_45", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_45"}]},
			{"Name" : "kernel_data_V_1_46", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_46"}]},
			{"Name" : "kernel_data_V_1_47", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_47"}]},
			{"Name" : "kernel_data_V_1_48", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_48"}]},
			{"Name" : "kernel_data_V_1_49", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_49"}]},
			{"Name" : "kernel_data_V_1_50", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_50"}]},
			{"Name" : "kernel_data_V_1_51", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_51"}]},
			{"Name" : "kernel_data_V_1_52", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_52"}]},
			{"Name" : "kernel_data_V_1_53", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_53"}]},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "line_buffer_Array_V_1_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "line_buffer_Array_V_1_0_4"}]},
			{"Name" : "line_buffer_Array_V_1_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "line_buffer_Array_V_1_1_4"}]},
			{"Name" : "line_buffer_Array_V_1_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "line_buffer_Array_V_1_0_5"}]},
			{"Name" : "line_buffer_Array_V_1_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "line_buffer_Array_V_1_1_5"}]},
			{"Name" : "kernel_data_V_1_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_0"}]},
			{"Name" : "kernel_data_V_1_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_1"}]},
			{"Name" : "kernel_data_V_1_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_2"}]},
			{"Name" : "kernel_data_V_1_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_3"}]},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_4"}]},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_5"}]},
			{"Name" : "kernel_data_V_1_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_18"}]},
			{"Name" : "kernel_data_V_1_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_19"}]},
			{"Name" : "kernel_data_V_1_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_20"}]},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_21"}]},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_22"}]},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_23"}]},
			{"Name" : "kernel_data_V_1_36", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_36"}]},
			{"Name" : "kernel_data_V_1_37", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_37"}]},
			{"Name" : "kernel_data_V_1_38", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_38"}]},
			{"Name" : "kernel_data_V_1_39", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_39"}]},
			{"Name" : "kernel_data_V_1_40", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_40"}]},
			{"Name" : "kernel_data_V_1_41", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Port" : "kernel_data_V_1_41"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "pX"}]},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "sX"}]},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "pY"}]},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "sY"}]},
			{"Name" : "kernel_data_V_5_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_8"}]},
			{"Name" : "kernel_data_V_5_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_9"}]},
			{"Name" : "kernel_data_V_5_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_10"}]},
			{"Name" : "kernel_data_V_5_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_11"}]},
			{"Name" : "kernel_data_V_5_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_12"}]},
			{"Name" : "kernel_data_V_5_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_13"}]},
			{"Name" : "kernel_data_V_5_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_14"}]},
			{"Name" : "kernel_data_V_5_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_15"}]},
			{"Name" : "kernel_data_V_5_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_24"}]},
			{"Name" : "kernel_data_V_5_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_25"}]},
			{"Name" : "kernel_data_V_5_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_26"}]},
			{"Name" : "kernel_data_V_5_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_27"}]},
			{"Name" : "kernel_data_V_5_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_28"}]},
			{"Name" : "kernel_data_V_5_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_29"}]},
			{"Name" : "kernel_data_V_5_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_30"}]},
			{"Name" : "kernel_data_V_5_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "kernel_data_V_5_31"}]},
			{"Name" : "line_buffer_Array_V_5_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_0"}]},
			{"Name" : "line_buffer_Array_V_5_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_1"}]},
			{"Name" : "line_buffer_Array_V_5_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_2"}]},
			{"Name" : "line_buffer_Array_V_5_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_3"}]},
			{"Name" : "line_buffer_Array_V_5_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_4"}]},
			{"Name" : "line_buffer_Array_V_5_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_5"}]},
			{"Name" : "line_buffer_Array_V_5_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_6"}]},
			{"Name" : "line_buffer_Array_V_5_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_7"}]},
			{"Name" : "w10_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "w10_V"}]},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "pX_3"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "sX_3"}]},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "pY_3"}]},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "sY_3"}]},
			{"Name" : "kernel_data_V_2_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_8"}]},
			{"Name" : "kernel_data_V_2_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_9"}]},
			{"Name" : "kernel_data_V_2_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_10"}]},
			{"Name" : "kernel_data_V_2_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_11"}]},
			{"Name" : "kernel_data_V_2_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_12"}]},
			{"Name" : "kernel_data_V_2_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_13"}]},
			{"Name" : "kernel_data_V_2_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_14"}]},
			{"Name" : "kernel_data_V_2_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_15"}]},
			{"Name" : "kernel_data_V_2_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_16"}]},
			{"Name" : "kernel_data_V_2_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_17"}]},
			{"Name" : "kernel_data_V_2_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_18"}]},
			{"Name" : "kernel_data_V_2_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_19"}]},
			{"Name" : "kernel_data_V_2_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_20"}]},
			{"Name" : "kernel_data_V_2_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_21"}]},
			{"Name" : "kernel_data_V_2_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_22"}]},
			{"Name" : "kernel_data_V_2_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_23"}]},
			{"Name" : "kernel_data_V_2_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_32"}]},
			{"Name" : "kernel_data_V_2_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_33"}]},
			{"Name" : "kernel_data_V_2_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_34"}]},
			{"Name" : "kernel_data_V_2_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_35"}]},
			{"Name" : "kernel_data_V_2_36", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_36"}]},
			{"Name" : "kernel_data_V_2_37", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_37"}]},
			{"Name" : "kernel_data_V_2_38", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_38"}]},
			{"Name" : "kernel_data_V_2_39", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_39"}]},
			{"Name" : "kernel_data_V_2_40", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_40"}]},
			{"Name" : "kernel_data_V_2_41", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_41"}]},
			{"Name" : "kernel_data_V_2_42", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_42"}]},
			{"Name" : "kernel_data_V_2_43", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_43"}]},
			{"Name" : "kernel_data_V_2_44", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_44"}]},
			{"Name" : "kernel_data_V_2_45", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_45"}]},
			{"Name" : "kernel_data_V_2_46", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_46"}]},
			{"Name" : "kernel_data_V_2_47", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_47"}]},
			{"Name" : "kernel_data_V_2_56", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_56"}]},
			{"Name" : "kernel_data_V_2_57", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_57"}]},
			{"Name" : "kernel_data_V_2_58", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_58"}]},
			{"Name" : "kernel_data_V_2_59", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_59"}]},
			{"Name" : "kernel_data_V_2_60", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_60"}]},
			{"Name" : "kernel_data_V_2_61", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_61"}]},
			{"Name" : "kernel_data_V_2_62", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_62"}]},
			{"Name" : "kernel_data_V_2_63", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_63"}]},
			{"Name" : "kernel_data_V_2_64", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_64"}]},
			{"Name" : "kernel_data_V_2_65", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_65"}]},
			{"Name" : "kernel_data_V_2_66", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_66"}]},
			{"Name" : "kernel_data_V_2_67", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_67"}]},
			{"Name" : "kernel_data_V_2_68", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_68"}]},
			{"Name" : "kernel_data_V_2_69", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_69"}]},
			{"Name" : "kernel_data_V_2_70", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_70"}]},
			{"Name" : "kernel_data_V_2_71", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_71"}]},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_0"}]},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_0"}]},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_1"}]},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_1"}]},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_2"}]},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_2"}]},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_3"}]},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_3"}]},
			{"Name" : "line_buffer_Array_V_2_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_4"}]},
			{"Name" : "line_buffer_Array_V_2_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_4"}]},
			{"Name" : "line_buffer_Array_V_2_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_5"}]},
			{"Name" : "line_buffer_Array_V_2_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_5"}]},
			{"Name" : "line_buffer_Array_V_2_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_6"}]},
			{"Name" : "line_buffer_Array_V_2_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_6"}]},
			{"Name" : "line_buffer_Array_V_2_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_7"}]},
			{"Name" : "line_buffer_Array_V_2_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_7"}]},
			{"Name" : "kernel_data_V_2_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_0"}]},
			{"Name" : "kernel_data_V_2_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_1"}]},
			{"Name" : "kernel_data_V_2_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_2"}]},
			{"Name" : "kernel_data_V_2_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_3"}]},
			{"Name" : "kernel_data_V_2_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_4"}]},
			{"Name" : "kernel_data_V_2_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_5"}]},
			{"Name" : "kernel_data_V_2_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_6"}]},
			{"Name" : "kernel_data_V_2_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_7"}]},
			{"Name" : "kernel_data_V_2_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_24"}]},
			{"Name" : "kernel_data_V_2_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_25"}]},
			{"Name" : "kernel_data_V_2_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_26"}]},
			{"Name" : "kernel_data_V_2_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_27"}]},
			{"Name" : "kernel_data_V_2_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_28"}]},
			{"Name" : "kernel_data_V_2_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_29"}]},
			{"Name" : "kernel_data_V_2_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_30"}]},
			{"Name" : "kernel_data_V_2_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_31"}]},
			{"Name" : "kernel_data_V_2_48", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_48"}]},
			{"Name" : "kernel_data_V_2_49", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_49"}]},
			{"Name" : "kernel_data_V_2_50", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_50"}]},
			{"Name" : "kernel_data_V_2_51", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_51"}]},
			{"Name" : "kernel_data_V_2_52", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_52"}]},
			{"Name" : "kernel_data_V_2_53", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_53"}]},
			{"Name" : "kernel_data_V_2_54", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_54"}]},
			{"Name" : "kernel_data_V_2_55", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Port" : "kernel_data_V_2_55"}]},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "pX_2"}]},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "sX_2"}]},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "pY_2"}]},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "sY_2"}]},
			{"Name" : "kernel_data_V_3_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_10"}]},
			{"Name" : "kernel_data_V_3_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_11"}]},
			{"Name" : "kernel_data_V_3_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_12"}]},
			{"Name" : "kernel_data_V_3_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_13"}]},
			{"Name" : "kernel_data_V_3_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_14"}]},
			{"Name" : "kernel_data_V_3_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_15"}]},
			{"Name" : "kernel_data_V_3_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_16"}]},
			{"Name" : "kernel_data_V_3_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_17"}]},
			{"Name" : "kernel_data_V_3_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_18"}]},
			{"Name" : "kernel_data_V_3_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_19"}]},
			{"Name" : "kernel_data_V_3_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_30"}]},
			{"Name" : "kernel_data_V_3_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_31"}]},
			{"Name" : "kernel_data_V_3_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_32"}]},
			{"Name" : "kernel_data_V_3_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_33"}]},
			{"Name" : "kernel_data_V_3_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_34"}]},
			{"Name" : "kernel_data_V_3_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_35"}]},
			{"Name" : "kernel_data_V_3_36", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_36"}]},
			{"Name" : "kernel_data_V_3_37", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_37"}]},
			{"Name" : "kernel_data_V_3_38", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_38"}]},
			{"Name" : "kernel_data_V_3_39", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "kernel_data_V_3_39"}]},
			{"Name" : "line_buffer_Array_V_3_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_0"}]},
			{"Name" : "line_buffer_Array_V_3_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_1"}]},
			{"Name" : "line_buffer_Array_V_3_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_2"}]},
			{"Name" : "line_buffer_Array_V_3_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_3"}]},
			{"Name" : "line_buffer_Array_V_3_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_4"}]},
			{"Name" : "line_buffer_Array_V_3_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_5"}]},
			{"Name" : "line_buffer_Array_V_3_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_6"}]},
			{"Name" : "line_buffer_Array_V_3_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_7"}]},
			{"Name" : "line_buffer_Array_V_3_0_8", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_8"}]},
			{"Name" : "line_buffer_Array_V_3_0_9", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_9"}]},
			{"Name" : "w15_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "95", "SubInstance" : "dense_array_array_ap_fixed_8_2_5_3_0_15u_config15_U0", "Port" : "w15_V"}]},
			{"Name" : "w18_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "101", "SubInstance" : "dense_array_array_ap_fixed_8_2_5_3_0_10u_config18_U0", "Port" : "w18_V"}]},
			{"Name" : "w21_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "107", "SubInstance" : "dense_array_array_ap_fixed_8_2_5_3_0_5u_config21_U0", "Port" : "w21_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Block_proc_U0", "Parent" : "0",
		"CDFG" : "Block_proc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "const_size_in_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "const_size_out_1", "Type" : "Vld", "Direction" : "O"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_6u_config2_U0", "Parent" : "0", "Child" : ["3", "4"],
		"CDFG" : "conv_2d_cl_array_array_ap_fixed_6u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4608", "EstimateLatencyMax" : "29952",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "7", "DependentChan" : "112",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "7", "DependentChan" : "113",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "7", "DependentChan" : "114",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "7", "DependentChan" : "115",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "7", "DependentChan" : "116",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "7", "DependentChan" : "117",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1427", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2428", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3429", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4430", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5431", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pX_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_1u_config2_s_fu_371", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1426_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_1u_config2_s_fu_371", "Port" : "line_buffer_Array_V_1426_0"}]}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_6u_config2_U0.w2_V_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_6u_config2_U0.call_ret_shift_line_buffer_array_ap_ufixed_1u_config2_s_fu_371", "Parent" : "2", "Child" : ["5", "6"],
		"CDFG" : "shift_line_buffer_array_ap_ufixed_1u_config2_s",
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
			{"Name" : "kernel_window_8_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1426_0", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "5", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_6u_config2_U0.call_ret_shift_line_buffer_array_ap_ufixed_1u_config2_s_fu_371.line_buffer_Array_V_0_0_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_6u_config2_U0.call_ret_shift_line_buffer_array_ap_ufixed_1u_config2_s_fu_371.line_buffer_Array_V_1426_0_U", "Parent" : "4"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_array_array_ap_fixed_6u_linear_config3_U0", "Parent" : "0",
		"CDFG" : "linear_array_array_ap_fixed_6u_linear_config3_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2118", "EstimateLatencyMax" : "2118",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "2",
		"StartFifo" : "start_for_linear_array_array_ap_fixed_6u_linear_config3_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "112",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "113",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "114",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "115",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "116",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "117",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "118",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "119",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "120",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "121",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "122",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "123",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_array_ap_ufixed_6u_relu_config4_U0", "Parent" : "0",
		"CDFG" : "relu_array_array_ap_ufixed_6u_relu_config4_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2119", "EstimateLatencyMax" : "2119",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "7",
		"StartFifo" : "start_for_relu_array_array_ap_ufixed_6u_relu_config4_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "7", "DependentChan" : "118",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "7", "DependentChan" : "119",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "7", "DependentChan" : "120",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "7", "DependentChan" : "121",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "7", "DependentChan" : "122",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "7", "DependentChan" : "123",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "124",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "125",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "126",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "127",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "128",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "129",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0", "Parent" : "0", "Child" : ["10", "11", "12", "13", "14", "15", "16"],
		"CDFG" : "pooling2d_cl_array_array_ap_ufixed_6u_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2121", "EstimateLatencyMax" : "2121",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "8",
		"StartFifo" : "start_for_pooling2d_cl_array_array_ap_ufixed_6u_config5_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "124",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "125",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "126",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "127",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "128",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "129",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "130",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "131",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "132",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "133",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "134",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "135",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "pX_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_36", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_37", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_38", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_39", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_40", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_41", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_42", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_43", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_44", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_45", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_46", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_47", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_54", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_55", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_56", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_57", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_58", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_59", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_60", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_61", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_62", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_63", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_64", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_65", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_66", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_67", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_68", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_69", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_70", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_71", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_78", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_79", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_80", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_81", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_82", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_83", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_84", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_85", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_86", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_87", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_88", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_89", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_90", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_91", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_92", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_93", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_94", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_95", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_4_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_0_0"}]},
			{"Name" : "line_buffer_Array_V_4_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_1_0"}]},
			{"Name" : "line_buffer_Array_V_4_2_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_2_0"}]},
			{"Name" : "line_buffer_Array_V_4_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_0_1"}]},
			{"Name" : "line_buffer_Array_V_4_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_1_1"}]},
			{"Name" : "line_buffer_Array_V_4_2_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_2_1"}]},
			{"Name" : "line_buffer_Array_V_4_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_0_2"}]},
			{"Name" : "line_buffer_Array_V_4_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_1_2"}]},
			{"Name" : "line_buffer_Array_V_4_2_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_2_2"}]},
			{"Name" : "line_buffer_Array_V_4_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_0_3"}]},
			{"Name" : "line_buffer_Array_V_4_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_1_3"}]},
			{"Name" : "line_buffer_Array_V_4_2_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_2_3"}]},
			{"Name" : "line_buffer_Array_V_4_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_0_4"}]},
			{"Name" : "line_buffer_Array_V_4_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_1_4"}]},
			{"Name" : "line_buffer_Array_V_4_2_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_2_4"}]},
			{"Name" : "line_buffer_Array_V_4_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_0_5"}]},
			{"Name" : "line_buffer_Array_V_4_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_1_5"}]},
			{"Name" : "line_buffer_Array_V_4_2_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Port" : "line_buffer_Array_V_4_2_5"}]}]},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.grp_reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s_fu_466", "Parent" : "9",
		"CDFG" : "reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_15_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.grp_reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s_fu_487", "Parent" : "9",
		"CDFG" : "reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_15_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.grp_reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s_fu_508", "Parent" : "9",
		"CDFG" : "reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_15_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.grp_reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s_fu_529", "Parent" : "9",
		"CDFG" : "reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_15_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.grp_reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s_fu_550", "Parent" : "9",
		"CDFG" : "reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_15_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.grp_reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s_fu_571", "Parent" : "9",
		"CDFG" : "reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "x_15_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592", "Parent" : "9", "Child" : ["17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34"],
		"CDFG" : "shift_line_buffer_array_ap_ufixed_6u_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "kernel_window_90_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_91_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_92_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_93_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_94_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_95_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_63_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_64_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_65_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_66_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_67_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_68_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_69_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_70_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_71_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_78_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_79_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_80_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_81_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_82_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_83_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_84_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_85_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_86_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_87_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_88_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_89_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_90_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_91_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_92_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_93_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_94_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_95_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_4_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_2_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_2_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_2_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_1_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_2_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_1_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_2_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_1_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_2_5", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_0_0_U", "Parent" : "16"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_1_0_U", "Parent" : "16"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_2_0_U", "Parent" : "16"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_0_1_U", "Parent" : "16"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_1_1_U", "Parent" : "16"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_2_1_U", "Parent" : "16"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_0_2_U", "Parent" : "16"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_1_2_U", "Parent" : "16"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_2_2_U", "Parent" : "16"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_0_3_U", "Parent" : "16"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_1_3_U", "Parent" : "16"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_2_3_U", "Parent" : "16"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_0_4_U", "Parent" : "16"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_1_4_U", "Parent" : "16"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_2_4_U", "Parent" : "16"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_0_5_U", "Parent" : "16"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_1_5_U", "Parent" : "16"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_6u_config5_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config5_s_fu_592.line_buffer_Array_V_4_2_5_U", "Parent" : "16"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0", "Parent" : "0", "Child" : ["36", "37"],
		"CDFG" : "conv_2d_cl_array_array_ap_fixed_8u_config6_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "242", "EstimateLatencyMax" : "1694",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "9",
		"StartFifo" : "start_for_conv_2d_cl_array_array_ap_fixed_8u_config6_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "130",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "131",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "132",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "133",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "134",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "135",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "136",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "137",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "138",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "139",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "140",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "141",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "142",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "143",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "w6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pX_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_42", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_43", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_44", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_45", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_46", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_47", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_48", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_49", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_50", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_51", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_52", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_53", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "line_buffer_Array_V_1_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Port" : "line_buffer_Array_V_1_0_4"}]},
			{"Name" : "line_buffer_Array_V_1_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Port" : "line_buffer_Array_V_1_1_4"}]},
			{"Name" : "line_buffer_Array_V_1_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Port" : "line_buffer_Array_V_1_0_5"}]},
			{"Name" : "line_buffer_Array_V_1_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Port" : "line_buffer_Array_V_1_1_5"}]},
			{"Name" : "kernel_data_V_1_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_36", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_37", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_38", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_39", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_40", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_41", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.w6_V_U", "Parent" : "35"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913", "Parent" : "35", "Child" : ["38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49"],
		"CDFG" : "shift_line_buffer_array_ap_ufixed_6u_config6_s",
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
			{"Name" : "kernel_window_48_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_49_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_50_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_51_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_52_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_53_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_5", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913.line_buffer_Array_V_1_0_0_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913.line_buffer_Array_V_1_1_0_U", "Parent" : "37"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913.line_buffer_Array_V_1_0_1_U", "Parent" : "37"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913.line_buffer_Array_V_1_1_1_U", "Parent" : "37"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913.line_buffer_Array_V_1_0_2_U", "Parent" : "37"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913.line_buffer_Array_V_1_1_2_U", "Parent" : "37"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913.line_buffer_Array_V_1_0_3_U", "Parent" : "37"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913.line_buffer_Array_V_1_1_3_U", "Parent" : "37"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913.line_buffer_Array_V_1_0_4_U", "Parent" : "37"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913.line_buffer_Array_V_1_1_4_U", "Parent" : "37"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913.line_buffer_Array_V_1_0_5_U", "Parent" : "37"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config6_U0.call_ret_shift_line_buffer_array_ap_ufixed_6u_config6_s_fu_1913.line_buffer_Array_V_1_1_5_U", "Parent" : "37"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_array_array_ap_fixed_8u_linear_config7_U0", "Parent" : "0",
		"CDFG" : "linear_array_array_ap_fixed_8u_linear_config7_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "83", "EstimateLatencyMax" : "83",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "35",
		"StartFifo" : "start_for_linear_array_array_ap_fixed_8u_linear_config7_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "136",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "137",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "138",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "139",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "140",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "141",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "142",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "143",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "144",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "145",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "146",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "147",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "148",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "149",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "150",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "151",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_array_ap_ufixed_8u_relu_config8_U0", "Parent" : "0",
		"CDFG" : "relu_array_array_ap_ufixed_8u_relu_config8_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "84", "EstimateLatencyMax" : "84",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "50",
		"StartFifo" : "start_for_relu_array_array_ap_ufixed_8u_relu_config8_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "144",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "145",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "146",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "147",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "148",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "149",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "150",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "151",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "52", "DependentChan" : "152",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "52", "DependentChan" : "153",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "52", "DependentChan" : "154",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "52", "DependentChan" : "155",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "52", "DependentChan" : "156",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "52", "DependentChan" : "157",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "52", "DependentChan" : "158",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "52", "DependentChan" : "159",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8u_config9_U0", "Parent" : "0", "Child" : ["53"],
		"CDFG" : "pooling2d_cl_array_array_ap_ufixed_8u_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "84", "EstimateLatencyMax" : "84",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "51",
		"StartFifo" : "start_for_pooling2d_cl_array_array_ap_ufixed_8u_config9_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "152",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "153",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "154",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "155",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "156",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "157",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "158",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "159",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "160",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "161",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "162",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "163",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "164",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "165",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "166",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "62", "DependentChan" : "167",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_5_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396", "Port" : "line_buffer_Array_V_5_0_0"}]},
			{"Name" : "line_buffer_Array_V_5_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396", "Port" : "line_buffer_Array_V_5_0_1"}]},
			{"Name" : "line_buffer_Array_V_5_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396", "Port" : "line_buffer_Array_V_5_0_2"}]},
			{"Name" : "line_buffer_Array_V_5_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396", "Port" : "line_buffer_Array_V_5_0_3"}]},
			{"Name" : "line_buffer_Array_V_5_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396", "Port" : "line_buffer_Array_V_5_0_4"}]},
			{"Name" : "line_buffer_Array_V_5_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396", "Port" : "line_buffer_Array_V_5_0_5"}]},
			{"Name" : "line_buffer_Array_V_5_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396", "Port" : "line_buffer_Array_V_5_0_6"}]},
			{"Name" : "line_buffer_Array_V_5_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396", "Port" : "line_buffer_Array_V_5_0_7"}]}]},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8u_config9_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396", "Parent" : "52", "Child" : ["54", "55", "56", "57", "58", "59", "60", "61"],
		"CDFG" : "shift_line_buffer_array_ap_ufixed_8u_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "kernel_window_24_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_25_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_26_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_27_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_28_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_29_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_30_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_31_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_5_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_7", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8u_config9_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396.line_buffer_Array_V_5_0_0_U", "Parent" : "53"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8u_config9_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396.line_buffer_Array_V_5_0_1_U", "Parent" : "53"},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8u_config9_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396.line_buffer_Array_V_5_0_2_U", "Parent" : "53"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8u_config9_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396.line_buffer_Array_V_5_0_3_U", "Parent" : "53"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8u_config9_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396.line_buffer_Array_V_5_0_4_U", "Parent" : "53"},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8u_config9_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396.line_buffer_Array_V_5_0_5_U", "Parent" : "53"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8u_config9_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396.line_buffer_Array_V_5_0_6_U", "Parent" : "53"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8u_config9_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config9_s_fu_396.line_buffer_Array_V_5_0_7_U", "Parent" : "53"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0", "Parent" : "0", "Child" : ["63", "64"],
		"CDFG" : "conv_2d_cl_array_array_ap_fixed_10u_config10_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "32", "EstimateLatencyMax" : "224",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "52",
		"StartFifo" : "start_for_conv_2d_cl_array_array_ap_fixed_10u_config10_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "52", "DependentChan" : "160",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "52", "DependentChan" : "161",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "52", "DependentChan" : "162",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "52", "DependentChan" : "163",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "52", "DependentChan" : "164",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "52", "DependentChan" : "165",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "52", "DependentChan" : "166",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "52", "DependentChan" : "167",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "81", "DependentChan" : "168",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "81", "DependentChan" : "169",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "81", "DependentChan" : "170",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "81", "DependentChan" : "171",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "81", "DependentChan" : "172",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "81", "DependentChan" : "173",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "81", "DependentChan" : "174",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "81", "DependentChan" : "175",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "81", "DependentChan" : "176",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "81", "DependentChan" : "177",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "w10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_36", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_37", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_38", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_39", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_40", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_41", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_42", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_43", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_44", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_45", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_46", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_47", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_56", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_57", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_58", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_59", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_60", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_61", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_62", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_63", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_64", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_65", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_66", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_67", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_68", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_69", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_70", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_71", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_0_0"}]},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_1_0"}]},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_0_1"}]},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_1_1"}]},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_0_2"}]},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_1_2"}]},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_0_3"}]},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_1_3"}]},
			{"Name" : "line_buffer_Array_V_2_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_0_4"}]},
			{"Name" : "line_buffer_Array_V_2_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_1_4"}]},
			{"Name" : "line_buffer_Array_V_2_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_0_5"}]},
			{"Name" : "line_buffer_Array_V_2_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_1_5"}]},
			{"Name" : "line_buffer_Array_V_2_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_0_6"}]},
			{"Name" : "line_buffer_Array_V_2_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_1_6"}]},
			{"Name" : "line_buffer_Array_V_2_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_0_7"}]},
			{"Name" : "line_buffer_Array_V_2_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Port" : "line_buffer_Array_V_2_1_7"}]},
			{"Name" : "kernel_data_V_2_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_48", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_49", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_50", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_51", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_52", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_53", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_54", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_55", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.w10_V_U", "Parent" : "62"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016", "Parent" : "62", "Child" : ["65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80"],
		"CDFG" : "shift_line_buffer_array_ap_ufixed_8u_config10_s",
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
			{"Name" : "kernel_window_64_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_65_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_66_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_67_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_68_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_69_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_70_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_71_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_63_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_64_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_65_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_66_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_67_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_68_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_69_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_70_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_71_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_7", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_7", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_0_0_U", "Parent" : "64"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_1_0_U", "Parent" : "64"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_0_1_U", "Parent" : "64"},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_1_1_U", "Parent" : "64"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_0_2_U", "Parent" : "64"},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_1_2_U", "Parent" : "64"},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_0_3_U", "Parent" : "64"},
	{"ID" : "72", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_1_3_U", "Parent" : "64"},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_0_4_U", "Parent" : "64"},
	{"ID" : "74", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_1_4_U", "Parent" : "64"},
	{"ID" : "75", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_0_5_U", "Parent" : "64"},
	{"ID" : "76", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_1_5_U", "Parent" : "64"},
	{"ID" : "77", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_0_6_U", "Parent" : "64"},
	{"ID" : "78", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_1_6_U", "Parent" : "64"},
	{"ID" : "79", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_0_7_U", "Parent" : "64"},
	{"ID" : "80", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_10u_config10_U0.call_ret_shift_line_buffer_array_ap_ufixed_8u_config10_s_fu_3016.line_buffer_Array_V_2_1_7_U", "Parent" : "64"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_array_array_ap_fixed_10u_linear_config11_U0", "Parent" : "0",
		"CDFG" : "linear_array_array_ap_fixed_10u_linear_config11_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "6",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "62",
		"StartFifo" : "start_for_linear_array_array_ap_fixed_10u_linear_config11bfk_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "168",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "169",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "170",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "171",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "172",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "173",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "174",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "175",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "176",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "62", "DependentChan" : "177",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "82", "DependentChan" : "178",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "82", "DependentChan" : "179",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "82", "DependentChan" : "180",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "82", "DependentChan" : "181",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "82", "DependentChan" : "182",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "82", "DependentChan" : "183",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "82", "DependentChan" : "184",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "82", "DependentChan" : "185",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "82", "DependentChan" : "186",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "82", "DependentChan" : "187",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_array_ap_ufixed_10u_relu_config12_U0", "Parent" : "0",
		"CDFG" : "relu_array_array_ap_ufixed_10u_relu_config12_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "7", "EstimateLatencyMax" : "7",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "81",
		"StartFifo" : "start_for_relu_array_array_ap_ufixed_10u_relu_config12_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "81", "DependentChan" : "178",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "81", "DependentChan" : "179",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "81", "DependentChan" : "180",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "81", "DependentChan" : "181",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "81", "DependentChan" : "182",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "81", "DependentChan" : "183",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "81", "DependentChan" : "184",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "81", "DependentChan" : "185",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "81", "DependentChan" : "186",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "81", "DependentChan" : "187",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "188",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "189",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "190",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "191",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "192",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "193",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "194",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "195",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "196",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "83", "DependentChan" : "197",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_10u_config13_U0", "Parent" : "0", "Child" : ["84"],
		"CDFG" : "pooling2d_cl_array_array_ap_ufixed_10u_config13_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "7", "EstimateLatencyMax" : "7",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "82",
		"StartFifo" : "start_for_pooling2d_cl_array_array_ap_ufixed_10u_config13bgk_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "82", "DependentChan" : "188",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "82", "DependentChan" : "189",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "82", "DependentChan" : "190",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "82", "DependentChan" : "191",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "82", "DependentChan" : "192",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "82", "DependentChan" : "193",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "82", "DependentChan" : "194",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "82", "DependentChan" : "195",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "82", "DependentChan" : "196",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "82", "DependentChan" : "197",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "95", "DependentChan" : "198",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "95", "DependentChan" : "199",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "95", "DependentChan" : "200",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "95", "DependentChan" : "201",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "95", "DependentChan" : "202",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "95", "DependentChan" : "203",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "95", "DependentChan" : "204",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "95", "DependentChan" : "205",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "95", "DependentChan" : "206",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "95", "DependentChan" : "207",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_36", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_37", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_38", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_39", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_3_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472", "Port" : "line_buffer_Array_V_3_0_0"}]},
			{"Name" : "line_buffer_Array_V_3_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472", "Port" : "line_buffer_Array_V_3_0_1"}]},
			{"Name" : "line_buffer_Array_V_3_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472", "Port" : "line_buffer_Array_V_3_0_2"}]},
			{"Name" : "line_buffer_Array_V_3_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472", "Port" : "line_buffer_Array_V_3_0_3"}]},
			{"Name" : "line_buffer_Array_V_3_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472", "Port" : "line_buffer_Array_V_3_0_4"}]},
			{"Name" : "line_buffer_Array_V_3_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472", "Port" : "line_buffer_Array_V_3_0_5"}]},
			{"Name" : "line_buffer_Array_V_3_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472", "Port" : "line_buffer_Array_V_3_0_6"}]},
			{"Name" : "line_buffer_Array_V_3_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472", "Port" : "line_buffer_Array_V_3_0_7"}]},
			{"Name" : "line_buffer_Array_V_3_0_8", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472", "Port" : "line_buffer_Array_V_3_0_8"}]},
			{"Name" : "line_buffer_Array_V_3_0_9", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472", "Port" : "line_buffer_Array_V_3_0_9"}]}]},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_10u_config13_U0.call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472", "Parent" : "83", "Child" : ["85", "86", "87", "88", "89", "90", "91", "92", "93", "94"],
		"CDFG" : "shift_line_buffer_array_ap_ufixed_10u_config13_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "kernel_window_30_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_31_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_32_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_33_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_34_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_35_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_36_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_37_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_38_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_39_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_3_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_7", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_8", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_9", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "85", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_10u_config13_U0.call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472.line_buffer_Array_V_3_0_0_U", "Parent" : "84"},
	{"ID" : "86", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_10u_config13_U0.call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472.line_buffer_Array_V_3_0_1_U", "Parent" : "84"},
	{"ID" : "87", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_10u_config13_U0.call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472.line_buffer_Array_V_3_0_2_U", "Parent" : "84"},
	{"ID" : "88", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_10u_config13_U0.call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472.line_buffer_Array_V_3_0_3_U", "Parent" : "84"},
	{"ID" : "89", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_10u_config13_U0.call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472.line_buffer_Array_V_3_0_4_U", "Parent" : "84"},
	{"ID" : "90", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_10u_config13_U0.call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472.line_buffer_Array_V_3_0_5_U", "Parent" : "84"},
	{"ID" : "91", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_10u_config13_U0.call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472.line_buffer_Array_V_3_0_6_U", "Parent" : "84"},
	{"ID" : "92", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_10u_config13_U0.call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472.line_buffer_Array_V_3_0_7_U", "Parent" : "84"},
	{"ID" : "93", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_10u_config13_U0.call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472.line_buffer_Array_V_3_0_8_U", "Parent" : "84"},
	{"ID" : "94", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_10u_config13_U0.call_ret_shift_line_buffer_array_ap_ufixed_10u_config13_s_fu_472.line_buffer_Array_V_3_0_9_U", "Parent" : "84"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_array_array_ap_fixed_8_2_5_3_0_15u_config15_U0", "Parent" : "0", "Child" : ["96"],
		"CDFG" : "dense_array_array_ap_fixed_8_2_5_3_0_15u_config15_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "13", "EstimateLatencyMax" : "14",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "83",
		"StartFifo" : "start_for_dense_array_array_ap_fixed_8_2_5_3_0_15u_configbhl_U",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config15_s_fu_447"}],
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "198",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "199",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "200",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "201",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "202",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "203",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "204",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "205",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "206",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "83", "DependentChan" : "207",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "208",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "209",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "210",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "211",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "212",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "213",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "214",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "215",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "216",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "217",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "218",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "219",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "220",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "221",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "222",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "w15_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config15_s_fu_447", "Port" : "w15_V"}]}]},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_array_ap_fixed_8_2_5_3_0_15u_config15_U0.grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config15_s_fu_447", "Parent" : "95", "Child" : ["97", "98"],
		"CDFG" : "dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config15_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "12",
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
			{"Name" : "w15_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "97", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_array_ap_fixed_8_2_5_3_0_15u_config15_U0.grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config15_s_fu_447.w15_V_U", "Parent" : "96"},
	{"ID" : "98", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_array_ap_fixed_8_2_5_3_0_15u_config15_U0.grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config15_s_fu_447.myproject_mux_104_8_1_1_U448", "Parent" : "96"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_array_array_ap_fixed_15u_linear_config16_U0", "Parent" : "0",
		"CDFG" : "linear_array_array_ap_fixed_15u_linear_config16_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "95",
		"StartFifo" : "start_for_linear_array_array_ap_fixed_15u_linear_config16bil_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "208",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "209",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "210",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "211",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "212",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "213",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "214",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "215",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "216",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "217",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_10_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "218",
				"BlockSignal" : [
					{"Name" : "data_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_11_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "219",
				"BlockSignal" : [
					{"Name" : "data_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_12_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "220",
				"BlockSignal" : [
					{"Name" : "data_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_13_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "221",
				"BlockSignal" : [
					{"Name" : "data_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_14_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "95", "DependentChan" : "222",
				"BlockSignal" : [
					{"Name" : "data_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "223",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "224",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "225",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "226",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "227",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "228",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "229",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "230",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "231",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "232",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "233",
				"BlockSignal" : [
					{"Name" : "res_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "234",
				"BlockSignal" : [
					{"Name" : "res_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "235",
				"BlockSignal" : [
					{"Name" : "res_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "236",
				"BlockSignal" : [
					{"Name" : "res_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "100", "DependentChan" : "237",
				"BlockSignal" : [
					{"Name" : "res_V_data_14_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_array_ap_ufixed_15u_relu_config17_U0", "Parent" : "0",
		"CDFG" : "relu_array_array_ap_ufixed_15u_relu_config17_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "99",
		"StartFifo" : "start_for_relu_array_array_ap_ufixed_15u_relu_config17_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "223",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "224",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "225",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "226",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "227",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "228",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "229",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "230",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "231",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "232",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_10_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "233",
				"BlockSignal" : [
					{"Name" : "data_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_11_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "234",
				"BlockSignal" : [
					{"Name" : "data_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_12_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "235",
				"BlockSignal" : [
					{"Name" : "data_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_13_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "236",
				"BlockSignal" : [
					{"Name" : "data_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_14_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "99", "DependentChan" : "237",
				"BlockSignal" : [
					{"Name" : "data_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "238",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "239",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "240",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "241",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "242",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "243",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "244",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "245",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "246",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "247",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "248",
				"BlockSignal" : [
					{"Name" : "res_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "249",
				"BlockSignal" : [
					{"Name" : "res_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "250",
				"BlockSignal" : [
					{"Name" : "res_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "251",
				"BlockSignal" : [
					{"Name" : "res_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "101", "DependentChan" : "252",
				"BlockSignal" : [
					{"Name" : "res_V_data_14_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_array_array_ap_fixed_8_2_5_3_0_10u_config18_U0", "Parent" : "0", "Child" : ["102"],
		"CDFG" : "dense_array_array_ap_fixed_8_2_5_3_0_10u_config18_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "19",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "100",
		"StartFifo" : "start_for_dense_array_array_ap_fixed_8_2_5_3_0_10u_configbjl_U",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config18_s_fu_442"}],
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "238",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "239",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "240",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "241",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "242",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "243",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "244",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "245",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "246",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "247",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_10_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "248",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_11_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "249",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_12_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "250",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_13_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "251",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_14_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "100", "DependentChan" : "252",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "105", "DependentChan" : "253",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "105", "DependentChan" : "254",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "105", "DependentChan" : "255",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "105", "DependentChan" : "256",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "105", "DependentChan" : "257",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "105", "DependentChan" : "258",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "105", "DependentChan" : "259",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "105", "DependentChan" : "260",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "105", "DependentChan" : "261",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "105", "DependentChan" : "262",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "w18_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "102", "SubInstance" : "grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config18_s_fu_442", "Port" : "w18_V"}]}]},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_array_ap_fixed_8_2_5_3_0_10u_config18_U0.grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config18_s_fu_442", "Parent" : "101", "Child" : ["103", "104"],
		"CDFG" : "dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config18_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "16", "EstimateLatencyMax" : "17",
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
			{"Name" : "w18_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_array_ap_fixed_8_2_5_3_0_10u_config18_U0.grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config18_s_fu_442.w18_V_U", "Parent" : "102"},
	{"ID" : "104", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_array_ap_fixed_8_2_5_3_0_10u_config18_U0.grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config18_s_fu_442.myproject_mux_154_8_1_1_U546", "Parent" : "102"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_array_array_ap_fixed_10u_linear_config19_U0", "Parent" : "0",
		"CDFG" : "linear_array_array_ap_fixed_10u_linear_config19_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "101",
		"StartFifo" : "start_for_linear_array_array_ap_fixed_10u_linear_config19bkl_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "101", "DependentChan" : "253",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "101", "DependentChan" : "254",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "101", "DependentChan" : "255",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "101", "DependentChan" : "256",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "101", "DependentChan" : "257",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "101", "DependentChan" : "258",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "101", "DependentChan" : "259",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "101", "DependentChan" : "260",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "101", "DependentChan" : "261",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "101", "DependentChan" : "262",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "106", "DependentChan" : "263",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "106", "DependentChan" : "264",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "106", "DependentChan" : "265",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "106", "DependentChan" : "266",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "106", "DependentChan" : "267",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "106", "DependentChan" : "268",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "106", "DependentChan" : "269",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "106", "DependentChan" : "270",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "106", "DependentChan" : "271",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "106", "DependentChan" : "272",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_array_ap_ufixed_10u_relu_config20_U0", "Parent" : "0",
		"CDFG" : "relu_array_array_ap_ufixed_10u_relu_config20_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "105",
		"StartFifo" : "start_for_relu_array_array_ap_ufixed_10u_relu_config20_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "105", "DependentChan" : "263",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "105", "DependentChan" : "264",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "105", "DependentChan" : "265",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "105", "DependentChan" : "266",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "105", "DependentChan" : "267",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "105", "DependentChan" : "268",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "105", "DependentChan" : "269",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "105", "DependentChan" : "270",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "105", "DependentChan" : "271",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "105", "DependentChan" : "272",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "107", "DependentChan" : "273",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "107", "DependentChan" : "274",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "107", "DependentChan" : "275",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "107", "DependentChan" : "276",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "107", "DependentChan" : "277",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "107", "DependentChan" : "278",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "107", "DependentChan" : "279",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "107", "DependentChan" : "280",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "107", "DependentChan" : "281",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "107", "DependentChan" : "282",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_array_array_ap_fixed_8_2_5_3_0_5u_config21_U0", "Parent" : "0", "Child" : ["108"],
		"CDFG" : "dense_array_array_ap_fixed_8_2_5_3_0_5u_config21_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "13", "EstimateLatencyMax" : "14",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "106",
		"StartFifo" : "start_for_dense_array_array_ap_fixed_8_2_5_3_0_5u_config2bll_U",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config21_s_fu_277"}],
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "106", "DependentChan" : "273",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "106", "DependentChan" : "274",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "106", "DependentChan" : "275",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "106", "DependentChan" : "276",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "106", "DependentChan" : "277",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "106", "DependentChan" : "278",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "106", "DependentChan" : "279",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "106", "DependentChan" : "280",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "106", "DependentChan" : "281",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "106", "DependentChan" : "282",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "111", "DependentChan" : "283",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "111", "DependentChan" : "284",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "111", "DependentChan" : "285",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "111", "DependentChan" : "286",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "111", "DependentChan" : "287",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "w21_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "108", "SubInstance" : "grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config21_s_fu_277", "Port" : "w21_V"}]}]},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_array_ap_fixed_8_2_5_3_0_5u_config21_U0.grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config21_s_fu_277", "Parent" : "107", "Child" : ["109", "110"],
		"CDFG" : "dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config21_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "12",
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
			{"Name" : "w21_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "109", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_array_ap_fixed_8_2_5_3_0_5u_config21_U0.grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config21_s_fu_277.w21_V_U", "Parent" : "108"},
	{"ID" : "110", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_array_ap_fixed_8_2_5_3_0_5u_config21_U0.grp_dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config21_s_fu_277.myproject_mux_104_8_1_1_U629", "Parent" : "108"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_array_array_ap_fixed_5u_linear_config22_U0", "Parent" : "0",
		"CDFG" : "linear_array_array_ap_fixed_5u_linear_config22_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "107",
		"StartFifo" : "start_for_linear_array_array_ap_fixed_5u_linear_config22_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "107", "DependentChan" : "283",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "107", "DependentChan" : "284",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "107", "DependentChan" : "285",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "107", "DependentChan" : "286",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "107", "DependentChan" : "287",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_TDATA_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "167", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "168", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "169", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "170", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "171", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "172", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "173", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "174", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "175", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "176", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "177", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "178", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "179", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "180", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "181", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "182", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "183", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "184", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "185", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "186", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "187", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "188", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "189", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "190", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "191", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "192", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "193", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "194", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "195", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "196", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "197", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "198", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "199", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "200", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "201", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "202", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "203", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "204", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "205", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "206", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "207", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "208", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "209", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "210", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "211", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "212", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "213", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "214", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "215", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "216", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "217", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "218", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_10_V_U", "Parent" : "0"},
	{"ID" : "219", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_11_V_U", "Parent" : "0"},
	{"ID" : "220", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_12_V_U", "Parent" : "0"},
	{"ID" : "221", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_13_V_U", "Parent" : "0"},
	{"ID" : "222", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_14_V_U", "Parent" : "0"},
	{"ID" : "223", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "224", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "225", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "226", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "227", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "228", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "229", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "230", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "231", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "232", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "233", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_10_V_U", "Parent" : "0"},
	{"ID" : "234", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_11_V_U", "Parent" : "0"},
	{"ID" : "235", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_12_V_U", "Parent" : "0"},
	{"ID" : "236", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_13_V_U", "Parent" : "0"},
	{"ID" : "237", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_14_V_U", "Parent" : "0"},
	{"ID" : "238", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "239", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "240", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "241", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "242", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "243", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "244", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "245", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "246", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "247", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "248", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_10_V_U", "Parent" : "0"},
	{"ID" : "249", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_11_V_U", "Parent" : "0"},
	{"ID" : "250", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_12_V_U", "Parent" : "0"},
	{"ID" : "251", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_13_V_U", "Parent" : "0"},
	{"ID" : "252", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_14_V_U", "Parent" : "0"},
	{"ID" : "253", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "254", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "255", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "256", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "257", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "258", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "259", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "260", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "261", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "262", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "263", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "264", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "265", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "266", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "267", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "268", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "269", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "270", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "271", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "272", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "273", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "274", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "275", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "276", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "277", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "278", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "279", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "280", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "281", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "282", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "283", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer21_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "284", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer21_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "285", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer21_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "286", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer21_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "287", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer21_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "288", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_linear_array_array_ap_fixed_6u_linear_config3_U0_U", "Parent" : "0"},
	{"ID" : "289", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_array_ap_ufixed_6u_relu_config4_U0_U", "Parent" : "0"},
	{"ID" : "290", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_array_ap_ufixed_6u_config5_U0_U", "Parent" : "0"},
	{"ID" : "291", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv_2d_cl_array_array_ap_fixed_8u_config6_U0_U", "Parent" : "0"},
	{"ID" : "292", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_linear_array_array_ap_fixed_8u_linear_config7_U0_U", "Parent" : "0"},
	{"ID" : "293", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_array_ap_ufixed_8u_relu_config8_U0_U", "Parent" : "0"},
	{"ID" : "294", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_array_ap_ufixed_8u_config9_U0_U", "Parent" : "0"},
	{"ID" : "295", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv_2d_cl_array_array_ap_fixed_10u_config10_U0_U", "Parent" : "0"},
	{"ID" : "296", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_linear_array_array_ap_fixed_10u_linear_config11bfk_U", "Parent" : "0"},
	{"ID" : "297", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_array_ap_ufixed_10u_relu_config12_U0_U", "Parent" : "0"},
	{"ID" : "298", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_array_ap_ufixed_10u_config13bgk_U", "Parent" : "0"},
	{"ID" : "299", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_dense_array_array_ap_fixed_8_2_5_3_0_15u_configbhl_U", "Parent" : "0"},
	{"ID" : "300", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_linear_array_array_ap_fixed_15u_linear_config16bil_U", "Parent" : "0"},
	{"ID" : "301", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_array_ap_ufixed_15u_relu_config17_U0_U", "Parent" : "0"},
	{"ID" : "302", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_dense_array_array_ap_fixed_8_2_5_3_0_10u_configbjl_U", "Parent" : "0"},
	{"ID" : "303", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_linear_array_array_ap_fixed_10u_linear_config19bkl_U", "Parent" : "0"},
	{"ID" : "304", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_array_ap_ufixed_10u_relu_config20_U0_U", "Parent" : "0"},
	{"ID" : "305", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_dense_array_array_ap_fixed_8_2_5_3_0_5u_config2bll_U", "Parent" : "0"},
	{"ID" : "306", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_linear_array_array_ap_fixed_5u_linear_config22_U0_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		q_conv2d_batchnorm_input_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		layer22_out_V_data_0_V {Type O LastRead -1 FirstWrite 0}
		layer22_out_V_data_1_V {Type O LastRead -1 FirstWrite 0}
		layer22_out_V_data_2_V {Type O LastRead -1 FirstWrite 0}
		layer22_out_V_data_3_V {Type O LastRead -1 FirstWrite 0}
		layer22_out_V_data_4_V {Type O LastRead -1 FirstWrite 0}
		const_size_in_1 {Type O LastRead -1 FirstWrite 0}
		const_size_out_1 {Type O LastRead -1 FirstWrite 0}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1427 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2428 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3429 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4430 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5431 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		pX_5 {Type IO LastRead -1 FirstWrite -1}
		sX_5 {Type IO LastRead -1 FirstWrite -1}
		pY_5 {Type IO LastRead -1 FirstWrite -1}
		sY_5 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1426_0 {Type X LastRead -1 FirstWrite -1}
		pX_1 {Type IO LastRead -1 FirstWrite -1}
		sX_1 {Type IO LastRead -1 FirstWrite -1}
		pY_1 {Type IO LastRead -1 FirstWrite -1}
		sY_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_54 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_55 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_63 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_64 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_65 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_66 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_67 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_68 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_69 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_70 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_71 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_78 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_79 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_80 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_81 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_82 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_83 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_84 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_85 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_86 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_87 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_88 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_89 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_90 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_91 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_92 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_93 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_94 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_95 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_5 {Type X LastRead -1 FirstWrite -1}
		w6_V {Type I LastRead -1 FirstWrite -1}
		pX_4 {Type IO LastRead -1 FirstWrite -1}
		sX_4 {Type IO LastRead -1 FirstWrite -1}
		pY_4 {Type IO LastRead -1 FirstWrite -1}
		sY_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_48 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_49 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_50 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_51 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_52 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_53 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_5 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_1_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_3 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_41 {Type IO LastRead -1 FirstWrite -1}
		pX {Type IO LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_31 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_7 {Type X LastRead -1 FirstWrite -1}
		w10_V {Type I LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_63 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_64 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_65 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_66 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_67 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_68 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_69 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_70 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_71 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_7 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_2_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_3 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_48 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_49 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_50 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_51 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_52 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_53 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_54 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_55 {Type IO LastRead -1 FirstWrite -1}
		pX_2 {Type IO LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_39 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_8 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_9 {Type X LastRead -1 FirstWrite -1}
		w15_V {Type I LastRead -1 FirstWrite -1}
		w18_V {Type I LastRead -1 FirstWrite -1}
		w21_V {Type I LastRead -1 FirstWrite -1}}
	Block_proc {
		const_size_in_1 {Type O LastRead -1 FirstWrite 0}
		const_size_out_1 {Type O LastRead -1 FirstWrite 0}}
	conv_2d_cl_array_array_ap_fixed_6u_config2_s {
		data_V_data_V {Type I LastRead 1 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 5}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1427 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2428 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3429 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4430 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5431 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		pX_5 {Type IO LastRead -1 FirstWrite -1}
		sX_5 {Type IO LastRead -1 FirstWrite -1}
		pY_5 {Type IO LastRead -1 FirstWrite -1}
		sY_5 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1426_0 {Type X LastRead -1 FirstWrite -1}}
	shift_line_buffer_array_ap_ufixed_1u_config2_s {
		kernel_window_8_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_1_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_2_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_4_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_5_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_7_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1426_0 {Type X LastRead -1 FirstWrite -1}}
	linear_array_array_ap_fixed_6u_linear_config3_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}}
	relu_array_array_ap_ufixed_6u_relu_config4_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 3}}
	pooling2d_cl_array_array_ap_ufixed_6u_config5_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 5}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 5}
		pX_1 {Type IO LastRead -1 FirstWrite -1}
		sX_1 {Type IO LastRead -1 FirstWrite -1}
		pY_1 {Type IO LastRead -1 FirstWrite -1}
		sY_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_54 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_55 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_63 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_64 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_65 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_66 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_67 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_68 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_69 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_70 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_71 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_78 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_79 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_80 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_81 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_82 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_83 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_84 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_85 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_86 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_87 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_88 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_89 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_90 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_91 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_92 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_93 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_94 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_95 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_5 {Type X LastRead -1 FirstWrite -1}}
	reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s {
		x_0_V_read {Type I LastRead 0 FirstWrite -1}
		x_1_V_read {Type I LastRead 0 FirstWrite -1}
		x_2_V_read {Type I LastRead 0 FirstWrite -1}
		x_3_V_read {Type I LastRead 0 FirstWrite -1}
		x_4_V_read {Type I LastRead 0 FirstWrite -1}
		x_5_V_read {Type I LastRead 0 FirstWrite -1}
		x_6_V_read {Type I LastRead 0 FirstWrite -1}
		x_7_V_read {Type I LastRead 0 FirstWrite -1}
		x_8_V_read {Type I LastRead 0 FirstWrite -1}
		x_9_V_read {Type I LastRead 0 FirstWrite -1}
		x_10_V_read {Type I LastRead 0 FirstWrite -1}
		x_11_V_read {Type I LastRead 0 FirstWrite -1}
		x_12_V_read {Type I LastRead 0 FirstWrite -1}
		x_13_V_read {Type I LastRead 0 FirstWrite -1}
		x_14_V_read {Type I LastRead 0 FirstWrite -1}
		x_15_V_read {Type I LastRead 0 FirstWrite -1}}
	reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s {
		x_0_V_read {Type I LastRead 0 FirstWrite -1}
		x_1_V_read {Type I LastRead 0 FirstWrite -1}
		x_2_V_read {Type I LastRead 0 FirstWrite -1}
		x_3_V_read {Type I LastRead 0 FirstWrite -1}
		x_4_V_read {Type I LastRead 0 FirstWrite -1}
		x_5_V_read {Type I LastRead 0 FirstWrite -1}
		x_6_V_read {Type I LastRead 0 FirstWrite -1}
		x_7_V_read {Type I LastRead 0 FirstWrite -1}
		x_8_V_read {Type I LastRead 0 FirstWrite -1}
		x_9_V_read {Type I LastRead 0 FirstWrite -1}
		x_10_V_read {Type I LastRead 0 FirstWrite -1}
		x_11_V_read {Type I LastRead 0 FirstWrite -1}
		x_12_V_read {Type I LastRead 0 FirstWrite -1}
		x_13_V_read {Type I LastRead 0 FirstWrite -1}
		x_14_V_read {Type I LastRead 0 FirstWrite -1}
		x_15_V_read {Type I LastRead 0 FirstWrite -1}}
	reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s {
		x_0_V_read {Type I LastRead 0 FirstWrite -1}
		x_1_V_read {Type I LastRead 0 FirstWrite -1}
		x_2_V_read {Type I LastRead 0 FirstWrite -1}
		x_3_V_read {Type I LastRead 0 FirstWrite -1}
		x_4_V_read {Type I LastRead 0 FirstWrite -1}
		x_5_V_read {Type I LastRead 0 FirstWrite -1}
		x_6_V_read {Type I LastRead 0 FirstWrite -1}
		x_7_V_read {Type I LastRead 0 FirstWrite -1}
		x_8_V_read {Type I LastRead 0 FirstWrite -1}
		x_9_V_read {Type I LastRead 0 FirstWrite -1}
		x_10_V_read {Type I LastRead 0 FirstWrite -1}
		x_11_V_read {Type I LastRead 0 FirstWrite -1}
		x_12_V_read {Type I LastRead 0 FirstWrite -1}
		x_13_V_read {Type I LastRead 0 FirstWrite -1}
		x_14_V_read {Type I LastRead 0 FirstWrite -1}
		x_15_V_read {Type I LastRead 0 FirstWrite -1}}
	reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s {
		x_0_V_read {Type I LastRead 0 FirstWrite -1}
		x_1_V_read {Type I LastRead 0 FirstWrite -1}
		x_2_V_read {Type I LastRead 0 FirstWrite -1}
		x_3_V_read {Type I LastRead 0 FirstWrite -1}
		x_4_V_read {Type I LastRead 0 FirstWrite -1}
		x_5_V_read {Type I LastRead 0 FirstWrite -1}
		x_6_V_read {Type I LastRead 0 FirstWrite -1}
		x_7_V_read {Type I LastRead 0 FirstWrite -1}
		x_8_V_read {Type I LastRead 0 FirstWrite -1}
		x_9_V_read {Type I LastRead 0 FirstWrite -1}
		x_10_V_read {Type I LastRead 0 FirstWrite -1}
		x_11_V_read {Type I LastRead 0 FirstWrite -1}
		x_12_V_read {Type I LastRead 0 FirstWrite -1}
		x_13_V_read {Type I LastRead 0 FirstWrite -1}
		x_14_V_read {Type I LastRead 0 FirstWrite -1}
		x_15_V_read {Type I LastRead 0 FirstWrite -1}}
	reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s {
		x_0_V_read {Type I LastRead 0 FirstWrite -1}
		x_1_V_read {Type I LastRead 0 FirstWrite -1}
		x_2_V_read {Type I LastRead 0 FirstWrite -1}
		x_3_V_read {Type I LastRead 0 FirstWrite -1}
		x_4_V_read {Type I LastRead 0 FirstWrite -1}
		x_5_V_read {Type I LastRead 0 FirstWrite -1}
		x_6_V_read {Type I LastRead 0 FirstWrite -1}
		x_7_V_read {Type I LastRead 0 FirstWrite -1}
		x_8_V_read {Type I LastRead 0 FirstWrite -1}
		x_9_V_read {Type I LastRead 0 FirstWrite -1}
		x_10_V_read {Type I LastRead 0 FirstWrite -1}
		x_11_V_read {Type I LastRead 0 FirstWrite -1}
		x_12_V_read {Type I LastRead 0 FirstWrite -1}
		x_13_V_read {Type I LastRead 0 FirstWrite -1}
		x_14_V_read {Type I LastRead 0 FirstWrite -1}
		x_15_V_read {Type I LastRead 0 FirstWrite -1}}
	reduce_ap_ufixed_16_Op_max_ap_ufixed_8_2_5_3_0_s {
		x_0_V_read {Type I LastRead 0 FirstWrite -1}
		x_1_V_read {Type I LastRead 0 FirstWrite -1}
		x_2_V_read {Type I LastRead 0 FirstWrite -1}
		x_3_V_read {Type I LastRead 0 FirstWrite -1}
		x_4_V_read {Type I LastRead 0 FirstWrite -1}
		x_5_V_read {Type I LastRead 0 FirstWrite -1}
		x_6_V_read {Type I LastRead 0 FirstWrite -1}
		x_7_V_read {Type I LastRead 0 FirstWrite -1}
		x_8_V_read {Type I LastRead 0 FirstWrite -1}
		x_9_V_read {Type I LastRead 0 FirstWrite -1}
		x_10_V_read {Type I LastRead 0 FirstWrite -1}
		x_11_V_read {Type I LastRead 0 FirstWrite -1}
		x_12_V_read {Type I LastRead 0 FirstWrite -1}
		x_13_V_read {Type I LastRead 0 FirstWrite -1}
		x_14_V_read {Type I LastRead 0 FirstWrite -1}
		x_15_V_read {Type I LastRead 0 FirstWrite -1}}
	shift_line_buffer_array_ap_ufixed_6u_config5_s {
		kernel_window_90_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_91_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_92_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_93_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_94_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_95_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_6_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_7_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_9_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_10_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_11_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_12_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_13_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_14_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_15_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_16_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_17_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_18_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_19_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_20_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_21_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_22_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_23_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_30_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_31_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_32_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_33_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_34_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_35_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_36_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_37_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_38_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_39_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_40_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_41_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_42_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_43_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_44_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_45_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_46_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_47_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_54_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_55_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_56_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_57_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_58_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_59_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_60_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_61_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_62_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_63_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_64_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_65_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_66_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_67_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_68_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_69_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_70_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_71_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_78_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_79_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_80_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_81_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_82_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_83_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_84_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_85_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_86_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_87_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_88_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_89_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_90_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_91_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_92_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_93_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_94_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_95_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_4_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_5 {Type X LastRead -1 FirstWrite -1}}
	conv_2d_cl_array_array_ap_fixed_8u_config6_s {
		data_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 1 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 6}
		w6_V {Type I LastRead -1 FirstWrite -1}
		pX_4 {Type IO LastRead -1 FirstWrite -1}
		sX_4 {Type IO LastRead -1 FirstWrite -1}
		pY_4 {Type IO LastRead -1 FirstWrite -1}
		sY_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_48 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_49 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_50 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_51 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_52 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_53 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_5 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_1_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_3 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_41 {Type IO LastRead -1 FirstWrite -1}}
	shift_line_buffer_array_ap_ufixed_6u_config6_s {
		kernel_window_48_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_49_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_50_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_51_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_52_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_53_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_6_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_7_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_9_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_10_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_11_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_12_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_13_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_14_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_15_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_16_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_17_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_24_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_25_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_26_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_27_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_28_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_29_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_30_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_31_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_32_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_33_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_34_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_35_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_42_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_43_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_44_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_45_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_46_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_47_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_48_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_49_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_50_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_51_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_52_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_53_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_5 {Type X LastRead -1 FirstWrite -1}}
	linear_array_array_ap_fixed_8u_linear_config7_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 2}}
	relu_array_array_ap_ufixed_8u_relu_config8_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 3}}
	pooling2d_cl_array_array_ap_ufixed_8u_config9_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 3}
		pX {Type IO LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_31 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_7 {Type X LastRead -1 FirstWrite -1}}
	shift_line_buffer_array_ap_ufixed_8u_config9_s {
		kernel_window_24_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_25_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_26_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_27_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_28_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_29_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_30_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_31_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_9_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_10_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_11_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_12_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_13_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_14_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_15_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_24_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_25_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_26_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_27_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_28_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_29_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_30_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_31_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_5_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_7 {Type X LastRead -1 FirstWrite -1}}
	conv_2d_cl_array_array_ap_fixed_10u_config10_s {
		data_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 1 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 7}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 7}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 7}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 7}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 7}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 7}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 7}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 7}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 7}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 7}
		w10_V {Type I LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_63 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_64 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_65 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_66 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_67 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_68 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_69 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_70 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_71 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_7 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_2_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_3 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_4 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_5 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_48 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_49 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_50 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_51 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_52 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_53 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_54 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_55 {Type IO LastRead -1 FirstWrite -1}}
	shift_line_buffer_array_ap_ufixed_8u_config10_s {
		kernel_window_64_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_65_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_66_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_67_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_68_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_69_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_70_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_71_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_9_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_10_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_11_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_12_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_13_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_14_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_15_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_16_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_17_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_18_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_19_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_20_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_21_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_22_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_23_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_32_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_33_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_34_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_35_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_36_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_37_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_38_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_39_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_40_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_41_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_42_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_43_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_44_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_45_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_46_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_47_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_56_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_57_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_58_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_59_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_60_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_61_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_62_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_63_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_64_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_65_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_66_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_67_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_68_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_69_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_70_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_71_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_2_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_7 {Type X LastRead -1 FirstWrite -1}}
	linear_array_array_ap_fixed_10u_linear_config11_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 2}}
	relu_array_array_ap_ufixed_10u_relu_config12_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 3}}
	pooling2d_cl_array_array_ap_ufixed_10u_config13_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 3}
		pX_2 {Type IO LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_39 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_8 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_9 {Type X LastRead -1 FirstWrite -1}}
	shift_line_buffer_array_ap_ufixed_10u_config13_s {
		kernel_window_30_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_31_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_32_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_33_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_34_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_35_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_36_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_37_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_38_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_39_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_10_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_11_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_12_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_13_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_14_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_15_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_16_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_17_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_18_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_19_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_30_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_31_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_32_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_33_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_34_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_35_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_36_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_37_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_38_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_39_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_3_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_8 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_9 {Type X LastRead -1 FirstWrite -1}}
	dense_array_array_ap_fixed_8_2_5_3_0_15u_config15_s {
		data_stream_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_10_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_11_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_12_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_13_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_14_V {Type O LastRead -1 FirstWrite 2}
		w15_V {Type I LastRead -1 FirstWrite -1}}
	dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config15_s {
		data_0_V_read {Type I LastRead 1 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 1 FirstWrite -1}
		data_6_V_read {Type I LastRead 1 FirstWrite -1}
		data_7_V_read {Type I LastRead 1 FirstWrite -1}
		data_8_V_read {Type I LastRead 1 FirstWrite -1}
		data_9_V_read {Type I LastRead 1 FirstWrite -1}
		w15_V {Type I LastRead -1 FirstWrite -1}}
	linear_array_array_ap_fixed_15u_linear_config16_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_10_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_11_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_12_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_13_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_14_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_10_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_11_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_12_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_13_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_14_V {Type O LastRead -1 FirstWrite 0}}
	relu_array_array_ap_ufixed_15u_relu_config17_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_10_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_11_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_12_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_13_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_14_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_10_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_11_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_12_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_13_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_14_V {Type O LastRead -1 FirstWrite 1}}
	dense_array_array_ap_fixed_8_2_5_3_0_10u_config18_s {
		data_stream_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_10_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_11_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_12_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_13_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_14_V {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 2}
		w18_V {Type I LastRead -1 FirstWrite -1}}
	dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config18_s {
		data_0_V_read {Type I LastRead 1 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 1 FirstWrite -1}
		data_6_V_read {Type I LastRead 1 FirstWrite -1}
		data_7_V_read {Type I LastRead 1 FirstWrite -1}
		data_8_V_read {Type I LastRead 1 FirstWrite -1}
		data_9_V_read {Type I LastRead 1 FirstWrite -1}
		data_10_V_read {Type I LastRead 1 FirstWrite -1}
		data_11_V_read {Type I LastRead 1 FirstWrite -1}
		data_12_V_read {Type I LastRead 1 FirstWrite -1}
		data_13_V_read {Type I LastRead 1 FirstWrite -1}
		data_14_V_read {Type I LastRead 1 FirstWrite -1}
		w18_V {Type I LastRead -1 FirstWrite -1}}
	linear_array_array_ap_fixed_10u_linear_config19_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 0}}
	relu_array_array_ap_ufixed_10u_relu_config20_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 1}}
	dense_array_array_ap_fixed_8_2_5_3_0_5u_config21_s {
		data_stream_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		w21_V {Type I LastRead -1 FirstWrite -1}}
	dense_wrapper_ap_ufixed_ap_fixed_8_2_5_3_0_config21_s {
		data_0_V_read {Type I LastRead 1 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 1 FirstWrite -1}
		data_6_V_read {Type I LastRead 1 FirstWrite -1}
		data_7_V_read {Type I LastRead 1 FirstWrite -1}
		data_8_V_read {Type I LastRead 1 FirstWrite -1}
		data_9_V_read {Type I LastRead 1 FirstWrite -1}
		w21_V {Type I LastRead -1 FirstWrite -1}}
	linear_array_array_ap_fixed_5u_linear_config22_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "29962", "Max" : "29977"}
	, {"Name" : "Interval", "Min" : "4609", "Max" : "29953"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	q_conv2d_batchnorm_input_V_data_0_V { axis {  { q_conv2d_batchnorm_input_V_data_0_V_TDATA in_data 0 8 }  { q_conv2d_batchnorm_input_V_data_0_V_TVALID in_vld 0 1 }  { q_conv2d_batchnorm_input_V_data_0_V_TREADY in_acc 1 1 } } }
	layer22_out_V_data_0_V { axis {  { layer22_out_V_data_0_V_TDATA out_data 1 16 }  { layer22_out_V_data_0_V_TVALID out_vld 1 1 }  { layer22_out_V_data_0_V_TREADY out_acc 0 1 } } }
	layer22_out_V_data_1_V { axis {  { layer22_out_V_data_1_V_TDATA out_data 1 16 }  { layer22_out_V_data_1_V_TVALID out_vld 1 1 }  { layer22_out_V_data_1_V_TREADY out_acc 0 1 } } }
	layer22_out_V_data_2_V { axis {  { layer22_out_V_data_2_V_TDATA out_data 1 16 }  { layer22_out_V_data_2_V_TVALID out_vld 1 1 }  { layer22_out_V_data_2_V_TREADY out_acc 0 1 } } }
	layer22_out_V_data_3_V { axis {  { layer22_out_V_data_3_V_TDATA out_data 1 16 }  { layer22_out_V_data_3_V_TVALID out_vld 1 1 }  { layer22_out_V_data_3_V_TREADY out_acc 0 1 } } }
	layer22_out_V_data_4_V { axis {  { layer22_out_V_data_4_V_TDATA out_data 1 16 }  { layer22_out_V_data_4_V_TVALID out_vld 1 1 }  { layer22_out_V_data_4_V_TREADY out_acc 0 1 } } }
	const_size_in_1 { ap_vld {  { const_size_in_1 out_data 1 16 }  { const_size_in_1_ap_vld out_vld 1 1 } } }
	const_size_out_1 { ap_vld {  { const_size_out_1 out_data 1 16 }  { const_size_out_1_ap_vld out_vld 1 1 } } }
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
set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ q_conv2d_batchnorm_input_V_data_0_V int 8 regular {axi_s 0 volatile  { q_conv2d_batchnorm_input_V_data_0_V Data } }  }
	{ layer22_out_V_data_0_V int 16 regular {axi_s 1 volatile  { layer22_out_V_data_0_V Data } }  }
	{ layer22_out_V_data_1_V int 16 regular {axi_s 1 volatile  { layer22_out_V_data_1_V Data } }  }
	{ layer22_out_V_data_2_V int 16 regular {axi_s 1 volatile  { layer22_out_V_data_2_V Data } }  }
	{ layer22_out_V_data_3_V int 16 regular {axi_s 1 volatile  { layer22_out_V_data_3_V Data } }  }
	{ layer22_out_V_data_4_V int 16 regular {axi_s 1 volatile  { layer22_out_V_data_4_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "q_conv2d_batchnorm_input_V_data_0_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "q_conv2d_batchnorm_input.V.data.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer22_out_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer22_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer22_out_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer22_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "layer22_out_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer22_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "layer22_out_V_data_3_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer22_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "layer22_out_V_data_4_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer22_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 24
set portList { 
	{ q_conv2d_batchnorm_input_V_data_0_V_TDATA sc_in sc_lv 8 signal 0 } 
	{ layer22_out_V_data_0_V_TDATA sc_out sc_lv 16 signal 1 } 
	{ layer22_out_V_data_1_V_TDATA sc_out sc_lv 16 signal 2 } 
	{ layer22_out_V_data_2_V_TDATA sc_out sc_lv 16 signal 3 } 
	{ layer22_out_V_data_3_V_TDATA sc_out sc_lv 16 signal 4 } 
	{ layer22_out_V_data_4_V_TDATA sc_out sc_lv 16 signal 5 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ q_conv2d_batchnorm_input_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ q_conv2d_batchnorm_input_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ layer22_out_V_data_0_V_TVALID sc_out sc_logic 1 outvld 1 } 
	{ layer22_out_V_data_0_V_TREADY sc_in sc_logic 1 outacc 1 } 
	{ layer22_out_V_data_1_V_TVALID sc_out sc_logic 1 outvld 2 } 
	{ layer22_out_V_data_1_V_TREADY sc_in sc_logic 1 outacc 2 } 
	{ layer22_out_V_data_2_V_TVALID sc_out sc_logic 1 outvld 3 } 
	{ layer22_out_V_data_2_V_TREADY sc_in sc_logic 1 outacc 3 } 
	{ layer22_out_V_data_3_V_TVALID sc_out sc_logic 1 outvld 4 } 
	{ layer22_out_V_data_3_V_TREADY sc_in sc_logic 1 outacc 4 } 
	{ layer22_out_V_data_4_V_TVALID sc_out sc_logic 1 outvld 5 } 
	{ layer22_out_V_data_4_V_TREADY sc_in sc_logic 1 outacc 5 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "q_conv2d_batchnorm_input_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "q_conv2d_batchnorm_input_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer22_out_V_data_0_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer22_out_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer22_out_V_data_1_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer22_out_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "layer22_out_V_data_2_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer22_out_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "layer22_out_V_data_3_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer22_out_V_data_3_V", "role": "TDATA" }} , 
 	{ "name": "layer22_out_V_data_4_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer22_out_V_data_4_V", "role": "TDATA" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "q_conv2d_batchnorm_input_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "q_conv2d_batchnorm_input_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "q_conv2d_batchnorm_input_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "q_conv2d_batchnorm_input_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "layer22_out_V_data_0_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer22_out_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "layer22_out_V_data_0_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer22_out_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "layer22_out_V_data_1_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer22_out_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "layer22_out_V_data_1_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer22_out_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "layer22_out_V_data_2_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer22_out_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "layer22_out_V_data_2_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer22_out_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "layer22_out_V_data_3_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer22_out_V_data_3_V", "role": "TVALID" }} , 
 	{ "name": "layer22_out_V_data_3_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer22_out_V_data_3_V", "role": "TREADY" }} , 
 	{ "name": "layer22_out_V_data_4_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer22_out_V_data_4_V", "role": "TVALID" }} , 
 	{ "name": "layer22_out_V_data_4_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer22_out_V_data_4_V", "role": "TREADY" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "8", "9", "10", "71", "136", "137", "138", "155", "266", "267", "268", "289", "293", "294", "295", "299", "300", "301", "305", "306", "307", "308", "309", "310", "311", "312", "313", "314", "315", "316", "317", "318", "319", "320", "321", "322", "323", "324", "325", "326", "327", "328", "329", "330", "331", "332", "333", "334", "335", "336", "337", "338", "339", "340", "341", "342", "343", "344", "345", "346", "347", "348", "349", "350", "351", "352", "353", "354", "355", "356", "357", "358", "359", "360", "361", "362", "363", "364", "365", "366", "367", "368", "369", "370", "371", "372", "373", "374", "375", "376", "377", "378", "379", "380", "381", "382", "383", "384", "385", "386", "387", "388", "389", "390", "391", "392", "393", "394", "395", "396", "397", "398", "399", "400", "401", "402", "403", "404", "405", "406", "407", "408", "409", "410", "411", "412", "413", "414", "415", "416", "417", "418", "419", "420", "421", "422", "423", "424", "425", "426", "427", "428", "429", "430", "431", "432", "433", "434", "435", "436", "437", "438", "439", "440", "441", "442", "443", "444", "445", "446", "447", "448", "449", "450", "451", "452", "453", "454", "455", "456", "457", "458", "459", "460", "461", "462", "463", "464", "465", "466", "467", "468", "469", "470", "471", "472", "473", "474", "475", "476", "477", "478", "479", "480", "481", "482", "483", "484", "485", "486", "487", "488", "489", "490", "491", "492", "493", "494", "495", "496", "497", "498", "499", "500"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "34576", "EstimateLatencyMax" : "34583",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0"}],
		"OutputProcess" : [
			{"ID" : "305", "Name" : "linear_array_array_ap_fixed_16_6_5_3_0_5u_linear_config22_U0"}],
		"Port" : [
			{"Name" : "q_conv2d_batchnorm_input_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "data_V_data_V"}]},
			{"Name" : "layer22_out_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "305", "SubInstance" : "linear_array_array_ap_fixed_16_6_5_3_0_5u_linear_config22_U0", "Port" : "res_V_data_0_V"}]},
			{"Name" : "layer22_out_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "305", "SubInstance" : "linear_array_array_ap_fixed_16_6_5_3_0_5u_linear_config22_U0", "Port" : "res_V_data_1_V"}]},
			{"Name" : "layer22_out_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "305", "SubInstance" : "linear_array_array_ap_fixed_16_6_5_3_0_5u_linear_config22_U0", "Port" : "res_V_data_2_V"}]},
			{"Name" : "layer22_out_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "305", "SubInstance" : "linear_array_array_ap_fixed_16_6_5_3_0_5u_linear_config22_U0", "Port" : "res_V_data_3_V"}]},
			{"Name" : "layer22_out_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "305", "SubInstance" : "linear_array_array_ap_fixed_16_6_5_3_0_5u_linear_config22_U0", "Port" : "res_V_data_4_V"}]},
			{"Name" : "kernel_data_V_1411", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "kernel_data_V_1411"}]},
			{"Name" : "kernel_data_V_2412", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "kernel_data_V_2412"}]},
			{"Name" : "kernel_data_V_4414", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "kernel_data_V_4414"}]},
			{"Name" : "kernel_data_V_5415", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "kernel_data_V_5415"}]},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "kernel_data_V_7"}]},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "kernel_data_V_8"}]},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1410_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "line_buffer_Array_V_1410_0"}]},
			{"Name" : "kernel_data_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "kernel_data_V_0"}]},
			{"Name" : "kernel_data_V_3413", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "kernel_data_V_3413"}]},
			{"Name" : "kernel_data_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "kernel_data_V_6"}]},
			{"Name" : "sX_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "sX_5"}]},
			{"Name" : "sY_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "sY_5"}]},
			{"Name" : "pY_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "pY_5"}]},
			{"Name" : "pX_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "pX_5"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Port" : "w2_V"}]},
			{"Name" : "pX_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "pX_1"}]},
			{"Name" : "sX_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "sX_1"}]},
			{"Name" : "pY_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "pY_1"}]},
			{"Name" : "sY_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "sY_1"}]},
			{"Name" : "kernel_data_V_4_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_6"}]},
			{"Name" : "kernel_data_V_4_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_7"}]},
			{"Name" : "kernel_data_V_4_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_8"}]},
			{"Name" : "kernel_data_V_4_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_9"}]},
			{"Name" : "kernel_data_V_4_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_10"}]},
			{"Name" : "kernel_data_V_4_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_11"}]},
			{"Name" : "kernel_data_V_4_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_30"}]},
			{"Name" : "kernel_data_V_4_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_31"}]},
			{"Name" : "kernel_data_V_4_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_32"}]},
			{"Name" : "kernel_data_V_4_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_33"}]},
			{"Name" : "kernel_data_V_4_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_34"}]},
			{"Name" : "kernel_data_V_4_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_35"}]},
			{"Name" : "kernel_data_V_4_54", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_54"}]},
			{"Name" : "kernel_data_V_4_55", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_55"}]},
			{"Name" : "kernel_data_V_4_56", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_56"}]},
			{"Name" : "kernel_data_V_4_57", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_57"}]},
			{"Name" : "kernel_data_V_4_58", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_58"}]},
			{"Name" : "kernel_data_V_4_59", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_59"}]},
			{"Name" : "kernel_data_V_4_78", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_78"}]},
			{"Name" : "kernel_data_V_4_79", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_79"}]},
			{"Name" : "kernel_data_V_4_80", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_80"}]},
			{"Name" : "kernel_data_V_4_81", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_81"}]},
			{"Name" : "kernel_data_V_4_82", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_82"}]},
			{"Name" : "kernel_data_V_4_83", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_83"}]},
			{"Name" : "kernel_data_V_4_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_12"}]},
			{"Name" : "kernel_data_V_4_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_13"}]},
			{"Name" : "kernel_data_V_4_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_14"}]},
			{"Name" : "kernel_data_V_4_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_15"}]},
			{"Name" : "kernel_data_V_4_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_16"}]},
			{"Name" : "kernel_data_V_4_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_17"}]},
			{"Name" : "kernel_data_V_4_36", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_36"}]},
			{"Name" : "kernel_data_V_4_37", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_37"}]},
			{"Name" : "kernel_data_V_4_38", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_38"}]},
			{"Name" : "kernel_data_V_4_39", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_39"}]},
			{"Name" : "kernel_data_V_4_40", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_40"}]},
			{"Name" : "kernel_data_V_4_41", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_41"}]},
			{"Name" : "kernel_data_V_4_60", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_60"}]},
			{"Name" : "kernel_data_V_4_61", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_61"}]},
			{"Name" : "kernel_data_V_4_62", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_62"}]},
			{"Name" : "kernel_data_V_4_63", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_63"}]},
			{"Name" : "kernel_data_V_4_64", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_64"}]},
			{"Name" : "kernel_data_V_4_65", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_65"}]},
			{"Name" : "kernel_data_V_4_84", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_84"}]},
			{"Name" : "kernel_data_V_4_85", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_85"}]},
			{"Name" : "kernel_data_V_4_86", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_86"}]},
			{"Name" : "kernel_data_V_4_87", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_87"}]},
			{"Name" : "kernel_data_V_4_88", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_88"}]},
			{"Name" : "kernel_data_V_4_89", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_89"}]},
			{"Name" : "kernel_data_V_4_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_18"}]},
			{"Name" : "kernel_data_V_4_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_19"}]},
			{"Name" : "kernel_data_V_4_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_20"}]},
			{"Name" : "kernel_data_V_4_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_21"}]},
			{"Name" : "kernel_data_V_4_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_22"}]},
			{"Name" : "kernel_data_V_4_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_23"}]},
			{"Name" : "kernel_data_V_4_42", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_42"}]},
			{"Name" : "kernel_data_V_4_43", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_43"}]},
			{"Name" : "kernel_data_V_4_44", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_44"}]},
			{"Name" : "kernel_data_V_4_45", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_45"}]},
			{"Name" : "kernel_data_V_4_46", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_46"}]},
			{"Name" : "kernel_data_V_4_47", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_47"}]},
			{"Name" : "kernel_data_V_4_66", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_66"}]},
			{"Name" : "kernel_data_V_4_67", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_67"}]},
			{"Name" : "kernel_data_V_4_68", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_68"}]},
			{"Name" : "kernel_data_V_4_69", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_69"}]},
			{"Name" : "kernel_data_V_4_70", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_70"}]},
			{"Name" : "kernel_data_V_4_71", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_71"}]},
			{"Name" : "kernel_data_V_4_90", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_90"}]},
			{"Name" : "kernel_data_V_4_91", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_91"}]},
			{"Name" : "kernel_data_V_4_92", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_92"}]},
			{"Name" : "kernel_data_V_4_93", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_93"}]},
			{"Name" : "kernel_data_V_4_94", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_94"}]},
			{"Name" : "kernel_data_V_4_95", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "kernel_data_V_4_95"}]},
			{"Name" : "line_buffer_Array_V_4_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_0_0"}]},
			{"Name" : "line_buffer_Array_V_4_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_1_0"}]},
			{"Name" : "line_buffer_Array_V_4_2_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_2_0"}]},
			{"Name" : "line_buffer_Array_V_4_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_0_1"}]},
			{"Name" : "line_buffer_Array_V_4_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_1_1"}]},
			{"Name" : "line_buffer_Array_V_4_2_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_2_1"}]},
			{"Name" : "line_buffer_Array_V_4_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_0_2"}]},
			{"Name" : "line_buffer_Array_V_4_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_1_2"}]},
			{"Name" : "line_buffer_Array_V_4_2_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_2_2"}]},
			{"Name" : "line_buffer_Array_V_4_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_0_3"}]},
			{"Name" : "line_buffer_Array_V_4_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_1_3"}]},
			{"Name" : "line_buffer_Array_V_4_2_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_2_3"}]},
			{"Name" : "line_buffer_Array_V_4_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_0_4"}]},
			{"Name" : "line_buffer_Array_V_4_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_1_4"}]},
			{"Name" : "line_buffer_Array_V_4_2_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_2_4"}]},
			{"Name" : "line_buffer_Array_V_4_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_0_5"}]},
			{"Name" : "line_buffer_Array_V_4_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_1_5"}]},
			{"Name" : "line_buffer_Array_V_4_2_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Port" : "line_buffer_Array_V_4_2_5"}]},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_6"}]},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_7"}]},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_8"}]},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_9"}]},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_10"}]},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_11"}]},
			{"Name" : "kernel_data_V_1_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_12"}]},
			{"Name" : "kernel_data_V_1_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_13"}]},
			{"Name" : "kernel_data_V_1_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_14"}]},
			{"Name" : "kernel_data_V_1_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_15"}]},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_16"}]},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_17"}]},
			{"Name" : "kernel_data_V_1_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_24"}]},
			{"Name" : "kernel_data_V_1_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_25"}]},
			{"Name" : "kernel_data_V_1_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_26"}]},
			{"Name" : "kernel_data_V_1_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_27"}]},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_28"}]},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_29"}]},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_30"}]},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_31"}]},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_32"}]},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_33"}]},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_34"}]},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_35"}]},
			{"Name" : "kernel_data_V_1_42", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_42"}]},
			{"Name" : "kernel_data_V_1_43", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_43"}]},
			{"Name" : "kernel_data_V_1_44", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_44"}]},
			{"Name" : "kernel_data_V_1_45", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_45"}]},
			{"Name" : "kernel_data_V_1_46", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_46"}]},
			{"Name" : "kernel_data_V_1_47", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_47"}]},
			{"Name" : "kernel_data_V_1_48", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_48"}]},
			{"Name" : "kernel_data_V_1_49", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_49"}]},
			{"Name" : "kernel_data_V_1_50", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_50"}]},
			{"Name" : "kernel_data_V_1_51", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_51"}]},
			{"Name" : "kernel_data_V_1_52", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_52"}]},
			{"Name" : "kernel_data_V_1_53", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "kernel_data_V_1_53"}]},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "line_buffer_Array_V_1_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "line_buffer_Array_V_1_0_4"}]},
			{"Name" : "line_buffer_Array_V_1_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "line_buffer_Array_V_1_1_4"}]},
			{"Name" : "line_buffer_Array_V_1_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "line_buffer_Array_V_1_0_5"}]},
			{"Name" : "line_buffer_Array_V_1_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "line_buffer_Array_V_1_1_5"}]},
			{"Name" : "sX_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "sX_4"}]},
			{"Name" : "sY_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "sY_4"}]},
			{"Name" : "pY_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "pY_4"}]},
			{"Name" : "pX_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "pX_4"}]},
			{"Name" : "w6_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "71", "SubInstance" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Port" : "w6_V"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "pX"}]},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "sX"}]},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "pY"}]},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "sY"}]},
			{"Name" : "kernel_data_V_5_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_8"}]},
			{"Name" : "kernel_data_V_5_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_9"}]},
			{"Name" : "kernel_data_V_5_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_10"}]},
			{"Name" : "kernel_data_V_5_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_11"}]},
			{"Name" : "kernel_data_V_5_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_12"}]},
			{"Name" : "kernel_data_V_5_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_13"}]},
			{"Name" : "kernel_data_V_5_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_14"}]},
			{"Name" : "kernel_data_V_5_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_15"}]},
			{"Name" : "kernel_data_V_5_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_24"}]},
			{"Name" : "kernel_data_V_5_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_25"}]},
			{"Name" : "kernel_data_V_5_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_26"}]},
			{"Name" : "kernel_data_V_5_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_27"}]},
			{"Name" : "kernel_data_V_5_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_28"}]},
			{"Name" : "kernel_data_V_5_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_29"}]},
			{"Name" : "kernel_data_V_5_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_30"}]},
			{"Name" : "kernel_data_V_5_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "kernel_data_V_5_31"}]},
			{"Name" : "line_buffer_Array_V_5_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_0"}]},
			{"Name" : "line_buffer_Array_V_5_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_1"}]},
			{"Name" : "line_buffer_Array_V_5_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_2"}]},
			{"Name" : "line_buffer_Array_V_5_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_3"}]},
			{"Name" : "line_buffer_Array_V_5_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_4"}]},
			{"Name" : "line_buffer_Array_V_5_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_5"}]},
			{"Name" : "line_buffer_Array_V_5_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_6"}]},
			{"Name" : "line_buffer_Array_V_5_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Port" : "line_buffer_Array_V_5_0_7"}]},
			{"Name" : "kernel_data_V_2_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_8"}]},
			{"Name" : "kernel_data_V_2_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_9"}]},
			{"Name" : "kernel_data_V_2_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_10"}]},
			{"Name" : "kernel_data_V_2_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_11"}]},
			{"Name" : "kernel_data_V_2_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_12"}]},
			{"Name" : "kernel_data_V_2_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_13"}]},
			{"Name" : "kernel_data_V_2_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_14"}]},
			{"Name" : "kernel_data_V_2_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_15"}]},
			{"Name" : "kernel_data_V_2_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_16"}]},
			{"Name" : "kernel_data_V_2_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_17"}]},
			{"Name" : "kernel_data_V_2_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_18"}]},
			{"Name" : "kernel_data_V_2_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_19"}]},
			{"Name" : "kernel_data_V_2_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_20"}]},
			{"Name" : "kernel_data_V_2_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_21"}]},
			{"Name" : "kernel_data_V_2_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_22"}]},
			{"Name" : "kernel_data_V_2_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_23"}]},
			{"Name" : "kernel_data_V_2_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_32"}]},
			{"Name" : "kernel_data_V_2_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_33"}]},
			{"Name" : "kernel_data_V_2_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_34"}]},
			{"Name" : "kernel_data_V_2_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_35"}]},
			{"Name" : "kernel_data_V_2_36", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_36"}]},
			{"Name" : "kernel_data_V_2_37", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_37"}]},
			{"Name" : "kernel_data_V_2_38", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_38"}]},
			{"Name" : "kernel_data_V_2_39", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_39"}]},
			{"Name" : "kernel_data_V_2_40", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_40"}]},
			{"Name" : "kernel_data_V_2_41", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_41"}]},
			{"Name" : "kernel_data_V_2_42", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_42"}]},
			{"Name" : "kernel_data_V_2_43", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_43"}]},
			{"Name" : "kernel_data_V_2_44", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_44"}]},
			{"Name" : "kernel_data_V_2_45", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_45"}]},
			{"Name" : "kernel_data_V_2_46", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_46"}]},
			{"Name" : "kernel_data_V_2_47", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_47"}]},
			{"Name" : "kernel_data_V_2_56", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_56"}]},
			{"Name" : "kernel_data_V_2_57", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_57"}]},
			{"Name" : "kernel_data_V_2_58", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_58"}]},
			{"Name" : "kernel_data_V_2_59", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_59"}]},
			{"Name" : "kernel_data_V_2_60", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_60"}]},
			{"Name" : "kernel_data_V_2_61", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_61"}]},
			{"Name" : "kernel_data_V_2_62", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_62"}]},
			{"Name" : "kernel_data_V_2_63", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_63"}]},
			{"Name" : "kernel_data_V_2_64", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_64"}]},
			{"Name" : "kernel_data_V_2_65", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_65"}]},
			{"Name" : "kernel_data_V_2_66", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_66"}]},
			{"Name" : "kernel_data_V_2_67", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_67"}]},
			{"Name" : "kernel_data_V_2_68", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_68"}]},
			{"Name" : "kernel_data_V_2_69", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_69"}]},
			{"Name" : "kernel_data_V_2_70", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_70"}]},
			{"Name" : "kernel_data_V_2_71", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "kernel_data_V_2_71"}]},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_0"}]},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_0"}]},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_1"}]},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_1"}]},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_2"}]},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_2"}]},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_3"}]},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_3"}]},
			{"Name" : "line_buffer_Array_V_2_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_4"}]},
			{"Name" : "line_buffer_Array_V_2_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_4"}]},
			{"Name" : "line_buffer_Array_V_2_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_5"}]},
			{"Name" : "line_buffer_Array_V_2_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_5"}]},
			{"Name" : "line_buffer_Array_V_2_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_6"}]},
			{"Name" : "line_buffer_Array_V_2_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_6"}]},
			{"Name" : "line_buffer_Array_V_2_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_0_7"}]},
			{"Name" : "line_buffer_Array_V_2_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "line_buffer_Array_V_2_1_7"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "sX_3"}]},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "sY_3"}]},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "pY_3"}]},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "pX_3"}]},
			{"Name" : "w10_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Port" : "w10_V"}]},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "pX_2"}]},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "sX_2"}]},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "pY_2"}]},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "sY_2"}]},
			{"Name" : "kernel_data_V_3_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_10"}]},
			{"Name" : "kernel_data_V_3_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_11"}]},
			{"Name" : "kernel_data_V_3_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_12"}]},
			{"Name" : "kernel_data_V_3_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_13"}]},
			{"Name" : "kernel_data_V_3_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_14"}]},
			{"Name" : "kernel_data_V_3_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_15"}]},
			{"Name" : "kernel_data_V_3_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_16"}]},
			{"Name" : "kernel_data_V_3_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_17"}]},
			{"Name" : "kernel_data_V_3_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_18"}]},
			{"Name" : "kernel_data_V_3_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_19"}]},
			{"Name" : "kernel_data_V_3_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_30"}]},
			{"Name" : "kernel_data_V_3_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_31"}]},
			{"Name" : "kernel_data_V_3_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_32"}]},
			{"Name" : "kernel_data_V_3_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_33"}]},
			{"Name" : "kernel_data_V_3_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_34"}]},
			{"Name" : "kernel_data_V_3_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_35"}]},
			{"Name" : "kernel_data_V_3_36", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_36"}]},
			{"Name" : "kernel_data_V_3_37", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_37"}]},
			{"Name" : "kernel_data_V_3_38", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_38"}]},
			{"Name" : "kernel_data_V_3_39", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "kernel_data_V_3_39"}]},
			{"Name" : "line_buffer_Array_V_3_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_0"}]},
			{"Name" : "line_buffer_Array_V_3_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_1"}]},
			{"Name" : "line_buffer_Array_V_3_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_2"}]},
			{"Name" : "line_buffer_Array_V_3_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_3"}]},
			{"Name" : "line_buffer_Array_V_3_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_4"}]},
			{"Name" : "line_buffer_Array_V_3_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_5"}]},
			{"Name" : "line_buffer_Array_V_3_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_6"}]},
			{"Name" : "line_buffer_Array_V_3_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_7"}]},
			{"Name" : "line_buffer_Array_V_3_0_8", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_8"}]},
			{"Name" : "line_buffer_Array_V_3_0_9", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "268", "SubInstance" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Port" : "line_buffer_Array_V_3_0_9"}]},
			{"Name" : "w15_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "289", "SubInstance" : "dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_15u_config15_U0", "Port" : "w15_V"}]},
			{"Name" : "w18_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "295", "SubInstance" : "dense_array_ap_ufixed_15u_array_ap_fixed_8_2_5_3_0_10u_config18_U0", "Port" : "w18_V"}]},
			{"Name" : "w21_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_5u_config21_U0", "Port" : "w21_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0", "Parent" : "0", "Child" : ["2"],
		"CDFG" : "conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6913", "EstimateLatencyMax" : "34561",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173"}],
		"Port" : [
			{"Name" : "data_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "306",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "res_stream_V_data_0_V"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "307",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "res_stream_V_data_1_V"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "308",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "res_stream_V_data_2_V"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "309",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "res_stream_V_data_3_V"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "310",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "res_stream_V_data_4_V"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "311",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "res_stream_V_data_5_V"}]},
			{"Name" : "kernel_data_V_1411", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "kernel_data_V_1411"}]},
			{"Name" : "kernel_data_V_2412", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "kernel_data_V_2412"}]},
			{"Name" : "kernel_data_V_4414", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "kernel_data_V_4414"}]},
			{"Name" : "kernel_data_V_5415", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "kernel_data_V_5415"}]},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "kernel_data_V_7"}]},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "kernel_data_V_8"}]},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1410_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "line_buffer_Array_V_1410_0"}]},
			{"Name" : "kernel_data_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "kernel_data_V_0"}]},
			{"Name" : "kernel_data_V_3413", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "kernel_data_V_3413"}]},
			{"Name" : "kernel_data_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "kernel_data_V_6"}]},
			{"Name" : "sX_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "sX_5"}]},
			{"Name" : "sY_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "sY_5"}]},
			{"Name" : "pY_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "pY_5"}]},
			{"Name" : "pX_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "pX_5"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Port" : "w2_V"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173", "Parent" : "1", "Child" : ["3", "5"],
		"CDFG" : "compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s",
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184"}],
		"Port" : [
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "kernel_data_V_1411", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184", "Port" : "kernel_data_V_1411"}]},
			{"Name" : "kernel_data_V_2412", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184", "Port" : "kernel_data_V_2412"}]},
			{"Name" : "kernel_data_V_4414", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184", "Port" : "kernel_data_V_4414"}]},
			{"Name" : "kernel_data_V_5415", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184", "Port" : "kernel_data_V_5415"}]},
			{"Name" : "kernel_data_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184", "Port" : "kernel_data_V_7"}]},
			{"Name" : "kernel_data_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184", "Port" : "kernel_data_V_8"}]},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_0_5_3_0_1u_config2_s_fu_208", "Port" : "line_buffer_Array_V_0_0"}]},
			{"Name" : "line_buffer_Array_V_1410_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_0_5_3_0_1u_config2_s_fu_208", "Port" : "line_buffer_Array_V_1410_0"}]},
			{"Name" : "kernel_data_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184", "Port" : "kernel_data_V_0"}]},
			{"Name" : "kernel_data_V_3413", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184", "Port" : "kernel_data_V_3413"}]},
			{"Name" : "kernel_data_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184", "Port" : "kernel_data_V_6"}]},
			{"Name" : "sX_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184", "Port" : "w2_V"}]}]},
	{"ID" : "3", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184", "Parent" : "2", "Child" : ["4"],
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
	{"ID" : "4", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_fu_184.w2_V_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173.call_ret_shift_line_buffer_array_ap_ufixed_8_0_5_3_0_1u_config2_s_fu_208", "Parent" : "2", "Child" : ["6", "7"],
		"CDFG" : "shift_line_buffer_array_ap_ufixed_8_0_5_3_0_1u_config2_s",
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
			{"Name" : "kernel_window_8_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1410_0", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "6", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173.call_ret_shift_line_buffer_array_ap_ufixed_8_0_5_3_0_1u_config2_s_fu_208.line_buffer_Array_V_0_0_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s_fu_173.call_ret_shift_line_buffer_array_ap_ufixed_8_0_5_3_0_1u_config2_s_fu_208.line_buffer_Array_V_1410_0_U", "Parent" : "5"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_array_ap_fixed_6u_array_ap_fixed_16_6_5_3_0_6u_linear_config3_U0", "Parent" : "0",
		"CDFG" : "linear_array_ap_fixed_6u_array_ap_fixed_16_6_5_3_0_6u_linear_config3_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2118", "EstimateLatencyMax" : "2118",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_linear_array_ap_fixed_6u_array_ap_fixed_16_6_5_3_0_6u_linear_configbgk_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "306",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "307",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "308",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "309",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "310",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "311",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "312",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "313",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "314",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "315",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "316",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "9", "DependentChan" : "317",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_ap_fixed_6u_array_ap_ufixed_8_2_5_3_0_6u_relu_config4_U0", "Parent" : "0",
		"CDFG" : "relu_array_ap_fixed_6u_array_ap_ufixed_8_2_5_3_0_6u_relu_config4_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2119", "EstimateLatencyMax" : "2119",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "8",
		"StartFifo" : "start_for_relu_array_ap_fixed_6u_array_ap_ufixed_8_2_5_3_0_6u_relu_config4_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "312",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "313",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "314",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "315",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "316",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "317",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "318",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "319",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "320",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "321",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "322",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "323",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0", "Parent" : "0", "Child" : ["11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70"],
		"CDFG" : "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2122", "EstimateLatencyMax" : "2122",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "9",
		"StartFifo" : "start_for_pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_configbhl_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "318",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "319",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "320",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "321",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "322",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "9", "DependentChan" : "323",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "324",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "325",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "326",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "327",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "328",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "329",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "pX_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_54", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_55", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_56", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_57", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_58", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_59", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_78", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_79", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_80", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_81", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_82", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_83", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_36", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_37", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_38", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_39", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_40", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_41", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_60", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_61", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_62", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_63", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_64", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_65", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_84", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_85", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_86", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_87", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_88", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_89", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_42", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_43", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_44", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_45", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_46", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_47", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_66", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_67", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_68", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_69", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_70", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_71", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_90", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_91", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_92", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_93", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_94", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_4_95", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_4_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_2_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_2_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_2_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_1_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_2_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_1_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_2_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_1_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_4_2_5", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_0_0_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_1_0_U", "Parent" : "10"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_2_0_U", "Parent" : "10"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_0_1_U", "Parent" : "10"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_1_1_U", "Parent" : "10"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_2_1_U", "Parent" : "10"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_0_2_U", "Parent" : "10"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_1_2_U", "Parent" : "10"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_2_2_U", "Parent" : "10"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_0_3_U", "Parent" : "10"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_1_3_U", "Parent" : "10"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_2_3_U", "Parent" : "10"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_0_4_U", "Parent" : "10"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_1_4_U", "Parent" : "10"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_2_4_U", "Parent" : "10"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_0_5_U", "Parent" : "10"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_1_5_U", "Parent" : "10"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.line_buffer_Array_V_4_2_5_U", "Parent" : "10"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U57", "Parent" : "10"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U58", "Parent" : "10"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U59", "Parent" : "10"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U60", "Parent" : "10"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U61", "Parent" : "10"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U62", "Parent" : "10"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U63", "Parent" : "10"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U64", "Parent" : "10"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U65", "Parent" : "10"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U66", "Parent" : "10"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U67", "Parent" : "10"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U68", "Parent" : "10"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U69", "Parent" : "10"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U70", "Parent" : "10"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U71", "Parent" : "10"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U72", "Parent" : "10"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U73", "Parent" : "10"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U74", "Parent" : "10"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U75", "Parent" : "10"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U76", "Parent" : "10"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U77", "Parent" : "10"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U78", "Parent" : "10"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U79", "Parent" : "10"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U80", "Parent" : "10"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U81", "Parent" : "10"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U82", "Parent" : "10"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U83", "Parent" : "10"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U84", "Parent" : "10"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U85", "Parent" : "10"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U86", "Parent" : "10"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U87", "Parent" : "10"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U88", "Parent" : "10"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U89", "Parent" : "10"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U90", "Parent" : "10"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U91", "Parent" : "10"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U92", "Parent" : "10"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U93", "Parent" : "10"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U94", "Parent" : "10"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U95", "Parent" : "10"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U96", "Parent" : "10"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U97", "Parent" : "10"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_U0.myproject_mux_164_16_1_1_U98", "Parent" : "10"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0", "Parent" : "0", "Child" : ["72"],
		"CDFG" : "conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "485", "EstimateLatencyMax" : "2058",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "10",
		"StartFifo" : "start_for_conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0_U",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359"}],
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "10", "DependentChan" : "324",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "10", "DependentChan" : "325",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "10", "DependentChan" : "326",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "10", "DependentChan" : "327",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "10", "DependentChan" : "328",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "10", "DependentChan" : "329",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "136", "DependentChan" : "330",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "res_stream_V_data_0_V"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "136", "DependentChan" : "331",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "res_stream_V_data_1_V"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "136", "DependentChan" : "332",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "res_stream_V_data_2_V"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "136", "DependentChan" : "333",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "res_stream_V_data_3_V"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "136", "DependentChan" : "334",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "res_stream_V_data_4_V"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "136", "DependentChan" : "335",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "res_stream_V_data_5_V"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "136", "DependentChan" : "336",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "res_stream_V_data_6_V"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "136", "DependentChan" : "337",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "res_stream_V_data_7_V"}]},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_6"}]},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_7"}]},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_8"}]},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_9"}]},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_10"}]},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_11"}]},
			{"Name" : "kernel_data_V_1_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_12"}]},
			{"Name" : "kernel_data_V_1_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_13"}]},
			{"Name" : "kernel_data_V_1_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_14"}]},
			{"Name" : "kernel_data_V_1_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_15"}]},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_16"}]},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_17"}]},
			{"Name" : "kernel_data_V_1_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_24"}]},
			{"Name" : "kernel_data_V_1_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_25"}]},
			{"Name" : "kernel_data_V_1_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_26"}]},
			{"Name" : "kernel_data_V_1_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_27"}]},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_28"}]},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_29"}]},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_30"}]},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_31"}]},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_32"}]},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_33"}]},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_34"}]},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_35"}]},
			{"Name" : "kernel_data_V_1_42", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_42"}]},
			{"Name" : "kernel_data_V_1_43", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_43"}]},
			{"Name" : "kernel_data_V_1_44", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_44"}]},
			{"Name" : "kernel_data_V_1_45", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_45"}]},
			{"Name" : "kernel_data_V_1_46", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_46"}]},
			{"Name" : "kernel_data_V_1_47", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_47"}]},
			{"Name" : "kernel_data_V_1_48", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_48"}]},
			{"Name" : "kernel_data_V_1_49", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_49"}]},
			{"Name" : "kernel_data_V_1_50", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_50"}]},
			{"Name" : "kernel_data_V_1_51", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_51"}]},
			{"Name" : "kernel_data_V_1_52", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_52"}]},
			{"Name" : "kernel_data_V_1_53", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "kernel_data_V_1_53"}]},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "line_buffer_Array_V_1_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "line_buffer_Array_V_1_0_4"}]},
			{"Name" : "line_buffer_Array_V_1_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "line_buffer_Array_V_1_1_4"}]},
			{"Name" : "line_buffer_Array_V_1_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "line_buffer_Array_V_1_0_5"}]},
			{"Name" : "line_buffer_Array_V_1_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "line_buffer_Array_V_1_1_5"}]},
			{"Name" : "sX_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "sX_4"}]},
			{"Name" : "sY_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "sY_4"}]},
			{"Name" : "pY_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "pY_4"}]},
			{"Name" : "pX_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "pX_4"}]},
			{"Name" : "w6_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Port" : "w6_V"}]}]},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359", "Parent" : "71", "Child" : ["73", "123"],
		"CDFG" : "compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "14",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332"}],
		"Port" : [
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "kernel_data_V_1_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_42", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_43", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_44", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_45", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_46", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_47", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_48", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_49", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_50", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_51", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_52", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_1_53", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Port" : "line_buffer_Array_V_1_0_0"}]},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Port" : "line_buffer_Array_V_1_1_0"}]},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Port" : "line_buffer_Array_V_1_0_1"}]},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Port" : "line_buffer_Array_V_1_1_1"}]},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Port" : "line_buffer_Array_V_1_0_2"}]},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Port" : "line_buffer_Array_V_1_1_2"}]},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Port" : "line_buffer_Array_V_1_0_3"}]},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Port" : "line_buffer_Array_V_1_1_3"}]},
			{"Name" : "line_buffer_Array_V_1_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Port" : "line_buffer_Array_V_1_0_4"}]},
			{"Name" : "line_buffer_Array_V_1_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Port" : "line_buffer_Array_V_1_1_4"}]},
			{"Name" : "line_buffer_Array_V_1_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Port" : "line_buffer_Array_V_1_0_5"}]},
			{"Name" : "line_buffer_Array_V_1_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Port" : "line_buffer_Array_V_1_1_5"}]},
			{"Name" : "sX_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "w6_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332", "Port" : "w6_V"}]}]},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332", "Parent" : "72", "Child" : ["74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122"],
		"CDFG" : "dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "12",
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
			{"Name" : "data_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "w6_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "74", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.w6_V_U", "Parent" : "73"},
	{"ID" : "75", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_164_8_1_1_U157", "Parent" : "73"},
	{"ID" : "76", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U158", "Parent" : "73"},
	{"ID" : "77", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U159", "Parent" : "73"},
	{"ID" : "78", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U160", "Parent" : "73"},
	{"ID" : "79", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U161", "Parent" : "73"},
	{"ID" : "80", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U162", "Parent" : "73"},
	{"ID" : "81", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U163", "Parent" : "73"},
	{"ID" : "82", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U164", "Parent" : "73"},
	{"ID" : "83", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U165", "Parent" : "73"},
	{"ID" : "84", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U166", "Parent" : "73"},
	{"ID" : "85", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U167", "Parent" : "73"},
	{"ID" : "86", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U168", "Parent" : "73"},
	{"ID" : "87", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U169", "Parent" : "73"},
	{"ID" : "88", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U170", "Parent" : "73"},
	{"ID" : "89", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U171", "Parent" : "73"},
	{"ID" : "90", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U172", "Parent" : "73"},
	{"ID" : "91", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U173", "Parent" : "73"},
	{"ID" : "92", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U174", "Parent" : "73"},
	{"ID" : "93", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U175", "Parent" : "73"},
	{"ID" : "94", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U176", "Parent" : "73"},
	{"ID" : "95", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U177", "Parent" : "73"},
	{"ID" : "96", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U178", "Parent" : "73"},
	{"ID" : "97", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U179", "Parent" : "73"},
	{"ID" : "98", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U180", "Parent" : "73"},
	{"ID" : "99", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U181", "Parent" : "73"},
	{"ID" : "100", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U182", "Parent" : "73"},
	{"ID" : "101", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U183", "Parent" : "73"},
	{"ID" : "102", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U184", "Parent" : "73"},
	{"ID" : "103", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U185", "Parent" : "73"},
	{"ID" : "104", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U186", "Parent" : "73"},
	{"ID" : "105", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U187", "Parent" : "73"},
	{"ID" : "106", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U188", "Parent" : "73"},
	{"ID" : "107", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U189", "Parent" : "73"},
	{"ID" : "108", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U190", "Parent" : "73"},
	{"ID" : "109", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U191", "Parent" : "73"},
	{"ID" : "110", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U192", "Parent" : "73"},
	{"ID" : "111", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U193", "Parent" : "73"},
	{"ID" : "112", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U194", "Parent" : "73"},
	{"ID" : "113", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U195", "Parent" : "73"},
	{"ID" : "114", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U196", "Parent" : "73"},
	{"ID" : "115", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U197", "Parent" : "73"},
	{"ID" : "116", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U198", "Parent" : "73"},
	{"ID" : "117", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U199", "Parent" : "73"},
	{"ID" : "118", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U200", "Parent" : "73"},
	{"ID" : "119", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U201", "Parent" : "73"},
	{"ID" : "120", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U202", "Parent" : "73"},
	{"ID" : "121", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U203", "Parent" : "73"},
	{"ID" : "122", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.grp_dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_fu_332.myproject_mux_646_8_1_1_U204", "Parent" : "73"},
	{"ID" : "123", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392", "Parent" : "72", "Child" : ["124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135"],
		"CDFG" : "shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s",
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
			{"Name" : "kernel_window_48_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_49_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_50_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_51_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_52_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_53_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_1_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_1_1_5", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "124", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392.line_buffer_Array_V_1_0_0_U", "Parent" : "123"},
	{"ID" : "125", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392.line_buffer_Array_V_1_1_0_U", "Parent" : "123"},
	{"ID" : "126", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392.line_buffer_Array_V_1_0_1_U", "Parent" : "123"},
	{"ID" : "127", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392.line_buffer_Array_V_1_1_1_U", "Parent" : "123"},
	{"ID" : "128", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392.line_buffer_Array_V_1_0_2_U", "Parent" : "123"},
	{"ID" : "129", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392.line_buffer_Array_V_1_1_2_U", "Parent" : "123"},
	{"ID" : "130", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392.line_buffer_Array_V_1_0_3_U", "Parent" : "123"},
	{"ID" : "131", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392.line_buffer_Array_V_1_1_3_U", "Parent" : "123"},
	{"ID" : "132", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392.line_buffer_Array_V_1_0_4_U", "Parent" : "123"},
	{"ID" : "133", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392.line_buffer_Array_V_1_1_4_U", "Parent" : "123"},
	{"ID" : "134", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392.line_buffer_Array_V_1_0_5_U", "Parent" : "123"},
	{"ID" : "135", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s_fu_359.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s_fu_392.line_buffer_Array_V_1_1_5_U", "Parent" : "123"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_linear_config7_U0", "Parent" : "0",
		"CDFG" : "linear_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_linear_config7_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "83", "EstimateLatencyMax" : "83",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "71",
		"StartFifo" : "start_for_linear_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_linear_configbil_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "330",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "331",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "332",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "333",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "334",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "335",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "336",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "337",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "137", "DependentChan" : "338",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "137", "DependentChan" : "339",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "137", "DependentChan" : "340",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "137", "DependentChan" : "341",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "137", "DependentChan" : "342",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "137", "DependentChan" : "343",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "137", "DependentChan" : "344",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "137", "DependentChan" : "345",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_ap_fixed_8u_array_ap_ufixed_8_2_5_3_0_8u_relu_config8_U0", "Parent" : "0",
		"CDFG" : "relu_array_ap_fixed_8u_array_ap_ufixed_8_2_5_3_0_8u_relu_config8_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "84", "EstimateLatencyMax" : "84",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "136",
		"StartFifo" : "start_for_relu_array_ap_fixed_8u_array_ap_ufixed_8_2_5_3_0_8u_relu_config8_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "136", "DependentChan" : "338",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "136", "DependentChan" : "339",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "136", "DependentChan" : "340",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "136", "DependentChan" : "341",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "136", "DependentChan" : "342",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "136", "DependentChan" : "343",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "136", "DependentChan" : "344",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "136", "DependentChan" : "345",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "138", "DependentChan" : "346",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "138", "DependentChan" : "347",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "138", "DependentChan" : "348",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "138", "DependentChan" : "349",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "138", "DependentChan" : "350",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "138", "DependentChan" : "351",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "138", "DependentChan" : "352",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "138", "DependentChan" : "353",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0", "Parent" : "0", "Child" : ["139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154"],
		"CDFG" : "pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "85", "EstimateLatencyMax" : "85",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "137",
		"StartFifo" : "start_for_pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_configbjl_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "137", "DependentChan" : "346",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "137", "DependentChan" : "347",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "137", "DependentChan" : "348",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "137", "DependentChan" : "349",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "137", "DependentChan" : "350",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "137", "DependentChan" : "351",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "137", "DependentChan" : "352",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "137", "DependentChan" : "353",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "155", "DependentChan" : "354",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "155", "DependentChan" : "355",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "155", "DependentChan" : "356",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "155", "DependentChan" : "357",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "155", "DependentChan" : "358",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "155", "DependentChan" : "359",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "155", "DependentChan" : "360",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "155", "DependentChan" : "361",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_5_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_5_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_5_0_7", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.line_buffer_Array_V_5_0_0_U", "Parent" : "138"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.line_buffer_Array_V_5_0_1_U", "Parent" : "138"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.line_buffer_Array_V_5_0_2_U", "Parent" : "138"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.line_buffer_Array_V_5_0_3_U", "Parent" : "138"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.line_buffer_Array_V_5_0_4_U", "Parent" : "138"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.line_buffer_Array_V_5_0_5_U", "Parent" : "138"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.line_buffer_Array_V_5_0_6_U", "Parent" : "138"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.line_buffer_Array_V_5_0_7_U", "Parent" : "138"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.myproject_mux_42_16_1_1_U322", "Parent" : "138"},
	{"ID" : "148", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.myproject_mux_42_16_1_1_U323", "Parent" : "138"},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.myproject_mux_42_16_1_1_U324", "Parent" : "138"},
	{"ID" : "150", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.myproject_mux_42_16_1_1_U325", "Parent" : "138"},
	{"ID" : "151", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.myproject_mux_42_16_1_1_U326", "Parent" : "138"},
	{"ID" : "152", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.myproject_mux_42_16_1_1_U327", "Parent" : "138"},
	{"ID" : "153", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.myproject_mux_42_16_1_1_U328", "Parent" : "138"},
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_U0.myproject_mux_42_16_1_1_U329", "Parent" : "138"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0", "Parent" : "0", "Child" : ["156"],
		"CDFG" : "conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "65", "EstimateLatencyMax" : "257",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "138",
		"StartFifo" : "start_for_conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10bkl_U",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451"}],
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "138", "DependentChan" : "354",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "138", "DependentChan" : "355",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "138", "DependentChan" : "356",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "138", "DependentChan" : "357",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "138", "DependentChan" : "358",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "138", "DependentChan" : "359",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "138", "DependentChan" : "360",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "138", "DependentChan" : "361",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "266", "DependentChan" : "362",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "res_stream_V_data_0_V"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "266", "DependentChan" : "363",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "res_stream_V_data_1_V"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "266", "DependentChan" : "364",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "res_stream_V_data_2_V"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "266", "DependentChan" : "365",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "res_stream_V_data_3_V"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "266", "DependentChan" : "366",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "res_stream_V_data_4_V"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "266", "DependentChan" : "367",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "res_stream_V_data_5_V"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "266", "DependentChan" : "368",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "res_stream_V_data_6_V"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "266", "DependentChan" : "369",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "res_stream_V_data_7_V"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "266", "DependentChan" : "370",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "res_stream_V_data_8_V"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "266", "DependentChan" : "371",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "res_stream_V_data_9_V"}]},
			{"Name" : "kernel_data_V_2_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_8"}]},
			{"Name" : "kernel_data_V_2_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_9"}]},
			{"Name" : "kernel_data_V_2_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_10"}]},
			{"Name" : "kernel_data_V_2_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_11"}]},
			{"Name" : "kernel_data_V_2_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_12"}]},
			{"Name" : "kernel_data_V_2_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_13"}]},
			{"Name" : "kernel_data_V_2_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_14"}]},
			{"Name" : "kernel_data_V_2_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_15"}]},
			{"Name" : "kernel_data_V_2_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_16"}]},
			{"Name" : "kernel_data_V_2_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_17"}]},
			{"Name" : "kernel_data_V_2_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_18"}]},
			{"Name" : "kernel_data_V_2_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_19"}]},
			{"Name" : "kernel_data_V_2_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_20"}]},
			{"Name" : "kernel_data_V_2_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_21"}]},
			{"Name" : "kernel_data_V_2_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_22"}]},
			{"Name" : "kernel_data_V_2_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_23"}]},
			{"Name" : "kernel_data_V_2_32", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_32"}]},
			{"Name" : "kernel_data_V_2_33", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_33"}]},
			{"Name" : "kernel_data_V_2_34", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_34"}]},
			{"Name" : "kernel_data_V_2_35", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_35"}]},
			{"Name" : "kernel_data_V_2_36", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_36"}]},
			{"Name" : "kernel_data_V_2_37", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_37"}]},
			{"Name" : "kernel_data_V_2_38", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_38"}]},
			{"Name" : "kernel_data_V_2_39", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_39"}]},
			{"Name" : "kernel_data_V_2_40", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_40"}]},
			{"Name" : "kernel_data_V_2_41", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_41"}]},
			{"Name" : "kernel_data_V_2_42", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_42"}]},
			{"Name" : "kernel_data_V_2_43", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_43"}]},
			{"Name" : "kernel_data_V_2_44", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_44"}]},
			{"Name" : "kernel_data_V_2_45", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_45"}]},
			{"Name" : "kernel_data_V_2_46", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_46"}]},
			{"Name" : "kernel_data_V_2_47", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_47"}]},
			{"Name" : "kernel_data_V_2_56", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_56"}]},
			{"Name" : "kernel_data_V_2_57", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_57"}]},
			{"Name" : "kernel_data_V_2_58", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_58"}]},
			{"Name" : "kernel_data_V_2_59", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_59"}]},
			{"Name" : "kernel_data_V_2_60", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_60"}]},
			{"Name" : "kernel_data_V_2_61", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_61"}]},
			{"Name" : "kernel_data_V_2_62", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_62"}]},
			{"Name" : "kernel_data_V_2_63", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_63"}]},
			{"Name" : "kernel_data_V_2_64", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_64"}]},
			{"Name" : "kernel_data_V_2_65", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_65"}]},
			{"Name" : "kernel_data_V_2_66", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_66"}]},
			{"Name" : "kernel_data_V_2_67", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_67"}]},
			{"Name" : "kernel_data_V_2_68", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_68"}]},
			{"Name" : "kernel_data_V_2_69", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_69"}]},
			{"Name" : "kernel_data_V_2_70", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_70"}]},
			{"Name" : "kernel_data_V_2_71", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "kernel_data_V_2_71"}]},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_0_0"}]},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_1_0"}]},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_0_1"}]},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_1_1"}]},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_0_2"}]},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_1_2"}]},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_0_3"}]},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_1_3"}]},
			{"Name" : "line_buffer_Array_V_2_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_0_4"}]},
			{"Name" : "line_buffer_Array_V_2_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_1_4"}]},
			{"Name" : "line_buffer_Array_V_2_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_0_5"}]},
			{"Name" : "line_buffer_Array_V_2_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_1_5"}]},
			{"Name" : "line_buffer_Array_V_2_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_0_6"}]},
			{"Name" : "line_buffer_Array_V_2_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_1_6"}]},
			{"Name" : "line_buffer_Array_V_2_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_0_7"}]},
			{"Name" : "line_buffer_Array_V_2_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "line_buffer_Array_V_2_1_7"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "sX_3"}]},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "sY_3"}]},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "pY_3"}]},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "pX_3"}]},
			{"Name" : "w10_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Port" : "w10_V"}]}]},
	{"ID" : "156", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451", "Parent" : "155", "Child" : ["157", "249"],
		"CDFG" : "compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s",
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414"}],
		"Port" : [
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "kernel_data_V_2_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_36", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_37", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_38", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_39", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_40", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_41", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_42", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_43", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_44", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_45", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_46", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_47", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_56", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_57", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_58", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_59", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_60", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_61", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_62", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_63", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_64", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_65", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_66", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_67", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_68", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_69", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_70", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_2_71", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_0"}]},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_0"}]},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_1"}]},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_1"}]},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_2"}]},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_2"}]},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_3"}]},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_3"}]},
			{"Name" : "line_buffer_Array_V_2_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_4"}]},
			{"Name" : "line_buffer_Array_V_2_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_4"}]},
			{"Name" : "line_buffer_Array_V_2_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_5"}]},
			{"Name" : "line_buffer_Array_V_2_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_5"}]},
			{"Name" : "line_buffer_Array_V_2_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_6"}]},
			{"Name" : "line_buffer_Array_V_2_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_6"}]},
			{"Name" : "line_buffer_Array_V_2_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_7"}]},
			{"Name" : "line_buffer_Array_V_2_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_7"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "w10_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "157", "SubInstance" : "grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414", "Port" : "w10_V"}]}]},
	{"ID" : "157", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414", "Parent" : "156", "Child" : ["158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245", "246", "247", "248"],
		"CDFG" : "dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "12",
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
			{"Name" : "data_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_63_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_64_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_65_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_66_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_67_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_68_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_69_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_70_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_71_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "w10_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "158", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.w10_V_U", "Parent" : "157"},
	{"ID" : "159", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_83_8_1_1_U405", "Parent" : "157"},
	{"ID" : "160", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U406", "Parent" : "157"},
	{"ID" : "161", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U407", "Parent" : "157"},
	{"ID" : "162", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U408", "Parent" : "157"},
	{"ID" : "163", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U409", "Parent" : "157"},
	{"ID" : "164", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U410", "Parent" : "157"},
	{"ID" : "165", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U411", "Parent" : "157"},
	{"ID" : "166", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U412", "Parent" : "157"},
	{"ID" : "167", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U413", "Parent" : "157"},
	{"ID" : "168", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U414", "Parent" : "157"},
	{"ID" : "169", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U415", "Parent" : "157"},
	{"ID" : "170", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U416", "Parent" : "157"},
	{"ID" : "171", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U417", "Parent" : "157"},
	{"ID" : "172", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U418", "Parent" : "157"},
	{"ID" : "173", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U419", "Parent" : "157"},
	{"ID" : "174", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U420", "Parent" : "157"},
	{"ID" : "175", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U421", "Parent" : "157"},
	{"ID" : "176", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U422", "Parent" : "157"},
	{"ID" : "177", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U423", "Parent" : "157"},
	{"ID" : "178", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U424", "Parent" : "157"},
	{"ID" : "179", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U425", "Parent" : "157"},
	{"ID" : "180", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U426", "Parent" : "157"},
	{"ID" : "181", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U427", "Parent" : "157"},
	{"ID" : "182", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U428", "Parent" : "157"},
	{"ID" : "183", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U429", "Parent" : "157"},
	{"ID" : "184", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U430", "Parent" : "157"},
	{"ID" : "185", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U431", "Parent" : "157"},
	{"ID" : "186", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U432", "Parent" : "157"},
	{"ID" : "187", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U433", "Parent" : "157"},
	{"ID" : "188", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U434", "Parent" : "157"},
	{"ID" : "189", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U435", "Parent" : "157"},
	{"ID" : "190", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U436", "Parent" : "157"},
	{"ID" : "191", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U437", "Parent" : "157"},
	{"ID" : "192", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U438", "Parent" : "157"},
	{"ID" : "193", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U439", "Parent" : "157"},
	{"ID" : "194", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U440", "Parent" : "157"},
	{"ID" : "195", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U441", "Parent" : "157"},
	{"ID" : "196", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U442", "Parent" : "157"},
	{"ID" : "197", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U443", "Parent" : "157"},
	{"ID" : "198", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U444", "Parent" : "157"},
	{"ID" : "199", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U445", "Parent" : "157"},
	{"ID" : "200", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U446", "Parent" : "157"},
	{"ID" : "201", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U447", "Parent" : "157"},
	{"ID" : "202", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U448", "Parent" : "157"},
	{"ID" : "203", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U449", "Parent" : "157"},
	{"ID" : "204", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U450", "Parent" : "157"},
	{"ID" : "205", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U451", "Parent" : "157"},
	{"ID" : "206", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U452", "Parent" : "157"},
	{"ID" : "207", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U453", "Parent" : "157"},
	{"ID" : "208", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U454", "Parent" : "157"},
	{"ID" : "209", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U455", "Parent" : "157"},
	{"ID" : "210", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U456", "Parent" : "157"},
	{"ID" : "211", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U457", "Parent" : "157"},
	{"ID" : "212", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U458", "Parent" : "157"},
	{"ID" : "213", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U459", "Parent" : "157"},
	{"ID" : "214", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U460", "Parent" : "157"},
	{"ID" : "215", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U461", "Parent" : "157"},
	{"ID" : "216", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U462", "Parent" : "157"},
	{"ID" : "217", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U463", "Parent" : "157"},
	{"ID" : "218", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U464", "Parent" : "157"},
	{"ID" : "219", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U465", "Parent" : "157"},
	{"ID" : "220", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U466", "Parent" : "157"},
	{"ID" : "221", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U467", "Parent" : "157"},
	{"ID" : "222", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U468", "Parent" : "157"},
	{"ID" : "223", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U469", "Parent" : "157"},
	{"ID" : "224", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U470", "Parent" : "157"},
	{"ID" : "225", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U471", "Parent" : "157"},
	{"ID" : "226", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U472", "Parent" : "157"},
	{"ID" : "227", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U473", "Parent" : "157"},
	{"ID" : "228", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U474", "Parent" : "157"},
	{"ID" : "229", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U475", "Parent" : "157"},
	{"ID" : "230", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U476", "Parent" : "157"},
	{"ID" : "231", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U477", "Parent" : "157"},
	{"ID" : "232", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U478", "Parent" : "157"},
	{"ID" : "233", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U479", "Parent" : "157"},
	{"ID" : "234", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U480", "Parent" : "157"},
	{"ID" : "235", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U481", "Parent" : "157"},
	{"ID" : "236", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U482", "Parent" : "157"},
	{"ID" : "237", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U483", "Parent" : "157"},
	{"ID" : "238", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U484", "Parent" : "157"},
	{"ID" : "239", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U485", "Parent" : "157"},
	{"ID" : "240", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U486", "Parent" : "157"},
	{"ID" : "241", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U487", "Parent" : "157"},
	{"ID" : "242", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U488", "Parent" : "157"},
	{"ID" : "243", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U489", "Parent" : "157"},
	{"ID" : "244", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U490", "Parent" : "157"},
	{"ID" : "245", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U491", "Parent" : "157"},
	{"ID" : "246", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U492", "Parent" : "157"},
	{"ID" : "247", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U493", "Parent" : "157"},
	{"ID" : "248", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U494", "Parent" : "157"},
	{"ID" : "249", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Parent" : "156", "Child" : ["250", "251", "252", "253", "254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265"],
		"CDFG" : "shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s",
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
			{"Name" : "kernel_window_64_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_65_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_66_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_67_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_68_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_69_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_70_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_71_V_write", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_63_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_64_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_65_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_66_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_67_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_68_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_69_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_70_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_window_71_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "line_buffer_Array_V_2_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_0_7", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_2_1_7", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "250", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_0_U", "Parent" : "249"},
	{"ID" : "251", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_0_U", "Parent" : "249"},
	{"ID" : "252", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_1_U", "Parent" : "249"},
	{"ID" : "253", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_1_U", "Parent" : "249"},
	{"ID" : "254", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_2_U", "Parent" : "249"},
	{"ID" : "255", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_2_U", "Parent" : "249"},
	{"ID" : "256", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_3_U", "Parent" : "249"},
	{"ID" : "257", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_3_U", "Parent" : "249"},
	{"ID" : "258", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_4_U", "Parent" : "249"},
	{"ID" : "259", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_4_U", "Parent" : "249"},
	{"ID" : "260", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_5_U", "Parent" : "249"},
	{"ID" : "261", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_5_U", "Parent" : "249"},
	{"ID" : "262", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_6_U", "Parent" : "249"},
	{"ID" : "263", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_6_U", "Parent" : "249"},
	{"ID" : "264", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_7_U", "Parent" : "249"},
	{"ID" : "265", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_U0.grp_compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s_fu_451.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_7_U", "Parent" : "249"},
	{"ID" : "266", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_array_array_ap_fixed_16_6_5_3_0_10u_linear_config11_U0", "Parent" : "0",
		"CDFG" : "linear_array_array_ap_fixed_16_6_5_3_0_10u_linear_config11_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "6",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "155",
		"StartFifo" : "start_for_linear_array_array_ap_fixed_16_6_5_3_0_10u_linear_config11_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "155", "DependentChan" : "362",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "155", "DependentChan" : "363",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "155", "DependentChan" : "364",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "155", "DependentChan" : "365",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "155", "DependentChan" : "366",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "155", "DependentChan" : "367",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "155", "DependentChan" : "368",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "155", "DependentChan" : "369",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "155", "DependentChan" : "370",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "155", "DependentChan" : "371",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "267", "DependentChan" : "372",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "267", "DependentChan" : "373",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "267", "DependentChan" : "374",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "267", "DependentChan" : "375",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "267", "DependentChan" : "376",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "267", "DependentChan" : "377",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "267", "DependentChan" : "378",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "267", "DependentChan" : "379",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "267", "DependentChan" : "380",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "267", "DependentChan" : "381",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "267", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_ap_fixed_10u_array_ap_ufixed_8_2_5_3_0_10u_relu_config12_U0", "Parent" : "0",
		"CDFG" : "relu_array_ap_fixed_10u_array_ap_ufixed_8_2_5_3_0_10u_relu_config12_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "7", "EstimateLatencyMax" : "7",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "266",
		"StartFifo" : "start_for_relu_array_ap_fixed_10u_array_ap_ufixed_8_2_5_3_0_10u_relu_config12bll_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "266", "DependentChan" : "372",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "266", "DependentChan" : "373",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "266", "DependentChan" : "374",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "266", "DependentChan" : "375",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "266", "DependentChan" : "376",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "266", "DependentChan" : "377",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "266", "DependentChan" : "378",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "266", "DependentChan" : "379",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "266", "DependentChan" : "380",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "266", "DependentChan" : "381",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "268", "DependentChan" : "382",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "268", "DependentChan" : "383",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "268", "DependentChan" : "384",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "268", "DependentChan" : "385",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "268", "DependentChan" : "386",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "268", "DependentChan" : "387",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "268", "DependentChan" : "388",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "268", "DependentChan" : "389",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "268", "DependentChan" : "390",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "268", "DependentChan" : "391",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "268", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0", "Parent" : "0", "Child" : ["269", "270", "271", "272", "273", "274", "275", "276", "277", "278", "279", "280", "281", "282", "283", "284", "285", "286", "287", "288"],
		"CDFG" : "pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "8",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "267",
		"StartFifo" : "start_for_pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "267", "DependentChan" : "382",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "267", "DependentChan" : "383",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "267", "DependentChan" : "384",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "267", "DependentChan" : "385",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "267", "DependentChan" : "386",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "267", "DependentChan" : "387",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "267", "DependentChan" : "388",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "267", "DependentChan" : "389",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "267", "DependentChan" : "390",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "267", "DependentChan" : "391",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "289", "DependentChan" : "392",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "289", "DependentChan" : "393",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "289", "DependentChan" : "394",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "289", "DependentChan" : "395",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "289", "DependentChan" : "396",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "289", "DependentChan" : "397",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "289", "DependentChan" : "398",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "289", "DependentChan" : "399",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "289", "DependentChan" : "400",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "289", "DependentChan" : "401",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "pX_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_36", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_37", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_38", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "kernel_data_V_3_39", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "line_buffer_Array_V_3_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_7", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_8", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "line_buffer_Array_V_3_0_9", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "269", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.line_buffer_Array_V_3_0_0_U", "Parent" : "268"},
	{"ID" : "270", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.line_buffer_Array_V_3_0_1_U", "Parent" : "268"},
	{"ID" : "271", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.line_buffer_Array_V_3_0_2_U", "Parent" : "268"},
	{"ID" : "272", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.line_buffer_Array_V_3_0_3_U", "Parent" : "268"},
	{"ID" : "273", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.line_buffer_Array_V_3_0_4_U", "Parent" : "268"},
	{"ID" : "274", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.line_buffer_Array_V_3_0_5_U", "Parent" : "268"},
	{"ID" : "275", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.line_buffer_Array_V_3_0_6_U", "Parent" : "268"},
	{"ID" : "276", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.line_buffer_Array_V_3_0_7_U", "Parent" : "268"},
	{"ID" : "277", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.line_buffer_Array_V_3_0_8_U", "Parent" : "268"},
	{"ID" : "278", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.line_buffer_Array_V_3_0_9_U", "Parent" : "268"},
	{"ID" : "279", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.myproject_mux_42_16_1_1_U646", "Parent" : "268"},
	{"ID" : "280", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.myproject_mux_42_16_1_1_U647", "Parent" : "268"},
	{"ID" : "281", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.myproject_mux_42_16_1_1_U648", "Parent" : "268"},
	{"ID" : "282", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.myproject_mux_42_16_1_1_U649", "Parent" : "268"},
	{"ID" : "283", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.myproject_mux_42_16_1_1_U650", "Parent" : "268"},
	{"ID" : "284", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.myproject_mux_42_16_1_1_U651", "Parent" : "268"},
	{"ID" : "285", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.myproject_mux_42_16_1_1_U652", "Parent" : "268"},
	{"ID" : "286", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.myproject_mux_42_16_1_1_U653", "Parent" : "268"},
	{"ID" : "287", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.myproject_mux_42_16_1_1_U654", "Parent" : "268"},
	{"ID" : "288", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0.myproject_mux_42_16_1_1_U655", "Parent" : "268"},
	{"ID" : "289", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_15u_config15_U0", "Parent" : "0", "Child" : ["290"],
		"CDFG" : "dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_15u_config15_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "13", "EstimateLatencyMax" : "14",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "268",
		"StartFifo" : "start_for_dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_15u_config15_U0_U",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_fu_447"}],
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "268", "DependentChan" : "392",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "268", "DependentChan" : "393",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "268", "DependentChan" : "394",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "268", "DependentChan" : "395",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "268", "DependentChan" : "396",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "268", "DependentChan" : "397",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "268", "DependentChan" : "398",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "268", "DependentChan" : "399",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "268", "DependentChan" : "400",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "268", "DependentChan" : "401",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "402",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "403",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "404",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "405",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "406",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "407",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "408",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "409",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "410",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "411",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "412",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "413",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "414",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "415",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "293", "DependentChan" : "416",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "w15_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "290", "SubInstance" : "grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_fu_447", "Port" : "w15_V"}]}]},
	{"ID" : "290", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_15u_config15_U0.grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_fu_447", "Parent" : "289", "Child" : ["291", "292"],
		"CDFG" : "dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "12",
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
			{"Name" : "w15_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "291", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_15u_config15_U0.grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_fu_447.w15_V_U", "Parent" : "290"},
	{"ID" : "292", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_15u_config15_U0.grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s_fu_447.myproject_mux_104_8_1_1_U677", "Parent" : "290"},
	{"ID" : "293", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_array_array_ap_fixed_16_6_5_3_0_15u_linear_config16_U0", "Parent" : "0",
		"CDFG" : "linear_array_array_ap_fixed_16_6_5_3_0_15u_linear_config16_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "289",
		"StartFifo" : "start_for_linear_array_array_ap_fixed_16_6_5_3_0_15u_linear_config16_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "402",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "403",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "404",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "405",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "406",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "407",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "408",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "409",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "410",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "411",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_10_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "412",
				"BlockSignal" : [
					{"Name" : "data_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_11_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "413",
				"BlockSignal" : [
					{"Name" : "data_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_12_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "414",
				"BlockSignal" : [
					{"Name" : "data_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_13_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "415",
				"BlockSignal" : [
					{"Name" : "data_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_14_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "289", "DependentChan" : "416",
				"BlockSignal" : [
					{"Name" : "data_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "417",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "418",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "419",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "420",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "421",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "422",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "423",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "424",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "425",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "426",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "427",
				"BlockSignal" : [
					{"Name" : "res_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "428",
				"BlockSignal" : [
					{"Name" : "res_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "429",
				"BlockSignal" : [
					{"Name" : "res_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "430",
				"BlockSignal" : [
					{"Name" : "res_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "294", "DependentChan" : "431",
				"BlockSignal" : [
					{"Name" : "res_V_data_14_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "294", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_ap_fixed_15u_array_ap_ufixed_8_2_5_3_0_15u_relu_config17_U0", "Parent" : "0",
		"CDFG" : "relu_array_ap_fixed_15u_array_ap_ufixed_8_2_5_3_0_15u_relu_config17_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "293",
		"StartFifo" : "start_for_relu_array_ap_fixed_15u_array_ap_ufixed_8_2_5_3_0_15u_relu_config17bml_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "417",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "418",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "419",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "420",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "421",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "422",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "423",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "424",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "425",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "426",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_10_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "427",
				"BlockSignal" : [
					{"Name" : "data_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_11_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "428",
				"BlockSignal" : [
					{"Name" : "data_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_12_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "429",
				"BlockSignal" : [
					{"Name" : "data_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_13_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "430",
				"BlockSignal" : [
					{"Name" : "data_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_14_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "293", "DependentChan" : "431",
				"BlockSignal" : [
					{"Name" : "data_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "432",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "433",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "434",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "435",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "436",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "437",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "438",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "439",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "440",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "441",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "442",
				"BlockSignal" : [
					{"Name" : "res_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "443",
				"BlockSignal" : [
					{"Name" : "res_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "444",
				"BlockSignal" : [
					{"Name" : "res_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "445",
				"BlockSignal" : [
					{"Name" : "res_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "295", "DependentChan" : "446",
				"BlockSignal" : [
					{"Name" : "res_V_data_14_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "295", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_ufixed_15u_array_ap_fixed_8_2_5_3_0_10u_config18_U0", "Parent" : "0", "Child" : ["296"],
		"CDFG" : "dense_array_ap_ufixed_15u_array_ap_fixed_8_2_5_3_0_10u_config18_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "19",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "294",
		"StartFifo" : "start_for_dense_array_ap_ufixed_15u_array_ap_fixed_8_2_5_3_0_10u_config18_U0_U",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_fu_442"}],
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "432",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "433",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "434",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "435",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "436",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "437",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "438",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "439",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "440",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "441",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_10_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "442",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_11_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "443",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_12_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "444",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_13_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "445",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_14_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "294", "DependentChan" : "446",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "299", "DependentChan" : "447",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "299", "DependentChan" : "448",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "299", "DependentChan" : "449",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "299", "DependentChan" : "450",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "299", "DependentChan" : "451",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "299", "DependentChan" : "452",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "299", "DependentChan" : "453",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "299", "DependentChan" : "454",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "299", "DependentChan" : "455",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "299", "DependentChan" : "456",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "w18_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "296", "SubInstance" : "grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_fu_442", "Port" : "w18_V"}]}]},
	{"ID" : "296", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_ufixed_15u_array_ap_fixed_8_2_5_3_0_10u_config18_U0.grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_fu_442", "Parent" : "295", "Child" : ["297", "298"],
		"CDFG" : "dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "16", "EstimateLatencyMax" : "17",
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
			{"Name" : "w18_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "297", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_ufixed_15u_array_ap_fixed_8_2_5_3_0_10u_config18_U0.grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_fu_442.w18_V_U", "Parent" : "296"},
	{"ID" : "298", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_ufixed_15u_array_ap_fixed_8_2_5_3_0_10u_config18_U0.grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s_fu_442.myproject_mux_154_8_1_1_U775", "Parent" : "296"},
	{"ID" : "299", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_array_array_ap_fixed_16_6_5_3_0_10u_linear_config19_U0", "Parent" : "0",
		"CDFG" : "linear_array_array_ap_fixed_16_6_5_3_0_10u_linear_config19_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "295",
		"StartFifo" : "start_for_linear_array_array_ap_fixed_16_6_5_3_0_10u_linear_config19_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "295", "DependentChan" : "447",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "295", "DependentChan" : "448",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "295", "DependentChan" : "449",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "295", "DependentChan" : "450",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "295", "DependentChan" : "451",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "295", "DependentChan" : "452",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "295", "DependentChan" : "453",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "295", "DependentChan" : "454",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "295", "DependentChan" : "455",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "295", "DependentChan" : "456",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "300", "DependentChan" : "457",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "300", "DependentChan" : "458",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "300", "DependentChan" : "459",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "300", "DependentChan" : "460",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "300", "DependentChan" : "461",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "300", "DependentChan" : "462",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "300", "DependentChan" : "463",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "300", "DependentChan" : "464",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "300", "DependentChan" : "465",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "300", "DependentChan" : "466",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "300", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.relu_array_ap_fixed_10u_array_ap_ufixed_8_2_5_3_0_10u_relu_config20_U0", "Parent" : "0",
		"CDFG" : "relu_array_ap_fixed_10u_array_ap_ufixed_8_2_5_3_0_10u_relu_config20_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "299",
		"StartFifo" : "start_for_relu_array_ap_fixed_10u_array_ap_ufixed_8_2_5_3_0_10u_relu_config20bnm_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "299", "DependentChan" : "457",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "299", "DependentChan" : "458",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "299", "DependentChan" : "459",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "299", "DependentChan" : "460",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "299", "DependentChan" : "461",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "299", "DependentChan" : "462",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "299", "DependentChan" : "463",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "299", "DependentChan" : "464",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "299", "DependentChan" : "465",
				"BlockSignal" : [
					{"Name" : "data_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "299", "DependentChan" : "466",
				"BlockSignal" : [
					{"Name" : "data_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "301", "DependentChan" : "467",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "301", "DependentChan" : "468",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "301", "DependentChan" : "469",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "301", "DependentChan" : "470",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "301", "DependentChan" : "471",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "301", "DependentChan" : "472",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "301", "DependentChan" : "473",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "301", "DependentChan" : "474",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "301", "DependentChan" : "475",
				"BlockSignal" : [
					{"Name" : "res_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "301", "DependentChan" : "476",
				"BlockSignal" : [
					{"Name" : "res_V_data_9_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "301", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_5u_config21_U0", "Parent" : "0", "Child" : ["302"],
		"CDFG" : "dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_5u_config21_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "13", "EstimateLatencyMax" : "14",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "300",
		"StartFifo" : "start_for_dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_5u_config21_U0_U",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config21_s_fu_277"}],
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "300", "DependentChan" : "467",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "300", "DependentChan" : "468",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "300", "DependentChan" : "469",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "300", "DependentChan" : "470",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "300", "DependentChan" : "471",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "300", "DependentChan" : "472",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "300", "DependentChan" : "473",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "300", "DependentChan" : "474",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "300", "DependentChan" : "475",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "300", "DependentChan" : "476",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "305", "DependentChan" : "477",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "305", "DependentChan" : "478",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "305", "DependentChan" : "479",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "305", "DependentChan" : "480",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "305", "DependentChan" : "481",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "w21_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "302", "SubInstance" : "grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config21_s_fu_277", "Port" : "w21_V"}]}]},
	{"ID" : "302", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_5u_config21_U0.grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config21_s_fu_277", "Parent" : "301", "Child" : ["303", "304"],
		"CDFG" : "dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config21_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "12",
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
			{"Name" : "w21_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "303", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_5u_config21_U0.grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config21_s_fu_277.w21_V_U", "Parent" : "302"},
	{"ID" : "304", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_5u_config21_U0.grp_dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config21_s_fu_277.myproject_mux_104_8_1_1_U858", "Parent" : "302"},
	{"ID" : "305", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linear_array_array_ap_fixed_16_6_5_3_0_5u_linear_config22_U0", "Parent" : "0",
		"CDFG" : "linear_array_array_ap_fixed_16_6_5_3_0_5u_linear_config22_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "301",
		"StartFifo" : "start_for_linear_array_array_ap_fixed_16_6_5_3_0_5u_linear_config22_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "301", "DependentChan" : "477",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "301", "DependentChan" : "478",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "301", "DependentChan" : "479",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "301", "DependentChan" : "480",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "301", "DependentChan" : "481",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_TDATA_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "306", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "307", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "308", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "309", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "310", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "311", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer2_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "312", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "313", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "314", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "315", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "316", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "317", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer3_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "318", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "319", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "320", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "321", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "322", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "323", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "324", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "325", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "326", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "327", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "328", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "329", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer5_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "330", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "331", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "332", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "333", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "334", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "335", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "336", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "337", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer6_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "338", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "339", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "340", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "341", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "342", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "343", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "344", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "345", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer7_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "346", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "347", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "348", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "349", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "350", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "351", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "352", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "353", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer8_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "354", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "355", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "356", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "357", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "358", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "359", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "360", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "361", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer9_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "362", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "363", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "364", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "365", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "366", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "367", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "368", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "369", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "370", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "371", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer10_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "372", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "373", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "374", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "375", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "376", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "377", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "378", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "379", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "380", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "381", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer11_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "382", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "383", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "384", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "385", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "386", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "387", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "388", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "389", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "390", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "391", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer12_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "392", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "393", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "394", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "395", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "396", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "397", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "398", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "399", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "400", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "401", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer13_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "402", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "403", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "404", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "405", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "406", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "407", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "408", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "409", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "410", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "411", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "412", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_10_V_U", "Parent" : "0"},
	{"ID" : "413", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_11_V_U", "Parent" : "0"},
	{"ID" : "414", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_12_V_U", "Parent" : "0"},
	{"ID" : "415", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_13_V_U", "Parent" : "0"},
	{"ID" : "416", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer15_out_V_data_14_V_U", "Parent" : "0"},
	{"ID" : "417", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "418", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "419", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "420", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "421", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "422", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "423", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "424", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "425", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "426", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "427", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_10_V_U", "Parent" : "0"},
	{"ID" : "428", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_11_V_U", "Parent" : "0"},
	{"ID" : "429", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_12_V_U", "Parent" : "0"},
	{"ID" : "430", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_13_V_U", "Parent" : "0"},
	{"ID" : "431", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer16_out_V_data_14_V_U", "Parent" : "0"},
	{"ID" : "432", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "433", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "434", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "435", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "436", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "437", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "438", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "439", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "440", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "441", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "442", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_10_V_U", "Parent" : "0"},
	{"ID" : "443", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_11_V_U", "Parent" : "0"},
	{"ID" : "444", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_12_V_U", "Parent" : "0"},
	{"ID" : "445", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_13_V_U", "Parent" : "0"},
	{"ID" : "446", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer17_out_V_data_14_V_U", "Parent" : "0"},
	{"ID" : "447", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "448", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "449", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "450", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "451", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "452", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "453", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "454", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "455", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "456", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer18_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "457", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "458", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "459", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "460", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "461", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "462", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "463", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "464", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "465", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "466", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer19_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "467", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "468", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "469", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "470", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "471", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "472", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "473", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "474", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "475", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_8_V_U", "Parent" : "0"},
	{"ID" : "476", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer20_out_V_data_9_V_U", "Parent" : "0"},
	{"ID" : "477", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer21_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "478", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer21_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "479", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer21_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "480", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer21_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "481", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer21_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "482", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_linear_array_ap_fixed_6u_array_ap_fixed_16_6_5_3_0_6u_linear_configbgk_U", "Parent" : "0"},
	{"ID" : "483", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_ap_fixed_6u_array_ap_ufixed_8_2_5_3_0_6u_relu_config4_U0_U", "Parent" : "0"},
	{"ID" : "484", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_configbhl_U", "Parent" : "0"},
	{"ID" : "485", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_U0_U", "Parent" : "0"},
	{"ID" : "486", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_linear_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_linear_configbil_U", "Parent" : "0"},
	{"ID" : "487", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_ap_fixed_8u_array_ap_ufixed_8_2_5_3_0_8u_relu_config8_U0_U", "Parent" : "0"},
	{"ID" : "488", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_configbjl_U", "Parent" : "0"},
	{"ID" : "489", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10bkl_U", "Parent" : "0"},
	{"ID" : "490", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_linear_array_array_ap_fixed_16_6_5_3_0_10u_linear_config11_U0_U", "Parent" : "0"},
	{"ID" : "491", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_ap_fixed_10u_array_ap_ufixed_8_2_5_3_0_10u_relu_config12bll_U", "Parent" : "0"},
	{"ID" : "492", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_U0_U", "Parent" : "0"},
	{"ID" : "493", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_15u_config15_U0_U", "Parent" : "0"},
	{"ID" : "494", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_linear_array_array_ap_fixed_16_6_5_3_0_15u_linear_config16_U0_U", "Parent" : "0"},
	{"ID" : "495", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_ap_fixed_15u_array_ap_ufixed_8_2_5_3_0_15u_relu_config17bml_U", "Parent" : "0"},
	{"ID" : "496", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_dense_array_ap_ufixed_15u_array_ap_fixed_8_2_5_3_0_10u_config18_U0_U", "Parent" : "0"},
	{"ID" : "497", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_linear_array_array_ap_fixed_16_6_5_3_0_10u_linear_config19_U0_U", "Parent" : "0"},
	{"ID" : "498", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_relu_array_ap_fixed_10u_array_ap_ufixed_8_2_5_3_0_10u_relu_config20bnm_U", "Parent" : "0"},
	{"ID" : "499", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_5u_config21_U0_U", "Parent" : "0"},
	{"ID" : "500", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_linear_array_array_ap_fixed_16_6_5_3_0_5u_linear_config22_U0_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		q_conv2d_batchnorm_input_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		layer22_out_V_data_0_V {Type O LastRead -1 FirstWrite 0}
		layer22_out_V_data_1_V {Type O LastRead -1 FirstWrite 0}
		layer22_out_V_data_2_V {Type O LastRead -1 FirstWrite 0}
		layer22_out_V_data_3_V {Type O LastRead -1 FirstWrite 0}
		layer22_out_V_data_4_V {Type O LastRead -1 FirstWrite 0}
		kernel_data_V_1411 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2412 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4414 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5415 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1410_0 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3413 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_6 {Type IO LastRead -1 FirstWrite -1}
		sX_5 {Type IO LastRead -1 FirstWrite -1}
		sY_5 {Type IO LastRead -1 FirstWrite -1}
		pY_5 {Type IO LastRead -1 FirstWrite -1}
		pX_5 {Type IO LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		pX_1 {Type IO LastRead -1 FirstWrite -1}
		sX_1 {Type IO LastRead -1 FirstWrite -1}
		pY_1 {Type IO LastRead -1 FirstWrite -1}
		sY_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_54 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_55 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_78 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_79 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_80 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_81 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_82 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_83 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_63 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_64 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_65 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_84 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_85 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_86 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_87 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_88 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_89 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_66 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_67 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_68 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_69 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_70 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_71 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_90 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_91 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_92 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_93 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_94 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_95 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_5 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_48 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_49 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_50 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_51 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_52 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_53 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_5 {Type X LastRead -1 FirstWrite -1}
		sX_4 {Type IO LastRead -1 FirstWrite -1}
		sY_4 {Type IO LastRead -1 FirstWrite -1}
		pY_4 {Type IO LastRead -1 FirstWrite -1}
		pX_4 {Type IO LastRead -1 FirstWrite -1}
		w6_V {Type I LastRead -1 FirstWrite -1}
		pX {Type IO LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_31 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_7 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_2_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_63 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_64 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_65 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_66 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_67 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_68 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_69 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_70 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_71 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_7 {Type X LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
		w10_V {Type I LastRead -1 FirstWrite -1}
		pX_2 {Type IO LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_39 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_8 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_9 {Type X LastRead -1 FirstWrite -1}
		w15_V {Type I LastRead -1 FirstWrite -1}
		w18_V {Type I LastRead -1 FirstWrite -1}
		w21_V {Type I LastRead -1 FirstWrite -1}}
	conv_2d_cl_array_ap_ufixed_1u_array_ap_fixed_8_2_5_3_0_6u_config2_s {
		data_V_data_V {Type I LastRead 1 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		kernel_data_V_1411 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2412 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4414 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5415 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1410_0 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3413 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_6 {Type IO LastRead -1 FirstWrite -1}
		sX_5 {Type IO LastRead -1 FirstWrite -1}
		sY_5 {Type IO LastRead -1 FirstWrite -1}
		pY_5 {Type IO LastRead -1 FirstWrite -1}
		pX_5 {Type IO LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}
	compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_6u_config2_s {
		p_read {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		kernel_data_V_1411 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2412 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4414 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5415 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_8 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1410_0 {Type X LastRead -1 FirstWrite -1}
		kernel_data_V_0 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3413 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_6 {Type IO LastRead -1 FirstWrite -1}
		sX_5 {Type IO LastRead -1 FirstWrite -1}
		sY_5 {Type IO LastRead -1 FirstWrite -1}
		pY_5 {Type IO LastRead -1 FirstWrite -1}
		pX_5 {Type IO LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}
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
		w2_V {Type I LastRead -1 FirstWrite -1}}
	shift_line_buffer_array_ap_ufixed_8_0_5_3_0_1u_config2_s {
		kernel_window_8_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_1_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_2_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_4_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_5_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_7_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1410_0 {Type X LastRead -1 FirstWrite -1}}
	linear_array_ap_fixed_6u_array_ap_fixed_16_6_5_3_0_6u_linear_config3_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}}
	relu_array_ap_fixed_6u_array_ap_ufixed_8_2_5_3_0_6u_relu_config4_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 3}}
	pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_8_2_5_3_0_6u_config5_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 6}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 6}
		pX_1 {Type IO LastRead -1 FirstWrite -1}
		sX_1 {Type IO LastRead -1 FirstWrite -1}
		pY_1 {Type IO LastRead -1 FirstWrite -1}
		sY_1 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_54 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_55 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_78 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_79 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_80 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_81 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_82 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_83 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_63 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_64 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_65 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_84 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_85 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_86 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_87 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_88 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_89 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_66 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_67 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_68 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_69 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_70 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_71 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_90 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_91 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_92 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_93 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_94 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_4_95 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_1_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_4_2_5 {Type X LastRead -1 FirstWrite -1}}
	conv_2d_cl_array_ap_ufixed_6u_array_ap_fixed_8_2_5_3_0_8u_config6_s {
		data_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 1 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_48 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_49 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_50 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_51 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_52 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_53 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_5 {Type X LastRead -1 FirstWrite -1}
		sX_4 {Type IO LastRead -1 FirstWrite -1}
		sY_4 {Type IO LastRead -1 FirstWrite -1}
		pY_4 {Type IO LastRead -1 FirstWrite -1}
		pX_4 {Type IO LastRead -1 FirstWrite -1}
		w6_V {Type I LastRead -1 FirstWrite -1}}
	compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_8u_config6_s {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		kernel_data_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_7 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_48 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_49 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_50 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_51 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_52 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_1_53 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_5 {Type X LastRead -1 FirstWrite -1}
		sX_4 {Type IO LastRead -1 FirstWrite -1}
		sY_4 {Type IO LastRead -1 FirstWrite -1}
		pY_4 {Type IO LastRead -1 FirstWrite -1}
		pX_4 {Type IO LastRead -1 FirstWrite -1}
		w6_V {Type I LastRead -1 FirstWrite -1}}
	dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0 {
		data_0_V_read {Type I LastRead 1 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 1 FirstWrite -1}
		data_6_V_read {Type I LastRead 1 FirstWrite -1}
		data_7_V_read {Type I LastRead 1 FirstWrite -1}
		data_8_V_read {Type I LastRead 1 FirstWrite -1}
		data_9_V_read {Type I LastRead 1 FirstWrite -1}
		data_10_V_read {Type I LastRead 1 FirstWrite -1}
		data_11_V_read {Type I LastRead 1 FirstWrite -1}
		data_12_V_read {Type I LastRead 1 FirstWrite -1}
		data_13_V_read {Type I LastRead 1 FirstWrite -1}
		data_14_V_read {Type I LastRead 1 FirstWrite -1}
		data_15_V_read {Type I LastRead 1 FirstWrite -1}
		data_16_V_read {Type I LastRead 1 FirstWrite -1}
		data_17_V_read {Type I LastRead 1 FirstWrite -1}
		data_18_V_read {Type I LastRead 1 FirstWrite -1}
		data_19_V_read {Type I LastRead 1 FirstWrite -1}
		data_20_V_read {Type I LastRead 1 FirstWrite -1}
		data_21_V_read {Type I LastRead 1 FirstWrite -1}
		data_22_V_read {Type I LastRead 1 FirstWrite -1}
		data_23_V_read {Type I LastRead 1 FirstWrite -1}
		data_24_V_read {Type I LastRead 1 FirstWrite -1}
		data_25_V_read {Type I LastRead 1 FirstWrite -1}
		data_26_V_read {Type I LastRead 1 FirstWrite -1}
		data_27_V_read {Type I LastRead 1 FirstWrite -1}
		data_28_V_read {Type I LastRead 1 FirstWrite -1}
		data_29_V_read {Type I LastRead 1 FirstWrite -1}
		data_30_V_read {Type I LastRead 1 FirstWrite -1}
		data_31_V_read {Type I LastRead 1 FirstWrite -1}
		data_32_V_read {Type I LastRead 1 FirstWrite -1}
		data_33_V_read {Type I LastRead 1 FirstWrite -1}
		data_34_V_read {Type I LastRead 1 FirstWrite -1}
		data_35_V_read {Type I LastRead 1 FirstWrite -1}
		data_36_V_read {Type I LastRead 1 FirstWrite -1}
		data_37_V_read {Type I LastRead 1 FirstWrite -1}
		data_38_V_read {Type I LastRead 1 FirstWrite -1}
		data_39_V_read {Type I LastRead 1 FirstWrite -1}
		data_40_V_read {Type I LastRead 1 FirstWrite -1}
		data_41_V_read {Type I LastRead 1 FirstWrite -1}
		data_42_V_read {Type I LastRead 1 FirstWrite -1}
		data_43_V_read {Type I LastRead 1 FirstWrite -1}
		data_44_V_read {Type I LastRead 1 FirstWrite -1}
		data_45_V_read {Type I LastRead 1 FirstWrite -1}
		data_46_V_read {Type I LastRead 1 FirstWrite -1}
		data_47_V_read {Type I LastRead 1 FirstWrite -1}
		data_48_V_read {Type I LastRead 1 FirstWrite -1}
		data_49_V_read {Type I LastRead 1 FirstWrite -1}
		data_50_V_read {Type I LastRead 1 FirstWrite -1}
		data_51_V_read {Type I LastRead 1 FirstWrite -1}
		data_52_V_read {Type I LastRead 1 FirstWrite -1}
		data_53_V_read {Type I LastRead 1 FirstWrite -1}
		w6_V {Type I LastRead -1 FirstWrite -1}}
	shift_line_buffer_array_ap_ufixed_8_2_5_3_0_6u_config6_s {
		kernel_window_48_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_49_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_50_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_51_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_52_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_53_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_6_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_7_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_9_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_10_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_11_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_12_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_13_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_14_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_15_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_16_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_17_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_24_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_25_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_26_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_27_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_28_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_29_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_30_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_31_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_32_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_33_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_34_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_35_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_42_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_43_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_44_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_45_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_46_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_47_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_48_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_49_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_50_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_51_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_52_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_53_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_1_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_1_1_5 {Type X LastRead -1 FirstWrite -1}}
	linear_array_ap_fixed_8u_array_ap_fixed_16_6_5_3_0_8u_linear_config7_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 2}}
	relu_array_ap_fixed_8u_array_ap_ufixed_8_2_5_3_0_8u_relu_config8_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 3}}
	pooling2d_cl_array_ap_ufixed_8u_array_ap_ufixed_8_2_5_3_0_8u_config9_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 4}
		pX {Type IO LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_24 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_25 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_26 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_27 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_28 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_29 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_5_31 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_5_0_7 {Type X LastRead -1 FirstWrite -1}}
	conv_2d_cl_array_ap_ufixed_8u_array_ap_fixed_8_2_5_3_0_10u_config10_s {
		data_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 1 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 1 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 1}
		kernel_data_V_2_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_63 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_64 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_65 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_66 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_67 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_68 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_69 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_70 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_71 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_7 {Type X LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
		w10_V {Type I LastRead -1 FirstWrite -1}}
	compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 1}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 1}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 1}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 1}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 1}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 1}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 1}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 1}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 1}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 1}
		kernel_data_V_2_8 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_9 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_20 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_21 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_22 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_23 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_39 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_40 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_41 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_42 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_43 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_44 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_45 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_46 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_47 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_56 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_57 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_58 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_59 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_60 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_61 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_62 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_63 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_64 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_65 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_66 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_67 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_68 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_69 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_70 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_2_71 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_7 {Type X LastRead -1 FirstWrite -1}
		sX_3 {Type IO LastRead -1 FirstWrite -1}
		sY_3 {Type IO LastRead -1 FirstWrite -1}
		pY_3 {Type IO LastRead -1 FirstWrite -1}
		pX_3 {Type IO LastRead -1 FirstWrite -1}
		w10_V {Type I LastRead -1 FirstWrite -1}}
	dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0 {
		data_0_V_read {Type I LastRead 1 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 1 FirstWrite -1}
		data_6_V_read {Type I LastRead 1 FirstWrite -1}
		data_7_V_read {Type I LastRead 1 FirstWrite -1}
		data_8_V_read {Type I LastRead 1 FirstWrite -1}
		data_9_V_read {Type I LastRead 1 FirstWrite -1}
		data_10_V_read {Type I LastRead 1 FirstWrite -1}
		data_11_V_read {Type I LastRead 1 FirstWrite -1}
		data_12_V_read {Type I LastRead 1 FirstWrite -1}
		data_13_V_read {Type I LastRead 1 FirstWrite -1}
		data_14_V_read {Type I LastRead 1 FirstWrite -1}
		data_15_V_read {Type I LastRead 1 FirstWrite -1}
		data_16_V_read {Type I LastRead 1 FirstWrite -1}
		data_17_V_read {Type I LastRead 1 FirstWrite -1}
		data_18_V_read {Type I LastRead 1 FirstWrite -1}
		data_19_V_read {Type I LastRead 1 FirstWrite -1}
		data_20_V_read {Type I LastRead 1 FirstWrite -1}
		data_21_V_read {Type I LastRead 1 FirstWrite -1}
		data_22_V_read {Type I LastRead 1 FirstWrite -1}
		data_23_V_read {Type I LastRead 1 FirstWrite -1}
		data_24_V_read {Type I LastRead 1 FirstWrite -1}
		data_25_V_read {Type I LastRead 1 FirstWrite -1}
		data_26_V_read {Type I LastRead 1 FirstWrite -1}
		data_27_V_read {Type I LastRead 1 FirstWrite -1}
		data_28_V_read {Type I LastRead 1 FirstWrite -1}
		data_29_V_read {Type I LastRead 1 FirstWrite -1}
		data_30_V_read {Type I LastRead 1 FirstWrite -1}
		data_31_V_read {Type I LastRead 1 FirstWrite -1}
		data_32_V_read {Type I LastRead 1 FirstWrite -1}
		data_33_V_read {Type I LastRead 1 FirstWrite -1}
		data_34_V_read {Type I LastRead 1 FirstWrite -1}
		data_35_V_read {Type I LastRead 1 FirstWrite -1}
		data_36_V_read {Type I LastRead 1 FirstWrite -1}
		data_37_V_read {Type I LastRead 1 FirstWrite -1}
		data_38_V_read {Type I LastRead 1 FirstWrite -1}
		data_39_V_read {Type I LastRead 1 FirstWrite -1}
		data_40_V_read {Type I LastRead 1 FirstWrite -1}
		data_41_V_read {Type I LastRead 1 FirstWrite -1}
		data_42_V_read {Type I LastRead 1 FirstWrite -1}
		data_43_V_read {Type I LastRead 1 FirstWrite -1}
		data_44_V_read {Type I LastRead 1 FirstWrite -1}
		data_45_V_read {Type I LastRead 1 FirstWrite -1}
		data_46_V_read {Type I LastRead 1 FirstWrite -1}
		data_47_V_read {Type I LastRead 1 FirstWrite -1}
		data_48_V_read {Type I LastRead 1 FirstWrite -1}
		data_49_V_read {Type I LastRead 1 FirstWrite -1}
		data_50_V_read {Type I LastRead 1 FirstWrite -1}
		data_51_V_read {Type I LastRead 1 FirstWrite -1}
		data_52_V_read {Type I LastRead 1 FirstWrite -1}
		data_53_V_read {Type I LastRead 1 FirstWrite -1}
		data_54_V_read {Type I LastRead 1 FirstWrite -1}
		data_55_V_read {Type I LastRead 1 FirstWrite -1}
		data_56_V_read {Type I LastRead 1 FirstWrite -1}
		data_57_V_read {Type I LastRead 1 FirstWrite -1}
		data_58_V_read {Type I LastRead 1 FirstWrite -1}
		data_59_V_read {Type I LastRead 1 FirstWrite -1}
		data_60_V_read {Type I LastRead 1 FirstWrite -1}
		data_61_V_read {Type I LastRead 1 FirstWrite -1}
		data_62_V_read {Type I LastRead 1 FirstWrite -1}
		data_63_V_read {Type I LastRead 1 FirstWrite -1}
		data_64_V_read {Type I LastRead 1 FirstWrite -1}
		data_65_V_read {Type I LastRead 1 FirstWrite -1}
		data_66_V_read {Type I LastRead 1 FirstWrite -1}
		data_67_V_read {Type I LastRead 1 FirstWrite -1}
		data_68_V_read {Type I LastRead 1 FirstWrite -1}
		data_69_V_read {Type I LastRead 1 FirstWrite -1}
		data_70_V_read {Type I LastRead 1 FirstWrite -1}
		data_71_V_read {Type I LastRead 1 FirstWrite -1}
		w10_V {Type I LastRead -1 FirstWrite -1}}
	shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s {
		kernel_window_64_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_65_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_66_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_67_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_68_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_69_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_70_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_71_V_write {Type I LastRead 0 FirstWrite -1}
		kernel_window_8_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_9_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_10_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_11_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_12_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_13_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_14_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_15_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_16_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_17_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_18_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_19_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_20_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_21_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_22_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_23_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_32_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_33_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_34_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_35_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_36_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_37_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_38_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_39_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_40_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_41_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_42_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_43_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_44_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_45_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_46_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_47_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_56_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_57_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_58_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_59_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_60_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_61_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_62_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_63_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_64_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_65_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_66_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_67_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_68_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_69_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_70_V_read {Type I LastRead 0 FirstWrite -1}
		kernel_window_71_V_read {Type I LastRead 0 FirstWrite -1}
		line_buffer_Array_V_2_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_2_1_7 {Type X LastRead -1 FirstWrite -1}}
	linear_array_array_ap_fixed_16_6_5_3_0_10u_linear_config11_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 2}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 2}}
	relu_array_ap_fixed_10u_array_ap_ufixed_8_2_5_3_0_10u_relu_config12_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 3}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 3}}
	pooling2d_cl_array_array_ap_ufixed_8_2_5_3_0_10u_config13_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 4}
		pX_2 {Type IO LastRead -1 FirstWrite -1}
		sX_2 {Type IO LastRead -1 FirstWrite -1}
		pY_2 {Type IO LastRead -1 FirstWrite -1}
		sY_2 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_10 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_11 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_12 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_13 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_14 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_15 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_16 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_17 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_18 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_19 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_30 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_31 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_32 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_33 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_34 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_35 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_36 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_37 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_38 {Type IO LastRead -1 FirstWrite -1}
		kernel_data_V_3_39 {Type IO LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_0 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_1 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_2 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_3 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_4 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_5 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_6 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_7 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_8 {Type X LastRead -1 FirstWrite -1}
		line_buffer_Array_V_3_0_9 {Type X LastRead -1 FirstWrite -1}}
	dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_15u_config15_s {
		data_stream_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_10_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_11_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_12_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_13_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_14_V {Type O LastRead -1 FirstWrite 2}
		w15_V {Type I LastRead -1 FirstWrite -1}}
	dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config15_s {
		data_0_V_read {Type I LastRead 1 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 1 FirstWrite -1}
		data_6_V_read {Type I LastRead 1 FirstWrite -1}
		data_7_V_read {Type I LastRead 1 FirstWrite -1}
		data_8_V_read {Type I LastRead 1 FirstWrite -1}
		data_9_V_read {Type I LastRead 1 FirstWrite -1}
		w15_V {Type I LastRead -1 FirstWrite -1}}
	linear_array_array_ap_fixed_16_6_5_3_0_15u_linear_config16_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_10_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_11_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_12_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_13_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_14_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_10_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_11_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_12_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_13_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_14_V {Type O LastRead -1 FirstWrite 0}}
	relu_array_ap_fixed_15u_array_ap_ufixed_8_2_5_3_0_15u_relu_config17_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_10_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_11_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_12_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_13_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_14_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_10_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_11_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_12_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_13_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_14_V {Type O LastRead -1 FirstWrite 1}}
	dense_array_ap_ufixed_15u_array_ap_fixed_8_2_5_3_0_10u_config18_s {
		data_stream_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_10_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_11_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_12_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_13_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_14_V {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 2}
		w18_V {Type I LastRead -1 FirstWrite -1}}
	dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config18_s {
		data_0_V_read {Type I LastRead 1 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 1 FirstWrite -1}
		data_6_V_read {Type I LastRead 1 FirstWrite -1}
		data_7_V_read {Type I LastRead 1 FirstWrite -1}
		data_8_V_read {Type I LastRead 1 FirstWrite -1}
		data_9_V_read {Type I LastRead 1 FirstWrite -1}
		data_10_V_read {Type I LastRead 1 FirstWrite -1}
		data_11_V_read {Type I LastRead 1 FirstWrite -1}
		data_12_V_read {Type I LastRead 1 FirstWrite -1}
		data_13_V_read {Type I LastRead 1 FirstWrite -1}
		data_14_V_read {Type I LastRead 1 FirstWrite -1}
		w18_V {Type I LastRead -1 FirstWrite -1}}
	linear_array_array_ap_fixed_16_6_5_3_0_10u_linear_config19_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 0}}
	relu_array_ap_fixed_10u_array_ap_ufixed_8_2_5_3_0_10u_relu_config20_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_8_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_9_V {Type O LastRead -1 FirstWrite 1}}
	dense_array_ap_ufixed_10u_array_ap_fixed_8_2_5_3_0_5u_config21_s {
		data_stream_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_5_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_6_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_7_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_8_V {Type I LastRead 0 FirstWrite -1}
		data_stream_V_data_9_V {Type I LastRead 0 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 2}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 2}
		w21_V {Type I LastRead -1 FirstWrite -1}}
	dense_wrapper_ap_ufixed_8_2_5_3_0_ap_fixed_8_2_5_3_0_config21_s {
		data_0_V_read {Type I LastRead 1 FirstWrite -1}
		data_1_V_read {Type I LastRead 1 FirstWrite -1}
		data_2_V_read {Type I LastRead 1 FirstWrite -1}
		data_3_V_read {Type I LastRead 1 FirstWrite -1}
		data_4_V_read {Type I LastRead 1 FirstWrite -1}
		data_5_V_read {Type I LastRead 1 FirstWrite -1}
		data_6_V_read {Type I LastRead 1 FirstWrite -1}
		data_7_V_read {Type I LastRead 1 FirstWrite -1}
		data_8_V_read {Type I LastRead 1 FirstWrite -1}
		data_9_V_read {Type I LastRead 1 FirstWrite -1}
		w21_V {Type I LastRead -1 FirstWrite -1}}
	linear_array_array_ap_fixed_16_6_5_3_0_5u_linear_config22_s {
		data_V_data_0_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 0 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 0 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 0}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "34576", "Max" : "34583"}
	, {"Name" : "Interval", "Min" : "6914", "Max" : "34562"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	q_conv2d_batchnorm_input_V_data_0_V { axis {  { q_conv2d_batchnorm_input_V_data_0_V_TDATA in_data 0 8 }  { q_conv2d_batchnorm_input_V_data_0_V_TVALID in_vld 0 1 }  { q_conv2d_batchnorm_input_V_data_0_V_TREADY in_acc 1 1 } } }
	layer22_out_V_data_0_V { axis {  { layer22_out_V_data_0_V_TDATA out_data 1 16 }  { layer22_out_V_data_0_V_TVALID out_vld 1 1 }  { layer22_out_V_data_0_V_TREADY out_acc 0 1 } } }
	layer22_out_V_data_1_V { axis {  { layer22_out_V_data_1_V_TDATA out_data 1 16 }  { layer22_out_V_data_1_V_TVALID out_vld 1 1 }  { layer22_out_V_data_1_V_TREADY out_acc 0 1 } } }
	layer22_out_V_data_2_V { axis {  { layer22_out_V_data_2_V_TDATA out_data 1 16 }  { layer22_out_V_data_2_V_TVALID out_vld 1 1 }  { layer22_out_V_data_2_V_TREADY out_acc 0 1 } } }
	layer22_out_V_data_3_V { axis {  { layer22_out_V_data_3_V_TDATA out_data 1 16 }  { layer22_out_V_data_3_V_TVALID out_vld 1 1 }  { layer22_out_V_data_3_V_TREADY out_acc 0 1 } } }
	layer22_out_V_data_4_V { axis {  { layer22_out_V_data_4_V_TDATA out_data 1 16 }  { layer22_out_V_data_4_V_TVALID out_vld 1 1 }  { layer22_out_V_data_4_V_TREADY out_acc 0 1 } } }
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
