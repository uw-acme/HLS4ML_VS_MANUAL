# test simulation script for top level testbench for rheedGaussianWrapper

xvlog -sv ../weights_n_tables/*.sv ../verilog-modules/*.sv rheedGaussianWrapper_streaming_tb.sv
xelab rheedGaussianWrapper_streaming_tb -s snap
xsim snap -runall -testplusarg "IMAGE_LIST=/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/python/gaussian_test_data/image_list_2.txt" -testplusarg "OUT_DIR=/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-Handmade/scratch_dir"