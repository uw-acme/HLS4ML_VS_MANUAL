set moduleName gru_stack_array_ap_fixed_3u_array_ap_fixed_20_10_5_3_0_32u_config2_s
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
set C_modelName {gru_stack<array<ap_fixed,3u>,array<ap_fixed<20,10,5,3,0>,32u>,config2>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_stream_V_data_0_V int 24 regular {axi_s 0 volatile  { data_stream_V_data_0_V Data } }  }
	{ data_stream_V_data_1_V int 24 regular {axi_s 0 volatile  { data_stream_V_data_1_V Data } }  }
	{ data_stream_V_data_2_V int 24 regular {axi_s 0 volatile  { data_stream_V_data_2_V Data } }  }
	{ res_stream_V_data_0_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_1_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_2_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_3_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_4_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_5_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_6_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_7_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_8_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_9_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_10_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_11_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_12_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_13_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_14_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_15_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_16_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_17_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_18_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_19_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_20_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_21_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_22_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_23_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_24_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_25_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_26_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_27_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_28_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_29_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_30_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_31_V int 20 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_stream_V_data_0_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_1_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_2_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "res_stream_V_data_0_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_1_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_2_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_3_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_4_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_5_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_6_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_7_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_8_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_9_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_10_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_11_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_12_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_13_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_14_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_15_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_16_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_17_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_18_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_19_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_20_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_21_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_22_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_23_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_24_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_25_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_26_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_27_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_28_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_29_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_30_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_31_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 115
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ data_stream_V_data_0_V_TDATA sc_in sc_lv 24 signal 0 } 
	{ data_stream_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ data_stream_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ data_stream_V_data_1_V_TDATA sc_in sc_lv 24 signal 1 } 
	{ data_stream_V_data_1_V_TVALID sc_in sc_logic 1 invld 1 } 
	{ data_stream_V_data_1_V_TREADY sc_out sc_logic 1 inacc 1 } 
	{ data_stream_V_data_2_V_TDATA sc_in sc_lv 24 signal 2 } 
	{ data_stream_V_data_2_V_TVALID sc_in sc_logic 1 invld 2 } 
	{ data_stream_V_data_2_V_TREADY sc_out sc_logic 1 inacc 2 } 
	{ res_stream_V_data_0_V_din sc_out sc_lv 20 signal 3 } 
	{ res_stream_V_data_0_V_full_n sc_in sc_logic 1 signal 3 } 
	{ res_stream_V_data_0_V_write sc_out sc_logic 1 signal 3 } 
	{ res_stream_V_data_1_V_din sc_out sc_lv 20 signal 4 } 
	{ res_stream_V_data_1_V_full_n sc_in sc_logic 1 signal 4 } 
	{ res_stream_V_data_1_V_write sc_out sc_logic 1 signal 4 } 
	{ res_stream_V_data_2_V_din sc_out sc_lv 20 signal 5 } 
	{ res_stream_V_data_2_V_full_n sc_in sc_logic 1 signal 5 } 
	{ res_stream_V_data_2_V_write sc_out sc_logic 1 signal 5 } 
	{ res_stream_V_data_3_V_din sc_out sc_lv 20 signal 6 } 
	{ res_stream_V_data_3_V_full_n sc_in sc_logic 1 signal 6 } 
	{ res_stream_V_data_3_V_write sc_out sc_logic 1 signal 6 } 
	{ res_stream_V_data_4_V_din sc_out sc_lv 20 signal 7 } 
	{ res_stream_V_data_4_V_full_n sc_in sc_logic 1 signal 7 } 
	{ res_stream_V_data_4_V_write sc_out sc_logic 1 signal 7 } 
	{ res_stream_V_data_5_V_din sc_out sc_lv 20 signal 8 } 
	{ res_stream_V_data_5_V_full_n sc_in sc_logic 1 signal 8 } 
	{ res_stream_V_data_5_V_write sc_out sc_logic 1 signal 8 } 
	{ res_stream_V_data_6_V_din sc_out sc_lv 20 signal 9 } 
	{ res_stream_V_data_6_V_full_n sc_in sc_logic 1 signal 9 } 
	{ res_stream_V_data_6_V_write sc_out sc_logic 1 signal 9 } 
	{ res_stream_V_data_7_V_din sc_out sc_lv 20 signal 10 } 
	{ res_stream_V_data_7_V_full_n sc_in sc_logic 1 signal 10 } 
	{ res_stream_V_data_7_V_write sc_out sc_logic 1 signal 10 } 
	{ res_stream_V_data_8_V_din sc_out sc_lv 20 signal 11 } 
	{ res_stream_V_data_8_V_full_n sc_in sc_logic 1 signal 11 } 
	{ res_stream_V_data_8_V_write sc_out sc_logic 1 signal 11 } 
	{ res_stream_V_data_9_V_din sc_out sc_lv 20 signal 12 } 
	{ res_stream_V_data_9_V_full_n sc_in sc_logic 1 signal 12 } 
	{ res_stream_V_data_9_V_write sc_out sc_logic 1 signal 12 } 
	{ res_stream_V_data_10_V_din sc_out sc_lv 20 signal 13 } 
	{ res_stream_V_data_10_V_full_n sc_in sc_logic 1 signal 13 } 
	{ res_stream_V_data_10_V_write sc_out sc_logic 1 signal 13 } 
	{ res_stream_V_data_11_V_din sc_out sc_lv 20 signal 14 } 
	{ res_stream_V_data_11_V_full_n sc_in sc_logic 1 signal 14 } 
	{ res_stream_V_data_11_V_write sc_out sc_logic 1 signal 14 } 
	{ res_stream_V_data_12_V_din sc_out sc_lv 20 signal 15 } 
	{ res_stream_V_data_12_V_full_n sc_in sc_logic 1 signal 15 } 
	{ res_stream_V_data_12_V_write sc_out sc_logic 1 signal 15 } 
	{ res_stream_V_data_13_V_din sc_out sc_lv 20 signal 16 } 
	{ res_stream_V_data_13_V_full_n sc_in sc_logic 1 signal 16 } 
	{ res_stream_V_data_13_V_write sc_out sc_logic 1 signal 16 } 
	{ res_stream_V_data_14_V_din sc_out sc_lv 20 signal 17 } 
	{ res_stream_V_data_14_V_full_n sc_in sc_logic 1 signal 17 } 
	{ res_stream_V_data_14_V_write sc_out sc_logic 1 signal 17 } 
	{ res_stream_V_data_15_V_din sc_out sc_lv 20 signal 18 } 
	{ res_stream_V_data_15_V_full_n sc_in sc_logic 1 signal 18 } 
	{ res_stream_V_data_15_V_write sc_out sc_logic 1 signal 18 } 
	{ res_stream_V_data_16_V_din sc_out sc_lv 20 signal 19 } 
	{ res_stream_V_data_16_V_full_n sc_in sc_logic 1 signal 19 } 
	{ res_stream_V_data_16_V_write sc_out sc_logic 1 signal 19 } 
	{ res_stream_V_data_17_V_din sc_out sc_lv 20 signal 20 } 
	{ res_stream_V_data_17_V_full_n sc_in sc_logic 1 signal 20 } 
	{ res_stream_V_data_17_V_write sc_out sc_logic 1 signal 20 } 
	{ res_stream_V_data_18_V_din sc_out sc_lv 20 signal 21 } 
	{ res_stream_V_data_18_V_full_n sc_in sc_logic 1 signal 21 } 
	{ res_stream_V_data_18_V_write sc_out sc_logic 1 signal 21 } 
	{ res_stream_V_data_19_V_din sc_out sc_lv 20 signal 22 } 
	{ res_stream_V_data_19_V_full_n sc_in sc_logic 1 signal 22 } 
	{ res_stream_V_data_19_V_write sc_out sc_logic 1 signal 22 } 
	{ res_stream_V_data_20_V_din sc_out sc_lv 20 signal 23 } 
	{ res_stream_V_data_20_V_full_n sc_in sc_logic 1 signal 23 } 
	{ res_stream_V_data_20_V_write sc_out sc_logic 1 signal 23 } 
	{ res_stream_V_data_21_V_din sc_out sc_lv 20 signal 24 } 
	{ res_stream_V_data_21_V_full_n sc_in sc_logic 1 signal 24 } 
	{ res_stream_V_data_21_V_write sc_out sc_logic 1 signal 24 } 
	{ res_stream_V_data_22_V_din sc_out sc_lv 20 signal 25 } 
	{ res_stream_V_data_22_V_full_n sc_in sc_logic 1 signal 25 } 
	{ res_stream_V_data_22_V_write sc_out sc_logic 1 signal 25 } 
	{ res_stream_V_data_23_V_din sc_out sc_lv 20 signal 26 } 
	{ res_stream_V_data_23_V_full_n sc_in sc_logic 1 signal 26 } 
	{ res_stream_V_data_23_V_write sc_out sc_logic 1 signal 26 } 
	{ res_stream_V_data_24_V_din sc_out sc_lv 20 signal 27 } 
	{ res_stream_V_data_24_V_full_n sc_in sc_logic 1 signal 27 } 
	{ res_stream_V_data_24_V_write sc_out sc_logic 1 signal 27 } 
	{ res_stream_V_data_25_V_din sc_out sc_lv 20 signal 28 } 
	{ res_stream_V_data_25_V_full_n sc_in sc_logic 1 signal 28 } 
	{ res_stream_V_data_25_V_write sc_out sc_logic 1 signal 28 } 
	{ res_stream_V_data_26_V_din sc_out sc_lv 20 signal 29 } 
	{ res_stream_V_data_26_V_full_n sc_in sc_logic 1 signal 29 } 
	{ res_stream_V_data_26_V_write sc_out sc_logic 1 signal 29 } 
	{ res_stream_V_data_27_V_din sc_out sc_lv 20 signal 30 } 
	{ res_stream_V_data_27_V_full_n sc_in sc_logic 1 signal 30 } 
	{ res_stream_V_data_27_V_write sc_out sc_logic 1 signal 30 } 
	{ res_stream_V_data_28_V_din sc_out sc_lv 20 signal 31 } 
	{ res_stream_V_data_28_V_full_n sc_in sc_logic 1 signal 31 } 
	{ res_stream_V_data_28_V_write sc_out sc_logic 1 signal 31 } 
	{ res_stream_V_data_29_V_din sc_out sc_lv 20 signal 32 } 
	{ res_stream_V_data_29_V_full_n sc_in sc_logic 1 signal 32 } 
	{ res_stream_V_data_29_V_write sc_out sc_logic 1 signal 32 } 
	{ res_stream_V_data_30_V_din sc_out sc_lv 20 signal 33 } 
	{ res_stream_V_data_30_V_full_n sc_in sc_logic 1 signal 33 } 
	{ res_stream_V_data_30_V_write sc_out sc_logic 1 signal 33 } 
	{ res_stream_V_data_31_V_din sc_out sc_lv 20 signal 34 } 
	{ res_stream_V_data_31_V_full_n sc_in sc_logic 1 signal 34 } 
	{ res_stream_V_data_31_V_write sc_out sc_logic 1 signal 34 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "data_stream_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "data_stream_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "data_stream_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_stream_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "data_stream_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_stream_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "data_stream_V_data_1_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "data_stream_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "data_stream_V_data_1_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_stream_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "data_stream_V_data_1_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_stream_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "data_stream_V_data_2_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "data_stream_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "data_stream_V_data_2_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_stream_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "data_stream_V_data_2_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_stream_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "res_stream_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_4_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_4_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_4_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_5_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_5_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_5_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_6_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_6_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_6_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_7_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_7_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_7_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_8_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_8_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_8_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_9_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_9_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_9_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_10_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_10_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_10_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_10_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_10_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_10_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_11_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_11_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_11_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_11_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_11_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_11_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_12_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_12_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_12_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_12_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_12_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_12_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_13_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_13_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_13_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_13_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_13_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_13_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_14_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_14_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_14_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_14_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_14_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_14_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_15_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_15_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_15_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_15_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_15_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_15_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_16_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_16_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_16_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_16_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_16_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_16_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_17_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_17_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_17_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_17_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_17_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_17_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_18_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_18_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_18_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_18_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_18_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_18_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_19_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_19_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_19_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_19_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_19_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_19_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_20_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_20_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_20_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_20_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_20_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_20_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_21_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_21_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_21_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_21_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_21_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_21_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_22_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_22_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_22_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_22_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_22_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_22_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_23_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_23_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_23_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_23_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_23_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_23_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_24_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_24_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_24_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_24_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_24_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_24_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_25_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_25_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_25_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_25_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_25_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_25_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_26_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_26_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_26_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_26_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_26_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_26_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_27_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_27_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_27_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_27_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_27_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_27_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_28_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_28_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_28_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_28_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_28_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_28_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_29_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_29_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_29_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_29_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_29_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_29_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_30_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_30_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_30_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_30_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_30_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_30_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_31_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_31_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_31_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_31_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_31_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_31_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "gru_stack_array_ap_fixed_3u_array_ap_fixed_20_10_5_3_0_32u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "16301", "EstimateLatencyMax" : "16401",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750"}],
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_15_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_15_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_16_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_16_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_17_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_17_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_18_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_18_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_19_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_19_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_20_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_20_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_21_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_21_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_22_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_22_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_23_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_23_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_24_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_24_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_25_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_25_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_26_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_26_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_27_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_27_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_28_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_28_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_29_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_29_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_30_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_30_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_31_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_31_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_0"}]},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_1"}]},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_2"}]},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_3"}]},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_4"}]},
			{"Name" : "h_state_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_5"}]},
			{"Name" : "h_state_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_6"}]},
			{"Name" : "h_state_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_7"}]},
			{"Name" : "h_state_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_8"}]},
			{"Name" : "h_state_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_9"}]},
			{"Name" : "h_state_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_10"}]},
			{"Name" : "h_state_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_11"}]},
			{"Name" : "h_state_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_12"}]},
			{"Name" : "h_state_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_13"}]},
			{"Name" : "h_state_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_14"}]},
			{"Name" : "h_state_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_15"}]},
			{"Name" : "h_state_V_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_16"}]},
			{"Name" : "h_state_V_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_17"}]},
			{"Name" : "h_state_V_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_18"}]},
			{"Name" : "h_state_V_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_19"}]},
			{"Name" : "h_state_V_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_20"}]},
			{"Name" : "h_state_V_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_21"}]},
			{"Name" : "h_state_V_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_22"}]},
			{"Name" : "h_state_V_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_23"}]},
			{"Name" : "h_state_V_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_24"}]},
			{"Name" : "h_state_V_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_25"}]},
			{"Name" : "h_state_V_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_26"}]},
			{"Name" : "h_state_V_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_27"}]},
			{"Name" : "h_state_V_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_28"}]},
			{"Name" : "h_state_V_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_29"}]},
			{"Name" : "h_state_V_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_30"}]},
			{"Name" : "h_state_V_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_31"}]},
			{"Name" : "outidx9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "outidx9"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "w2_V"}]},
			{"Name" : "outidx8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "outidx8"}]},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "wr2_V"}]},
			{"Name" : "sigmoid_table7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "sigmoid_table7"}]},
			{"Name" : "tanh_table6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "tanh_table6"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.data_in_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Parent" : "0", "Child" : ["3", "32", "34", "36"],
		"CDFG" : "gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "159", "EstimateLatencyMax" : "160",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288"}],
		"Port" : [
			{"Name" : "reset_state", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Port" : "data_V"}]},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_0"}]},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_1"}]},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_2"}]},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_3"}]},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_4"}]},
			{"Name" : "h_state_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_5"}]},
			{"Name" : "h_state_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_6"}]},
			{"Name" : "h_state_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_7"}]},
			{"Name" : "h_state_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_8"}]},
			{"Name" : "h_state_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_9"}]},
			{"Name" : "h_state_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_10"}]},
			{"Name" : "h_state_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_11"}]},
			{"Name" : "h_state_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_12"}]},
			{"Name" : "h_state_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_13"}]},
			{"Name" : "h_state_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_14"}]},
			{"Name" : "h_state_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_15"}]},
			{"Name" : "h_state_V_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_16"}]},
			{"Name" : "h_state_V_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_17"}]},
			{"Name" : "h_state_V_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_18"}]},
			{"Name" : "h_state_V_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_19"}]},
			{"Name" : "h_state_V_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_20"}]},
			{"Name" : "h_state_V_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_21"}]},
			{"Name" : "h_state_V_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_22"}]},
			{"Name" : "h_state_V_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_23"}]},
			{"Name" : "h_state_V_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_24"}]},
			{"Name" : "h_state_V_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_25"}]},
			{"Name" : "h_state_V_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_26"}]},
			{"Name" : "h_state_V_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_27"}]},
			{"Name" : "h_state_V_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_28"}]},
			{"Name" : "h_state_V_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_29"}]},
			{"Name" : "h_state_V_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_30"}]},
			{"Name" : "h_state_V_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_31"}]},
			{"Name" : "outidx9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Port" : "outidx9"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Port" : "w2_V"}]},
			{"Name" : "outidx8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "outidx8"}]},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "wr2_V"}]},
			{"Name" : "sigmoid_table7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "32", "SubInstance" : "grp_sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s_fu_180", "Port" : "sigmoid_table7"}]},
			{"Name" : "tanh_table6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s_fu_250", "Port" : "tanh_table6"}]}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Parent" : "2", "Child" : ["4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"],
		"CDFG" : "dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "130", "EstimateLatencyMax" : "131",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "outidx8", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "h_state_V_20", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_21", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_22", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_23", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_24", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_25", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_26", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_27", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_28", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_29", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_30", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_31", "Type" : "None", "Direction" : "I"},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.outidx8_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.wr2_V_U", "Parent" : "3"},
	{"ID" : "6", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_325_20_1_1_U10", "Parent" : "3"},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_42_20_1_1_U11", "Parent" : "3"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U12", "Parent" : "3"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U13", "Parent" : "3"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U14", "Parent" : "3"},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U15", "Parent" : "3"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U16", "Parent" : "3"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U17", "Parent" : "3"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U18", "Parent" : "3"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U19", "Parent" : "3"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U20", "Parent" : "3"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U21", "Parent" : "3"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U22", "Parent" : "3"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U23", "Parent" : "3"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U24", "Parent" : "3"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U25", "Parent" : "3"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U26", "Parent" : "3"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U27", "Parent" : "3"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U28", "Parent" : "3"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U29", "Parent" : "3"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U30", "Parent" : "3"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U31", "Parent" : "3"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U32", "Parent" : "3"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U33", "Parent" : "3"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U34", "Parent" : "3"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mul_mul_20s_12s_30_1_1_U35", "Parent" : "3"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s_fu_180", "Parent" : "2", "Child" : ["33"],
		"CDFG" : "sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
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
			{"Name" : "sigmoid_table7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s_fu_180.sigmoid_table7_U", "Parent" : "32"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s_fu_250", "Parent" : "2", "Child" : ["35"],
		"CDFG" : "tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
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
			{"Name" : "tanh_table6", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s_fu_250.tanh_table6_U", "Parent" : "34"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Parent" : "2", "Child" : ["37", "38", "39", "40", "41"],
		"CDFG" : "dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "146", "EstimateLatencyMax" : "147",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outidx9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.outidx9_U", "Parent" : "36"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.w2_V_U", "Parent" : "36"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.myproject_mux_646_20_1_1_U1", "Parent" : "36"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.myproject_mux_1287_20_1_1_U2", "Parent" : "36"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.myproject_mul_mul_20s_13s_30_1_1_U3", "Parent" : "36"}]}


