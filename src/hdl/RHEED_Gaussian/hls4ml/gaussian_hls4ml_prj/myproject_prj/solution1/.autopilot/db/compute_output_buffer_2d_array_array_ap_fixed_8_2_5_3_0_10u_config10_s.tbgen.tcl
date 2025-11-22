set moduleName compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s
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
set C_modelName {compute_output_buffer_2d<array,array<ap_fixed<8,2,5,3,0>,10u>,config10>}
set C_modelType { void 0 }
set C_modelArgList {
	{ p_read int 8 regular  }
	{ p_read1 int 8 regular  }
	{ p_read2 int 8 regular  }
	{ p_read3 int 8 regular  }
	{ p_read4 int 8 regular  }
	{ p_read5 int 8 regular  }
	{ p_read6 int 8 regular  }
	{ p_read7 int 8 regular  }
	{ res_stream_V_data_0_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_1_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_2_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_3_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_4_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_5_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_6_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_7_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_8_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_9_V int 8 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "p_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read1", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read2", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read3", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read4", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read5", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read6", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read7", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "res_stream_V_data_0_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_1_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_2_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_3_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_4_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_5_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_6_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_7_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_8_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_9_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 44
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ p_read sc_in sc_lv 8 signal 0 } 
	{ p_read1 sc_in sc_lv 8 signal 1 } 
	{ p_read2 sc_in sc_lv 8 signal 2 } 
	{ p_read3 sc_in sc_lv 8 signal 3 } 
	{ p_read4 sc_in sc_lv 8 signal 4 } 
	{ p_read5 sc_in sc_lv 8 signal 5 } 
	{ p_read6 sc_in sc_lv 8 signal 6 } 
	{ p_read7 sc_in sc_lv 8 signal 7 } 
	{ res_stream_V_data_0_V_din sc_out sc_lv 8 signal 8 } 
	{ res_stream_V_data_0_V_full_n sc_in sc_logic 1 signal 8 } 
	{ res_stream_V_data_0_V_write sc_out sc_logic 1 signal 8 } 
	{ res_stream_V_data_1_V_din sc_out sc_lv 8 signal 9 } 
	{ res_stream_V_data_1_V_full_n sc_in sc_logic 1 signal 9 } 
	{ res_stream_V_data_1_V_write sc_out sc_logic 1 signal 9 } 
	{ res_stream_V_data_2_V_din sc_out sc_lv 8 signal 10 } 
	{ res_stream_V_data_2_V_full_n sc_in sc_logic 1 signal 10 } 
	{ res_stream_V_data_2_V_write sc_out sc_logic 1 signal 10 } 
	{ res_stream_V_data_3_V_din sc_out sc_lv 8 signal 11 } 
	{ res_stream_V_data_3_V_full_n sc_in sc_logic 1 signal 11 } 
	{ res_stream_V_data_3_V_write sc_out sc_logic 1 signal 11 } 
	{ res_stream_V_data_4_V_din sc_out sc_lv 8 signal 12 } 
	{ res_stream_V_data_4_V_full_n sc_in sc_logic 1 signal 12 } 
	{ res_stream_V_data_4_V_write sc_out sc_logic 1 signal 12 } 
	{ res_stream_V_data_5_V_din sc_out sc_lv 8 signal 13 } 
	{ res_stream_V_data_5_V_full_n sc_in sc_logic 1 signal 13 } 
	{ res_stream_V_data_5_V_write sc_out sc_logic 1 signal 13 } 
	{ res_stream_V_data_6_V_din sc_out sc_lv 8 signal 14 } 
	{ res_stream_V_data_6_V_full_n sc_in sc_logic 1 signal 14 } 
	{ res_stream_V_data_6_V_write sc_out sc_logic 1 signal 14 } 
	{ res_stream_V_data_7_V_din sc_out sc_lv 8 signal 15 } 
	{ res_stream_V_data_7_V_full_n sc_in sc_logic 1 signal 15 } 
	{ res_stream_V_data_7_V_write sc_out sc_logic 1 signal 15 } 
	{ res_stream_V_data_8_V_din sc_out sc_lv 8 signal 16 } 
	{ res_stream_V_data_8_V_full_n sc_in sc_logic 1 signal 16 } 
	{ res_stream_V_data_8_V_write sc_out sc_logic 1 signal 16 } 
	{ res_stream_V_data_9_V_din sc_out sc_lv 8 signal 17 } 
	{ res_stream_V_data_9_V_full_n sc_in sc_logic 1 signal 17 } 
	{ res_stream_V_data_9_V_write sc_out sc_logic 1 signal 17 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "p_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read", "role": "default" }} , 
 	{ "name": "p_read1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read1", "role": "default" }} , 
 	{ "name": "p_read2", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read2", "role": "default" }} , 
 	{ "name": "p_read3", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read3", "role": "default" }} , 
 	{ "name": "p_read4", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read4", "role": "default" }} , 
 	{ "name": "p_read5", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read5", "role": "default" }} , 
 	{ "name": "p_read6", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read6", "role": "default" }} , 
 	{ "name": "p_read7", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read7", "role": "default" }} , 
 	{ "name": "res_stream_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_4_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_4_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_4_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_5_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_5_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_5_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_6_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_6_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_6_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_7_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_7_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_7_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_8_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_8_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_8_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_9_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_9_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_9_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "93"],
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
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_0"}]},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_0"}]},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_1"}]},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_1"}]},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_2"}]},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_2"}]},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_3"}]},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_3"}]},
			{"Name" : "line_buffer_Array_V_2_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_4"}]},
			{"Name" : "line_buffer_Array_V_2_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_4"}]},
			{"Name" : "line_buffer_Array_V_2_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_5"}]},
			{"Name" : "line_buffer_Array_V_2_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_5"}]},
			{"Name" : "line_buffer_Array_V_2_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_6"}]},
			{"Name" : "line_buffer_Array_V_2_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_6"}]},
			{"Name" : "line_buffer_Array_V_2_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_7"}]},
			{"Name" : "line_buffer_Array_V_2_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_7"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "w10_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414", "Port" : "w10_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92"],
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
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.w10_V_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_83_8_1_1_U405", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U406", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U407", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U408", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U409", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U410", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U411", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U412", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U413", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U414", "Parent" : "1"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U415", "Parent" : "1"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U416", "Parent" : "1"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U417", "Parent" : "1"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U418", "Parent" : "1"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U419", "Parent" : "1"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U420", "Parent" : "1"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U421", "Parent" : "1"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U422", "Parent" : "1"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U423", "Parent" : "1"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U424", "Parent" : "1"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U425", "Parent" : "1"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U426", "Parent" : "1"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U427", "Parent" : "1"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U428", "Parent" : "1"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U429", "Parent" : "1"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U430", "Parent" : "1"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U431", "Parent" : "1"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U432", "Parent" : "1"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U433", "Parent" : "1"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U434", "Parent" : "1"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U435", "Parent" : "1"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U436", "Parent" : "1"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U437", "Parent" : "1"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U438", "Parent" : "1"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U439", "Parent" : "1"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U440", "Parent" : "1"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U441", "Parent" : "1"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U442", "Parent" : "1"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U443", "Parent" : "1"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U444", "Parent" : "1"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U445", "Parent" : "1"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U446", "Parent" : "1"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U447", "Parent" : "1"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U448", "Parent" : "1"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U449", "Parent" : "1"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U450", "Parent" : "1"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U451", "Parent" : "1"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U452", "Parent" : "1"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U453", "Parent" : "1"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U454", "Parent" : "1"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U455", "Parent" : "1"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U456", "Parent" : "1"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U457", "Parent" : "1"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U458", "Parent" : "1"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U459", "Parent" : "1"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U460", "Parent" : "1"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U461", "Parent" : "1"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U462", "Parent" : "1"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U463", "Parent" : "1"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U464", "Parent" : "1"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U465", "Parent" : "1"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U466", "Parent" : "1"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U467", "Parent" : "1"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U468", "Parent" : "1"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U469", "Parent" : "1"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U470", "Parent" : "1"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U471", "Parent" : "1"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U472", "Parent" : "1"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U473", "Parent" : "1"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U474", "Parent" : "1"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U475", "Parent" : "1"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U476", "Parent" : "1"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U477", "Parent" : "1"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U478", "Parent" : "1"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U479", "Parent" : "1"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U480", "Parent" : "1"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U481", "Parent" : "1"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U482", "Parent" : "1"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U483", "Parent" : "1"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U484", "Parent" : "1"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U485", "Parent" : "1"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U486", "Parent" : "1"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U487", "Parent" : "1"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U488", "Parent" : "1"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U489", "Parent" : "1"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U490", "Parent" : "1"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U491", "Parent" : "1"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U492", "Parent" : "1"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U493", "Parent" : "1"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U494", "Parent" : "1"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Parent" : "0", "Child" : ["94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109"],
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
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_0_U", "Parent" : "93"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_0_U", "Parent" : "93"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_1_U", "Parent" : "93"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_1_U", "Parent" : "93"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_2_U", "Parent" : "93"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_2_U", "Parent" : "93"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_3_U", "Parent" : "93"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_3_U", "Parent" : "93"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_4_U", "Parent" : "93"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_4_U", "Parent" : "93"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_5_U", "Parent" : "93"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_5_U", "Parent" : "93"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_6_U", "Parent" : "93"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_6_U", "Parent" : "93"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_7_U", "Parent" : "93"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_7_U", "Parent" : "93"}]}


