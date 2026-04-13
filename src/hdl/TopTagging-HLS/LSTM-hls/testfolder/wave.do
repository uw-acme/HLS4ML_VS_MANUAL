onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /hls_top_tb/dut/ap_clk
add wave -noupdate /hls_top_tb/dut/ap_done
add wave -noupdate /hls_top_tb/dut/ap_idle
add wave -noupdate /hls_top_tb/dut/ap_ready
add wave -noupdate /hls_top_tb/dut/ap_rst
add wave -noupdate /hls_top_tb/dut/ap_start
add wave -noupdate /hls_top_tb/dut/clk
add wave -noupdate /hls_top_tb/dut/input_ready
add wave -noupdate /hls_top_tb/dut/INPUT_SIZE
add wave -noupdate /hls_top_tb/dut/input_step
add wave -noupdate /hls_top_tb/dut/input_v
add wave -noupdate /hls_top_tb/dut/layer1_input_V
add wave -noupdate /hls_top_tb/dut/layer1_input_V_ap_vld
add wave -noupdate /hls_top_tb/dut/layer6_out_0_V
add wave -noupdate /hls_top_tb/dut/layer6_out_0_V_ap_vld
add wave -noupdate /hls_top_tb/dut/NINT
add wave -noupdate /hls_top_tb/dut/output_data
add wave -noupdate /hls_top_tb/dut/output_ready
add wave -noupdate /hls_top_tb/dut/OUTPUT_SIZE
add wave -noupdate /hls_top_tb/dut/ready
add wave -noupdate /hls_top_tb/dut/reset
add wave -noupdate /hls_top_tb/dut/shiftClk
add wave -noupdate /hls_top_tb/dut/step
add wave -noupdate /hls_top_tb/dut/TIMESTEPS
add wave -noupdate /hls_top_tb/dut/WIDTH
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {1898824 ps} 0}
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
WaveRestoreZoom {1792 ns} {2304 ns}