set ArgLastReadFirstWriteLatency {
	gru_stack_array_ap_fixed_3u_array_ap_fixed_20_10_5_3_0_32u_config2_s {
		data_stream_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 1 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 1 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_10_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_11_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_12_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_13_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_14_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_15_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_16_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_17_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_18_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_19_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_20_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_21_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_22_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_23_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_24_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_25_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_26_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_27_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_28_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_29_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_30_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_31_V {Type O LastRead -1 FirstWrite 4}
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
		h_state_V_20 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_21 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_22 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_23 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_24 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_25 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_26 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_27 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_28 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_29 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_30 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_31 {Type IO LastRead -1 FirstWrite -1}
		outidx9 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		outidx8 {Type I LastRead -1 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}
		sigmoid_table7 {Type I LastRead -1 FirstWrite -1}
		tanh_table6 {Type I LastRead -1 FirstWrite -1}}
	gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s {
		reset_state {Type I LastRead 0 FirstWrite -1}
		data_V {Type I LastRead 1 FirstWrite -1}
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
		h_state_V_20 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_21 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_22 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_23 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_24 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_25 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_26 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_27 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_28 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_29 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_30 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_31 {Type IO LastRead -1 FirstWrite -1}
		outidx9 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		outidx8 {Type I LastRead -1 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}
		sigmoid_table7 {Type I LastRead -1 FirstWrite -1}
		tanh_table6 {Type I LastRead -1 FirstWrite -1}}
	dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s {
		outidx8 {Type I LastRead -1 FirstWrite -1}
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
		h_state_V_20 {Type I LastRead 2 FirstWrite -1}
		h_state_V_21 {Type I LastRead 2 FirstWrite -1}
		h_state_V_22 {Type I LastRead 2 FirstWrite -1}
		h_state_V_23 {Type I LastRead 2 FirstWrite -1}
		h_state_V_24 {Type I LastRead 2 FirstWrite -1}
		h_state_V_25 {Type I LastRead 2 FirstWrite -1}
		h_state_V_26 {Type I LastRead 2 FirstWrite -1}
		h_state_V_27 {Type I LastRead 2 FirstWrite -1}
		h_state_V_28 {Type I LastRead 2 FirstWrite -1}
		h_state_V_29 {Type I LastRead 2 FirstWrite -1}
		h_state_V_30 {Type I LastRead 2 FirstWrite -1}
		h_state_V_31 {Type I LastRead 2 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}}
	sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s {
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
		data_40_V_read {Type I LastRead 0 FirstWrite -1}
		data_41_V_read {Type I LastRead 0 FirstWrite -1}
		data_42_V_read {Type I LastRead 0 FirstWrite -1}
		data_43_V_read {Type I LastRead 0 FirstWrite -1}
		data_44_V_read {Type I LastRead 0 FirstWrite -1}
		data_45_V_read {Type I LastRead 0 FirstWrite -1}
		data_46_V_read {Type I LastRead 0 FirstWrite -1}
		data_47_V_read {Type I LastRead 0 FirstWrite -1}
		data_48_V_read {Type I LastRead 0 FirstWrite -1}
		data_49_V_read {Type I LastRead 0 FirstWrite -1}
		data_50_V_read {Type I LastRead 0 FirstWrite -1}
		data_51_V_read {Type I LastRead 0 FirstWrite -1}
		data_52_V_read {Type I LastRead 0 FirstWrite -1}
		data_53_V_read {Type I LastRead 0 FirstWrite -1}
		data_54_V_read {Type I LastRead 0 FirstWrite -1}
		data_55_V_read {Type I LastRead 0 FirstWrite -1}
		data_56_V_read {Type I LastRead 0 FirstWrite -1}
		data_57_V_read {Type I LastRead 0 FirstWrite -1}
		data_58_V_read {Type I LastRead 0 FirstWrite -1}
		data_59_V_read {Type I LastRead 0 FirstWrite -1}
		data_60_V_read {Type I LastRead 0 FirstWrite -1}
		data_61_V_read {Type I LastRead 0 FirstWrite -1}
		data_62_V_read {Type I LastRead 0 FirstWrite -1}
		data_63_V_read {Type I LastRead 0 FirstWrite -1}
		sigmoid_table7 {Type I LastRead -1 FirstWrite -1}}
	tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s {
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
		tanh_table6 {Type I LastRead -1 FirstWrite -1}}
	dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_V {Type I LastRead 1 FirstWrite -1}
		outidx9 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "16301", "Max" : "16401"}
	, {"Name" : "Interval", "Min" : "16301", "Max" : "16401"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_stream_V_data_0_V { axis {  { data_stream_V_data_0_V_TDATA in_data 0 24 }  { data_stream_V_data_0_V_TVALID in_vld 0 1 }  { data_stream_V_data_0_V_TREADY in_acc 1 1 } } }
	data_stream_V_data_1_V { axis {  { data_stream_V_data_1_V_TDATA in_data 0 24 }  { data_stream_V_data_1_V_TVALID in_vld 0 1 }  { data_stream_V_data_1_V_TREADY in_acc 1 1 } } }
	data_stream_V_data_2_V { axis {  { data_stream_V_data_2_V_TDATA in_data 0 24 }  { data_stream_V_data_2_V_TVALID in_vld 0 1 }  { data_stream_V_data_2_V_TREADY in_acc 1 1 } } }
	res_stream_V_data_0_V { ap_fifo {  { res_stream_V_data_0_V_din fifo_data 1 20 }  { res_stream_V_data_0_V_full_n fifo_status 0 1 }  { res_stream_V_data_0_V_write fifo_update 1 1 } } }
	res_stream_V_data_1_V { ap_fifo {  { res_stream_V_data_1_V_din fifo_data 1 20 }  { res_stream_V_data_1_V_full_n fifo_status 0 1 }  { res_stream_V_data_1_V_write fifo_update 1 1 } } }
	res_stream_V_data_2_V { ap_fifo {  { res_stream_V_data_2_V_din fifo_data 1 20 }  { res_stream_V_data_2_V_full_n fifo_status 0 1 }  { res_stream_V_data_2_V_write fifo_update 1 1 } } }
	res_stream_V_data_3_V { ap_fifo {  { res_stream_V_data_3_V_din fifo_data 1 20 }  { res_stream_V_data_3_V_full_n fifo_status 0 1 }  { res_stream_V_data_3_V_write fifo_update 1 1 } } }
	res_stream_V_data_4_V { ap_fifo {  { res_stream_V_data_4_V_din fifo_data 1 20 }  { res_stream_V_data_4_V_full_n fifo_status 0 1 }  { res_stream_V_data_4_V_write fifo_update 1 1 } } }
	res_stream_V_data_5_V { ap_fifo {  { res_stream_V_data_5_V_din fifo_data 1 20 }  { res_stream_V_data_5_V_full_n fifo_status 0 1 }  { res_stream_V_data_5_V_write fifo_update 1 1 } } }
	res_stream_V_data_6_V { ap_fifo {  { res_stream_V_data_6_V_din fifo_data 1 20 }  { res_stream_V_data_6_V_full_n fifo_status 0 1 }  { res_stream_V_data_6_V_write fifo_update 1 1 } } }
	res_stream_V_data_7_V { ap_fifo {  { res_stream_V_data_7_V_din fifo_data 1 20 }  { res_stream_V_data_7_V_full_n fifo_status 0 1 }  { res_stream_V_data_7_V_write fifo_update 1 1 } } }
	res_stream_V_data_8_V { ap_fifo {  { res_stream_V_data_8_V_din fifo_data 1 20 }  { res_stream_V_data_8_V_full_n fifo_status 0 1 }  { res_stream_V_data_8_V_write fifo_update 1 1 } } }
	res_stream_V_data_9_V { ap_fifo {  { res_stream_V_data_9_V_din fifo_data 1 20 }  { res_stream_V_data_9_V_full_n fifo_status 0 1 }  { res_stream_V_data_9_V_write fifo_update 1 1 } } }
	res_stream_V_data_10_V { ap_fifo {  { res_stream_V_data_10_V_din fifo_data 1 20 }  { res_stream_V_data_10_V_full_n fifo_status 0 1 }  { res_stream_V_data_10_V_write fifo_update 1 1 } } }
	res_stream_V_data_11_V { ap_fifo {  { res_stream_V_data_11_V_din fifo_data 1 20 }  { res_stream_V_data_11_V_full_n fifo_status 0 1 }  { res_stream_V_data_11_V_write fifo_update 1 1 } } }
	res_stream_V_data_12_V { ap_fifo {  { res_stream_V_data_12_V_din fifo_data 1 20 }  { res_stream_V_data_12_V_full_n fifo_status 0 1 }  { res_stream_V_data_12_V_write fifo_update 1 1 } } }
	res_stream_V_data_13_V { ap_fifo {  { res_stream_V_data_13_V_din fifo_data 1 20 }  { res_stream_V_data_13_V_full_n fifo_status 0 1 }  { res_stream_V_data_13_V_write fifo_update 1 1 } } }
	res_stream_V_data_14_V { ap_fifo {  { res_stream_V_data_14_V_din fifo_data 1 20 }  { res_stream_V_data_14_V_full_n fifo_status 0 1 }  { res_stream_V_data_14_V_write fifo_update 1 1 } } }
	res_stream_V_data_15_V { ap_fifo {  { res_stream_V_data_15_V_din fifo_data 1 20 }  { res_stream_V_data_15_V_full_n fifo_status 0 1 }  { res_stream_V_data_15_V_write fifo_update 1 1 } } }
	res_stream_V_data_16_V { ap_fifo {  { res_stream_V_data_16_V_din fifo_data 1 20 }  { res_stream_V_data_16_V_full_n fifo_status 0 1 }  { res_stream_V_data_16_V_write fifo_update 1 1 } } }
	res_stream_V_data_17_V { ap_fifo {  { res_stream_V_data_17_V_din fifo_data 1 20 }  { res_stream_V_data_17_V_full_n fifo_status 0 1 }  { res_stream_V_data_17_V_write fifo_update 1 1 } } }
	res_stream_V_data_18_V { ap_fifo {  { res_stream_V_data_18_V_din fifo_data 1 20 }  { res_stream_V_data_18_V_full_n fifo_status 0 1 }  { res_stream_V_data_18_V_write fifo_update 1 1 } } }
	res_stream_V_data_19_V { ap_fifo {  { res_stream_V_data_19_V_din fifo_data 1 20 }  { res_stream_V_data_19_V_full_n fifo_status 0 1 }  { res_stream_V_data_19_V_write fifo_update 1 1 } } }
	res_stream_V_data_20_V { ap_fifo {  { res_stream_V_data_20_V_din fifo_data 1 20 }  { res_stream_V_data_20_V_full_n fifo_status 0 1 }  { res_stream_V_data_20_V_write fifo_update 1 1 } } }
	res_stream_V_data_21_V { ap_fifo {  { res_stream_V_data_21_V_din fifo_data 1 20 }  { res_stream_V_data_21_V_full_n fifo_status 0 1 }  { res_stream_V_data_21_V_write fifo_update 1 1 } } }
	res_stream_V_data_22_V { ap_fifo {  { res_stream_V_data_22_V_din fifo_data 1 20 }  { res_stream_V_data_22_V_full_n fifo_status 0 1 }  { res_stream_V_data_22_V_write fifo_update 1 1 } } }
	res_stream_V_data_23_V { ap_fifo {  { res_stream_V_data_23_V_din fifo_data 1 20 }  { res_stream_V_data_23_V_full_n fifo_status 0 1 }  { res_stream_V_data_23_V_write fifo_update 1 1 } } }
	res_stream_V_data_24_V { ap_fifo {  { res_stream_V_data_24_V_din fifo_data 1 20 }  { res_stream_V_data_24_V_full_n fifo_status 0 1 }  { res_stream_V_data_24_V_write fifo_update 1 1 } } }
	res_stream_V_data_25_V { ap_fifo {  { res_stream_V_data_25_V_din fifo_data 1 20 }  { res_stream_V_data_25_V_full_n fifo_status 0 1 }  { res_stream_V_data_25_V_write fifo_update 1 1 } } }
	res_stream_V_data_26_V { ap_fifo {  { res_stream_V_data_26_V_din fifo_data 1 20 }  { res_stream_V_data_26_V_full_n fifo_status 0 1 }  { res_stream_V_data_26_V_write fifo_update 1 1 } } }
	res_stream_V_data_27_V { ap_fifo {  { res_stream_V_data_27_V_din fifo_data 1 20 }  { res_stream_V_data_27_V_full_n fifo_status 0 1 }  { res_stream_V_data_27_V_write fifo_update 1 1 } } }
	res_stream_V_data_28_V { ap_fifo {  { res_stream_V_data_28_V_din fifo_data 1 20 }  { res_stream_V_data_28_V_full_n fifo_status 0 1 }  { res_stream_V_data_28_V_write fifo_update 1 1 } } }
	res_stream_V_data_29_V { ap_fifo {  { res_stream_V_data_29_V_din fifo_data 1 20 }  { res_stream_V_data_29_V_full_n fifo_status 0 1 }  { res_stream_V_data_29_V_write fifo_update 1 1 } } }
	res_stream_V_data_30_V { ap_fifo {  { res_stream_V_data_30_V_din fifo_data 1 20 }  { res_stream_V_data_30_V_full_n fifo_status 0 1 }  { res_stream_V_data_30_V_write fifo_update 1 1 } } }
	res_stream_V_data_31_V { ap_fifo {  { res_stream_V_data_31_V_din fifo_data 1 20 }  { res_stream_V_data_31_V_full_n fifo_status 0 1 }  { res_stream_V_data_31_V_write fifo_update 1 1 } } }
}
set moduleName gru_stack_array_ap_fixed_3u_array_ap_fixed_20_10_5_3_0_32u_config2_s
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
set C_modelName {gru_stack<array<ap_fixed,3u>,array<ap_fixed<20,10,5,3,0>,32u>,config2>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_stream_V_data_0_V int 24 regular {axi_s 0 volatile  { data_stream_V_data_0_V Data } }  }
	{ data_stream_V_data_1_V int 24 regular {axi_s 0 volatile  { data_stream_V_data_1_V Data } }  }
	{ data_stream_V_data_2_V int 24 regular {axi_s 0 volatile  { data_stream_V_data_2_V Data } }  }
	{ res_stream_V_data_0_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_1_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_2_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_3_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_4_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_5_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_6_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_7_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_8_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_9_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_10_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_11_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_12_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_13_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_14_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_15_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_16_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_17_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_18_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_19_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_20_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_21_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_22_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_23_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_24_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_25_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_26_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_27_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_28_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_29_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_30_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_31_V int 20 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_stream_V_data_0_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_1_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_2_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "res_stream_V_data_0_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_1_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_2_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_3_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_4_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_5_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_6_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_7_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_8_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_9_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_10_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_11_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_12_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_13_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_14_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_15_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_16_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_17_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_18_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_19_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_20_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_21_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_22_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_23_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_24_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_25_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_26_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_27_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_28_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_29_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_30_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_31_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 115
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ data_stream_V_data_0_V_TDATA sc_in sc_lv 24 signal 0 } 
	{ data_stream_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ data_stream_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ data_stream_V_data_1_V_TDATA sc_in sc_lv 24 signal 1 } 
	{ data_stream_V_data_1_V_TVALID sc_in sc_logic 1 invld 1 } 
	{ data_stream_V_data_1_V_TREADY sc_out sc_logic 1 inacc 1 } 
	{ data_stream_V_data_2_V_TDATA sc_in sc_lv 24 signal 2 } 
	{ data_stream_V_data_2_V_TVALID sc_in sc_logic 1 invld 2 } 
	{ data_stream_V_data_2_V_TREADY sc_out sc_logic 1 inacc 2 } 
	{ res_stream_V_data_0_V_din sc_out sc_lv 20 signal 3 } 
	{ res_stream_V_data_0_V_full_n sc_in sc_logic 1 signal 3 } 
	{ res_stream_V_data_0_V_write sc_out sc_logic 1 signal 3 } 
	{ res_stream_V_data_1_V_din sc_out sc_lv 20 signal 4 } 
	{ res_stream_V_data_1_V_full_n sc_in sc_logic 1 signal 4 } 
	{ res_stream_V_data_1_V_write sc_out sc_logic 1 signal 4 } 
	{ res_stream_V_data_2_V_din sc_out sc_lv 20 signal 5 } 
	{ res_stream_V_data_2_V_full_n sc_in sc_logic 1 signal 5 } 
	{ res_stream_V_data_2_V_write sc_out sc_logic 1 signal 5 } 
	{ res_stream_V_data_3_V_din sc_out sc_lv 20 signal 6 } 
	{ res_stream_V_data_3_V_full_n sc_in sc_logic 1 signal 6 } 
	{ res_stream_V_data_3_V_write sc_out sc_logic 1 signal 6 } 
	{ res_stream_V_data_4_V_din sc_out sc_lv 20 signal 7 } 
	{ res_stream_V_data_4_V_full_n sc_in sc_logic 1 signal 7 } 
	{ res_stream_V_data_4_V_write sc_out sc_logic 1 signal 7 } 
	{ res_stream_V_data_5_V_din sc_out sc_lv 20 signal 8 } 
	{ res_stream_V_data_5_V_full_n sc_in sc_logic 1 signal 8 } 
	{ res_stream_V_data_5_V_write sc_out sc_logic 1 signal 8 } 
	{ res_stream_V_data_6_V_din sc_out sc_lv 20 signal 9 } 
	{ res_stream_V_data_6_V_full_n sc_in sc_logic 1 signal 9 } 
	{ res_stream_V_data_6_V_write sc_out sc_logic 1 signal 9 } 
	{ res_stream_V_data_7_V_din sc_out sc_lv 20 signal 10 } 
	{ res_stream_V_data_7_V_full_n sc_in sc_logic 1 signal 10 } 
	{ res_stream_V_data_7_V_write sc_out sc_logic 1 signal 10 } 
	{ res_stream_V_data_8_V_din sc_out sc_lv 20 signal 11 } 
	{ res_stream_V_data_8_V_full_n sc_in sc_logic 1 signal 11 } 
	{ res_stream_V_data_8_V_write sc_out sc_logic 1 signal 11 } 
	{ res_stream_V_data_9_V_din sc_out sc_lv 20 signal 12 } 
	{ res_stream_V_data_9_V_full_n sc_in sc_logic 1 signal 12 } 
	{ res_stream_V_data_9_V_write sc_out sc_logic 1 signal 12 } 
	{ res_stream_V_data_10_V_din sc_out sc_lv 20 signal 13 } 
	{ res_stream_V_data_10_V_full_n sc_in sc_logic 1 signal 13 } 
	{ res_stream_V_data_10_V_write sc_out sc_logic 1 signal 13 } 
	{ res_stream_V_data_11_V_din sc_out sc_lv 20 signal 14 } 
	{ res_stream_V_data_11_V_full_n sc_in sc_logic 1 signal 14 } 
	{ res_stream_V_data_11_V_write sc_out sc_logic 1 signal 14 } 
	{ res_stream_V_data_12_V_din sc_out sc_lv 20 signal 15 } 
	{ res_stream_V_data_12_V_full_n sc_in sc_logic 1 signal 15 } 
	{ res_stream_V_data_12_V_write sc_out sc_logic 1 signal 15 } 
	{ res_stream_V_data_13_V_din sc_out sc_lv 20 signal 16 } 
	{ res_stream_V_data_13_V_full_n sc_in sc_logic 1 signal 16 } 
	{ res_stream_V_data_13_V_write sc_out sc_logic 1 signal 16 } 
	{ res_stream_V_data_14_V_din sc_out sc_lv 20 signal 17 } 
	{ res_stream_V_data_14_V_full_n sc_in sc_logic 1 signal 17 } 
	{ res_stream_V_data_14_V_write sc_out sc_logic 1 signal 17 } 
	{ res_stream_V_data_15_V_din sc_out sc_lv 20 signal 18 } 
	{ res_stream_V_data_15_V_full_n sc_in sc_logic 1 signal 18 } 
	{ res_stream_V_data_15_V_write sc_out sc_logic 1 signal 18 } 
	{ res_stream_V_data_16_V_din sc_out sc_lv 20 signal 19 } 
	{ res_stream_V_data_16_V_full_n sc_in sc_logic 1 signal 19 } 
	{ res_stream_V_data_16_V_write sc_out sc_logic 1 signal 19 } 
	{ res_stream_V_data_17_V_din sc_out sc_lv 20 signal 20 } 
	{ res_stream_V_data_17_V_full_n sc_in sc_logic 1 signal 20 } 
	{ res_stream_V_data_17_V_write sc_out sc_logic 1 signal 20 } 
	{ res_stream_V_data_18_V_din sc_out sc_lv 20 signal 21 } 
	{ res_stream_V_data_18_V_full_n sc_in sc_logic 1 signal 21 } 
	{ res_stream_V_data_18_V_write sc_out sc_logic 1 signal 21 } 
	{ res_stream_V_data_19_V_din sc_out sc_lv 20 signal 22 } 
	{ res_stream_V_data_19_V_full_n sc_in sc_logic 1 signal 22 } 
	{ res_stream_V_data_19_V_write sc_out sc_logic 1 signal 22 } 
	{ res_stream_V_data_20_V_din sc_out sc_lv 20 signal 23 } 
	{ res_stream_V_data_20_V_full_n sc_in sc_logic 1 signal 23 } 
	{ res_stream_V_data_20_V_write sc_out sc_logic 1 signal 23 } 
	{ res_stream_V_data_21_V_din sc_out sc_lv 20 signal 24 } 
	{ res_stream_V_data_21_V_full_n sc_in sc_logic 1 signal 24 } 
	{ res_stream_V_data_21_V_write sc_out sc_logic 1 signal 24 } 
	{ res_stream_V_data_22_V_din sc_out sc_lv 20 signal 25 } 
	{ res_stream_V_data_22_V_full_n sc_in sc_logic 1 signal 25 } 
	{ res_stream_V_data_22_V_write sc_out sc_logic 1 signal 25 } 
	{ res_stream_V_data_23_V_din sc_out sc_lv 20 signal 26 } 
	{ res_stream_V_data_23_V_full_n sc_in sc_logic 1 signal 26 } 
	{ res_stream_V_data_23_V_write sc_out sc_logic 1 signal 26 } 
	{ res_stream_V_data_24_V_din sc_out sc_lv 20 signal 27 } 
	{ res_stream_V_data_24_V_full_n sc_in sc_logic 1 signal 27 } 
	{ res_stream_V_data_24_V_write sc_out sc_logic 1 signal 27 } 
	{ res_stream_V_data_25_V_din sc_out sc_lv 20 signal 28 } 
	{ res_stream_V_data_25_V_full_n sc_in sc_logic 1 signal 28 } 
	{ res_stream_V_data_25_V_write sc_out sc_logic 1 signal 28 } 
	{ res_stream_V_data_26_V_din sc_out sc_lv 20 signal 29 } 
	{ res_stream_V_data_26_V_full_n sc_in sc_logic 1 signal 29 } 
	{ res_stream_V_data_26_V_write sc_out sc_logic 1 signal 29 } 
	{ res_stream_V_data_27_V_din sc_out sc_lv 20 signal 30 } 
	{ res_stream_V_data_27_V_full_n sc_in sc_logic 1 signal 30 } 
	{ res_stream_V_data_27_V_write sc_out sc_logic 1 signal 30 } 
	{ res_stream_V_data_28_V_din sc_out sc_lv 20 signal 31 } 
	{ res_stream_V_data_28_V_full_n sc_in sc_logic 1 signal 31 } 
	{ res_stream_V_data_28_V_write sc_out sc_logic 1 signal 31 } 
	{ res_stream_V_data_29_V_din sc_out sc_lv 20 signal 32 } 
	{ res_stream_V_data_29_V_full_n sc_in sc_logic 1 signal 32 } 
	{ res_stream_V_data_29_V_write sc_out sc_logic 1 signal 32 } 
	{ res_stream_V_data_30_V_din sc_out sc_lv 20 signal 33 } 
	{ res_stream_V_data_30_V_full_n sc_in sc_logic 1 signal 33 } 
	{ res_stream_V_data_30_V_write sc_out sc_logic 1 signal 33 } 
	{ res_stream_V_data_31_V_din sc_out sc_lv 20 signal 34 } 
	{ res_stream_V_data_31_V_full_n sc_in sc_logic 1 signal 34 } 
	{ res_stream_V_data_31_V_write sc_out sc_logic 1 signal 34 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "data_stream_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "data_stream_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "data_stream_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_stream_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "data_stream_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_stream_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "data_stream_V_data_1_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "data_stream_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "data_stream_V_data_1_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_stream_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "data_stream_V_data_1_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_stream_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "data_stream_V_data_2_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "data_stream_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "data_stream_V_data_2_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_stream_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "data_stream_V_data_2_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_stream_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "res_stream_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_4_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_4_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_4_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_5_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_5_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_5_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_6_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_6_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_6_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_7_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_7_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_7_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_8_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_8_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_8_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_9_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_9_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_9_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_10_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_10_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_10_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_10_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_10_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_10_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_11_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_11_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_11_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_11_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_11_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_11_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_12_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_12_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_12_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_12_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_12_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_12_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_13_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_13_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_13_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_13_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_13_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_13_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_14_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_14_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_14_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_14_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_14_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_14_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_15_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_15_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_15_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_15_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_15_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_15_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_16_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_16_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_16_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_16_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_16_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_16_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_17_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_17_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_17_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_17_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_17_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_17_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_18_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_18_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_18_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_18_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_18_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_18_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_19_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_19_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_19_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_19_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_19_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_19_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_20_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_20_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_20_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_20_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_20_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_20_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_21_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_21_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_21_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_21_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_21_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_21_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_22_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_22_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_22_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_22_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_22_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_22_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_23_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_23_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_23_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_23_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_23_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_23_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_24_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_24_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_24_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_24_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_24_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_24_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_25_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_25_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_25_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_25_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_25_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_25_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_26_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_26_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_26_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_26_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_26_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_26_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_27_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_27_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_27_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_27_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_27_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_27_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_28_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_28_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_28_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_28_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_28_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_28_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_29_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_29_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_29_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_29_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_29_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_29_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_30_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_30_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_30_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_30_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_30_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_30_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_31_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_31_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_31_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_31_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_31_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_31_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "gru_stack_array_ap_fixed_3u_array_ap_fixed_20_10_5_3_0_32u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "16301", "EstimateLatencyMax" : "16401",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750"}],
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_15_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_15_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_16_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_16_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_17_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_17_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_18_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_18_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_19_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_19_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_20_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_20_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_21_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_21_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_22_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_22_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_23_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_23_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_24_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_24_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_25_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_25_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_26_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_26_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_27_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_27_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_28_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_28_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_29_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_29_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_30_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_30_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_31_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_31_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_0"}]},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_1"}]},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_2"}]},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_3"}]},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_4"}]},
			{"Name" : "h_state_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_5"}]},
			{"Name" : "h_state_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_6"}]},
			{"Name" : "h_state_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_7"}]},
			{"Name" : "h_state_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_8"}]},
			{"Name" : "h_state_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_9"}]},
			{"Name" : "h_state_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_10"}]},
			{"Name" : "h_state_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_11"}]},
			{"Name" : "h_state_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_12"}]},
			{"Name" : "h_state_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_13"}]},
			{"Name" : "h_state_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_14"}]},
			{"Name" : "h_state_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_15"}]},
			{"Name" : "h_state_V_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_16"}]},
			{"Name" : "h_state_V_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_17"}]},
			{"Name" : "h_state_V_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_18"}]},
			{"Name" : "h_state_V_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_19"}]},
			{"Name" : "h_state_V_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_20"}]},
			{"Name" : "h_state_V_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_21"}]},
			{"Name" : "h_state_V_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_22"}]},
			{"Name" : "h_state_V_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_23"}]},
			{"Name" : "h_state_V_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_24"}]},
			{"Name" : "h_state_V_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_25"}]},
			{"Name" : "h_state_V_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_26"}]},
			{"Name" : "h_state_V_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_27"}]},
			{"Name" : "h_state_V_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_28"}]},
			{"Name" : "h_state_V_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_29"}]},
			{"Name" : "h_state_V_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_30"}]},
			{"Name" : "h_state_V_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_31"}]},
			{"Name" : "outidx9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "outidx9"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "w2_V"}]},
			{"Name" : "outidx8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "outidx8"}]},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "wr2_V"}]},
			{"Name" : "sigmoid_table7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "sigmoid_table7"}]},
			{"Name" : "tanh_table6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "tanh_table6"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.data_in_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Parent" : "0", "Child" : ["3", "32", "34", "36"],
		"CDFG" : "gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "159", "EstimateLatencyMax" : "160",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288"}],
		"Port" : [
			{"Name" : "reset_state", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Port" : "data_V"}]},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_0"}]},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_1"}]},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_2"}]},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_3"}]},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_4"}]},
			{"Name" : "h_state_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_5"}]},
			{"Name" : "h_state_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_6"}]},
			{"Name" : "h_state_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_7"}]},
			{"Name" : "h_state_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_8"}]},
			{"Name" : "h_state_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_9"}]},
			{"Name" : "h_state_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_10"}]},
			{"Name" : "h_state_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_11"}]},
			{"Name" : "h_state_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_12"}]},
			{"Name" : "h_state_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_13"}]},
			{"Name" : "h_state_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_14"}]},
			{"Name" : "h_state_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_15"}]},
			{"Name" : "h_state_V_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_16"}]},
			{"Name" : "h_state_V_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_17"}]},
			{"Name" : "h_state_V_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_18"}]},
			{"Name" : "h_state_V_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_19"}]},
			{"Name" : "h_state_V_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_20"}]},
			{"Name" : "h_state_V_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_21"}]},
			{"Name" : "h_state_V_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_22"}]},
			{"Name" : "h_state_V_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_23"}]},
			{"Name" : "h_state_V_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_24"}]},
			{"Name" : "h_state_V_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_25"}]},
			{"Name" : "h_state_V_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_26"}]},
			{"Name" : "h_state_V_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_27"}]},
			{"Name" : "h_state_V_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_28"}]},
			{"Name" : "h_state_V_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_29"}]},
			{"Name" : "h_state_V_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_30"}]},
			{"Name" : "h_state_V_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_31"}]},
			{"Name" : "outidx9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Port" : "outidx9"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Port" : "w2_V"}]},
			{"Name" : "outidx8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "outidx8"}]},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "wr2_V"}]},
			{"Name" : "sigmoid_table7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "32", "SubInstance" : "grp_sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s_fu_180", "Port" : "sigmoid_table7"}]},
			{"Name" : "tanh_table6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s_fu_250", "Port" : "tanh_table6"}]}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Parent" : "2", "Child" : ["4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"],
		"CDFG" : "dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "130", "EstimateLatencyMax" : "131",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "outidx8", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "h_state_V_20", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_21", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_22", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_23", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_24", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_25", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_26", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_27", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_28", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_29", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_30", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_31", "Type" : "None", "Direction" : "I"},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.outidx8_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.wr2_V_U", "Parent" : "3"},
	{"ID" : "6", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_325_20_1_1_U10", "Parent" : "3"},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_42_20_1_1_U11", "Parent" : "3"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U12", "Parent" : "3"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U13", "Parent" : "3"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U14", "Parent" : "3"},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U15", "Parent" : "3"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U16", "Parent" : "3"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U17", "Parent" : "3"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U18", "Parent" : "3"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U19", "Parent" : "3"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U20", "Parent" : "3"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U21", "Parent" : "3"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U22", "Parent" : "3"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U23", "Parent" : "3"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U24", "Parent" : "3"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U25", "Parent" : "3"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U26", "Parent" : "3"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U27", "Parent" : "3"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U28", "Parent" : "3"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U29", "Parent" : "3"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U30", "Parent" : "3"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U31", "Parent" : "3"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U32", "Parent" : "3"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U33", "Parent" : "3"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U34", "Parent" : "3"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mul_mul_20s_12s_30_1_1_U35", "Parent" : "3"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s_fu_180", "Parent" : "2", "Child" : ["33"],
		"CDFG" : "sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
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
			{"Name" : "sigmoid_table7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s_fu_180.sigmoid_table7_U", "Parent" : "32"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s_fu_250", "Parent" : "2", "Child" : ["35"],
		"CDFG" : "tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
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
			{"Name" : "tanh_table6", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s_fu_250.tanh_table6_U", "Parent" : "34"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Parent" : "2", "Child" : ["37", "38", "39", "40", "41"],
		"CDFG" : "dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "146", "EstimateLatencyMax" : "147",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outidx9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.outidx9_U", "Parent" : "36"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.w2_V_U", "Parent" : "36"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.myproject_mux_646_20_1_1_U1", "Parent" : "36"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.myproject_mux_1287_20_1_1_U2", "Parent" : "36"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.myproject_mul_mul_20s_13s_30_1_1_U3", "Parent" : "36"}]}


