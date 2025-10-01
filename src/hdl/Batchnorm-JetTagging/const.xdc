## ===================================================================
## VC709 constraints file for waiz_benchmark top‐module
## Maps clk, reset, input_ready, output_ready, input_data[15:0], output_data[4:0]
## Using FMC HPC pins for the data buses
## Based on UG887 v1.5.1 / VC709 FMC J35 HPC pinout & master XDC template
## ===================================================================

## Clock: use system clock source
set_property PACKAGE_PIN E19 [get_ports clk]
set_property IOSTANDARD LVCMOS18 [get_ports clk]
create_clock -name sys_clk -period 5.000 [get_ports clk]  
## 200 MHz

## Reset: map to CPU reset button
set_property PACKAGE_PIN Y23 [get_ports reset]
set_property IOSTANDARD LVCMOS18 [get_ports reset]

## Input ready
set_property PACKAGE_PIN AB28 [get_ports input_ready]
set_property IOSTANDARD LVCMOS18 [get_ports input_ready]

## Output ready
set_property PACKAGE_PIN AA23 [get_ports output_ready]
set_property IOSTANDARD LVCMOS18 [get_ports output_ready]

## Input Data Bus [15:0] – map to FMC HPC J35 pins
## Using single-ended I/O, bank at VADJ = 1.8V (bank which FMC J35 connects to) :contentReference[oaicite:1]{index=1}

set_property PACKAGE_PIN AF31 [get_ports {input_data[0]}]
set_property PACKAGE_PIN AF29 [get_ports {input_data[1]}]
set_property PACKAGE_PIN AE31 [get_ports {input_data[2]}]
set_property PACKAGE_PIN AD31 [get_ports {input_data[3]}]
set_property PACKAGE_PIN AE29 [get_ports {input_data[4]}]
set_property PACKAGE_PIN AC31 [get_ports {input_data[5]}]
set_property PACKAGE_PIN AB31 [get_ports {input_data[6]}]
set_property PACKAGE_PIN Y31  [get_ports {input_data[7]}]
set_property PACKAGE_PIN W30  [get_ports {input_data[8]}]
set_property PACKAGE_PIN U30  [get_ports {input_data[9]}]
set_property PACKAGE_PIN T30  [get_ports {input_data[10]}]
set_property PACKAGE_PIN R30  [get_ports {input_data[11]}]
set_property PACKAGE_PIN P30  [get_ports {input_data[12]}]
set_property PACKAGE_PIN N30  [get_ports {input_data[13]}]
set_property PACKAGE_PIN M30  [get_ports {input_data[14]}]
set_property PACKAGE_PIN L30  [get_ports {input_data[15]}]

set_property IOSTANDARD LVCMOS18 [get_ports {input_data[*]}]

## Output Data Bus [4:0] – map to FMC HPC J35 pins

set_property PACKAGE_PIN AF33 [get_ports {output_data[0]}]
set_property PACKAGE_PIN AE33 [get_ports {output_data[1]}]
set_property PACKAGE_PIN AD33 [get_ports {output_data[2]}]
set_property PACKAGE_PIN AC33 [get_ports {output_data[3]}]
set_property PACKAGE_PIN AB33 [get_ports {output_data[4]}]

set_property IOSTANDARD LVCMOS18 [get_ports {output_data[*]}]

## Optional: add timing driven by input_ready as a clock-like signal
## If input_ready toggles fast and you care about timing, you might make an input_ready
## derived clock or use false path etc. (not shown here)

## End of constraints
