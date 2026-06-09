# Create a project (optional if running non-project mode)
# create_project waiz_benchmark ./vivado_proj -part xc7a200tsbg484-1
<<<<<<<< HEAD:src/hdl/Batchnorm-JetTagging/hls4ml/scripts/hls_script.tcl
read_xdc myproject_ooc.xdc

#cd [file join "./model_5" [lindex $argv 0] "myproject_prj/solution1/impl/verilog"]
set home [file normalize ~]
set dir [file join $home sweeps [lindex $argv 0] p_prj solution1 impl verilog]

cd $dir
========
read_xdc const.xdc

#cd [file join "./model_5" [lindex $argv 0] "myproject_prj/solution1/impl/verilog"]
# set home [file normalize ~]
# set dir [file join $home sweeps [lindex $argv 0] p_prj solution1 impl verilog]
set dir [file join ../ Sweeps [lindex $argv 0] myproject_prj solution1 impl verilog]

cd $dir
read_verilog -sv hls_tb.sv
>>>>>>>> be1827937e9966093df5ff45167240f3408b16e9:src/hdl/TopTagging-HLS/GRU-HLS/Scripts/hls_script.tcl
read_verilog -v [glob *.v]


# (Optional) Testbench files (if you want synthesis, usually skip these)
# read_verilog -sv "./waiz_benchmark_tb.sv"

# --- Set top module ---
# xc7k160tfbg484-3 is free, no license
# xq7vx980trf1930-1I BIG!!
# xc7vx690tffg1761-2 is virtex 7, needs license
<<<<<<<< HEAD:src/hdl/Batchnorm-JetTagging/hls4ml/scripts/hls_script.tcl
synth_design -top p -part xcvu13p-fhga2104-3-e
========
synth_design -top hls_top -part xcvu13p-fhga2104-3-e
>>>>>>>> be1827937e9966093df5ff45167240f3408b16e9:src/hdl/TopTagging-HLS/GRU-HLS/Scripts/hls_script.tcl

# --- Implementation flow ---
opt_design

# --- Reports ---
# report_utilization -hierarchical -file reports/util_hier_SA3_pre.rpt
# report_timing_summary -file reports/timing_pre_SA3_route.rpt
# report_power -file reports/power_pre_SA3_route.rpt
# write_checkpoint -force reports/impl_SA3_opt.dcp
place_design
route_design
<<<<<<<< HEAD:src/hdl/Batchnorm-JetTagging/hls4ml/scripts/hls_script.tcl
cd ~/HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/hls4ml/
========
cd ~/HLS4ML_VS_MANUAL/src/hdl/TopTagging-HLS/GRU-HLS/
>>>>>>>> be1827937e9966093df5ff45167240f3408b16e9:src/hdl/TopTagging-HLS/GRU-HLS/Scripts/hls_script.tcl
# --- Reports ---
report_utilization -file "reports/[lindex $argv 0]_util.rpt"
report_utilization -hierarchical -hierarchical_depth 1 -file "reports/[lindex $argv 0]_util_hier.rpt"
report_timing_summary -file "reports/[lindex $argv 0]_timing.rpt"
# RP is removed pipeiles using SA4 and rand 4/10
#report_power -file reports/power_post_route_RELU.rpt

# --- Save design checkpoint for GUI inspection ---
<<<<<<<< HEAD:src/hdl/Batchnorm-JetTagging/hls4ml/scripts/hls_script.tcl
#write_checkpoint -force "reports/[lindex $argv 0].dcp"
========
#write_checkpoint -force "reports/[lindex $argv 0].dcp"
>>>>>>>> be1827937e9966093df5ff45167240f3408b16e9:src/hdl/TopTagging-HLS/GRU-HLS/Scripts/hls_script.tcl