set ArgLastReadFirstWriteLatency {
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
		line_buffer_Array_V_2_1_7 {Type X LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "13"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "13"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	p_read { ap_none {  { p_read in_data 0 8 } } }
	p_read1 { ap_none {  { p_read1 in_data 0 8 } } }
	p_read2 { ap_none {  { p_read2 in_data 0 8 } } }
	p_read3 { ap_none {  { p_read3 in_data 0 8 } } }
	p_read4 { ap_none {  { p_read4 in_data 0 8 } } }
	p_read5 { ap_none {  { p_read5 in_data 0 8 } } }
	p_read6 { ap_none {  { p_read6 in_data 0 8 } } }
	p_read7 { ap_none {  { p_read7 in_data 0 8 } } }
	res_stream_V_data_0_V { ap_fifo {  { res_stream_V_data_0_V_din fifo_data 1 8 }  { res_stream_V_data_0_V_full_n fifo_status 0 1 }  { res_stream_V_data_0_V_write fifo_update 1 1 } } }
	res_stream_V_data_1_V { ap_fifo {  { res_stream_V_data_1_V_din fifo_data 1 8 }  { res_stream_V_data_1_V_full_n fifo_status 0 1 }  { res_stream_V_data_1_V_write fifo_update 1 1 } } }
	res_stream_V_data_2_V { ap_fifo {  { res_stream_V_data_2_V_din fifo_data 1 8 }  { res_stream_V_data_2_V_full_n fifo_status 0 1 }  { res_stream_V_data_2_V_write fifo_update 1 1 } } }
	res_stream_V_data_3_V { ap_fifo {  { res_stream_V_data_3_V_din fifo_data 1 8 }  { res_stream_V_data_3_V_full_n fifo_status 0 1 }  { res_stream_V_data_3_V_write fifo_update 1 1 } } }
	res_stream_V_data_4_V { ap_fifo {  { res_stream_V_data_4_V_din fifo_data 1 8 }  { res_stream_V_data_4_V_full_n fifo_status 0 1 }  { res_stream_V_data_4_V_write fifo_update 1 1 } } }
	res_stream_V_data_5_V { ap_fifo {  { res_stream_V_data_5_V_din fifo_data 1 8 }  { res_stream_V_data_5_V_full_n fifo_status 0 1 }  { res_stream_V_data_5_V_write fifo_update 1 1 } } }
	res_stream_V_data_6_V { ap_fifo {  { res_stream_V_data_6_V_din fifo_data 1 8 }  { res_stream_V_data_6_V_full_n fifo_status 0 1 }  { res_stream_V_data_6_V_write fifo_update 1 1 } } }
	res_stream_V_data_7_V { ap_fifo {  { res_stream_V_data_7_V_din fifo_data 1 8 }  { res_stream_V_data_7_V_full_n fifo_status 0 1 }  { res_stream_V_data_7_V_write fifo_update 1 1 } } }
	res_stream_V_data_8_V { ap_fifo {  { res_stream_V_data_8_V_din fifo_data 1 8 }  { res_stream_V_data_8_V_full_n fifo_status 0 1 }  { res_stream_V_data_8_V_write fifo_update 1 1 } } }
	res_stream_V_data_9_V { ap_fifo {  { res_stream_V_data_9_V_din fifo_data 1 8 }  { res_stream_V_data_9_V_full_n fifo_status 0 1 }  { res_stream_V_data_9_V_write fifo_update 1 1 } } }
}
set moduleName compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s
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
set C_modelName {compute_output_buffer_2d<array,array<ap_fixed<8,2,5,3,0>,10u>,config10>}
set C_modelType { void 0 }
set C_modelArgList {
	{ p_read int 8 regular  }
	{ p_read1 int 8 regular  }
	{ p_read2 int 8 regular  }
	{ p_read3 int 8 regular  }
	{ p_read4 int 8 regular  }
	{ p_read5 int 8 regular  }
	{ p_read6 int 8 regular  }
	{ p_read7 int 8 regular  }
	{ res_stream_V_data_0_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_1_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_2_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_3_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_4_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_5_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_6_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_7_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_8_V int 8 regular {fifo 1 volatile }  }
	{ res_stream_V_data_9_V int 8 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "p_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read1", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read2", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read3", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read4", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read5", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read6", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read7", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "res_stream_V_data_0_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_1_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_2_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_3_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_4_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_5_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_6_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_7_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_8_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_9_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 44
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ p_read sc_in sc_lv 8 signal 0 } 
	{ p_read1 sc_in sc_lv 8 signal 1 } 
	{ p_read2 sc_in sc_lv 8 signal 2 } 
	{ p_read3 sc_in sc_lv 8 signal 3 } 
	{ p_read4 sc_in sc_lv 8 signal 4 } 
	{ p_read5 sc_in sc_lv 8 signal 5 } 
	{ p_read6 sc_in sc_lv 8 signal 6 } 
	{ p_read7 sc_in sc_lv 8 signal 7 } 
	{ res_stream_V_data_0_V_din sc_out sc_lv 8 signal 8 } 
	{ res_stream_V_data_0_V_full_n sc_in sc_logic 1 signal 8 } 
	{ res_stream_V_data_0_V_write sc_out sc_logic 1 signal 8 } 
	{ res_stream_V_data_1_V_din sc_out sc_lv 8 signal 9 } 
	{ res_stream_V_data_1_V_full_n sc_in sc_logic 1 signal 9 } 
	{ res_stream_V_data_1_V_write sc_out sc_logic 1 signal 9 } 
	{ res_stream_V_data_2_V_din sc_out sc_lv 8 signal 10 } 
	{ res_stream_V_data_2_V_full_n sc_in sc_logic 1 signal 10 } 
	{ res_stream_V_data_2_V_write sc_out sc_logic 1 signal 10 } 
	{ res_stream_V_data_3_V_din sc_out sc_lv 8 signal 11 } 
	{ res_stream_V_data_3_V_full_n sc_in sc_logic 1 signal 11 } 
	{ res_stream_V_data_3_V_write sc_out sc_logic 1 signal 11 } 
	{ res_stream_V_data_4_V_din sc_out sc_lv 8 signal 12 } 
	{ res_stream_V_data_4_V_full_n sc_in sc_logic 1 signal 12 } 
	{ res_stream_V_data_4_V_write sc_out sc_logic 1 signal 12 } 
	{ res_stream_V_data_5_V_din sc_out sc_lv 8 signal 13 } 
	{ res_stream_V_data_5_V_full_n sc_in sc_logic 1 signal 13 } 
	{ res_stream_V_data_5_V_write sc_out sc_logic 1 signal 13 } 
	{ res_stream_V_data_6_V_din sc_out sc_lv 8 signal 14 } 
	{ res_stream_V_data_6_V_full_n sc_in sc_logic 1 signal 14 } 
	{ res_stream_V_data_6_V_write sc_out sc_logic 1 signal 14 } 
	{ res_stream_V_data_7_V_din sc_out sc_lv 8 signal 15 } 
	{ res_stream_V_data_7_V_full_n sc_in sc_logic 1 signal 15 } 
	{ res_stream_V_data_7_V_write sc_out sc_logic 1 signal 15 } 
	{ res_stream_V_data_8_V_din sc_out sc_lv 8 signal 16 } 
	{ res_stream_V_data_8_V_full_n sc_in sc_logic 1 signal 16 } 
	{ res_stream_V_data_8_V_write sc_out sc_logic 1 signal 16 } 
	{ res_stream_V_data_9_V_din sc_out sc_lv 8 signal 17 } 
	{ res_stream_V_data_9_V_full_n sc_in sc_logic 1 signal 17 } 
	{ res_stream_V_data_9_V_write sc_out sc_logic 1 signal 17 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "p_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read", "role": "default" }} , 
 	{ "name": "p_read1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read1", "role": "default" }} , 
 	{ "name": "p_read2", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read2", "role": "default" }} , 
 	{ "name": "p_read3", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read3", "role": "default" }} , 
 	{ "name": "p_read4", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read4", "role": "default" }} , 
 	{ "name": "p_read5", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read5", "role": "default" }} , 
 	{ "name": "p_read6", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read6", "role": "default" }} , 
 	{ "name": "p_read7", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p_read7", "role": "default" }} , 
 	{ "name": "res_stream_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_4_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_4_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_4_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_5_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_5_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_5_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_6_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_6_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_6_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_7_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_7_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_7_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_8_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_8_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_8_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_9_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_9_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_9_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "93"],
		"CDFG" : "compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "12",
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
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_0"}]},
			{"Name" : "line_buffer_Array_V_2_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_0"}]},
			{"Name" : "line_buffer_Array_V_2_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_1"}]},
			{"Name" : "line_buffer_Array_V_2_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_1"}]},
			{"Name" : "line_buffer_Array_V_2_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_2"}]},
			{"Name" : "line_buffer_Array_V_2_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_2"}]},
			{"Name" : "line_buffer_Array_V_2_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_3"}]},
			{"Name" : "line_buffer_Array_V_2_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_3"}]},
			{"Name" : "line_buffer_Array_V_2_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_4"}]},
			{"Name" : "line_buffer_Array_V_2_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_4"}]},
			{"Name" : "line_buffer_Array_V_2_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_5"}]},
			{"Name" : "line_buffer_Array_V_2_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_5"}]},
			{"Name" : "line_buffer_Array_V_2_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_6"}]},
			{"Name" : "line_buffer_Array_V_2_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_6"}]},
			{"Name" : "line_buffer_Array_V_2_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_0_7"}]},
			{"Name" : "line_buffer_Array_V_2_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "93", "SubInstance" : "call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Port" : "line_buffer_Array_V_2_1_7"}]},
			{"Name" : "sX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "w10_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414", "Port" : "w10_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92"],
		"CDFG" : "dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "10",
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
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.w10_V_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_83_8_1_1_U405", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U406", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U407", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U408", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U409", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U410", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U411", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U412", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U413", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U414", "Parent" : "1"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U415", "Parent" : "1"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U416", "Parent" : "1"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U417", "Parent" : "1"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U418", "Parent" : "1"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U419", "Parent" : "1"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U420", "Parent" : "1"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U421", "Parent" : "1"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U422", "Parent" : "1"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U423", "Parent" : "1"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U424", "Parent" : "1"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U425", "Parent" : "1"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U426", "Parent" : "1"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U427", "Parent" : "1"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U428", "Parent" : "1"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U429", "Parent" : "1"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U430", "Parent" : "1"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U431", "Parent" : "1"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U432", "Parent" : "1"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U433", "Parent" : "1"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U434", "Parent" : "1"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U435", "Parent" : "1"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U436", "Parent" : "1"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U437", "Parent" : "1"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U438", "Parent" : "1"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U439", "Parent" : "1"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U440", "Parent" : "1"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U441", "Parent" : "1"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U442", "Parent" : "1"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U443", "Parent" : "1"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U444", "Parent" : "1"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U445", "Parent" : "1"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U446", "Parent" : "1"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U447", "Parent" : "1"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U448", "Parent" : "1"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U449", "Parent" : "1"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U450", "Parent" : "1"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U451", "Parent" : "1"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U452", "Parent" : "1"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U453", "Parent" : "1"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U454", "Parent" : "1"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U455", "Parent" : "1"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U456", "Parent" : "1"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U457", "Parent" : "1"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U458", "Parent" : "1"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U459", "Parent" : "1"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U460", "Parent" : "1"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U461", "Parent" : "1"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U462", "Parent" : "1"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U463", "Parent" : "1"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U464", "Parent" : "1"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U465", "Parent" : "1"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U466", "Parent" : "1"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U467", "Parent" : "1"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U468", "Parent" : "1"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U469", "Parent" : "1"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U470", "Parent" : "1"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U471", "Parent" : "1"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U472", "Parent" : "1"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U473", "Parent" : "1"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U474", "Parent" : "1"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U475", "Parent" : "1"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U476", "Parent" : "1"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U477", "Parent" : "1"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U478", "Parent" : "1"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U479", "Parent" : "1"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U480", "Parent" : "1"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U481", "Parent" : "1"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U482", "Parent" : "1"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U483", "Parent" : "1"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U484", "Parent" : "1"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U485", "Parent" : "1"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U486", "Parent" : "1"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U487", "Parent" : "1"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U488", "Parent" : "1"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U489", "Parent" : "1"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U490", "Parent" : "1"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U491", "Parent" : "1"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U492", "Parent" : "1"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U493", "Parent" : "1"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_fu_414.myproject_mux_1287_8_1_1_U494", "Parent" : "1"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492", "Parent" : "0", "Child" : ["94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109"],
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
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_0_U", "Parent" : "93"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_0_U", "Parent" : "93"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_1_U", "Parent" : "93"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_1_U", "Parent" : "93"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_2_U", "Parent" : "93"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_2_U", "Parent" : "93"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_3_U", "Parent" : "93"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_3_U", "Parent" : "93"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_4_U", "Parent" : "93"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_4_U", "Parent" : "93"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_5_U", "Parent" : "93"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_5_U", "Parent" : "93"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_6_U", "Parent" : "93"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_6_U", "Parent" : "93"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_0_7_U", "Parent" : "93"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.call_ret_shift_line_buffer_array_ap_ufixed_8_2_5_3_0_8u_config10_s_fu_492.line_buffer_Array_V_2_1_7_U", "Parent" : "93"}]}


