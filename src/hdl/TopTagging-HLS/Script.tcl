# Example script

# Read system verilog header file
read_verilog -sv "./pkg_sel.svh"

# Read multiple files at once. * is a wildcard matching anything
read_verilog -sv [glob ./weights/dense_*_weights_biases_pkgs/dense*.sv]

# Read all system verilog files
read_verilog -sv [glob *.sv]

# Read constraints file for timing analysis
read_xdc ./const.xdc
# --- Set top module ---
# These are the devices I usually use
# xc7k160tfbg484-3 is free, no license. Useful if you want to compile directly on your computer
# xc7vx690tffg1761-2 is virtex 7, needs license
synth_design -top waiz_benchmark -part xc7vx690tffg1761-2

# --- Implementation flow ---
opt_design
place_design
route_design

# --- Reports ---
# Different report options can be chosen. For basic resource viewing, the below one can be used
report_utilization -file reports/util_no_relu.rpt
#report_utilization -hierarchical -hierarchical_depth 1 -file reports/util_hier_SA4.rpt
#report_timing_summary -file reports/timing_.rpt
# RP is removed pipeiles using SA4 and rand 4/10
#report_power -file reports/power_post_route_RELU.rpt

# --- Save design checkpoint for GUI inspection ---
# If you want to view your project on your computer, download this onto your computer and open it in vivado
write_checkpoint -force reports/impl_no_relu.dcp