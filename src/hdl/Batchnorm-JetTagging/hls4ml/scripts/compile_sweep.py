#! /home/caleb/miniconda3/envs/hls4ml-env/bin/python
import hls4ml
import os
import numpy as np

from pprint import pprint
from sys import argv, path
import yaml
path.insert(1,"/home/caleb/HLS4ML_VS_MANUAL/src/hdl/Batchnorm-JetTagging/")
from helper_functions import *
# import subprocess
from tensorflow.keras.models import load_model # type: ignore

model = load_model('model.h5', compile=False)
features = ["LUTs", "Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]
acc = []
for i in range(2,14):
    acc.append(({3*i-2},{i}))
y_test = np.load('y_test.npy')
# HLS4ML Model gen
test = np.load("X_test.npy")
#os.environ['PATH'] = r"/tools/Xilinx/2025.1/Vivado/bin:" + os.environ['PATH']

def HLS4ML_gen(acc : tuple[int, int]):
    """
    Function that runs entire synthesis, testing, and reporting of 
    HLS4ML models. Takes in an accuracy in the format (int, )
    To modify other parameters, modify it inside of the function
    
    :param acc: 
    """
    #try:
    name = f"hls_rndsat"
    sweepname = name + f"_{acc[0]}_{acc[1]}"
    if (not os.path.isdir(f'/home/caleb/sweeps/{sweepname}')):
        config = hls4ml.utils.config_from_keras_model(model, granularity='model')
        # f = open("hls_config.yml", "r") #Use yml file for finer tuning
        # config = yaml.safe_load(f)['HLSConfig']
        # f.close()
        config['Model']['Precision']['default'] = f'ap_fixed<{acc[0]},{acc[1]}, AP_RND, AP_SAT>'
        #config['LayerName']['fc1']['Precision']['weight'] = 'ap_fixed<8,2>'
        #config['LayerName']['output']['Precision']['result'] = 'fixed<16,6,RND,SAT>'
        # config['Model']['Strategy'] = 'Latency'
        #config['LayerName']['softmax']['exp_table_t'] = 'ap_fixed<18,8>'
        # config['LayerName']['softmax']['implementation'] = 'stable'
        # if (int(acc[0])>18):
        # config['LayerName']['softmax']['table_t'] = 'ap_ufixed<18,8>'
        # config['LayerName']['softmax']['reuse_factor'] = 5
        # config['LayerName']['output']['Precision']['result'] = 'ap_fixed<28,10>'
        # config['LayerName']['softmax']['Precision']['result'] = 'ap_fixed<18,8>'
        # config['LayerName']['softmax']['exp_table_t'] = (f'ap_fixed<{acc}>' if (int(acc[0])<18) else 'ap_fixed<18,8>')
        # config['LayerName']['output']['Precision']['result'] = (f'ap_fixed<{acc}>' if (int(acc[0])<18) else 'ap_fixed<18,8>')
        # config['LayerName']['softmax']['Precision']['result'] = (f'ap_fixed<{acc}>' if (int(acc[0])<18) else 'ap_fixed<18,8>')
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
    
    #If the report has not previously been generated, run vivado synthesis
    if (not os.path.isfile(os.path.join("../reports", f"{sweepname}_util.rpt"))):
        os.system(f"vivado -mode batch -source hls_script.tcl -tclargs {sweepname}")

    #Grab data from reports
    data = extract_data(os.path.join("../reports", f"{sweepname}_util.rpt"), features)
    timing = extract_time(os.path.join("../reports", f"{sweepname}_timing.rpt"))

    #Run accuracy testing
    accuracy = test_accuracy(sweepname, acc)

    #latency file that the testbench writes new latency values into
    lat_file = f"../results/hls_latency.csv"
    patt = r"[0-9]{1,2}"

    #Update testbench with new width values
    os.system(f'sed -i -E "s/NFRAC = {patt}/NFRAC = {acc[0]-acc[1]}/g; s/WIDTH = {patt}/WIDTH = {acc[0]}/g;" hls_lat_tb.sv')

    #Run shell script for getting latency, sending the updated testbench to the proper folder and testing it
    os.system(f"bash get_latency.sh /home/caleb/sweeps/{sweepname}/p_prj/solution1/impl/verilog")

    #Grab newest cycle latency value
    f = open(lat_file)
    new_lat = f.readlines()[-1]
    if (new_lat=="\n"):
        new_lat = f.readlines()[-2]
    f.close()
    cycle_latency = new_lat.split(", ")[1]

    #Calculate total latency
    total_latency = int(cycle_latency)*(5-float(timing))

    #Check to see if the csv file exists and create it if it doesn't
    csv_name = f"../results/util_{name}.csv"
    if (not os.path.isfile(csv_name)):
        with open(csv_name, "x") as f:
            f.write("Bits, Slice LUTs, Slice Registers, Block RAM Tile, DSPs, Bonded IOB, Timing, Accuracy, Cycle Latency, Total Latency\n")

    #Open the csv file and add new data
    with open(csv_name, "a") as f:
        f.write(f"{acc[0]}")
        for dat in data:
            f.write(f", {dat}")
        f.write(f", {timing}")
        f.write(f", {accuracy}")
        f.write(f", {cycle_latency}")
        f.write(f", {total_latency}\n")

    #Create format for update email
    Report = f"Gen {sweepname} finished. Results:\n"
    for i in range(len(features)):
        Report+= f"{features[i]}: {data[i]}\n"
    Report+=f"Timing: {5-float(timing)}\n"
    Report+=f"Cycle Latency: {cycle_latency}\n"
    Report+=f"Total Latency: {total_latency}\n"

    #Send report to email
    os.system(f'printf "{Report}" | mail -s "HLS Completion" ceravcal@uw.edu')

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
def keras_test(model, y_test):
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
#     #print(f"{3*i-2},{i}".acc(","))
#     HLS4ML_gen(f"{3*i-2},{i}")

    #acc_in = f"{3*i-2},6" if i > 6 else f"{3*i-2},{i}"
    #HLS4ML_gen(acc_in)

    #acc.append(({3*i-2},{i}))
# HLS4ML_gen("31,11")
# args = ""
# f = open("hls_config.yml", "r") #Use yml file for finer tuning
# config = yaml.safe_load(f)['HLSConfig']
# f.close()
# config = hls4ml.utils.config_from_keras_model(model, granularity='model')
# for i in range(2,14):
#     acc = (3*i-2,i)
#     config['Model']['Precision']['default'] = f'ap_fixed<{acc[0]},{acc[1]}, AP_RND, AP_SAT>'
#     hls_model = hls4ml.converters.convert_from_keras_model(model, backend='Vivado', hls_config=config,
#                                                             output_dir=f'/home/caleb/sweeps/csim',
#                                                             # part='xcu280-fsvh2892-2L-e')
#                                                             part='xcvu13p-fhga2104-3-e',
#                                                             project_name='p')
#     hls_model.compile()

#     res=hls_model.predict(np.ascontiguousarray(test))
#     score = accuracy_score((y_test[0:len(res)]).argmax(axis=1), res.argmax(axis=1))
#     print(acc, score)
# accs = []
for i in range(2,10):
    # if not i==11:
        acc = (3*i-2,i)
        #print((3*i-2,i))
        HLS4ML_gen((acc[0],acc[1]))
        # arg = f"/home/caleb/sweeps/hls_please_{acc[0]}_{acc[1]}/p_prj/solution1/impl/verilog"
        # os.system(f"rm {arg}/*.csv")
        # accr = test_accuracy(arg, acc)
        # os.system(f'printf "Acc fin at {acc[0]},{acc[1]} with {accr}"')
# cs = pd.read_csv("../results/util_hls_please.csv", delimiter = ",")
# cs["Accuracy"] = accsS
# cs.to_csv("../results/util_hls_please.csv")
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