set ArgLastReadFirstWriteLatency {
	compute_output_buffer_2d_array_array_ap_fixed_8_2_5_3_0_10u_config10_s {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
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
		line_buffer_Array_V_2_1_7 {Type X LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "12"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "12"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	p_read { ap_none {  { p_read in_data 0 8 } } }
	p_read1 { ap_none {  { p_read1 in_data 0 8 } } }
	p_read2 { ap_none {  { p_read2 in_data 0 8 } } }
	p_read3 { ap_none {  { p_read3 in_data 0 8 } } }
	p_read4 { ap_none {  { p_read4 in_data 0 8 } } }
	p_read5 { ap_none {  { p_read5 in_data 0 8 } } }
	p_read6 { ap_none {  { p_read6 in_data 0 8 } } }
	p_read7 { ap_none {  { p_read7 in_data 0 8 } } }
	res_stream_V_data_0_V { ap_fifo {  { res_stream_V_data_0_V_din fifo_data 1 8 }  { res_stream_V_data_0_V_full_n fifo_status 0 1 }  { res_stream_V_data_0_V_write fifo_update 1 1 } } }
	res_stream_V_data_1_V { ap_fifo {  { res_stream_V_data_1_V_din fifo_data 1 8 }  { res_stream_V_data_1_V_full_n fifo_status 0 1 }  { res_stream_V_data_1_V_write fifo_update 1 1 } } }
	res_stream_V_data_2_V { ap_fifo {  { res_stream_V_data_2_V_din fifo_data 1 8 }  { res_stream_V_data_2_V_full_n fifo_status 0 1 }  { res_stream_V_data_2_V_write fifo_update 1 1 } } }
	res_stream_V_data_3_V { ap_fifo {  { res_stream_V_data_3_V_din fifo_data 1 8 }  { res_stream_V_data_3_V_full_n fifo_status 0 1 }  { res_stream_V_data_3_V_write fifo_update 1 1 } } }
	res_stream_V_data_4_V { ap_fifo {  { res_stream_V_data_4_V_din fifo_data 1 8 }  { res_stream_V_data_4_V_full_n fifo_status 0 1 }  { res_stream_V_data_4_V_write fifo_update 1 1 } } }
	res_stream_V_data_5_V { ap_fifo {  { res_stream_V_data_5_V_din fifo_data 1 8 }  { res_stream_V_data_5_V_full_n fifo_status 0 1 }  { res_stream_V_data_5_V_write fifo_update 1 1 } } }
	res_stream_V_data_6_V { ap_fifo {  { res_stream_V_data_6_V_din fifo_data 1 8 }  { res_stream_V_data_6_V_full_n fifo_status 0 1 }  { res_stream_V_data_6_V_write fifo_update 1 1 } } }
	res_stream_V_data_7_V { ap_fifo {  { res_stream_V_data_7_V_din fifo_data 1 8 }  { res_stream_V_data_7_V_full_n fifo_status 0 1 }  { res_stream_V_data_7_V_write fifo_update 1 1 } } }
	res_stream_V_data_8_V { ap_fifo {  { res_stream_V_data_8_V_din fifo_data 1 8 }  { res_stream_V_data_8_V_full_n fifo_status 0 1 }  { res_stream_V_data_8_V_write fifo_update 1 1 } } }
	res_stream_V_data_9_V { ap_fifo {  { res_stream_V_data_9_V_din fifo_data 1 8 }  { res_stream_V_data_9_V_full_n fifo_status 0 1 }  { res_stream_V_data_9_V_write fifo_update 1 1 } } }
}
