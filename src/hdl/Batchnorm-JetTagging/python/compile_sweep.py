
import hls4ml
import re
import os
import numpy as np
from tensorflow.keras.models import load_model # type: ignore
from sklearn.metrics import accuracy_score
model = load_model('model.h5', compile=False)
features = ["LUTs", "Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]
acc = []
for i in range(2,14):
    acc.append(({3*i-2},{i}))
y_test = np.load('y_test.npy')
# HLS4ML Model gen
test = np.load("X_test.npy")
def HLS4ML_gen(acc):
    #try:
        error=f"HLS4ML Script Failed"
        split = acc.split(",")
        name = f"hls_base" #_{split[0]}_{split[1]}
        model = load_model('model.h5', compile=False)
        config = hls4ml.utils.config_from_keras_model(model, granularity='name')
        config['Model']['Precision'] = f'ap_fixed<{acc}>'
        config['LayerName']['softmax']['exp_table_t'] = 'ap_fixed<18,8>'
        config['LayerName']['softmax']['inv_table_t'] = 'ap_fixed<18,8>'
        #config['LayerName']['fc1']['Precision']['weight'] = 'ap_fixed<8,2>'
        #config['LayerName']['output']['Precision']['result'] = 'fixed<16,6,RND,SAT>'
        #config['LayerName']['softmax']['Strategy'] = 'Stable'
        #config['LayerName']['softmax']['exp_table_t'] = 'ap_fixed<18,8>'
        #config['LayerName']['softmax']['inv_table_t'] = 'ap_fixed<18,8>'
        config['LayerName']['output']['Precision']['result'] = f'ap_fixed<{acc}>'
        config['LayerName']['softmax']['Precision']['result'] = f'ap_fixed<{acc}>'
        hls_model = hls4ml.converters.convert_from_keras_model(model, backend='Vivado', hls_config=config,
                                                                output_dir=f'model_5/{name}',
                                                                # part='xcu280-fsvh2892-2L-e')
                                                                part='xcvu13p-fhga2104-3-e')
        
        hls_model.build(csim=True, synth=True, vsynth=True, export=True)

        os.system(f"vivado -mode batch -source hls_script.tcl -tclargs {name}")
        data = extract_data(os.path.join("reports", f"{name}_util.rpt"), features)
        timing = extract_time(os.path.join("reports", f"{name}_timing.rpt"))
        with open("util_hls.csv", "a") as f:
            f.write(f"{split[0]}")
            for dat in data:
                f.write(f", {dat}")
            f.write(f", {timing}\n")
        error=f"HLS4ML Script Completed"
        os.system(f'printf "Gen {name} finished. Results:\n{features},"timing"\n{data},{timing}" | mail -s "{error}" ceravcal@uw.edu')
    #except:
        #os.system(f'printf "{name} failed" | mail -s "{error}" ceravcal@uw.edu')
def dec_to_bin(number: int, bits=-1):
    neg=False
    if (number<0):
        number*=-1
        number-=1
        neg=True
    number=int(np.round(number, 0))
    if (number==0 and neg):
        return "1"*bits
    out=""
    if (bits>0 and number>2**(bits-1)):
        return "0" + "1"*(bits-1)
    elif (bits>0 and number<(-1)*2**(bits-1)):
        return "1" + "0"*(bits-1)
    
    while (number>0):
        res = number%2
        if (neg):
            res= 0 if (res==1) else 1
        out=f"{res}{out}"
        if (len(out)==(bits-1)):
            break
        number=int(number/2)
        
    if (neg):
        out=f"{1}{out}"
    else: out=f"{0}{out}"
    if (len(out)==0):
        out="0"
    while (len(out)<bits):
        out=f"{out[0]}{out}"
    return out
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
def gen_test(accuracy):
    test_l = test.flatten()
    with open("X_test_gen.txt", "w") as f:
        for num in test_l:
            num=num*(2**(accuracy[0]-accuracy[1]))
            f.write(f"{dec_to_bin(num, accuracy[0])}\n")
def test_accuracy(model, acc):
    patt = r"[0-9]{1,2}"
    gen_test(acc)
    os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" hls_tb.sv')
    os.system(f"bash sim_hls.sh {model}")
    return keras_test(model)
def keras_test(model):
    res =  np.loadtxt(f"./model_5/{model}/myproject_prj/solution1/impl/verilog/hls_results.csv", delimiter=",")
    res = res[1:]
    acc= accuracy_score((y_test[0:len(res)]).argmax(axis=1), res.argmax(axis=1))
    return acc
    #for i in range(len(scores)):
        #print(f"\n{models[i]} accuracy is: {scores[i]} \n")
# for i in range(2,14):
#     #((3*i-2,i))
#     #print(f"{3*i-2},{i}".split(","))
#     HLS4ML_gen(f"{3*i-2},{i}")
#     #acc.append(({3*i-2},{i}))
HLS4ML_gen("16,6")
# args = ""
# for i in range(2,14):
#     acc = (3*i-2,i)
#     #print((3*i-2,i))
#     args = args + f"hls_{acc[0]}_{acc[1]} "
# print(args)
# accuracies = []
# #for i in range(2,10):
# i=9
# acc = (3*i-2,i)
# res = test_accuracy(f"hls_{acc[0]}_{acc[1]}", acc)
# os.system(f'printf "Acc test finished at %b with parameters {acc} with results: {res}" "$(date)" | mail -s "Handmade made" ceravcal@uw.edu')
# accuracies.append((acc, res))
# with open("accuracies.csv", "a") as f:
#     for elem in accuracies:
#         f.write(f"{elem[0]}, {elem[1]}\n")

