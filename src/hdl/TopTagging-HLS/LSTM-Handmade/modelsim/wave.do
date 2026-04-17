onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /Toptagging_top_tb/dut/clk
add wave -noupdate /Toptagging_top_tb/dut/input_ready
add wave -noupdate /Toptagging_top_tb/dut/input_ready_toptagging
add wave -noupdate /Toptagging_top_tb/dut/INPUT_SIZE
add wave -noupdate /Toptagging_top_tb/dut/input_step
add wave -noupdate /Toptagging_top_tb/dut/input_v
add wave -noupdate /Toptagging_top_tb/dut/NINT
add wave -noupdate /Toptagging_top_tb/dut/output_data
add wave -noupdate /Toptagging_top_tb/dut/output_ready
add wave -noupdate /Toptagging_top_tb/dut/output_ready_toptagging
add wave -noupdate /Toptagging_top_tb/dut/OUTPUT_SIZE
add wave -noupdate /Toptagging_top_tb/dut/ready
add wave -noupdate /Toptagging_top_tb/dut/reset
add wave -noupdate /Toptagging_top_tb/dut/shiftClk
add wave -noupdate /Toptagging_top_tb/dut/step
add wave -noupdate /Toptagging_top_tb/dut/TIMESTEPS
add wave -noupdate /Toptagging_top_tb/dut/Toptagging_ready
add wave -noupdate /Toptagging_top_tb/dut/WIDTH
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {7869096 ps} 0} {{Cursor 2} {429031 ps} 0} {{Cursor 3} {109222 ps} 0}
quietly wave cursor active 3
configure wave -namecolwidth 107
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
WaveRestoreZoom {0 ps} {762590 ps}
