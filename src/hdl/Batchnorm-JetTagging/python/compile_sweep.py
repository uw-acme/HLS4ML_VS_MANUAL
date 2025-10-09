
import hls4ml
import re
import os
from tensorflow.keras.models import load_model # type: ignore
model = load_model('model.h5', compile=False)
features = ["Slice LUTs", "Slice Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]
acc = []
for i in range(2,10):
    acc.append(({3*i-2},{i}))
# HLS4ML Model gen
def HLS4ML_gen(acc):
    try:
        error=f"HLS4ML Script {acc} Failed"
        split = acc.split(",")
        name = f"hls_{split[0]}_{split[1]}"
        model = load_model('model.h5', compile=False)
        config = hls4ml.utils.config_from_keras_model(model, granularity='model')
        config['Model']['Precision'] = f'ap_fixed<{acc}>'
        hls_model = hls4ml.converters.convert_from_keras_model(model, bit_exact=False, backend='Vivado', hls_config=config,
                                                                output_dir=f'model_5/{name}',
                                                                # part='xcu280-fsvh2892-2L-e')
                                                                part='xc7vx690tffg1761-2')
        hls_model.build()
        
        os.system(f"vivado -mode batch -source hls_script.tcl -tclargs {name}")
        data = extract_data(os.path.join("reports", f"{name}_util.rpt"), features)
        timing = extract_time(os.path.join("reports", f"{name}_timing.rpt"))
        with open("util_hls.csv", "a") as f:
            f.write(f"{split[0]}")
            for dat in data:
                f.write(f", {dat}")
            f.write(f", {timing}\n")
        error=f"HLS4ML Script {acc} Completed"
        os.system(f'printf "Gen {name} finished. Results:\n{features},"timing"\n{data},{timing}" | mail -s "{error}" ceravcal@uw.edu')
    except:
        os.system(f'printf "{name} failed" | mail -s "{error}" ceravcal@uw.edu')
        
def extract_data(file, features):
    "Extracts the feature from a file using Vivado formatting"
    "| Slice LUTs                 | 66386 |     0 |    433200 | 15.32 |"
    
    with open(file) as f:
        text = f.read()
    out = []
    for feature in features:
        m = re.search(feature + r"\s*\|\s*\d+\s*\|\s*\d+\s*\|\s*\d+\s*\|\s*(\d+.\d+)", text, re.IGNORECASE)
        if m:
            out.append(m.group(1))
            #return m.group(1)  # third number
    return out
    # ind2 = (res[::-1]).find("|")
    # ind1 = (res[::-1]).find("|", ind2+1)
    # num = res[-ind1:-ind2-1]
    # print(num)
def extract_time(file):



    with open(file) as f:
        text = f.read()
    pat = r"ap_clk\s*(-?\d+\.\d+)" 
    m = re.search(pat, text, re.IGNORECASE|re.DOTALL)
    if m:
        return m.group(1)

for i in range(2,10):
    #((3*i-2,i))
    #print(f"{3*i-2},{i}".split(","))
    HLS4ML_gen(f"{3*i-2},{i}")
    #acc.append(({3*i-2},{i}))
