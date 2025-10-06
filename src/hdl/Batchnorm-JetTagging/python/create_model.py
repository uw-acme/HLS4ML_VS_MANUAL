import hls4ml
from tensorflow.keras.models import load_model
# import yaml
import sys
# with open('hls_config.yml', 'r') as f:
#     yaml_config = yaml.safe_load(f)['HLSConfig']
try:
   
   error="Script Failed"
   TOTAL_BITS=16
   FRACTIONAL_BITS=10
   model = load_model('model.h5', compile=False)
   config = hls4ml.utils.config_from_keras_model(model, granularity='model')
   # config['Model']['Precision'] = 'ap_fixed<22,11>'
   config['Model']['Precision'] = 'ap_fixed<16,6>'
   config['Model']['Strategy'] = sys.argv[1]
   # config['LayerName']['softmax']['exp_table_t'] = 'ap_fixed<18,8>'
   # config['LayerName']['softmax']['inv_table_t'] = 'ap_fixed<18,4>'
   # config['LayerName']['fc1']['Precision']['bias'] = f'ap_fixed<{TOTAL_BITS},{FRACTIONAL_BITS}>'
   # config['LayerName']['softmax']['TableStrategy'] = 'latency'
   # config['LayerName']['softmax']['ReuseFactor'] = 4
   print("-----------------------------------")
   hls_model = hls4ml.converters.convert_from_keras_model(model,
                                                         bit_exact=False,
                                                         backend=sys.argv[2],
                                                         hls_config=config,
                                                      #    output_dir='model_4/hls4ml_prj',
                                                         output_dir=f'model_5/{sys.argv[3]}',
                                                         # part='xcu280-fsvh2892-2L-e')
                                                         part='xc7vx690tffg1761-2')
   hls_model.build(csim=False, synth=True, vsynth=False, export=True)
   #hls_model.compile()
   error="Script Completed"
finally:
   import os
   message = f"Params: "
   for parm in sys.argv:
      message = f"{message} {parm} "
   os.system(f'printf "script finished at %b with parameters {message} \n Rejoice! (maybe) " "$(date)" | mail -s "{error}" ceravcal@uw.edu')