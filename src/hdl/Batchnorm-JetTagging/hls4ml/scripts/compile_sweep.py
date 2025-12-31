
import hls4ml
import re
import os
import numpy as np
import pandas as pd
from pprint import pprint
from sys import argv
import yaml
# import subprocess
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
#os.environ['PATH'] = r"/tools/Xilinx/2025.1/Vivado/bin:" + os.environ['PATH']
def HLS4ML_gen(acc):
    #try:
    split = acc.split(",")
    for i in range(len(split)):
        split[i]=int(split[i])
    name = f"hls_2reuse5"
    # us_lat: unsigned tables latency implementation
    # unsignedre5bas: unsigned reuse factor 5 manual stable implementations
    # orig: the original settings with just setting latency
    sweepname = name + f"_{split[0]}_{split[1]}"
    if (not os.path.isdir(f'/home/caleb/sweeps/{sweepname}')):
        model = load_model('model.h5', compile=False)
        # config = hls4ml.utils.config_from_keras_model(model, granularity='name')
        f = open("hls_config.yml", "r")
        config = yaml.safe_load(f)['HLSConfig']
        f.close()
        config['Model']['Precision'] = f'ap_fixed<{acc}>'
        #config['LayerName']['fc1']['Precision']['weight'] = 'ap_fixed<8,2>'
        #config['LayerName']['output']['Precision']['result'] = 'fixed<16,6,RND,SAT>'
        # config['Model']['Strategy'] = 'Latency'
        #config['LayerName']['softmax']['exp_table_t'] = 'ap_fixed<18,8>'
        # config['LayerName']['softmax']['implementation'] = 'stable'
        # if (int(split[0])>18):
        # config['LayerName']['softmax']['table_t'] = 'ap_ufixed<18,8>'
        # config['LayerName']['softmax']['reuse_factor'] = 5
        # config['LayerName']['output']['Precision']['result'] = 'ap_fixed<18,8>'
        # config['LayerName']['softmax']['Precision']['result'] = 'ap_fixed<18,8>'
        # config['LayerName']['softmax']['exp_table_t'] = (f'ap_fixed<{acc}>' if (int(split[0])<18) else 'ap_fixed<18,8>')
        # config['LayerName']['output']['Precision']['result'] = (f'ap_fixed<{acc}>' if (int(split[0])<18) else 'ap_fixed<18,8>')
        # config['LayerName']['softmax']['Precision']['result'] = (f'ap_fixed<{acc}>' if (int(split[0])<18) else 'ap_fixed<18,8>')
        hls_model = hls4ml.converters.convert_from_keras_model(model, backend='Vivado', hls_config=config,
                                                                output_dir=f'/home/caleb/sweeps/{sweepname}',
                                                                # part='xcu280-fsvh2892-2L-e')
                                                                part='xcvu13p-fhga2104-3-e',
                                                                project_name='p')
        
        # for layer in config["LayerName"]:
        #     # for precs in config["LayerName"][layer]["Precision"]:
        #         config["LayerName"][layer]["Precision"]=config['Model']['Precision']
        pprint(config)
        if (len(argv)>1):
            return 0
        hls_model.build(csim=False, synth=True, vsynth=False, export=False)
    if (not os.path.isfile(os.path.join("../reports", f"{sweepname}_util.rpt"))):
        os.system(f"vivado -mode batch -source hls_script.tcl -tclargs {sweepname}")
    data = extract_data(os.path.join("../reports", f"{sweepname}_util.rpt"), features)
    timing = extract_time(os.path.join("../reports", f"{sweepname}_timing.rpt"))
    accuracy = test_accuracy(sweepname, split)
    lat_file = f"../results/hls_latency.csv"
    patt = r"[0-9]{1,2}"
    os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {split[0]-split[1]}/g; s/WIDTH = {patt}/WIDTH = {split[0]}/g;" hls_lat_tb.sv')
    os.system(f"bash get_latency.sh /home/caleb/sweeps/{sweepname}/p_prj/solution1/impl/verilog")
    f = open(lat_file)
    new_lat = f.readlines()[-1]
    if (new_lat=="\n"):
        new_lat = f.readlines()[-2]
    f.close()
    cycle_latency = new_lat.split(", ")[1]
    total_latency = int(cycle_latency)*(5-float(timing))
    csv_name = f"../results/util_{name}.csv"
    if (not os.path.isfile(csv_name)):
        with open(csv_name, "x") as f:
            f.write("Bits, Slice LUTs, Slice Registers, Block RAM Tile, DSPs, Bonded IOB, Timing, Accuracy, Cycle Latency, Total Latency\n")
    with open(csv_name, "a") as f:
        f.write(f"{split[0]}")
        for dat in data:
            f.write(f", {dat}")
        f.write(f", {timing}")
        f.write(f", {accuracy}")
        f.write(f", {cycle_latency}")
        f.write(f", {total_latency}\n")
    Report = f"Gen {sweepname} finished. Results:\n"
    for i in range(len(features)):
        Report+= f"{features[i]}: {data[i]}\n"
    Report+=f"Timing: {5-float(timing)}\n"
    Report+=f"Cycle Latency: {cycle_latency}\n"
    Report+=f"Total Latency: {total_latency}\n"
    os.system(f'printf "{Report}" | mail -s "HLS Completion" ceravcal@uw.edu')
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
        m = re.search(feature + r"\s*\|.*?\|.*?\|.*?\|.*?(\d+\.\d+)", text, re.IGNORECASE)
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
            num=num*(2**(int(accuracy[0])-int(accuracy[1])))
            f.write(f"{dec_to_bin(num, accuracy[0])}\n")
