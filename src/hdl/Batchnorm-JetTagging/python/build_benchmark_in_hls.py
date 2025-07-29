from tensorflow.keras.models import load_model
import hls4ml
import os
from pathlib import Path
import logging
from datetime import datetime

os.environ['PATH'] = '/opt/Xilinx/Vivado/2019.2/bin:' + os.environ['PATH']

def setup_logger():
    logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(message)s')

def log_with_timestamp(func):
    def wrapper(*args, **kwargs):
        logging.info("Starting hls_model.build()")
        start_time = datetime.now()

        result = func(*args, **kwargs)

        end_time = datetime.now()
        logging.info("Finished hls_model.build()")
        logging.info("Duration: %s", end_time - start_time)

        return result

    return wrapper

def main(model_path: Path, output_dir: Path, precision: str):
    setup_logger()

    model = load_model(model_path)
    config = hls4ml.utils.config_from_keras_model(model, granularity='model')
    config['Model']['Precision'] = f'ap_fixed{precision}'

    hls_model = hls4ml.converters.convert_from_keras_model(model,
                                                           hls_config=config,
                                                           output_dir=str(output_dir),
                                                           part='xcu280-fsvh2892-2L-e')
    hls_model.compile()

    # Wrap hls_model.build() with logging
    logged_build = log_with_timestamp(hls_model.build)
    logged_build(csim=False)

    hls4ml.report.read_vivado_report(str(output_dir))

if __name__ == '__main__':
    
    # precision = '15_7'
    
    # precisions = ['6_3', '8_4', '9_4', '11_5', '13_6', '16_8', '17_8', '18_9', '19_9', '20_10', '21_10', '22_11', '23_11', '24_12', '25_12', '26_13']
    # precisions = ['23_11', '24_12', '25_12', '26_13']
    precisions = ['16_10']

    for precision in precisions:
        model_path = Path('/home/donovan/code/research/hls4ml/waiz-khan-files/model.h5')
        output_dir = Path(f'/home/donovan/code/research/hls4ml/waiz-khan-files/model_7/{precision}_prj')
        
        precision = '<' + precision.replace('_', ',') + '>'
        
        main(model_path, output_dir, precision)
        print("Done synthesizing with precision:", precision)
    
    # out output path:
    # /home/donovan/code/research/hls4ml/waiz-khan-files/model_6/output.txt
    
    # command to run this script:
    # python /home/donovan/code/research/hls4ml/waiz-khan-files/build_waiz_benchmark_in_hls.py &> /home/donovan/code/research/hls4ml/waiz-khan-files/model_6/output.txt
