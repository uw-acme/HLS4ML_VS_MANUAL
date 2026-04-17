onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /hls_lat_tb/ap_clk
add wave -noupdate /hls_lat_tb/ap_done
add wave -noupdate /hls_lat_tb/ap_idle
add wave -noupdate /hls_lat_tb/ap_ready
add wave -noupdate /hls_lat_tb/ap_rst
add wave -noupdate /hls_lat_tb/ap_start
add wave -noupdate /hls_lat_tb/cycle_count
add wave -noupdate /hls_lat_tb/fd
add wave -noupdate /hls_lat_tb/ii_count
add wave -noupdate /hls_lat_tb/INPUT_SIZE
add wave -noupdate /hls_lat_tb/layer1_input_V
add wave -noupdate /hls_lat_tb/layer1_input_V_ap_vld
add wave -noupdate /hls_lat_tb/layer6_out_0_V
add wave -noupdate /hls_lat_tb/layer6_out_0_V_ap_vld
add wave -noupdate /hls_lat_tb/NINT
add wave -noupdate /hls_lat_tb/TIMESTEPS
add wave -noupdate /hls_lat_tb/wid
add wave -noupdate /hls_lat_tb/WIDTH
add wave -noupdate /hls_lat_tb/write_file
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {113838 ps} 0}
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
WaveRestoreZoom {0 ps} {1024 ns}
