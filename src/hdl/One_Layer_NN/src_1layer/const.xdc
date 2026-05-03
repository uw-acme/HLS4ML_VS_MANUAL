## ===================================================================
## VC709 constraints file for waiz_benchmark top‐module
## Maps clk, reset, input_ready, output_ready, input_data[15:0], output_data[4:0]
## Using FMC HPC pins for the data buses
## Based on UG887 v1.5.1 / VC709 FMC J35 HPC pinout & master XDC template
## ===================================================================

## Clock: use system clock source
# set_property PACKAGE_PIN E19 [get_ports clk]
# set_property IOSTANDARD LVCMOS18 [get_ports clk]
create_clock -name ap_clk -period 5.000 [get_ports clk]  
## 100 MHz
## End of constraints
