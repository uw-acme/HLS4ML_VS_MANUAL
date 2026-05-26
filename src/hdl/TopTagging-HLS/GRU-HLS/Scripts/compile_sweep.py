#! /home/caleb/miniconda3/envs/hls4ml-env/bin/python
import hls4ml
import os
import numpy as np
import re
from pprint import pprint
from sys import argv, path
import yaml
from helper_functions import *
# import subprocess
from tensorflow.keras.models import load_model # type: ignore

model = load_model('../../model_gru.h5', compile=False)
features = ["LUTs", "Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]
# acc = []
# for i in range(2,14):
#     acc.append(({3*i-2},{i}))
acc = (16, 6)
y_test = np.load('../../y_test.npy')
# HLS4ML Model gen
test = np.load("../../x_test.npy")
#os.environ['PATH'] = r"/tools/Xilinx/2025.1/Vivado/bin:" + os.environ['PATH']

TESTBENCH_PORTS = {
    "layer1_input_V_ap_vld": "input_valid",
    "layer1_input_V": "input_data",
    "layer5_out_0_V_ap_vld": "output_valid",
    "layer5_out_0_V": "output_data",
    "layer6_out_0_V_ap_vld": "output_valid",
    "layer6_out_0_V": "output_data",
}

def extract_hls_ports(verilog_dir: str):
    """
    Detect the generated hls4ml top-level data/valid port names.
    The GRU model's layer names differ from the old LSTM template, and hls4ml
    can also vary output names by version, so derive them from myproject.v.
    """
    myproject = os.path.join(verilog_dir, "myproject.v")
    if not os.path.isfile(myproject):
        raise FileNotFoundError(f"Could not find generated HLS Verilog: {myproject}")

    directions = {}
    with open(myproject, "r") as f:
        for line in f:
            match = re.match(r"\s*(input|output)\s+(?:wire\s+|reg\s+)?(?:\[[^\]]+\]\s+)?([^;]+);", line)
            if not match:
                continue
            direction = match.group(1)
            for port in match.group(2).split(","):
                port = port.strip()
                if port:
                    directions[port] = direction

    def non_control(port):
        return not port.startswith("ap_") and not port.endswith("_ap_vld") and not port.endswith("_ap_ack")

    input_data_ports = [p for p, d in directions.items() if d == "input" and non_control(p)]
    output_data_ports = [p for p, d in directions.items() if d == "output" and non_control(p)]
    input_valid_ports = [p for p, d in directions.items() if d == "input" and p.endswith("_ap_vld")]
    output_valid_ports = [p for p, d in directions.items() if d == "output" and p.endswith("_ap_vld")]

    if not input_data_ports or not output_data_ports or not input_valid_ports or not output_valid_ports:
        raise ValueError(f"Could not detect HLS data/valid ports from {myproject}")

    input_data = input_data_ports[0]
    output_data = output_data_ports[0]
    input_valid = input_data + "_ap_vld" if input_data + "_ap_vld" in input_valid_ports else input_valid_ports[0]
    output_valid = output_data + "_ap_vld" if output_data + "_ap_vld" in output_valid_ports else output_valid_ports[0]

    return {
        "input_data": input_data,
        "input_valid": input_valid,
        "output_data": output_data,
        "output_valid": output_valid,
    }

def render_testbench(template_name: str, verilog_dir: str, acc: tuple[int, int], port_names=None):
    with open(template_name, "r") as f:
        text = f.read()

    text = re.sub(r"((?:parameter|localparam)\s+WIDTH\s*=\s*)[0-9]+", rf"\g<1>{acc[0]}", text)
    text = re.sub(r"((?:parameter|localparam)\s+NINT\s*=\s*)[0-9]+", rf"\g<1>{acc[1]}", text)

    if port_names is not None:
        replacements = {old: port_names[key] for old, key in TESTBENCH_PORTS.items()}
        for old, new in sorted(replacements.items(), key=lambda item: len(item[0]), reverse=True):
            text = text.replace(old, new)

    with open(os.path.join(verilog_dir, template_name), "w") as f:
        f.write(text)

def ensure_output_dirs():
    for folder in ("../Sweeps", "../reports", "../results"):
        os.makedirs(folder, exist_ok=True)

def HLS4ML_gen(acc : tuple[int, int]):
    """
    Function that runs entire synthesis, testing, and reporting of 
    HLS4ML models. Takes in an accuracy in the format (int, )
    To modify other parameters, modify it inside of the function
    
    :param acc: 
    """
    #try:
    name = f"hls_toptag_gru"
    sweepname = name + f"_{acc[0]}_{acc[1]}"
    fullsweepname = f"../Sweeps/{sweepname}"
    fullverilogpath = fullsweepname+"/myproject_prj/solution1/impl/verilog"
    ensure_output_dirs()
    
    if (not os.path.isdir(fullsweepname)):
        config = hls4ml.utils.config_from_keras_model(model, granularity='model')
        # f = open("hls_config.yml", "r") #Use yml file for finer tuning
        # config = yaml.safe_load(f)['HLSConfig']
        # f.close()
        config['Model']['Precision']['default'] = f'ap_fixed<{acc[0]},{acc[1]}>'
        # config['Model']['Precision']['default'] = f'ap_fixed<{acc[0]},{acc[1]}, AP_RND, AP_SAT>'
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
                                                                output_dir=fullsweepname,
                                                                # part='xcu280-fsvh2892-2L-e')
                                                                part='xcvu13p-fhga2104-3-e'
                                                                )
                                                                # ,project_name='p')
        
        # for layer in config["LayerName"]:
        #     # for precs in config["LayerName"][layer]["Precision"]:
        #         config["LayerName"][layer]["Precision"]=config['Model']['Precision']
        pprint(config)
        if (len(argv)>1):
            return 0
        hls_model.build(csim=False, synth=True, vsynth=False, export=False)

    port_names = extract_hls_ports(fullverilogpath)
    render_testbench("hls_tb.sv", fullverilogpath, acc, port_names)

    #If the report has not previously been generated, run vivado synthesis
    if (not os.path.isfile(os.path.join("../reports", f"{sweepname}_util.rpt"))):
        os.system(f"vivado -mode batch -source hls_script.tcl -tclargs {sweepname}")

    #Grab data from reports
    data = extract_data(os.path.join("../reports", f"{sweepname}_util.rpt"), features)
    timing = extract_time(os.path.join("../reports", f"{sweepname}_timing.rpt"))
    
    #Run accuracy testing
    # fullverilogpath = os.path.join(fullsweepname, "/myproject_prj/solution1/impl/verilog")
    
    print(fullsweepname)
    print(fullverilogpath)
    if (not os.path.isfile(fullverilogpath+"/hls_results.csv")):
        accuracy = test_accuracy(fullverilogpath, acc, port_names)
    else:
        accuracy = keras_test(fullverilogpath, y_test)
    # cycle_latency = -1
    # total_latency = -1
    #latency file that the testbench writes new latency values into
    lat_file = f"../results/hls_latency.csv"

    render_testbench("hls_lat_tb.sv", fullverilogpath, acc, port_names)

    #Run shell script for getting latency, sending the updated testbench to the proper folder and testing it
    os.system(f"bash get_latency.sh {fullverilogpath}")

    # Grab newest cycle latency value
    with open(lat_file, "r") as f:
        lat_lines = [line.strip() for line in f.readlines() if line.strip()]
    new_lat = lat_lines[-1]
    initiation_interval = new_lat.split(", ")[1]
    cycle_latency = new_lat.split(", ")[2]
    clock_period = (10-float(timing))
    #Calculate total latency
    total_latency = int(cycle_latency)*clock_period
    total_initiation_interval = int(initiation_interval)*clock_period
    #Check to see if the csv file exists and create it if it doesn't
    csv_name = f"../results/util_{name}.csv"
    if (not os.path.isfile(csv_name)):
        with open(csv_name, "x") as f:
            f.write("Bits, Slice LUTs, Slice Registers, Block RAM Tile, DSPs, Bonded IOB, Timing, Accuracy, II, Total II, Cycle Latency, Total Latency\n")

    #Open the csv file and add new data
    with open(csv_name, "a") as f:
        f.write(f"{acc[0]}")
        for dat in data:
            f.write(f", {dat}")
        f.write(f", {clock_period}")
        f.write(f", {accuracy}")
        f.write(f", {initiation_interval}")
        f.write(f", {total_initiation_interval}")
        f.write(f", {cycle_latency}")
        f.write(f", {total_latency}\n")

    #Create format for update email
    Report = f"Gen {sweepname} finished. Results:\n"
    for i in range(len(features)):
        Report+= f"{features[i]}: {data[i]}\n"
    Report+=f"Timing: {clock_period}\n"
    Report+=f"II: {initiation_interval}\n"
    Report+=f"Total II: {total_initiation_interval}\n"
    Report+=f"Cycle Latency: {cycle_latency}\n"
    Report+=f"Total Latency: {total_latency}\n"
    Report+=f"Accuracy: {accuracy}\n"

    #Send report to email
    os.system(f'printf "{Report}" | mail -s "HLS Completion" ltxie27@uw.edu')

def test_accuracy(model, acc, port_names=None):
    gen_test(acc, test)
    if port_names is None:
        port_names = extract_hls_ports(model)
    render_testbench("hls_tb.sv", model, acc, port_names)
    os.system(f"bash sim_hls.sh {model}")
    return keras_test(model, y_test)
def test_latency(model, acc):
    port_names = extract_hls_ports(model)
    render_testbench("hls_lat_tb.sv", model, acc, port_names)
    os.system(f"bash get_latency.sh {model}")
def keras_test(model, y_test):
    res =  np.loadtxt(f"{model}/hls_results.csv", delimiter=",")
    acc= accuracy_score((y_test[0:len(res)]), np.round(res))
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
# for i in range(2,13):
#     # if not i==11:
#         acc = (3*i-2,i)
#         #print((3*i-2,i))
#         HLS4ML_gen((acc[0],acc[1]))
#         # arg = f"/home/caleb/sweeps/hls_please_{acc[0]}_{acc[1]}/p_prj/solution1/impl/verilog"
#         # os.system(f"rm {arg}/*.csv")
#         # accr = test_accuracy(arg, acc)
#         # os.system(f'printf "Acc fin at {acc[0]},{acc[1]} with {accr}"')
HLS4ML_gen(acc)
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