def test_accuracy(model, acc):
    patt = r"[0-9]{1,2}"
    gen_test(acc)
    os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" hls_tb.sv')
    os.system(f"bash sim_hls.sh {model}")
    return keras_test(model)
def test_latency(model, acc):
    patt = r"[0-9]{1,2}"
    os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" hls_lat_tb.sv')
    os.system(f"bash get_latency.sh {model}")
def keras_test(model):
    res =  np.loadtxt(f"{model}/hls_results.csv", delimiter=",")
    res = res[1:]
    acc= accuracy_score((y_test[0:len(res)]).argmax(axis=1), res.argmax(axis=1))
    return acc

    #for i in range(len(scores)):
        #print(f"\n{models[i]} accuracy is: {scores[i]} \n")
#runvars = [2,3,4,5,6,7,8,9,10,12,13]
# runvars = [12,13]
# for i in runvars:
#     #((3*i-2,i))
#     #print(f"{3*i-2},{i}".split(","))
#     HLS4ML_gen(f"{3*i-2},{i}")

    #acc_in = f"{3*i-2},6" if i > 6 else f"{3*i-2},{i}"
    #HLS4ML_gen(acc_in)

    #acc.append(({3*i-2},{i}))
# HLS4ML_gen("31,11")
# args = ""
accs = []
for i in range(2,11):
    if not i==11:
        acc = (3*i-2,i)
        #print((3*i-2,i))
        # HLS4ML_gen(f"{acc[0]},{acc[1]}")
        arg = f"/home/caleb/sweeps/hls_please_{acc[0]}_{acc[1]}/p_prj/solution1/impl/verilog"
        os.system(f"rm {arg}/*.csv")
        accs.append(test_accuracy(arg, acc))
cs = pd.read_csv("../results/util_hls_please.csv", delimiter = ",")
cs["Accuracy"] = accs
cs.to_csv("../results/util_hls_please.csv")
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
# for i in range(2,13):
#     test_latency(f"/home/caleb/sweeps/hls_argmax_{3*i-2}_{i}/p_prj/solution1/impl/verilog",(3*i-2,i))

