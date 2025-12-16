onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /waiz_benchmark_tb/clk
add wave -noupdate -expand /waiz_benchmark_tb/out
add wave -noupdate /waiz_benchmark_tb/input_ready
add wave -noupdate /waiz_benchmark_tb/output_ready
add wave -noupdate /waiz_benchmark_tb/reset
add wave -noupdate -divider Dense1
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/PIPELINING
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/INPUT_SIZE
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/ADDER_TREE_CYCLES
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/ready_buffer
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/input_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/output_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/mult
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/mult_temp
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/accumulator
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/result
add wave -noupdate /waiz_benchmark_tb/dut/denselayer1/mult_out
add wave -noupdate -divider Dense2
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/PIPELINING
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/INPUT_SIZE
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/ADDER_TREE_CYCLES
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/input_ready
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/input_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/result
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/mult_out
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/output_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer2/ready_buffer
add wave -noupdate -divider Dense3
add wave -noupdate /waiz_benchmark_tb/dut/denselayer3/PIPELINING
add wave -noupdate /waiz_benchmark_tb/dut/denselayer3/INPUT_SIZE
add wave -noupdate /waiz_benchmark_tb/dut/denselayer3/ADDER_TREE_CYCLES
add wave -noupdate /waiz_benchmark_tb/dut/denselayer3/input_ready
add wave -noupdate /waiz_benchmark_tb/dut/denselayer3/output_ready
add wave -noupdate /waiz_benchmark_tb/dut/denselayer3/input_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer3/output_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer3/mult
add wave -noupdate /waiz_benchmark_tb/dut/denselayer3/mult_temp
add wave -noupdate /waiz_benchmark_tb/dut/denselayer3/accumulator
add wave -noupdate /waiz_benchmark_tb/dut/denselayer3/result
add wave -noupdate /waiz_benchmark_tb/dut/denselayer3/ready_buffer
add wave -noupdate -divider Dense4
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/PIPELINING
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/INPUT_SIZE
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/ADDER_TREE_CYCLES
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/input_ready
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/output_ready
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/input_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/output_data
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/mult
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/mult_temp
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/accumulator
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/result
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/mult_out
add wave -noupdate /waiz_benchmark_tb/dut/denselayer4/ready_buffer
add wave -noupdate -divider Softmax
add wave -noupdate /waiz_benchmark_tb/dut/softmax/dataIn
add wave -noupdate /waiz_benchmark_tb/dut/softmax/dataOut
add wave -noupdate /waiz_benchmark_tb/dut/softmax/input_ready
add wave -noupdate /waiz_benchmark_tb/dut/softmax/output_ready
add wave -noupdate /waiz_benchmark_tb/softmax_output_real
add wave -noupdate -radix unsigned /waiz_benchmark_tb/dut/softmax/buffer
add wave -noupdate -radix unsigned /waiz_benchmark_tb/dut/softmax/expResult
add wave -noupdate -radix unsigned /waiz_benchmark_tb/dut/softmax/tempSum
add wave -noupdate -radix unsigned /waiz_benchmark_tb/dut/softmax/expSum
add wave -noupdate -radix unsigned /waiz_benchmark_tb/dut/softmax/invertVal
add wave -noupdate -radix decimal /waiz_benchmark_tb/dut/softmax/maxIn
add wave -noupdate /waiz_benchmark_tb/dut/softmax/lookupIndex
add wave -noupdate /waiz_benchmark_tb/dut/softmax/invertIndex
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {162 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 106
configure wave -valuecolwidth 40
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
WaveRestoreZoom {160 ps} {205 ps}
