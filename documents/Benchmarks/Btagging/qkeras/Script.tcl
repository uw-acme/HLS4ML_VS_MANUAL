# Create a project (optional if running non-project mode)
# create_project waiz_benchmark ./vivado_proj -part xc7a200tsbg484-1
#cd ../src_1layer
cd /home/quin/HLS4ML_VS_MANUAL/documents/Benchmarks/Btagging/qkeras/handmade/verilog-modules

set_param synth.elaboration.rodinMoreOptions "rt::set_parameter var_size_limit 4194304"

set name [lindex $argv 0]
set defs [lindex $argv 1]
set generics [lindex $argv 2]

# --- Dense weights ---
# read_verilog -sv "./pkg_sel.svh"
# read_verilog -sv [glob ../weights/dense_*_weights_biases_pkgs/dense_*_*.sv]
# --- Dense layer ---
#read_verilog -sv [glob ../pkg_gen/*/*.sv]
read_verilog -sv [glob ../../weights/weights_lstm1_weights_biases_pkgs/lstm1_*_*.sv]
read_verilog -sv [glob ../../weights/tables/*.sv]
read_verilog -sv [glob ../../weights/weights_dense_*_weights_biases_pkgs/dense_*_pkg_*.sv]
read_verilog -sv [glob *.sv]
# read_verilog -sv "./adderTree.sv"
# read_verilog -sv "./shift_add.sv"
# read_verilog -sv "./denseLayer.sv"

# # --- ReLU layer ---
# read_verilog -sv "./reluActivationLayer.sv"

# # --- Softmax layer ---
# #read_verilog -sv "./softmaxLayer.sv"
# #read_verilog -sv "./softmaxArgmaxLayer.sv"
# read_verilog -sv "./softmaxLayerNeg.sv"

# # --- Top level module ---
# read_verilog -sv "./waiz_benchmark_top_level.sv"
# read_verilog -sv "./waiz_benchmark.sv"

# (Optional) Testbench files (if you want synthesis, usually skip these)
# read_verilog -sv "./waiz_benchmark_tb.sv"
read_xdc const.xdc
# --- Set top module ---
# xc7k160tfbg484-3 is free, no license
# xq7vx980trf1930-1I is big, needs license
# xcvu13p-fhga2104-3-e
# xc7vx690tffg1761-2 is virtex 7, needs license
synth_design -top btag_top -part xcvu13p-fhga2104-3-e -generic $generics -verilog_define $defs
#xcu250-figd2104-2L-e
#xcvu13p-fhga2104-3-e

# --- Implementation flow ---
opt_design
place_design
route_design

# --- Reports ---
#report_utilization -hierarchical -hierarchical_depth 1 -file reports/util_hier_SA4.rpt
# --- Save design checkpoint for GUI inspection ---
report_utilization -hierarchical -hierarchical_depth 1 -file ../../reports/lstm_handmade/${name}_hier.rpt
report_utilization -file ../../reports/lstm_handmade/${name}_util.rpt
report_timing_summary -file ../../reports/lstm_handmade/${name}_timing.rpt
#write_checkpoint -force reports/[lindex $argv 0].dcp