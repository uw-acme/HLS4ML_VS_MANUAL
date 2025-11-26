#!/bin/bash
set -e  # stop on error

cd ~
# Add Vivado and license settings to .bashrc
if ! grep -q "2100@xilinxd.xilinx-dev" ~/.bashrc ; then
    printf '\nexport PATH=/tools/Xilinx/Vivado/2019.1/bin:$PATH\n' >> ~/.bashrc
    printf 'export XILINXD_LICENSE_FILE="2100@xilinxd.xilinx-dev"\n' >> ~/.bashrc
fi 

# Install Miniconda silently
if [ ! -d "miniconda3" ]; then
    wget -q https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh
    bash Miniconda3-latest-Linux-x86_64.sh -b -p $HOME/miniconda3
fi
if [ -d "$HOME/miniconda3/envs/hls4ml-env" ]; then
    conda remove -n hls4ml-env --all -y
fi

# Activate conda for this script
export PATH="$HOME/miniconda3/bin:$PATH"
source $HOME/miniconda3/etc/profile.d/conda.sh

# # Clone repo
# git clone https://github.com/uw-acme/HLS4ML_VS_MANUAL
# cd HLS4ML_VS_MANUAL
# git checkout Nautilus_testing
# cd documents/hls4ml-tutorial-modified
conda tos accept --override-channels --channel https://repo.anaconda.com/pkgs/main 
conda tos accept --override-channels --channel https://repo.anaconda.com/pkgs/r
# Create and activate env
conda clean --all -y
pip cache purge
conda create -y -n hls4ml-env python=3.10 pip
conda activate hls4ml-env
# Install additional modules
MODULES=(ipykernel jupyterlab "tensorflow==2.12.0" tf.keras scikit-learn matplotlib pandas git+https://github.com/fastmachinelearning/hls4ml@main seaborn pydot qkeras hgq xgboost pysr zstd conifer)

for module in "${MODULES[@]}"; do
    if conda install -y "$module"; then
        echo "Installed $module with conda"
    elif conda install -y -c conda-forge "$module"; then
        echo "Installed $module with conda-forge"
    elif python -m pip install "$module" --no-cache-dir; then 
        echo "Installed $module with pip"
    else 
        echo "Failed to install $module"
    fi
done

# Register kernel
python -m ipykernel install --user --name hls4ml-env --display-name "Python (hls4ml-env)"