onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /gru_tb/clk
add wave -noupdate /gru_tb/reset
add wave -noupdate /gru_tb/input_valid
add wave -noupdate /gru_tb/output_valid
add wave -noupdate /gru_tb/ready
add wave -noupdate /gru_tb/next_layer_ready
add wave -noupdate /gru_tb/x_t
add wave -noupdate /gru_tb/y_t
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/clk
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/reset
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/input_valid
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/output_valid
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/next_layer_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/x_t
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/h_t_minus_1
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/h_t
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/r_t
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/z_t
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/h_tilde
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/r_t_raw
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/z_t_raw
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/h_tilde_raw_W
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/h_tilde_raw_U
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/h_tilde_raw_gate
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/h_tilde_raw
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/r_h_mult
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/input_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/output_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/z_dense_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/z_dense_input_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/z_dense_output_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/z_dense_next_layer_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/z_sig_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/z_sig_input_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/z_sig_output_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/z_sig_next_layer_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/r_dense_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/r_dense_input_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/r_dense_output_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/r_dense_next_layer_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/r_sig_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/r_sig_input_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/r_sig_output_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/r_sig_next_layer_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/hU_dense_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/hU_dense_input_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/hU_dense_output_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/hU_dense_next_layer_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/hW_dense_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/hW_dense_input_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/hW_dense_output_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/hW_dense_next_layer_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/tanh_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/tanh_input_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/tanh_output_ready
add wave -noupdate -expand -group {cell signals} /gru_tb/dut/gru_unit/tanh_next_layer_ready
add wave -noupdate /gru_tb/dut/gru_unit/tanh_latch
add wave -noupdate /gru_tb/dut/gru_unit/z_sig_latch
add wave -noupdate /gru_tb/dut/gru_unit/restart
add wave -noupdate -expand -group {internal signals} /gru_tb/dut/h_t
add wave -noupdate -expand -group {internal signals} /gru_tb/dut/h_t_minus_1
add wave -noupdate -expand -group {internal signals} /gru_tb/dut/cell_input_valid
add wave -noupdate -expand -group {internal signals} /gru_tb/dut/cell_output_valid
add wave -noupdate -expand -group {internal signals} /gru_tb/dut/cell_ready
add wave -noupdate -expand -group {internal signals} /gru_tb/dut/cell_next_layer_ready
add wave -noupdate -expand -group {internal signals} /gru_tb/dut/start
add wave -noupdate -expand -group {internal signals} /gru_tb/dut/done
add wave -noupdate -expand -group {internal signals} /gru_tb/dut/ps
add wave -noupdate -expand -group {internal signals} /gru_tb/dut/ns
add wave -noupdate -expand -group {internal signals} -radix unsigned /gru_tb/dut/count
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {120000 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 152
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
WaveRestoreZoom {0 ps} {1099586 ps}
