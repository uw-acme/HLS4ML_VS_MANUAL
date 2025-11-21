# Create a project (optional if running non-project mode)
# create_project waiz_benchmark ./vivado_proj -part xc7a200tsbg484-1

set script_dir [file dirname [info script]]
set verilog_dir [file join $script_dir "../hls4ml/gaussian_hls4ml_prj/myproject_prj/solution1/impl/verilog/"]

read_verilog -v [glob -directory $verilog_dir *.v]

# put xdc file in the same directory as this script
# set xdc_file [file join $script_dir "myproject_ooc.xdc"]
# read_xdc $xdc_file

# (Optional) Testbench files (if you want synthesis, usually skip these)
# read_verilog -sv "./waiz_benchmark_tb.sv"

# --- Set top module ---
# xc7k160tfbg484-3 is free, no license
# xc7vx690tffg1761-2 is virtex 7, needs license
synth_design -top myproject -part xc7vx690tffg1761-2

# --- Implementation flow ---
opt_design
place_design
route_design

# --- Reports ---
set reports_dir [file join $script_dir "../reports"]
file mkdir $reports_dir

report_utilization -hierarchical -hierarchical_depth 1 -file [file join $reports_dir "gaussian_util.rpt"]
report_timing_summary -file [file join $reports_dir "gaussian_timing.rpt"]
#report_utilization -hierarchical -hierarchical_depth 1 -file "reports/[lindex $argv 0]_hier.rpt"
#report_utilization -hierarchical -hierarchical_depth 1 -file "reports/[lindex $argv 0]_util_hier.rpt"
#report_timing_summary -file "reports/[lindex $argv 0]_timing.rpt"
# RP is removed pipeiles using SA4 and rand 4/10
#report_power -file reports/power_post_route_RELU.rpt

# --- Save design checkpoint for GUI inspection ---
#write_checkpoint -force "reports/[lindex $argv 0].dcp"