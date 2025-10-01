# === Go to implementation directory ===
cd ./python/model_5/16_10_prj/myproject_prj/solution1/impl/verilog

# === Create a Vivado project ===
create_project waiz_benchmark . -part xc7vx690tffg1761-2 -force

# === Add constraints ===
add_files -fileset constrs_1 ./myproject_ooc.xdc

# === Add source files ===
add_files [glob *.v]

# (Optional) Add testbench
# add_files -fileset sim_1 "./waiz_benchmark_tb.sv"

# === Set top module ===
set_property top myproject [current_fileset]

# === Run synthesis and implementation (batch-safe) ===
launch_runs synth_1 -jobs 8
wait_on_run synth_1

launch_runs impl_1 -to_step write_bitstream -jobs 8
wait_on_run impl_1

# === Generate reports ===
open_run impl_1
report_utilization -file reports/util_hls.rpt
report_utilization -hierarchical -hierarchical_depth 1 -file reports/util_hier_hls.rpt
report_timing_summary -file reports/timing_hls.rpt

# === Save project recreation TCL ===
write_project_tcl -force reports/waiz_benchmark_project.tcl