set ArgLastReadFirstWriteLatency {
	gru_stack_array_ap_fixed_3u_array_ap_fixed_20_10_5_3_0_32u_config2_s {
		data_stream_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 1 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 1 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_10_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_11_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_12_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_13_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_14_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_15_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_16_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_17_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_18_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_19_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_20_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_21_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_22_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_23_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_24_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_25_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_26_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_27_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_28_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_29_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_30_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_31_V {Type O LastRead -1 FirstWrite 4}
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
		h_state_V_20 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_21 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_22 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_23 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_24 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_25 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_26 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_27 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_28 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_29 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_30 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_31 {Type IO LastRead -1 FirstWrite -1}
		outidx9 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		outidx8 {Type I LastRead -1 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}
		sigmoid_table7 {Type I LastRead -1 FirstWrite -1}
		tanh_table6 {Type I LastRead -1 FirstWrite -1}}
	gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s {
		reset_state {Type I LastRead 0 FirstWrite -1}
		data_V {Type I LastRead 1 FirstWrite -1}
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
		h_state_V_20 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_21 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_22 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_23 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_24 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_25 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_26 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_27 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_28 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_29 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_30 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_31 {Type IO LastRead -1 FirstWrite -1}
		outidx9 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		outidx8 {Type I LastRead -1 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}
		sigmoid_table7 {Type I LastRead -1 FirstWrite -1}
		tanh_table6 {Type I LastRead -1 FirstWrite -1}}
	dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s {
		outidx8 {Type I LastRead -1 FirstWrite -1}
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
		h_state_V_20 {Type I LastRead 2 FirstWrite -1}
		h_state_V_21 {Type I LastRead 2 FirstWrite -1}
		h_state_V_22 {Type I LastRead 2 FirstWrite -1}
		h_state_V_23 {Type I LastRead 2 FirstWrite -1}
		h_state_V_24 {Type I LastRead 2 FirstWrite -1}
		h_state_V_25 {Type I LastRead 2 FirstWrite -1}
		h_state_V_26 {Type I LastRead 2 FirstWrite -1}
		h_state_V_27 {Type I LastRead 2 FirstWrite -1}
		h_state_V_28 {Type I LastRead 2 FirstWrite -1}
		h_state_V_29 {Type I LastRead 2 FirstWrite -1}
		h_state_V_30 {Type I LastRead 2 FirstWrite -1}
		h_state_V_31 {Type I LastRead 2 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}}
	sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s {
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
		data_40_V_read {Type I LastRead 0 FirstWrite -1}
		data_41_V_read {Type I LastRead 0 FirstWrite -1}
		data_42_V_read {Type I LastRead 0 FirstWrite -1}
		data_43_V_read {Type I LastRead 0 FirstWrite -1}
		data_44_V_read {Type I LastRead 0 FirstWrite -1}
		data_45_V_read {Type I LastRead 0 FirstWrite -1}
		data_46_V_read {Type I LastRead 0 FirstWrite -1}
		data_47_V_read {Type I LastRead 0 FirstWrite -1}
		data_48_V_read {Type I LastRead 0 FirstWrite -1}
		data_49_V_read {Type I LastRead 0 FirstWrite -1}
		data_50_V_read {Type I LastRead 0 FirstWrite -1}
		data_51_V_read {Type I LastRead 0 FirstWrite -1}
		data_52_V_read {Type I LastRead 0 FirstWrite -1}
		data_53_V_read {Type I LastRead 0 FirstWrite -1}
		data_54_V_read {Type I LastRead 0 FirstWrite -1}
		data_55_V_read {Type I LastRead 0 FirstWrite -1}
		data_56_V_read {Type I LastRead 0 FirstWrite -1}
		data_57_V_read {Type I LastRead 0 FirstWrite -1}
		data_58_V_read {Type I LastRead 0 FirstWrite -1}
		data_59_V_read {Type I LastRead 0 FirstWrite -1}
		data_60_V_read {Type I LastRead 0 FirstWrite -1}
		data_61_V_read {Type I LastRead 0 FirstWrite -1}
		data_62_V_read {Type I LastRead 0 FirstWrite -1}
		data_63_V_read {Type I LastRead 0 FirstWrite -1}
		sigmoid_table7 {Type I LastRead -1 FirstWrite -1}}
	tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s {
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
		tanh_table6 {Type I LastRead -1 FirstWrite -1}}
	dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_V {Type I LastRead 1 FirstWrite -1}
		outidx9 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "16301", "Max" : "16401"}
	, {"Name" : "Interval", "Min" : "16301", "Max" : "16401"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_stream_V_data_0_V { axis {  { data_stream_V_data_0_V_TDATA in_data 0 24 }  { data_stream_V_data_0_V_TVALID in_vld 0 1 }  { data_stream_V_data_0_V_TREADY in_acc 1 1 } } }
	data_stream_V_data_1_V { axis {  { data_stream_V_data_1_V_TDATA in_data 0 24 }  { data_stream_V_data_1_V_TVALID in_vld 0 1 }  { data_stream_V_data_1_V_TREADY in_acc 1 1 } } }
	data_stream_V_data_2_V { axis {  { data_stream_V_data_2_V_TDATA in_data 0 24 }  { data_stream_V_data_2_V_TVALID in_vld 0 1 }  { data_stream_V_data_2_V_TREADY in_acc 1 1 } } }
	res_stream_V_data_0_V { ap_fifo {  { res_stream_V_data_0_V_din fifo_data 1 20 }  { res_stream_V_data_0_V_full_n fifo_status 0 1 }  { res_stream_V_data_0_V_write fifo_update 1 1 } } }
	res_stream_V_data_1_V { ap_fifo {  { res_stream_V_data_1_V_din fifo_data 1 20 }  { res_stream_V_data_1_V_full_n fifo_status 0 1 }  { res_stream_V_data_1_V_write fifo_update 1 1 } } }
	res_stream_V_data_2_V { ap_fifo {  { res_stream_V_data_2_V_din fifo_data 1 20 }  { res_stream_V_data_2_V_full_n fifo_status 0 1 }  { res_stream_V_data_2_V_write fifo_update 1 1 } } }
	res_stream_V_data_3_V { ap_fifo {  { res_stream_V_data_3_V_din fifo_data 1 20 }  { res_stream_V_data_3_V_full_n fifo_status 0 1 }  { res_stream_V_data_3_V_write fifo_update 1 1 } } }
	res_stream_V_data_4_V { ap_fifo {  { res_stream_V_data_4_V_din fifo_data 1 20 }  { res_stream_V_data_4_V_full_n fifo_status 0 1 }  { res_stream_V_data_4_V_write fifo_update 1 1 } } }
	res_stream_V_data_5_V { ap_fifo {  { res_stream_V_data_5_V_din fifo_data 1 20 }  { res_stream_V_data_5_V_full_n fifo_status 0 1 }  { res_stream_V_data_5_V_write fifo_update 1 1 } } }
	res_stream_V_data_6_V { ap_fifo {  { res_stream_V_data_6_V_din fifo_data 1 20 }  { res_stream_V_data_6_V_full_n fifo_status 0 1 }  { res_stream_V_data_6_V_write fifo_update 1 1 } } }
	res_stream_V_data_7_V { ap_fifo {  { res_stream_V_data_7_V_din fifo_data 1 20 }  { res_stream_V_data_7_V_full_n fifo_status 0 1 }  { res_stream_V_data_7_V_write fifo_update 1 1 } } }
	res_stream_V_data_8_V { ap_fifo {  { res_stream_V_data_8_V_din fifo_data 1 20 }  { res_stream_V_data_8_V_full_n fifo_status 0 1 }  { res_stream_V_data_8_V_write fifo_update 1 1 } } }
	res_stream_V_data_9_V { ap_fifo {  { res_stream_V_data_9_V_din fifo_data 1 20 }  { res_stream_V_data_9_V_full_n fifo_status 0 1 }  { res_stream_V_data_9_V_write fifo_update 1 1 } } }
	res_stream_V_data_10_V { ap_fifo {  { res_stream_V_data_10_V_din fifo_data 1 20 }  { res_stream_V_data_10_V_full_n fifo_status 0 1 }  { res_stream_V_data_10_V_write fifo_update 1 1 } } }
	res_stream_V_data_11_V { ap_fifo {  { res_stream_V_data_11_V_din fifo_data 1 20 }  { res_stream_V_data_11_V_full_n fifo_status 0 1 }  { res_stream_V_data_11_V_write fifo_update 1 1 } } }
	res_stream_V_data_12_V { ap_fifo {  { res_stream_V_data_12_V_din fifo_data 1 20 }  { res_stream_V_data_12_V_full_n fifo_status 0 1 }  { res_stream_V_data_12_V_write fifo_update 1 1 } } }
	res_stream_V_data_13_V { ap_fifo {  { res_stream_V_data_13_V_din fifo_data 1 20 }  { res_stream_V_data_13_V_full_n fifo_status 0 1 }  { res_stream_V_data_13_V_write fifo_update 1 1 } } }
	res_stream_V_data_14_V { ap_fifo {  { res_stream_V_data_14_V_din fifo_data 1 20 }  { res_stream_V_data_14_V_full_n fifo_status 0 1 }  { res_stream_V_data_14_V_write fifo_update 1 1 } } }
	res_stream_V_data_15_V { ap_fifo {  { res_stream_V_data_15_V_din fifo_data 1 20 }  { res_stream_V_data_15_V_full_n fifo_status 0 1 }  { res_stream_V_data_15_V_write fifo_update 1 1 } } }
	res_stream_V_data_16_V { ap_fifo {  { res_stream_V_data_16_V_din fifo_data 1 20 }  { res_stream_V_data_16_V_full_n fifo_status 0 1 }  { res_stream_V_data_16_V_write fifo_update 1 1 } } }
	res_stream_V_data_17_V { ap_fifo {  { res_stream_V_data_17_V_din fifo_data 1 20 }  { res_stream_V_data_17_V_full_n fifo_status 0 1 }  { res_stream_V_data_17_V_write fifo_update 1 1 } } }
	res_stream_V_data_18_V { ap_fifo {  { res_stream_V_data_18_V_din fifo_data 1 20 }  { res_stream_V_data_18_V_full_n fifo_status 0 1 }  { res_stream_V_data_18_V_write fifo_update 1 1 } } }
	res_stream_V_data_19_V { ap_fifo {  { res_stream_V_data_19_V_din fifo_data 1 20 }  { res_stream_V_data_19_V_full_n fifo_status 0 1 }  { res_stream_V_data_19_V_write fifo_update 1 1 } } }
	res_stream_V_data_20_V { ap_fifo {  { res_stream_V_data_20_V_din fifo_data 1 20 }  { res_stream_V_data_20_V_full_n fifo_status 0 1 }  { res_stream_V_data_20_V_write fifo_update 1 1 } } }
	res_stream_V_data_21_V { ap_fifo {  { res_stream_V_data_21_V_din fifo_data 1 20 }  { res_stream_V_data_21_V_full_n fifo_status 0 1 }  { res_stream_V_data_21_V_write fifo_update 1 1 } } }
	res_stream_V_data_22_V { ap_fifo {  { res_stream_V_data_22_V_din fifo_data 1 20 }  { res_stream_V_data_22_V_full_n fifo_status 0 1 }  { res_stream_V_data_22_V_write fifo_update 1 1 } } }
	res_stream_V_data_23_V { ap_fifo {  { res_stream_V_data_23_V_din fifo_data 1 20 }  { res_stream_V_data_23_V_full_n fifo_status 0 1 }  { res_stream_V_data_23_V_write fifo_update 1 1 } } }
	res_stream_V_data_24_V { ap_fifo {  { res_stream_V_data_24_V_din fifo_data 1 20 }  { res_stream_V_data_24_V_full_n fifo_status 0 1 }  { res_stream_V_data_24_V_write fifo_update 1 1 } } }
	res_stream_V_data_25_V { ap_fifo {  { res_stream_V_data_25_V_din fifo_data 1 20 }  { res_stream_V_data_25_V_full_n fifo_status 0 1 }  { res_stream_V_data_25_V_write fifo_update 1 1 } } }
	res_stream_V_data_26_V { ap_fifo {  { res_stream_V_data_26_V_din fifo_data 1 20 }  { res_stream_V_data_26_V_full_n fifo_status 0 1 }  { res_stream_V_data_26_V_write fifo_update 1 1 } } }
	res_stream_V_data_27_V { ap_fifo {  { res_stream_V_data_27_V_din fifo_data 1 20 }  { res_stream_V_data_27_V_full_n fifo_status 0 1 }  { res_stream_V_data_27_V_write fifo_update 1 1 } } }
	res_stream_V_data_28_V { ap_fifo {  { res_stream_V_data_28_V_din fifo_data 1 20 }  { res_stream_V_data_28_V_full_n fifo_status 0 1 }  { res_stream_V_data_28_V_write fifo_update 1 1 } } }
	res_stream_V_data_29_V { ap_fifo {  { res_stream_V_data_29_V_din fifo_data 1 20 }  { res_stream_V_data_29_V_full_n fifo_status 0 1 }  { res_stream_V_data_29_V_write fifo_update 1 1 } } }
	res_stream_V_data_30_V { ap_fifo {  { res_stream_V_data_30_V_din fifo_data 1 20 }  { res_stream_V_data_30_V_full_n fifo_status 0 1 }  { res_stream_V_data_30_V_write fifo_update 1 1 } } }
	res_stream_V_data_31_V { ap_fifo {  { res_stream_V_data_31_V_din fifo_data 1 20 }  { res_stream_V_data_31_V_full_n fifo_status 0 1 }  { res_stream_V_data_31_V_write fifo_update 1 1 } } }
}
set moduleName gru_stack_array_ap_fixed_3u_array_ap_fixed_20_10_5_3_0_32u_config2_s
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
set C_modelName {gru_stack<array<ap_fixed,3u>,array<ap_fixed<20,10,5,3,0>,32u>,config2>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_stream_V_data_0_V int 24 regular {axi_s 0 volatile  { data_stream_V_data_0_V Data } }  }
	{ data_stream_V_data_1_V int 24 regular {axi_s 0 volatile  { data_stream_V_data_1_V Data } }  }
	{ data_stream_V_data_2_V int 24 regular {axi_s 0 volatile  { data_stream_V_data_2_V Data } }  }
	{ res_stream_V_data_0_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_1_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_2_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_3_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_4_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_5_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_6_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_7_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_8_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_9_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_10_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_11_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_12_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_13_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_14_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_15_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_16_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_17_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_18_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_19_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_20_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_21_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_22_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_23_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_24_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_25_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_26_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_27_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_28_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_29_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_30_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_31_V int 20 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_stream_V_data_0_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_1_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_2_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "res_stream_V_data_0_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_1_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_2_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_3_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_4_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_5_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_6_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_7_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_8_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_9_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_10_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_11_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_12_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_13_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_14_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_15_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_16_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_17_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_18_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_19_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_20_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_21_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_22_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_23_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_24_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_25_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_26_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_27_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_28_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_29_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_30_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_31_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 115
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ data_stream_V_data_0_V_TDATA sc_in sc_lv 24 signal 0 } 
	{ data_stream_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ data_stream_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ data_stream_V_data_1_V_TDATA sc_in sc_lv 24 signal 1 } 
	{ data_stream_V_data_1_V_TVALID sc_in sc_logic 1 invld 1 } 
	{ data_stream_V_data_1_V_TREADY sc_out sc_logic 1 inacc 1 } 
	{ data_stream_V_data_2_V_TDATA sc_in sc_lv 24 signal 2 } 
	{ data_stream_V_data_2_V_TVALID sc_in sc_logic 1 invld 2 } 
	{ data_stream_V_data_2_V_TREADY sc_out sc_logic 1 inacc 2 } 
	{ res_stream_V_data_0_V_din sc_out sc_lv 20 signal 3 } 
	{ res_stream_V_data_0_V_full_n sc_in sc_logic 1 signal 3 } 
	{ res_stream_V_data_0_V_write sc_out sc_logic 1 signal 3 } 
	{ res_stream_V_data_1_V_din sc_out sc_lv 20 signal 4 } 
	{ res_stream_V_data_1_V_full_n sc_in sc_logic 1 signal 4 } 
	{ res_stream_V_data_1_V_write sc_out sc_logic 1 signal 4 } 
	{ res_stream_V_data_2_V_din sc_out sc_lv 20 signal 5 } 
	{ res_stream_V_data_2_V_full_n sc_in sc_logic 1 signal 5 } 
	{ res_stream_V_data_2_V_write sc_out sc_logic 1 signal 5 } 
	{ res_stream_V_data_3_V_din sc_out sc_lv 20 signal 6 } 
	{ res_stream_V_data_3_V_full_n sc_in sc_logic 1 signal 6 } 
	{ res_stream_V_data_3_V_write sc_out sc_logic 1 signal 6 } 
	{ res_stream_V_data_4_V_din sc_out sc_lv 20 signal 7 } 
	{ res_stream_V_data_4_V_full_n sc_in sc_logic 1 signal 7 } 
	{ res_stream_V_data_4_V_write sc_out sc_logic 1 signal 7 } 
	{ res_stream_V_data_5_V_din sc_out sc_lv 20 signal 8 } 
	{ res_stream_V_data_5_V_full_n sc_in sc_logic 1 signal 8 } 
	{ res_stream_V_data_5_V_write sc_out sc_logic 1 signal 8 } 
	{ res_stream_V_data_6_V_din sc_out sc_lv 20 signal 9 } 
	{ res_stream_V_data_6_V_full_n sc_in sc_logic 1 signal 9 } 
	{ res_stream_V_data_6_V_write sc_out sc_logic 1 signal 9 } 
	{ res_stream_V_data_7_V_din sc_out sc_lv 20 signal 10 } 
	{ res_stream_V_data_7_V_full_n sc_in sc_logic 1 signal 10 } 
	{ res_stream_V_data_7_V_write sc_out sc_logic 1 signal 10 } 
	{ res_stream_V_data_8_V_din sc_out sc_lv 20 signal 11 } 
	{ res_stream_V_data_8_V_full_n sc_in sc_logic 1 signal 11 } 
	{ res_stream_V_data_8_V_write sc_out sc_logic 1 signal 11 } 
	{ res_stream_V_data_9_V_din sc_out sc_lv 20 signal 12 } 
	{ res_stream_V_data_9_V_full_n sc_in sc_logic 1 signal 12 } 
	{ res_stream_V_data_9_V_write sc_out sc_logic 1 signal 12 } 
	{ res_stream_V_data_10_V_din sc_out sc_lv 20 signal 13 } 
	{ res_stream_V_data_10_V_full_n sc_in sc_logic 1 signal 13 } 
	{ res_stream_V_data_10_V_write sc_out sc_logic 1 signal 13 } 
	{ res_stream_V_data_11_V_din sc_out sc_lv 20 signal 14 } 
	{ res_stream_V_data_11_V_full_n sc_in sc_logic 1 signal 14 } 
	{ res_stream_V_data_11_V_write sc_out sc_logic 1 signal 14 } 
	{ res_stream_V_data_12_V_din sc_out sc_lv 20 signal 15 } 
	{ res_stream_V_data_12_V_full_n sc_in sc_logic 1 signal 15 } 
	{ res_stream_V_data_12_V_write sc_out sc_logic 1 signal 15 } 
	{ res_stream_V_data_13_V_din sc_out sc_lv 20 signal 16 } 
	{ res_stream_V_data_13_V_full_n sc_in sc_logic 1 signal 16 } 
	{ res_stream_V_data_13_V_write sc_out sc_logic 1 signal 16 } 
	{ res_stream_V_data_14_V_din sc_out sc_lv 20 signal 17 } 
	{ res_stream_V_data_14_V_full_n sc_in sc_logic 1 signal 17 } 
	{ res_stream_V_data_14_V_write sc_out sc_logic 1 signal 17 } 
	{ res_stream_V_data_15_V_din sc_out sc_lv 20 signal 18 } 
	{ res_stream_V_data_15_V_full_n sc_in sc_logic 1 signal 18 } 
	{ res_stream_V_data_15_V_write sc_out sc_logic 1 signal 18 } 
	{ res_stream_V_data_16_V_din sc_out sc_lv 20 signal 19 } 
	{ res_stream_V_data_16_V_full_n sc_in sc_logic 1 signal 19 } 
	{ res_stream_V_data_16_V_write sc_out sc_logic 1 signal 19 } 
	{ res_stream_V_data_17_V_din sc_out sc_lv 20 signal 20 } 
	{ res_stream_V_data_17_V_full_n sc_in sc_logic 1 signal 20 } 
	{ res_stream_V_data_17_V_write sc_out sc_logic 1 signal 20 } 
	{ res_stream_V_data_18_V_din sc_out sc_lv 20 signal 21 } 
	{ res_stream_V_data_18_V_full_n sc_in sc_logic 1 signal 21 } 
	{ res_stream_V_data_18_V_write sc_out sc_logic 1 signal 21 } 
	{ res_stream_V_data_19_V_din sc_out sc_lv 20 signal 22 } 
	{ res_stream_V_data_19_V_full_n sc_in sc_logic 1 signal 22 } 
	{ res_stream_V_data_19_V_write sc_out sc_logic 1 signal 22 } 
	{ res_stream_V_data_20_V_din sc_out sc_lv 20 signal 23 } 
	{ res_stream_V_data_20_V_full_n sc_in sc_logic 1 signal 23 } 
	{ res_stream_V_data_20_V_write sc_out sc_logic 1 signal 23 } 
	{ res_stream_V_data_21_V_din sc_out sc_lv 20 signal 24 } 
	{ res_stream_V_data_21_V_full_n sc_in sc_logic 1 signal 24 } 
	{ res_stream_V_data_21_V_write sc_out sc_logic 1 signal 24 } 
	{ res_stream_V_data_22_V_din sc_out sc_lv 20 signal 25 } 
	{ res_stream_V_data_22_V_full_n sc_in sc_logic 1 signal 25 } 
	{ res_stream_V_data_22_V_write sc_out sc_logic 1 signal 25 } 
	{ res_stream_V_data_23_V_din sc_out sc_lv 20 signal 26 } 
	{ res_stream_V_data_23_V_full_n sc_in sc_logic 1 signal 26 } 
	{ res_stream_V_data_23_V_write sc_out sc_logic 1 signal 26 } 
	{ res_stream_V_data_24_V_din sc_out sc_lv 20 signal 27 } 
	{ res_stream_V_data_24_V_full_n sc_in sc_logic 1 signal 27 } 
	{ res_stream_V_data_24_V_write sc_out sc_logic 1 signal 27 } 
	{ res_stream_V_data_25_V_din sc_out sc_lv 20 signal 28 } 
	{ res_stream_V_data_25_V_full_n sc_in sc_logic 1 signal 28 } 
	{ res_stream_V_data_25_V_write sc_out sc_logic 1 signal 28 } 
	{ res_stream_V_data_26_V_din sc_out sc_lv 20 signal 29 } 
	{ res_stream_V_data_26_V_full_n sc_in sc_logic 1 signal 29 } 
	{ res_stream_V_data_26_V_write sc_out sc_logic 1 signal 29 } 
	{ res_stream_V_data_27_V_din sc_out sc_lv 20 signal 30 } 
	{ res_stream_V_data_27_V_full_n sc_in sc_logic 1 signal 30 } 
	{ res_stream_V_data_27_V_write sc_out sc_logic 1 signal 30 } 
	{ res_stream_V_data_28_V_din sc_out sc_lv 20 signal 31 } 
	{ res_stream_V_data_28_V_full_n sc_in sc_logic 1 signal 31 } 
	{ res_stream_V_data_28_V_write sc_out sc_logic 1 signal 31 } 
	{ res_stream_V_data_29_V_din sc_out sc_lv 20 signal 32 } 
	{ res_stream_V_data_29_V_full_n sc_in sc_logic 1 signal 32 } 
	{ res_stream_V_data_29_V_write sc_out sc_logic 1 signal 32 } 
	{ res_stream_V_data_30_V_din sc_out sc_lv 20 signal 33 } 
	{ res_stream_V_data_30_V_full_n sc_in sc_logic 1 signal 33 } 
	{ res_stream_V_data_30_V_write sc_out sc_logic 1 signal 33 } 
	{ res_stream_V_data_31_V_din sc_out sc_lv 20 signal 34 } 
	{ res_stream_V_data_31_V_full_n sc_in sc_logic 1 signal 34 } 
	{ res_stream_V_data_31_V_write sc_out sc_logic 1 signal 34 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "data_stream_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "data_stream_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "data_stream_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_stream_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "data_stream_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_stream_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "data_stream_V_data_1_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "data_stream_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "data_stream_V_data_1_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_stream_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "data_stream_V_data_1_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_stream_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "data_stream_V_data_2_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "data_stream_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "data_stream_V_data_2_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_stream_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "data_stream_V_data_2_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_stream_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "res_stream_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_4_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_4_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_4_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_5_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_5_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_5_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_6_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_6_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_6_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_7_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_7_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_7_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_8_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_8_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_8_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_9_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_9_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_9_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_10_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_10_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_10_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_10_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_10_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_10_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_11_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_11_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_11_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_11_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_11_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_11_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_12_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_12_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_12_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_12_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_12_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_12_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_13_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_13_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_13_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_13_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_13_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_13_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_14_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_14_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_14_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_14_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_14_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_14_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_15_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_15_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_15_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_15_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_15_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_15_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_16_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_16_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_16_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_16_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_16_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_16_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_17_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_17_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_17_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_17_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_17_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_17_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_18_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_18_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_18_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_18_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_18_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_18_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_19_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_19_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_19_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_19_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_19_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_19_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_20_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_20_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_20_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_20_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_20_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_20_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_21_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_21_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_21_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_21_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_21_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_21_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_22_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_22_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_22_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_22_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_22_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_22_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_23_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_23_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_23_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_23_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_23_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_23_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_24_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_24_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_24_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_24_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_24_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_24_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_25_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_25_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_25_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_25_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_25_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_25_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_26_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_26_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_26_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_26_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_26_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_26_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_27_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_27_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_27_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_27_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_27_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_27_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_28_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_28_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_28_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_28_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_28_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_28_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_29_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_29_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_29_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_29_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_29_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_29_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_30_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_30_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_30_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_30_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_30_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_30_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_31_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_31_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_31_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_31_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_31_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_31_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "gru_stack_array_ap_fixed_3u_array_ap_fixed_20_10_5_3_0_32u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "16301", "EstimateLatencyMax" : "16401",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750"}],
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_15_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_15_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_16_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_16_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_17_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_17_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_18_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_18_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_19_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_19_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_20_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_20_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_21_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_21_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_22_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_22_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_23_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_23_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_24_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_24_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_25_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_25_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_26_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_26_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_27_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_27_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_28_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_28_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_29_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_29_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_30_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_30_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_31_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_31_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_0"}]},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_1"}]},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_2"}]},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_3"}]},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_4"}]},
			{"Name" : "h_state_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_5"}]},
			{"Name" : "h_state_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_6"}]},
			{"Name" : "h_state_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_7"}]},
			{"Name" : "h_state_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_8"}]},
			{"Name" : "h_state_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_9"}]},
			{"Name" : "h_state_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_10"}]},
			{"Name" : "h_state_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_11"}]},
			{"Name" : "h_state_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_12"}]},
			{"Name" : "h_state_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_13"}]},
			{"Name" : "h_state_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_14"}]},
			{"Name" : "h_state_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_15"}]},
			{"Name" : "h_state_V_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_16"}]},
			{"Name" : "h_state_V_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_17"}]},
			{"Name" : "h_state_V_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_18"}]},
			{"Name" : "h_state_V_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_19"}]},
			{"Name" : "h_state_V_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_20"}]},
			{"Name" : "h_state_V_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_21"}]},
			{"Name" : "h_state_V_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_22"}]},
			{"Name" : "h_state_V_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_23"}]},
			{"Name" : "h_state_V_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_24"}]},
			{"Name" : "h_state_V_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_25"}]},
			{"Name" : "h_state_V_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_26"}]},
			{"Name" : "h_state_V_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_27"}]},
			{"Name" : "h_state_V_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_28"}]},
			{"Name" : "h_state_V_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_29"}]},
			{"Name" : "h_state_V_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_30"}]},
			{"Name" : "h_state_V_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_31"}]},
			{"Name" : "outidx9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "outidx9"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "w2_V"}]},
			{"Name" : "outidx8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "outidx8"}]},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "wr2_V"}]},
			{"Name" : "sigmoid_table7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "sigmoid_table7"}]},
			{"Name" : "tanh_table6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "tanh_table6"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.data_in_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Parent" : "0", "Child" : ["3", "32", "34", "36"],
		"CDFG" : "gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "159", "EstimateLatencyMax" : "160",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288"}],
		"Port" : [
			{"Name" : "reset_state", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Port" : "data_V"}]},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_0"}]},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_1"}]},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_2"}]},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_3"}]},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_4"}]},
			{"Name" : "h_state_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_5"}]},
			{"Name" : "h_state_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_6"}]},
			{"Name" : "h_state_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_7"}]},
			{"Name" : "h_state_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_8"}]},
			{"Name" : "h_state_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_9"}]},
			{"Name" : "h_state_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_10"}]},
			{"Name" : "h_state_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_11"}]},
			{"Name" : "h_state_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_12"}]},
			{"Name" : "h_state_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_13"}]},
			{"Name" : "h_state_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_14"}]},
			{"Name" : "h_state_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_15"}]},
			{"Name" : "h_state_V_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_16"}]},
			{"Name" : "h_state_V_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_17"}]},
			{"Name" : "h_state_V_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_18"}]},
			{"Name" : "h_state_V_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_19"}]},
			{"Name" : "h_state_V_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_20"}]},
			{"Name" : "h_state_V_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_21"}]},
			{"Name" : "h_state_V_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_22"}]},
			{"Name" : "h_state_V_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_23"}]},
			{"Name" : "h_state_V_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_24"}]},
			{"Name" : "h_state_V_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_25"}]},
			{"Name" : "h_state_V_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_26"}]},
			{"Name" : "h_state_V_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_27"}]},
			{"Name" : "h_state_V_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_28"}]},
			{"Name" : "h_state_V_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_29"}]},
			{"Name" : "h_state_V_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_30"}]},
			{"Name" : "h_state_V_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_31"}]},
			{"Name" : "outidx9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Port" : "outidx9"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Port" : "w2_V"}]},
			{"Name" : "outidx8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "outidx8"}]},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "wr2_V"}]},
			{"Name" : "sigmoid_table7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "32", "SubInstance" : "grp_sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s_fu_180", "Port" : "sigmoid_table7"}]},
			{"Name" : "tanh_table6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s_fu_250", "Port" : "tanh_table6"}]}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Parent" : "2", "Child" : ["4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"],
		"CDFG" : "dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "130", "EstimateLatencyMax" : "131",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "outidx8", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "h_state_V_20", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_21", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_22", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_23", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_24", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_25", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_26", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_27", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_28", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_29", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_30", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_31", "Type" : "None", "Direction" : "I"},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.outidx8_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.wr2_V_U", "Parent" : "3"},
	{"ID" : "6", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_325_20_1_1_U10", "Parent" : "3"},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_42_20_1_1_U11", "Parent" : "3"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U12", "Parent" : "3"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U13", "Parent" : "3"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U14", "Parent" : "3"},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U15", "Parent" : "3"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U16", "Parent" : "3"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U17", "Parent" : "3"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U18", "Parent" : "3"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U19", "Parent" : "3"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U20", "Parent" : "3"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U21", "Parent" : "3"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U22", "Parent" : "3"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U23", "Parent" : "3"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U24", "Parent" : "3"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U25", "Parent" : "3"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U26", "Parent" : "3"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U27", "Parent" : "3"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U28", "Parent" : "3"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U29", "Parent" : "3"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U30", "Parent" : "3"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U31", "Parent" : "3"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U32", "Parent" : "3"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U33", "Parent" : "3"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U34", "Parent" : "3"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mul_mul_20s_12s_30_1_1_U35", "Parent" : "3"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s_fu_180", "Parent" : "2", "Child" : ["33"],
		"CDFG" : "sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
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
			{"Name" : "sigmoid_table7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s_fu_180.sigmoid_table7_U", "Parent" : "32"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s_fu_250", "Parent" : "2", "Child" : ["35"],
		"CDFG" : "tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
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
			{"Name" : "tanh_table6", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s_fu_250.tanh_table6_U", "Parent" : "34"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Parent" : "2", "Child" : ["37", "38", "39", "40", "41"],
		"CDFG" : "dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "146", "EstimateLatencyMax" : "147",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outidx9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.outidx9_U", "Parent" : "36"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.w2_V_U", "Parent" : "36"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.myproject_mux_646_20_1_1_U1", "Parent" : "36"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.myproject_mux_1287_20_1_1_U2", "Parent" : "36"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.myproject_mul_mul_20s_13s_30_1_1_U3", "Parent" : "36"}]}


