import hls4ml
from tensorflow.keras.models import load_model
from tensorflow.keras.utils import plot_model

model = load_model('../../../documents/Benchmarks/Toptag/qkeras/lstm/model_toptag_lstm.h5')
config = hls4ml.utils.config_from_keras_model(model, granularity='model', default_precision='ap_fixed<16,6>')

hls_model = hls4ml.converters.convert_from_keras_model(
    model, hls_config=config, output_dir='model_lstm_hls/hls4ml_prj', part='xc7vx690tffg1761-2'
)
# hls4ml.utils.plot_model(hls_model, show_shapes=True, show_precision=True, to_file='toptag_lstm.png')
hls_model.build(csim=False, synth=True, vsynth=True)
