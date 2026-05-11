onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /gruCell_tb/clk
add wave -noupdate /gruCell_tb/reset
add wave -noupdate /gruCell_tb/x_t
add wave -noupdate /gruCell_tb/h_t_minus_1
add wave -noupdate /gruCell_tb/h_t
add wave -noupdate /gruCell_tb/dut/r_t_raw
add wave -noupdate /gruCell_tb/dut/r_t
add wave -noupdate /gruCell_tb/dut/z_t_raw
add wave -noupdate /gruCell_tb/dut/z_t
add wave -noupdate /gruCell_tb/dut/h_tilde_raw
add wave -noupdate /gruCell_tb/dut/h_tilde
add wave -noupdate /gruCell_tb/dut/r_h_mult
add wave -noupdate -expand -group {reset dense} /gruCell_tb/dut/reset_gate_dense/input_data
add wave -noupdate -expand -group {reset dense} /gruCell_tb/dut/reset_gate_dense/output_data
add wave -noupdate -expand -group {reset sigmoid} /gruCell_tb/dut/reset_gate_sigmoid/input_data
add wave -noupdate -expand -group {reset sigmoid} /gruCell_tb/dut/reset_gate_sigmoid/output_data
add wave -noupdate /gruCell_tb/input_valid
add wave -noupdate /gruCell_tb/output_valid
add wave -noupdate /gruCell_tb/ready
add wave -noupdate /gruCell_tb/next_layer_ready
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {1510680 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 1
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ps
update
WaveRestoreZoom {0 ps} {2089500 ps}