set ArgLastReadFirstWriteLatency {
	gru_stack_array_ap_fixed_3u_array_ap_fixed_20_10_5_3_0_32u_config2_s {
		data_stream_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 1 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 1 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_10_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_11_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_12_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_13_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_14_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_15_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_16_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_17_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_18_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_19_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_20_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_21_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_22_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_23_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_24_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_25_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_26_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_27_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_28_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_29_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_30_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_31_V {Type O LastRead -1 FirstWrite 4}
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
		h_state_V_20 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_21 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_22 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_23 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_24 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_25 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_26 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_27 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_28 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_29 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_30 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_31 {Type IO LastRead -1 FirstWrite -1}
		outidx9 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		outidx8 {Type I LastRead -1 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}
		sigmoid_table7 {Type I LastRead -1 FirstWrite -1}
		tanh_table6 {Type I LastRead -1 FirstWrite -1}}
	gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s {
		reset_state {Type I LastRead 0 FirstWrite -1}
		data_V {Type I LastRead 1 FirstWrite -1}
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
		h_state_V_20 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_21 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_22 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_23 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_24 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_25 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_26 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_27 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_28 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_29 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_30 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_31 {Type IO LastRead -1 FirstWrite -1}
		outidx9 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		outidx8 {Type I LastRead -1 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}
		sigmoid_table7 {Type I LastRead -1 FirstWrite -1}
		tanh_table6 {Type I LastRead -1 FirstWrite -1}}
	dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s {
		outidx8 {Type I LastRead -1 FirstWrite -1}
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
		h_state_V_20 {Type I LastRead 2 FirstWrite -1}
		h_state_V_21 {Type I LastRead 2 FirstWrite -1}
		h_state_V_22 {Type I LastRead 2 FirstWrite -1}
		h_state_V_23 {Type I LastRead 2 FirstWrite -1}
		h_state_V_24 {Type I LastRead 2 FirstWrite -1}
		h_state_V_25 {Type I LastRead 2 FirstWrite -1}
		h_state_V_26 {Type I LastRead 2 FirstWrite -1}
		h_state_V_27 {Type I LastRead 2 FirstWrite -1}
		h_state_V_28 {Type I LastRead 2 FirstWrite -1}
		h_state_V_29 {Type I LastRead 2 FirstWrite -1}
		h_state_V_30 {Type I LastRead 2 FirstWrite -1}
		h_state_V_31 {Type I LastRead 2 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}}
	sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s {
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
		data_40_V_read {Type I LastRead 0 FirstWrite -1}
		data_41_V_read {Type I LastRead 0 FirstWrite -1}
		data_42_V_read {Type I LastRead 0 FirstWrite -1}
		data_43_V_read {Type I LastRead 0 FirstWrite -1}
		data_44_V_read {Type I LastRead 0 FirstWrite -1}
		data_45_V_read {Type I LastRead 0 FirstWrite -1}
		data_46_V_read {Type I LastRead 0 FirstWrite -1}
		data_47_V_read {Type I LastRead 0 FirstWrite -1}
		data_48_V_read {Type I LastRead 0 FirstWrite -1}
		data_49_V_read {Type I LastRead 0 FirstWrite -1}
		data_50_V_read {Type I LastRead 0 FirstWrite -1}
		data_51_V_read {Type I LastRead 0 FirstWrite -1}
		data_52_V_read {Type I LastRead 0 FirstWrite -1}
		data_53_V_read {Type I LastRead 0 FirstWrite -1}
		data_54_V_read {Type I LastRead 0 FirstWrite -1}
		data_55_V_read {Type I LastRead 0 FirstWrite -1}
		data_56_V_read {Type I LastRead 0 FirstWrite -1}
		data_57_V_read {Type I LastRead 0 FirstWrite -1}
		data_58_V_read {Type I LastRead 0 FirstWrite -1}
		data_59_V_read {Type I LastRead 0 FirstWrite -1}
		data_60_V_read {Type I LastRead 0 FirstWrite -1}
		data_61_V_read {Type I LastRead 0 FirstWrite -1}
		data_62_V_read {Type I LastRead 0 FirstWrite -1}
		data_63_V_read {Type I LastRead 0 FirstWrite -1}
		sigmoid_table7 {Type I LastRead -1 FirstWrite -1}}
	tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s {
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
		tanh_table6 {Type I LastRead -1 FirstWrite -1}}
	dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_V {Type I LastRead 1 FirstWrite -1}
		outidx9 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "16301", "Max" : "16401"}
	, {"Name" : "Interval", "Min" : "16301", "Max" : "16401"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_stream_V_data_0_V { axis {  { data_stream_V_data_0_V_TDATA in_data 0 24 }  { data_stream_V_data_0_V_TVALID in_vld 0 1 }  { data_stream_V_data_0_V_TREADY in_acc 1 1 } } }
	data_stream_V_data_1_V { axis {  { data_stream_V_data_1_V_TDATA in_data 0 24 }  { data_stream_V_data_1_V_TVALID in_vld 0 1 }  { data_stream_V_data_1_V_TREADY in_acc 1 1 } } }
	data_stream_V_data_2_V { axis {  { data_stream_V_data_2_V_TDATA in_data 0 24 }  { data_stream_V_data_2_V_TVALID in_vld 0 1 }  { data_stream_V_data_2_V_TREADY in_acc 1 1 } } }
	res_stream_V_data_0_V { ap_fifo {  { res_stream_V_data_0_V_din fifo_data 1 20 }  { res_stream_V_data_0_V_full_n fifo_status 0 1 }  { res_stream_V_data_0_V_write fifo_update 1 1 } } }
	res_stream_V_data_1_V { ap_fifo {  { res_stream_V_data_1_V_din fifo_data 1 20 }  { res_stream_V_data_1_V_full_n fifo_status 0 1 }  { res_stream_V_data_1_V_write fifo_update 1 1 } } }
	res_stream_V_data_2_V { ap_fifo {  { res_stream_V_data_2_V_din fifo_data 1 20 }  { res_stream_V_data_2_V_full_n fifo_status 0 1 }  { res_stream_V_data_2_V_write fifo_update 1 1 } } }
	res_stream_V_data_3_V { ap_fifo {  { res_stream_V_data_3_V_din fifo_data 1 20 }  { res_stream_V_data_3_V_full_n fifo_status 0 1 }  { res_stream_V_data_3_V_write fifo_update 1 1 } } }
	res_stream_V_data_4_V { ap_fifo {  { res_stream_V_data_4_V_din fifo_data 1 20 }  { res_stream_V_data_4_V_full_n fifo_status 0 1 }  { res_stream_V_data_4_V_write fifo_update 1 1 } } }
	res_stream_V_data_5_V { ap_fifo {  { res_stream_V_data_5_V_din fifo_data 1 20 }  { res_stream_V_data_5_V_full_n fifo_status 0 1 }  { res_stream_V_data_5_V_write fifo_update 1 1 } } }
	res_stream_V_data_6_V { ap_fifo {  { res_stream_V_data_6_V_din fifo_data 1 20 }  { res_stream_V_data_6_V_full_n fifo_status 0 1 }  { res_stream_V_data_6_V_write fifo_update 1 1 } } }
	res_stream_V_data_7_V { ap_fifo {  { res_stream_V_data_7_V_din fifo_data 1 20 }  { res_stream_V_data_7_V_full_n fifo_status 0 1 }  { res_stream_V_data_7_V_write fifo_update 1 1 } } }
	res_stream_V_data_8_V { ap_fifo {  { res_stream_V_data_8_V_din fifo_data 1 20 }  { res_stream_V_data_8_V_full_n fifo_status 0 1 }  { res_stream_V_data_8_V_write fifo_update 1 1 } } }
	res_stream_V_data_9_V { ap_fifo {  { res_stream_V_data_9_V_din fifo_data 1 20 }  { res_stream_V_data_9_V_full_n fifo_status 0 1 }  { res_stream_V_data_9_V_write fifo_update 1 1 } } }
	res_stream_V_data_10_V { ap_fifo {  { res_stream_V_data_10_V_din fifo_data 1 20 }  { res_stream_V_data_10_V_full_n fifo_status 0 1 }  { res_stream_V_data_10_V_write fifo_update 1 1 } } }
	res_stream_V_data_11_V { ap_fifo {  { res_stream_V_data_11_V_din fifo_data 1 20 }  { res_stream_V_data_11_V_full_n fifo_status 0 1 }  { res_stream_V_data_11_V_write fifo_update 1 1 } } }
	res_stream_V_data_12_V { ap_fifo {  { res_stream_V_data_12_V_din fifo_data 1 20 }  { res_stream_V_data_12_V_full_n fifo_status 0 1 }  { res_stream_V_data_12_V_write fifo_update 1 1 } } }
	res_stream_V_data_13_V { ap_fifo {  { res_stream_V_data_13_V_din fifo_data 1 20 }  { res_stream_V_data_13_V_full_n fifo_status 0 1 }  { res_stream_V_data_13_V_write fifo_update 1 1 } } }
	res_stream_V_data_14_V { ap_fifo {  { res_stream_V_data_14_V_din fifo_data 1 20 }  { res_stream_V_data_14_V_full_n fifo_status 0 1 }  { res_stream_V_data_14_V_write fifo_update 1 1 } } }
	res_stream_V_data_15_V { ap_fifo {  { res_stream_V_data_15_V_din fifo_data 1 20 }  { res_stream_V_data_15_V_full_n fifo_status 0 1 }  { res_stream_V_data_15_V_write fifo_update 1 1 } } }
	res_stream_V_data_16_V { ap_fifo {  { res_stream_V_data_16_V_din fifo_data 1 20 }  { res_stream_V_data_16_V_full_n fifo_status 0 1 }  { res_stream_V_data_16_V_write fifo_update 1 1 } } }
	res_stream_V_data_17_V { ap_fifo {  { res_stream_V_data_17_V_din fifo_data 1 20 }  { res_stream_V_data_17_V_full_n fifo_status 0 1 }  { res_stream_V_data_17_V_write fifo_update 1 1 } } }
	res_stream_V_data_18_V { ap_fifo {  { res_stream_V_data_18_V_din fifo_data 1 20 }  { res_stream_V_data_18_V_full_n fifo_status 0 1 }  { res_stream_V_data_18_V_write fifo_update 1 1 } } }
	res_stream_V_data_19_V { ap_fifo {  { res_stream_V_data_19_V_din fifo_data 1 20 }  { res_stream_V_data_19_V_full_n fifo_status 0 1 }  { res_stream_V_data_19_V_write fifo_update 1 1 } } }
	res_stream_V_data_20_V { ap_fifo {  { res_stream_V_data_20_V_din fifo_data 1 20 }  { res_stream_V_data_20_V_full_n fifo_status 0 1 }  { res_stream_V_data_20_V_write fifo_update 1 1 } } }
	res_stream_V_data_21_V { ap_fifo {  { res_stream_V_data_21_V_din fifo_data 1 20 }  { res_stream_V_data_21_V_full_n fifo_status 0 1 }  { res_stream_V_data_21_V_write fifo_update 1 1 } } }
	res_stream_V_data_22_V { ap_fifo {  { res_stream_V_data_22_V_din fifo_data 1 20 }  { res_stream_V_data_22_V_full_n fifo_status 0 1 }  { res_stream_V_data_22_V_write fifo_update 1 1 } } }
	res_stream_V_data_23_V { ap_fifo {  { res_stream_V_data_23_V_din fifo_data 1 20 }  { res_stream_V_data_23_V_full_n fifo_status 0 1 }  { res_stream_V_data_23_V_write fifo_update 1 1 } } }
	res_stream_V_data_24_V { ap_fifo {  { res_stream_V_data_24_V_din fifo_data 1 20 }  { res_stream_V_data_24_V_full_n fifo_status 0 1 }  { res_stream_V_data_24_V_write fifo_update 1 1 } } }
	res_stream_V_data_25_V { ap_fifo {  { res_stream_V_data_25_V_din fifo_data 1 20 }  { res_stream_V_data_25_V_full_n fifo_status 0 1 }  { res_stream_V_data_25_V_write fifo_update 1 1 } } }
	res_stream_V_data_26_V { ap_fifo {  { res_stream_V_data_26_V_din fifo_data 1 20 }  { res_stream_V_data_26_V_full_n fifo_status 0 1 }  { res_stream_V_data_26_V_write fifo_update 1 1 } } }
	res_stream_V_data_27_V { ap_fifo {  { res_stream_V_data_27_V_din fifo_data 1 20 }  { res_stream_V_data_27_V_full_n fifo_status 0 1 }  { res_stream_V_data_27_V_write fifo_update 1 1 } } }
	res_stream_V_data_28_V { ap_fifo {  { res_stream_V_data_28_V_din fifo_data 1 20 }  { res_stream_V_data_28_V_full_n fifo_status 0 1 }  { res_stream_V_data_28_V_write fifo_update 1 1 } } }
	res_stream_V_data_29_V { ap_fifo {  { res_stream_V_data_29_V_din fifo_data 1 20 }  { res_stream_V_data_29_V_full_n fifo_status 0 1 }  { res_stream_V_data_29_V_write fifo_update 1 1 } } }
	res_stream_V_data_30_V { ap_fifo {  { res_stream_V_data_30_V_din fifo_data 1 20 }  { res_stream_V_data_30_V_full_n fifo_status 0 1 }  { res_stream_V_data_30_V_write fifo_update 1 1 } } }
	res_stream_V_data_31_V { ap_fifo {  { res_stream_V_data_31_V_din fifo_data 1 20 }  { res_stream_V_data_31_V_full_n fifo_status 0 1 }  { res_stream_V_data_31_V_write fifo_update 1 1 } } }
}
set moduleName gru_stack_array_ap_fixed_3u_array_ap_fixed_20_10_5_3_0_32u_config2_s
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
set C_modelName {gru_stack<array<ap_fixed,3u>,array<ap_fixed<20,10,5,3,0>,32u>,config2>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_stream_V_data_0_V int 24 regular {axi_s 0 volatile  { data_stream_V_data_0_V Data } }  }
	{ data_stream_V_data_1_V int 24 regular {axi_s 0 volatile  { data_stream_V_data_1_V Data } }  }
	{ data_stream_V_data_2_V int 24 regular {axi_s 0 volatile  { data_stream_V_data_2_V Data } }  }
	{ res_stream_V_data_0_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_1_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_2_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_3_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_4_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_5_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_6_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_7_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_8_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_9_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_10_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_11_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_12_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_13_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_14_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_15_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_16_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_17_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_18_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_19_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_20_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_21_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_22_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_23_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_24_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_25_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_26_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_27_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_28_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_29_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_30_V int 20 regular {fifo 1 volatile }  }
	{ res_stream_V_data_31_V int 20 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_stream_V_data_0_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_1_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "data_stream_V_data_2_V", "interface" : "axis", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "res_stream_V_data_0_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_1_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_2_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_3_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_4_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_5_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_6_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_7_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_8_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_9_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_10_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_11_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_12_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_13_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_14_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_15_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_16_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_17_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_18_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_19_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_20_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_21_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_22_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_23_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_24_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_25_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_26_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_27_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_28_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_29_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_30_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_stream_V_data_31_V", "interface" : "fifo", "bitwidth" : 20, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 115
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ data_stream_V_data_0_V_TDATA sc_in sc_lv 24 signal 0 } 
	{ data_stream_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ data_stream_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ data_stream_V_data_1_V_TDATA sc_in sc_lv 24 signal 1 } 
	{ data_stream_V_data_1_V_TVALID sc_in sc_logic 1 invld 1 } 
	{ data_stream_V_data_1_V_TREADY sc_out sc_logic 1 inacc 1 } 
	{ data_stream_V_data_2_V_TDATA sc_in sc_lv 24 signal 2 } 
	{ data_stream_V_data_2_V_TVALID sc_in sc_logic 1 invld 2 } 
	{ data_stream_V_data_2_V_TREADY sc_out sc_logic 1 inacc 2 } 
	{ res_stream_V_data_0_V_din sc_out sc_lv 20 signal 3 } 
	{ res_stream_V_data_0_V_full_n sc_in sc_logic 1 signal 3 } 
	{ res_stream_V_data_0_V_write sc_out sc_logic 1 signal 3 } 
	{ res_stream_V_data_1_V_din sc_out sc_lv 20 signal 4 } 
	{ res_stream_V_data_1_V_full_n sc_in sc_logic 1 signal 4 } 
	{ res_stream_V_data_1_V_write sc_out sc_logic 1 signal 4 } 
	{ res_stream_V_data_2_V_din sc_out sc_lv 20 signal 5 } 
	{ res_stream_V_data_2_V_full_n sc_in sc_logic 1 signal 5 } 
	{ res_stream_V_data_2_V_write sc_out sc_logic 1 signal 5 } 
	{ res_stream_V_data_3_V_din sc_out sc_lv 20 signal 6 } 
	{ res_stream_V_data_3_V_full_n sc_in sc_logic 1 signal 6 } 
	{ res_stream_V_data_3_V_write sc_out sc_logic 1 signal 6 } 
	{ res_stream_V_data_4_V_din sc_out sc_lv 20 signal 7 } 
	{ res_stream_V_data_4_V_full_n sc_in sc_logic 1 signal 7 } 
	{ res_stream_V_data_4_V_write sc_out sc_logic 1 signal 7 } 
	{ res_stream_V_data_5_V_din sc_out sc_lv 20 signal 8 } 
	{ res_stream_V_data_5_V_full_n sc_in sc_logic 1 signal 8 } 
	{ res_stream_V_data_5_V_write sc_out sc_logic 1 signal 8 } 
	{ res_stream_V_data_6_V_din sc_out sc_lv 20 signal 9 } 
	{ res_stream_V_data_6_V_full_n sc_in sc_logic 1 signal 9 } 
	{ res_stream_V_data_6_V_write sc_out sc_logic 1 signal 9 } 
	{ res_stream_V_data_7_V_din sc_out sc_lv 20 signal 10 } 
	{ res_stream_V_data_7_V_full_n sc_in sc_logic 1 signal 10 } 
	{ res_stream_V_data_7_V_write sc_out sc_logic 1 signal 10 } 
	{ res_stream_V_data_8_V_din sc_out sc_lv 20 signal 11 } 
	{ res_stream_V_data_8_V_full_n sc_in sc_logic 1 signal 11 } 
	{ res_stream_V_data_8_V_write sc_out sc_logic 1 signal 11 } 
	{ res_stream_V_data_9_V_din sc_out sc_lv 20 signal 12 } 
	{ res_stream_V_data_9_V_full_n sc_in sc_logic 1 signal 12 } 
	{ res_stream_V_data_9_V_write sc_out sc_logic 1 signal 12 } 
	{ res_stream_V_data_10_V_din sc_out sc_lv 20 signal 13 } 
	{ res_stream_V_data_10_V_full_n sc_in sc_logic 1 signal 13 } 
	{ res_stream_V_data_10_V_write sc_out sc_logic 1 signal 13 } 
	{ res_stream_V_data_11_V_din sc_out sc_lv 20 signal 14 } 
	{ res_stream_V_data_11_V_full_n sc_in sc_logic 1 signal 14 } 
	{ res_stream_V_data_11_V_write sc_out sc_logic 1 signal 14 } 
	{ res_stream_V_data_12_V_din sc_out sc_lv 20 signal 15 } 
	{ res_stream_V_data_12_V_full_n sc_in sc_logic 1 signal 15 } 
	{ res_stream_V_data_12_V_write sc_out sc_logic 1 signal 15 } 
	{ res_stream_V_data_13_V_din sc_out sc_lv 20 signal 16 } 
	{ res_stream_V_data_13_V_full_n sc_in sc_logic 1 signal 16 } 
	{ res_stream_V_data_13_V_write sc_out sc_logic 1 signal 16 } 
	{ res_stream_V_data_14_V_din sc_out sc_lv 20 signal 17 } 
	{ res_stream_V_data_14_V_full_n sc_in sc_logic 1 signal 17 } 
	{ res_stream_V_data_14_V_write sc_out sc_logic 1 signal 17 } 
	{ res_stream_V_data_15_V_din sc_out sc_lv 20 signal 18 } 
	{ res_stream_V_data_15_V_full_n sc_in sc_logic 1 signal 18 } 
	{ res_stream_V_data_15_V_write sc_out sc_logic 1 signal 18 } 
	{ res_stream_V_data_16_V_din sc_out sc_lv 20 signal 19 } 
	{ res_stream_V_data_16_V_full_n sc_in sc_logic 1 signal 19 } 
	{ res_stream_V_data_16_V_write sc_out sc_logic 1 signal 19 } 
	{ res_stream_V_data_17_V_din sc_out sc_lv 20 signal 20 } 
	{ res_stream_V_data_17_V_full_n sc_in sc_logic 1 signal 20 } 
	{ res_stream_V_data_17_V_write sc_out sc_logic 1 signal 20 } 
	{ res_stream_V_data_18_V_din sc_out sc_lv 20 signal 21 } 
	{ res_stream_V_data_18_V_full_n sc_in sc_logic 1 signal 21 } 
	{ res_stream_V_data_18_V_write sc_out sc_logic 1 signal 21 } 
	{ res_stream_V_data_19_V_din sc_out sc_lv 20 signal 22 } 
	{ res_stream_V_data_19_V_full_n sc_in sc_logic 1 signal 22 } 
	{ res_stream_V_data_19_V_write sc_out sc_logic 1 signal 22 } 
	{ res_stream_V_data_20_V_din sc_out sc_lv 20 signal 23 } 
	{ res_stream_V_data_20_V_full_n sc_in sc_logic 1 signal 23 } 
	{ res_stream_V_data_20_V_write sc_out sc_logic 1 signal 23 } 
	{ res_stream_V_data_21_V_din sc_out sc_lv 20 signal 24 } 
	{ res_stream_V_data_21_V_full_n sc_in sc_logic 1 signal 24 } 
	{ res_stream_V_data_21_V_write sc_out sc_logic 1 signal 24 } 
	{ res_stream_V_data_22_V_din sc_out sc_lv 20 signal 25 } 
	{ res_stream_V_data_22_V_full_n sc_in sc_logic 1 signal 25 } 
	{ res_stream_V_data_22_V_write sc_out sc_logic 1 signal 25 } 
	{ res_stream_V_data_23_V_din sc_out sc_lv 20 signal 26 } 
	{ res_stream_V_data_23_V_full_n sc_in sc_logic 1 signal 26 } 
	{ res_stream_V_data_23_V_write sc_out sc_logic 1 signal 26 } 
	{ res_stream_V_data_24_V_din sc_out sc_lv 20 signal 27 } 
	{ res_stream_V_data_24_V_full_n sc_in sc_logic 1 signal 27 } 
	{ res_stream_V_data_24_V_write sc_out sc_logic 1 signal 27 } 
	{ res_stream_V_data_25_V_din sc_out sc_lv 20 signal 28 } 
	{ res_stream_V_data_25_V_full_n sc_in sc_logic 1 signal 28 } 
	{ res_stream_V_data_25_V_write sc_out sc_logic 1 signal 28 } 
	{ res_stream_V_data_26_V_din sc_out sc_lv 20 signal 29 } 
	{ res_stream_V_data_26_V_full_n sc_in sc_logic 1 signal 29 } 
	{ res_stream_V_data_26_V_write sc_out sc_logic 1 signal 29 } 
	{ res_stream_V_data_27_V_din sc_out sc_lv 20 signal 30 } 
	{ res_stream_V_data_27_V_full_n sc_in sc_logic 1 signal 30 } 
	{ res_stream_V_data_27_V_write sc_out sc_logic 1 signal 30 } 
	{ res_stream_V_data_28_V_din sc_out sc_lv 20 signal 31 } 
	{ res_stream_V_data_28_V_full_n sc_in sc_logic 1 signal 31 } 
	{ res_stream_V_data_28_V_write sc_out sc_logic 1 signal 31 } 
	{ res_stream_V_data_29_V_din sc_out sc_lv 20 signal 32 } 
	{ res_stream_V_data_29_V_full_n sc_in sc_logic 1 signal 32 } 
	{ res_stream_V_data_29_V_write sc_out sc_logic 1 signal 32 } 
	{ res_stream_V_data_30_V_din sc_out sc_lv 20 signal 33 } 
	{ res_stream_V_data_30_V_full_n sc_in sc_logic 1 signal 33 } 
	{ res_stream_V_data_30_V_write sc_out sc_logic 1 signal 33 } 
	{ res_stream_V_data_31_V_din sc_out sc_lv 20 signal 34 } 
	{ res_stream_V_data_31_V_full_n sc_in sc_logic 1 signal 34 } 
	{ res_stream_V_data_31_V_write sc_out sc_logic 1 signal 34 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "data_stream_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "data_stream_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "data_stream_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_stream_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "data_stream_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_stream_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "data_stream_V_data_1_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "data_stream_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "data_stream_V_data_1_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_stream_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "data_stream_V_data_1_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_stream_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "data_stream_V_data_2_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "data_stream_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "data_stream_V_data_2_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_stream_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "data_stream_V_data_2_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_stream_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "res_stream_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_3_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_4_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_4_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_4_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_4_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_5_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_5_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_5_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_5_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_6_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_6_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_6_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_6_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_7_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_7_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_7_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_7_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_8_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_8_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_8_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_8_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_9_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_9_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_9_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_9_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_10_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_10_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_10_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_10_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_10_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_10_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_11_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_11_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_11_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_11_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_11_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_11_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_12_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_12_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_12_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_12_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_12_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_12_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_13_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_13_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_13_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_13_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_13_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_13_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_14_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_14_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_14_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_14_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_14_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_14_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_15_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_15_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_15_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_15_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_15_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_15_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_16_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_16_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_16_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_16_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_16_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_16_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_17_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_17_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_17_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_17_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_17_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_17_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_18_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_18_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_18_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_18_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_18_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_18_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_19_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_19_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_19_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_19_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_19_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_19_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_20_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_20_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_20_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_20_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_20_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_20_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_21_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_21_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_21_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_21_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_21_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_21_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_22_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_22_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_22_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_22_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_22_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_22_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_23_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_23_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_23_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_23_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_23_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_23_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_24_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_24_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_24_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_24_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_24_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_24_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_25_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_25_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_25_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_25_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_25_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_25_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_26_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_26_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_26_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_26_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_26_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_26_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_27_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_27_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_27_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_27_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_27_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_27_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_28_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_28_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_28_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_28_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_28_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_28_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_29_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_29_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_29_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_29_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_29_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_29_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_30_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_30_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_30_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_30_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_30_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_30_V", "role": "write" }} , 
 	{ "name": "res_stream_V_data_31_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "res_stream_V_data_31_V", "role": "din" }} , 
 	{ "name": "res_stream_V_data_31_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_31_V", "role": "full_n" }} , 
 	{ "name": "res_stream_V_data_31_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_stream_V_data_31_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "gru_stack_array_ap_fixed_3u_array_ap_fixed_20_10_5_3_0_32u_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "16301", "EstimateLatencyMax" : "16401",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750"}],
		"Port" : [
			{"Name" : "data_stream_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_1_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_stream_V_data_2_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_stream_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_8_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_8_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_9_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_9_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_10_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_10_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_11_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_11_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_12_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_12_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_13_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_13_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_14_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_14_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_15_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_15_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_16_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_16_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_17_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_17_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_18_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_18_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_19_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_19_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_20_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_20_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_21_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_21_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_22_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_22_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_23_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_23_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_24_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_24_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_25_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_25_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_26_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_26_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_27_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_27_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_28_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_28_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_29_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_29_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_30_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_30_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_stream_V_data_31_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_stream_V_data_31_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_0"}]},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_1"}]},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_2"}]},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_3"}]},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_4"}]},
			{"Name" : "h_state_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_5"}]},
			{"Name" : "h_state_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_6"}]},
			{"Name" : "h_state_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_7"}]},
			{"Name" : "h_state_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_8"}]},
			{"Name" : "h_state_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_9"}]},
			{"Name" : "h_state_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_10"}]},
			{"Name" : "h_state_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_11"}]},
			{"Name" : "h_state_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_12"}]},
			{"Name" : "h_state_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_13"}]},
			{"Name" : "h_state_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_14"}]},
			{"Name" : "h_state_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_15"}]},
			{"Name" : "h_state_V_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_16"}]},
			{"Name" : "h_state_V_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_17"}]},
			{"Name" : "h_state_V_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_18"}]},
			{"Name" : "h_state_V_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_19"}]},
			{"Name" : "h_state_V_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_20"}]},
			{"Name" : "h_state_V_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_21"}]},
			{"Name" : "h_state_V_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_22"}]},
			{"Name" : "h_state_V_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_23"}]},
			{"Name" : "h_state_V_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_24"}]},
			{"Name" : "h_state_V_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_25"}]},
			{"Name" : "h_state_V_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_26"}]},
			{"Name" : "h_state_V_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_27"}]},
			{"Name" : "h_state_V_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_28"}]},
			{"Name" : "h_state_V_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_29"}]},
			{"Name" : "h_state_V_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_30"}]},
			{"Name" : "h_state_V_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "h_state_V_31"}]},
			{"Name" : "outidx9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "outidx9"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "w2_V"}]},
			{"Name" : "outidx8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "outidx8"}]},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "wr2_V"}]},
			{"Name" : "sigmoid_table7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "sigmoid_table7"}]},
			{"Name" : "tanh_table6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Port" : "tanh_table6"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.data_in_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750", "Parent" : "0", "Child" : ["3", "32", "34", "36"],
		"CDFG" : "gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "159", "EstimateLatencyMax" : "160",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288"}],
		"Port" : [
			{"Name" : "reset_state", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Port" : "data_V"}]},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_0"}]},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_1"}]},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_2"}]},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_3"}]},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_4"}]},
			{"Name" : "h_state_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_5"}]},
			{"Name" : "h_state_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_6"}]},
			{"Name" : "h_state_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_7"}]},
			{"Name" : "h_state_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_8"}]},
			{"Name" : "h_state_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_9"}]},
			{"Name" : "h_state_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_10"}]},
			{"Name" : "h_state_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_11"}]},
			{"Name" : "h_state_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_12"}]},
			{"Name" : "h_state_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_13"}]},
			{"Name" : "h_state_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_14"}]},
			{"Name" : "h_state_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_15"}]},
			{"Name" : "h_state_V_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_16"}]},
			{"Name" : "h_state_V_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_17"}]},
			{"Name" : "h_state_V_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_18"}]},
			{"Name" : "h_state_V_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_19"}]},
			{"Name" : "h_state_V_20", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_20"}]},
			{"Name" : "h_state_V_21", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_21"}]},
			{"Name" : "h_state_V_22", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_22"}]},
			{"Name" : "h_state_V_23", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_23"}]},
			{"Name" : "h_state_V_24", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_24"}]},
			{"Name" : "h_state_V_25", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_25"}]},
			{"Name" : "h_state_V_26", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_26"}]},
			{"Name" : "h_state_V_27", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_27"}]},
			{"Name" : "h_state_V_28", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_28"}]},
			{"Name" : "h_state_V_29", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_29"}]},
			{"Name" : "h_state_V_30", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_30"}]},
			{"Name" : "h_state_V_31", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "h_state_V_31"}]},
			{"Name" : "outidx9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Port" : "outidx9"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Port" : "w2_V"}]},
			{"Name" : "outidx8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "outidx8"}]},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Port" : "wr2_V"}]},
			{"Name" : "sigmoid_table7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "32", "SubInstance" : "grp_sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s_fu_180", "Port" : "sigmoid_table7"}]},
			{"Name" : "tanh_table6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s_fu_250", "Port" : "tanh_table6"}]}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108", "Parent" : "2", "Child" : ["4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"],
		"CDFG" : "dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "130", "EstimateLatencyMax" : "131",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "outidx8", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "h_state_V_20", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_21", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_22", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_23", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_24", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_25", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_26", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_27", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_28", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_29", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_30", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_31", "Type" : "None", "Direction" : "I"},
			{"Name" : "wr2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.outidx8_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.wr2_V_U", "Parent" : "3"},
	{"ID" : "6", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_325_20_1_1_U10", "Parent" : "3"},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_42_20_1_1_U11", "Parent" : "3"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U12", "Parent" : "3"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U13", "Parent" : "3"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U14", "Parent" : "3"},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U15", "Parent" : "3"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U16", "Parent" : "3"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U17", "Parent" : "3"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U18", "Parent" : "3"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U19", "Parent" : "3"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U20", "Parent" : "3"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U21", "Parent" : "3"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U22", "Parent" : "3"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U23", "Parent" : "3"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U24", "Parent" : "3"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U25", "Parent" : "3"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U26", "Parent" : "3"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U27", "Parent" : "3"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U28", "Parent" : "3"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U29", "Parent" : "3"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U30", "Parent" : "3"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U31", "Parent" : "3"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U32", "Parent" : "3"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U33", "Parent" : "3"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mux_1287_20_1_1_U34", "Parent" : "3"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_108.myproject_mul_mul_20s_12s_30_1_1_U35", "Parent" : "3"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s_fu_180", "Parent" : "2", "Child" : ["33"],
		"CDFG" : "sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
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
			{"Name" : "sigmoid_table7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s_fu_180.sigmoid_table7_U", "Parent" : "32"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s_fu_250", "Parent" : "2", "Child" : ["35"],
		"CDFG" : "tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
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
			{"Name" : "tanh_table6", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s_fu_250.tanh_table6_U", "Parent" : "34"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288", "Parent" : "2", "Child" : ["37", "38", "39", "40", "41"],
		"CDFG" : "dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "146", "EstimateLatencyMax" : "147",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outidx9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.outidx9_U", "Parent" : "36"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.w2_V_U", "Parent" : "36"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.myproject_mux_646_20_1_1_U1", "Parent" : "36"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.myproject_mux_1287_20_1_1_U2", "Parent" : "36"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s_fu_750.grp_dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_288.myproject_mul_mul_20s_13s_30_1_1_U3", "Parent" : "36"}]}


set ArgLastReadFirstWriteLatency {
	gru_stack_array_ap_fixed_3u_array_ap_fixed_20_10_5_3_0_32u_config2_s {
		data_stream_V_data_0_V {Type I LastRead 1 FirstWrite -1}
		data_stream_V_data_1_V {Type I LastRead 1 FirstWrite -1}
		data_stream_V_data_2_V {Type I LastRead 1 FirstWrite -1}
		res_stream_V_data_0_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_1_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_2_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_3_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_4_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_5_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_6_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_7_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_8_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_9_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_10_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_11_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_12_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_13_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_14_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_15_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_16_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_17_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_18_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_19_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_20_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_21_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_22_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_23_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_24_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_25_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_26_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_27_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_28_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_29_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_30_V {Type O LastRead -1 FirstWrite 4}
		res_stream_V_data_31_V {Type O LastRead -1 FirstWrite 4}
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
		h_state_V_20 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_21 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_22 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_23 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_24 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_25 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_26 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_27 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_28 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_29 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_30 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_31 {Type IO LastRead -1 FirstWrite -1}
		outidx9 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		outidx8 {Type I LastRead -1 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}
		sigmoid_table7 {Type I LastRead -1 FirstWrite -1}
		tanh_table6 {Type I LastRead -1 FirstWrite -1}}
	gru_static_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_config2_false_s {
		reset_state {Type I LastRead 0 FirstWrite -1}
		data_V {Type I LastRead 1 FirstWrite -1}
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
		h_state_V_20 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_21 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_22 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_23 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_24 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_25 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_26 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_27 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_28 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_29 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_30 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_31 {Type IO LastRead -1 FirstWrite -1}
		outidx9 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}
		outidx8 {Type I LastRead -1 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}
		sigmoid_table7 {Type I LastRead -1 FirstWrite -1}
		tanh_table6 {Type I LastRead -1 FirstWrite -1}}
	dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s {
		outidx8 {Type I LastRead -1 FirstWrite -1}
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
		h_state_V_20 {Type I LastRead 2 FirstWrite -1}
		h_state_V_21 {Type I LastRead 2 FirstWrite -1}
		h_state_V_22 {Type I LastRead 2 FirstWrite -1}
		h_state_V_23 {Type I LastRead 2 FirstWrite -1}
		h_state_V_24 {Type I LastRead 2 FirstWrite -1}
		h_state_V_25 {Type I LastRead 2 FirstWrite -1}
		h_state_V_26 {Type I LastRead 2 FirstWrite -1}
		h_state_V_27 {Type I LastRead 2 FirstWrite -1}
		h_state_V_28 {Type I LastRead 2 FirstWrite -1}
		h_state_V_29 {Type I LastRead 2 FirstWrite -1}
		h_state_V_30 {Type I LastRead 2 FirstWrite -1}
		h_state_V_31 {Type I LastRead 2 FirstWrite -1}
		wr2_V {Type I LastRead -1 FirstWrite -1}}
	sigmoid_ap_fixed_ap_fixed_20_10_5_3_0_sigmoid_config2_recr_s {
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
		data_40_V_read {Type I LastRead 0 FirstWrite -1}
		data_41_V_read {Type I LastRead 0 FirstWrite -1}
		data_42_V_read {Type I LastRead 0 FirstWrite -1}
		data_43_V_read {Type I LastRead 0 FirstWrite -1}
		data_44_V_read {Type I LastRead 0 FirstWrite -1}
		data_45_V_read {Type I LastRead 0 FirstWrite -1}
		data_46_V_read {Type I LastRead 0 FirstWrite -1}
		data_47_V_read {Type I LastRead 0 FirstWrite -1}
		data_48_V_read {Type I LastRead 0 FirstWrite -1}
		data_49_V_read {Type I LastRead 0 FirstWrite -1}
		data_50_V_read {Type I LastRead 0 FirstWrite -1}
		data_51_V_read {Type I LastRead 0 FirstWrite -1}
		data_52_V_read {Type I LastRead 0 FirstWrite -1}
		data_53_V_read {Type I LastRead 0 FirstWrite -1}
		data_54_V_read {Type I LastRead 0 FirstWrite -1}
		data_55_V_read {Type I LastRead 0 FirstWrite -1}
		data_56_V_read {Type I LastRead 0 FirstWrite -1}
		data_57_V_read {Type I LastRead 0 FirstWrite -1}
		data_58_V_read {Type I LastRead 0 FirstWrite -1}
		data_59_V_read {Type I LastRead 0 FirstWrite -1}
		data_60_V_read {Type I LastRead 0 FirstWrite -1}
		data_61_V_read {Type I LastRead 0 FirstWrite -1}
		data_62_V_read {Type I LastRead 0 FirstWrite -1}
		data_63_V_read {Type I LastRead 0 FirstWrite -1}
		sigmoid_table7 {Type I LastRead -1 FirstWrite -1}}
	tanh_ap_fixed_20_10_5_3_0_ap_fixed_20_10_5_3_0_tanh_config2_s {
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
		tanh_table6 {Type I LastRead -1 FirstWrite -1}}
	dense_resource_rf_gt_nin_rem0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_V {Type I LastRead 1 FirstWrite -1}
		outidx9 {Type I LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "16301", "Max" : "16401"}
	, {"Name" : "Interval", "Min" : "16301", "Max" : "16401"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_stream_V_data_0_V { axis {  { data_stream_V_data_0_V_TDATA in_data 0 24 }  { data_stream_V_data_0_V_TVALID in_vld 0 1 }  { data_stream_V_data_0_V_TREADY in_acc 1 1 } } }
	data_stream_V_data_1_V { axis {  { data_stream_V_data_1_V_TDATA in_data 0 24 }  { data_stream_V_data_1_V_TVALID in_vld 0 1 }  { data_stream_V_data_1_V_TREADY in_acc 1 1 } } }
	data_stream_V_data_2_V { axis {  { data_stream_V_data_2_V_TDATA in_data 0 24 }  { data_stream_V_data_2_V_TVALID in_vld 0 1 }  { data_stream_V_data_2_V_TREADY in_acc 1 1 } } }
	res_stream_V_data_0_V { ap_fifo {  { res_stream_V_data_0_V_din fifo_data 1 20 }  { res_stream_V_data_0_V_full_n fifo_status 0 1 }  { res_stream_V_data_0_V_write fifo_update 1 1 } } }
	res_stream_V_data_1_V { ap_fifo {  { res_stream_V_data_1_V_din fifo_data 1 20 }  { res_stream_V_data_1_V_full_n fifo_status 0 1 }  { res_stream_V_data_1_V_write fifo_update 1 1 } } }
	res_stream_V_data_2_V { ap_fifo {  { res_stream_V_data_2_V_din fifo_data 1 20 }  { res_stream_V_data_2_V_full_n fifo_status 0 1 }  { res_stream_V_data_2_V_write fifo_update 1 1 } } }
	res_stream_V_data_3_V { ap_fifo {  { res_stream_V_data_3_V_din fifo_data 1 20 }  { res_stream_V_data_3_V_full_n fifo_status 0 1 }  { res_stream_V_data_3_V_write fifo_update 1 1 } } }
	res_stream_V_data_4_V { ap_fifo {  { res_stream_V_data_4_V_din fifo_data 1 20 }  { res_stream_V_data_4_V_full_n fifo_status 0 1 }  { res_stream_V_data_4_V_write fifo_update 1 1 } } }
	res_stream_V_data_5_V { ap_fifo {  { res_stream_V_data_5_V_din fifo_data 1 20 }  { res_stream_V_data_5_V_full_n fifo_status 0 1 }  { res_stream_V_data_5_V_write fifo_update 1 1 } } }
	res_stream_V_data_6_V { ap_fifo {  { res_stream_V_data_6_V_din fifo_data 1 20 }  { res_stream_V_data_6_V_full_n fifo_status 0 1 }  { res_stream_V_data_6_V_write fifo_update 1 1 } } }
	res_stream_V_data_7_V { ap_fifo {  { res_stream_V_data_7_V_din fifo_data 1 20 }  { res_stream_V_data_7_V_full_n fifo_status 0 1 }  { res_stream_V_data_7_V_write fifo_update 1 1 } } }
	res_stream_V_data_8_V { ap_fifo {  { res_stream_V_data_8_V_din fifo_data 1 20 }  { res_stream_V_data_8_V_full_n fifo_status 0 1 }  { res_stream_V_data_8_V_write fifo_update 1 1 } } }
	res_stream_V_data_9_V { ap_fifo {  { res_stream_V_data_9_V_din fifo_data 1 20 }  { res_stream_V_data_9_V_full_n fifo_status 0 1 }  { res_stream_V_data_9_V_write fifo_update 1 1 } } }
	res_stream_V_data_10_V { ap_fifo {  { res_stream_V_data_10_V_din fifo_data 1 20 }  { res_stream_V_data_10_V_full_n fifo_status 0 1 }  { res_stream_V_data_10_V_write fifo_update 1 1 } } }
	res_stream_V_data_11_V { ap_fifo {  { res_stream_V_data_11_V_din fifo_data 1 20 }  { res_stream_V_data_11_V_full_n fifo_status 0 1 }  { res_stream_V_data_11_V_write fifo_update 1 1 } } }
	res_stream_V_data_12_V { ap_fifo {  { res_stream_V_data_12_V_din fifo_data 1 20 }  { res_stream_V_data_12_V_full_n fifo_status 0 1 }  { res_stream_V_data_12_V_write fifo_update 1 1 } } }
	res_stream_V_data_13_V { ap_fifo {  { res_stream_V_data_13_V_din fifo_data 1 20 }  { res_stream_V_data_13_V_full_n fifo_status 0 1 }  { res_stream_V_data_13_V_write fifo_update 1 1 } } }
	res_stream_V_data_14_V { ap_fifo {  { res_stream_V_data_14_V_din fifo_data 1 20 }  { res_stream_V_data_14_V_full_n fifo_status 0 1 }  { res_stream_V_data_14_V_write fifo_update 1 1 } } }
	res_stream_V_data_15_V { ap_fifo {  { res_stream_V_data_15_V_din fifo_data 1 20 }  { res_stream_V_data_15_V_full_n fifo_status 0 1 }  { res_stream_V_data_15_V_write fifo_update 1 1 } } }
	res_stream_V_data_16_V { ap_fifo {  { res_stream_V_data_16_V_din fifo_data 1 20 }  { res_stream_V_data_16_V_full_n fifo_status 0 1 }  { res_stream_V_data_16_V_write fifo_update 1 1 } } }
	res_stream_V_data_17_V { ap_fifo {  { res_stream_V_data_17_V_din fifo_data 1 20 }  { res_stream_V_data_17_V_full_n fifo_status 0 1 }  { res_stream_V_data_17_V_write fifo_update 1 1 } } }
	res_stream_V_data_18_V { ap_fifo {  { res_stream_V_data_18_V_din fifo_data 1 20 }  { res_stream_V_data_18_V_full_n fifo_status 0 1 }  { res_stream_V_data_18_V_write fifo_update 1 1 } } }
	res_stream_V_data_19_V { ap_fifo {  { res_stream_V_data_19_V_din fifo_data 1 20 }  { res_stream_V_data_19_V_full_n fifo_status 0 1 }  { res_stream_V_data_19_V_write fifo_update 1 1 } } }
	res_stream_V_data_20_V { ap_fifo {  { res_stream_V_data_20_V_din fifo_data 1 20 }  { res_stream_V_data_20_V_full_n fifo_status 0 1 }  { res_stream_V_data_20_V_write fifo_update 1 1 } } }
	res_stream_V_data_21_V { ap_fifo {  { res_stream_V_data_21_V_din fifo_data 1 20 }  { res_stream_V_data_21_V_full_n fifo_status 0 1 }  { res_stream_V_data_21_V_write fifo_update 1 1 } } }
	res_stream_V_data_22_V { ap_fifo {  { res_stream_V_data_22_V_din fifo_data 1 20 }  { res_stream_V_data_22_V_full_n fifo_status 0 1 }  { res_stream_V_data_22_V_write fifo_update 1 1 } } }
	res_stream_V_data_23_V { ap_fifo {  { res_stream_V_data_23_V_din fifo_data 1 20 }  { res_stream_V_data_23_V_full_n fifo_status 0 1 }  { res_stream_V_data_23_V_write fifo_update 1 1 } } }
	res_stream_V_data_24_V { ap_fifo {  { res_stream_V_data_24_V_din fifo_data 1 20 }  { res_stream_V_data_24_V_full_n fifo_status 0 1 }  { res_stream_V_data_24_V_write fifo_update 1 1 } } }
	res_stream_V_data_25_V { ap_fifo {  { res_stream_V_data_25_V_din fifo_data 1 20 }  { res_stream_V_data_25_V_full_n fifo_status 0 1 }  { res_stream_V_data_25_V_write fifo_update 1 1 } } }
	res_stream_V_data_26_V { ap_fifo {  { res_stream_V_data_26_V_din fifo_data 1 20 }  { res_stream_V_data_26_V_full_n fifo_status 0 1 }  { res_stream_V_data_26_V_write fifo_update 1 1 } } }
	res_stream_V_data_27_V { ap_fifo {  { res_stream_V_data_27_V_din fifo_data 1 20 }  { res_stream_V_data_27_V_full_n fifo_status 0 1 }  { res_stream_V_data_27_V_write fifo_update 1 1 } } }
	res_stream_V_data_28_V { ap_fifo {  { res_stream_V_data_28_V_din fifo_data 1 20 }  { res_stream_V_data_28_V_full_n fifo_status 0 1 }  { res_stream_V_data_28_V_write fifo_update 1 1 } } }
	res_stream_V_data_29_V { ap_fifo {  { res_stream_V_data_29_V_din fifo_data 1 20 }  { res_stream_V_data_29_V_full_n fifo_status 0 1 }  { res_stream_V_data_29_V_write fifo_update 1 1 } } }
	res_stream_V_data_30_V { ap_fifo {  { res_stream_V_data_30_V_din fifo_data 1 20 }  { res_stream_V_data_30_V_full_n fifo_status 0 1 }  { res_stream_V_data_30_V_write fifo_update 1 1 } } }
	res_stream_V_data_31_V { ap_fifo {  { res_stream_V_data_31_V_din fifo_data 1 20 }  { res_stream_V_data_31_V_full_n fifo_status 0 1 }  { res_stream_V_data_31_V_write fifo_update 1 1 } } }
}
