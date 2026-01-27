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
if [ -d "$HOME/miniconda3/envs/hls4ml-tenv" ]; then
    conda remove -n hls4ml-tenv --all -y
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
conda create -y -n hls4ml-tenv python=3.10 pip
conda activate hls4ml-tenv
# Install additional modules
MODULES=("ipykernel==6.30.1" "jupyterlab==4.4.7" "tensorflow==2.12.0" "tf.keras==2.20.1" "scikit-learn==1.7.2" "matplotlib==3.10.6" "pandas==2.3.3" git+https://github.com/fastmachinelearning/hls4ml@main "seaborn==0.13.2" "pydot==3.0.4" "qkeras==0.9.0" "hgq==0.2.6" "xgboost==3.0.1" "pysr==1.5.9" zstd "conifer==1.7")

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
python -m ipykernel install --user --name hls4ml-tenv --display-name "Python (hls4ml-tenv)"