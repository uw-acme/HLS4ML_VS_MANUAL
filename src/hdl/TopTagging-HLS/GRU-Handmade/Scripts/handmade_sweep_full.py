
acc = []
import os
import re
import numpy as np
from tensorflow.keras.models import load_model # type: ignore
import sys
import pandas as pd
from sklearn.metrics import accuracy_score

y_test = np.load('../../y_test.npy')
model = load_model("../../model_gru.h5")
features = ["LUTs", "Registers", "Block RAM Tile", "DSPs", "Bonded IOB"]

weights_dir = "../weights_n_tables"
results_folder = "../Results"
testing_folder = "../testing_data"
reports_folder = "../reports"

# Helper function for per-bitwidth defines
def handmade_defs(acc):
    w, i = acc
    return (
        f" RESET_GATE_PKG=reset_gate_{w}_{i}"
        f" UPDATE_GATE_PKG=update_gate_{w}_{i}"
        f" CANDIDATE_W_PKG=candidate_gate_W_{w}_{i}"
        f" CANDIDATE_U_PKG=candidate_gate_U_{w}_{i}"
        f" DENSE1_WEIGHTS=layer3_0_{w}_{i}"
        f" DENSE2_WEIGHTS=output_sigmoid_0_{w}_{i} "
    )

def dec_to_bin(number : int | float, bits=-1):
    """
    Converts a decimal number to a str binary representation

    :param number: Number to convert into binary
    :type number: int | float
    :param bits: Bitwidth of output number. If negative, uses the minimum amount
    """
    neg=False
    if (number<0):
        number*=-1
        number-=1
        neg=True

    number=int(np.round(number, 0))
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

def extract_data(file : str, features : list[str]):
    """
    Extracts the feature from a file using Vivado formatting

    :param file: Path to vivado file to extract data from
    :param features: Names of features to gather data for. Case insensitive
    """
    with open(file) as f:
        text = f.read()
    out = []
    for feature in features:
        m = re.search(feature + r"\s*\|.*?\|.*?\|.*?\|.*?(\d+\.\d+)", text, re.IGNORECASE)
        if m:
            out.append(m.group(1))
    return out

def extract_time(file : str):
    """
    Extract timing data from file

    :param file:
    """
    with open(file) as f:
        text = f.read()

    pat = r"ap_clk\s*(-?\d+\.\d+)"
    m = re.search(pat, text, re.IGNORECASE|re.DOTALL)
    if m:
        return m.group(1)

def file_to_array(file, length):
    f = open(file, 'r')
    buffer = np.zeros(length)
    i=0
    arr = []
    num = f.readline()
    while len(num):
         buffer[i]=float(num[:-1])
         i+=1
         if (i==length):
            i=0
            if (len(arr)):
                arr = np.vstack((arr, np.array(buffer)))
            else:
                arr = np.array(buffer)
         num = f.readline()
    f.close()
    return arr

def dump_weights(model, output):
    for layer in model.layers:
        np.savetxt(f"{layer.name}_weights.txt", layer.get_weights()[0])
        np.savetxt(f"{layer.name}_biases.txt", layer.get_weights()[1])

def gen_weight(accuracy, model, target_dir="./"):
    """
    Generate weight and bias packages from keras model
    :param accuracy: Accuracy for packages. Formatted (width, integers)
    :type accuracy: (int, int)

    """
    head = f"{accuracy[0]}'b"

    Nfrac = accuracy[0] - accuracy[1]
    current = 0
    for layer in model.layers:
        contents = layer.get_weights()
        if (contents!=None):
            weights = []
            biases = []
            try:
                for cont in contents:
                    try:
                        len(cont[0])
                        weights.append(cont)
                    except:
                        biases.append(cont)
                if (len(weights)!=len(biases)):
                    print(len(weights), len(biases))
                    biases.append(np.zeros_like(biases[0]))
                for i in range(len(weights)):
                    name = layer.name
                    weight = weights[i]
                    bias = biases[i]

                    filename = os.path.join(target_dir, f"{name}_pkg_{accuracy[0]}_{accuracy[1]}_{i}.sv")
                    with open(filename, "w") as f:
                        f.write(f"//Width: {accuracy[0]}\n//Int: {accuracy[1]}\n")
                        f.write(f"package {name}_{i}_{accuracy[0]}_{accuracy[1]};\n\n")
                        f.write(f"localparam logic signed [{accuracy[0]-1}:0] weights [{len(weight)}][{len(weight[0])}] = '" + "{\n")

                        for i in range(len(weight)):
                            f.write("{")
                            num = dec_to_bin(weight[i][0]*(2**(Nfrac)), accuracy[0])
                            f.write(f"{head}{num}")
                            for j in range(1, len(weight[0])):
                                num = dec_to_bin(weight[i][j]*(2**(Nfrac)), accuracy[0])
                                f.write(f", {head}{num}")
                            if (i!=len(weight)-1):
                                f.write("},\n")
                        f.write("}\n};\n")
                        f.write(f"localparam logic signed [{accuracy[0]-1}:0] bias [{len(weight[0])}] = '"+"{\n")
                        for i in range(0, len(bias)):
                            num = dec_to_bin(bias[i]*(2**Nfrac), accuracy[0])
                            f.write(f"{head}{num}")
                            f.write(",\n" if i!=(len(bias)-1) else "\n};\nendpackage")
            except:
                pass

def gen_gru_weight(accuracy, model, target_dir="./"):
    """
    Generate GRU gate weight packages from keras model.
    Matches the GRU package math in gru_weights.ipynb.
    """
    width, nint = accuracy
    nfrac = width - nint
    head = f"{width}'b"

    def conv_to_str(num):
        return dec_to_bin(number=float(num) * (2**nfrac), bits=width)

    def write_pkg(package_name, weight, bias):
        weight = np.asarray(weight)
        bias = np.asarray(bias)
        if weight.ndim != 2:
            raise ValueError(f"{package_name}: expected 2D weights, got {weight.shape}")
        if bias.ndim != 1:
            raise ValueError(f"{package_name}: expected 1D bias, got {bias.shape}")
        if weight.shape[1] != bias.shape[0]:
            raise ValueError(
                f"{package_name}: weights output dim {weight.shape[1]} "
                f"does not match bias dim {bias.shape[0]}"
            )

        rows, cols = weight.shape
        filename = os.path.join(target_dir, f"{package_name}.sv")
        if os.path.isfile(filename):
            return
        with open(filename, "w") as f:
            f.write(f"// Width: {width}\n// NFRAC: {nfrac}\n")
            f.write(f"package {package_name};\n\n")
            f.write(
                f"localparam logic signed [{width-1}:0] weights "
                f"[{rows}][{cols}] = '" + "{\n"
            )
            for row in range(rows):
                f.write("{")
                for col in range(cols):
                    f.write(f"{head}{conv_to_str(weight[row][col])}")
                    f.write(", " if col != cols - 1 else "}")
                f.write(",\n" if row != rows - 1 else "\n")
            f.write("};\n\n")
            f.write(f"localparam logic signed [{width-1}:0] bias [{cols}] = '" + "{\n")
            for idx in range(cols):
                f.write(f"{head}{conv_to_str(bias[idx])}")
                f.write(",\n" if idx != cols - 1 else "\n")
            f.write("};\nendpackage")

    for layer in model.layers:
        if layer.__class__.__name__ != 'GRU':
            continue
        contents = layer.get_weights()
        if len(contents) != 3:
            raise ValueError(f"{layer.name}: expected GRU weights [W, U, B], got {len(contents)} tensors")
        W, U, B = contents
        units = layer.units
        if B.shape != (2, 3 * units):
            raise ValueError(
                f"{layer.name}: expected reset_after=True GRU bias shape "
                f"(2, {3 * units}), got {B.shape}"
            )

        # Keras GRU gate order is update, reset, candidate.
        W_z, W_r, W_h = W[:, :units], W[:, units:2*units], W[:, 2*units:]
        U_z, U_r, U_h = U[:, :units], U[:, units:2*units], U[:, 2*units:]
        b_z = np.sum(B[:, :units], axis=0)
        b_r = np.sum(B[:, units:2*units], axis=0)
        b_h_W = B[0, 2*units:]
        b_h_U = B[1, 2*units:]

        gates = [
            (f"reset_gate_{width}_{nint}", np.concatenate((W_r, U_r), axis=0), b_r),
            (f"update_gate_{width}_{nint}", np.concatenate((W_z, U_z), axis=0), b_z),
            (f"candidate_gate_W_{width}_{nint}", W_h, b_h_W),
            (f"candidate_gate_U_{width}_{nint}", U_h, b_h_U),
        ]

        for package_name, weight, bias in gates:
            write_pkg(package_name, weight, bias)
        return

    raise ValueError("No GRU layer found in model")

def gen_test(accuracy):
    test = np.load("../../x_test.npy", allow_pickle=True)
    test = test.flatten()
    filename = f"../testing_data/X_test_{accuracy[0]}_{accuracy[1]}.txt"
    if (not os.path.isfile(filename)):
        with open(filename, "w") as f:
            for num in test:
                if (isinstance(num, int)):
                    num=num*(2**(accuracy[0]-accuracy[1]))
                    print(num)
                    f.write(f"{dec_to_bin(num,accuracy[0])}\n")
                else:
                    for num2 in num.flatten():
                        num2=num2*(2**(accuracy[0]-accuracy[1]))
                        f.write(f"{dec_to_bin(num2,accuracy[0])}\n")


def handmade_gen(acc, name, params, defs):
    """
    Runs a test with precision (WIDTH, NINT)
    """
    def add_to(name, feat):
        newline = f"\n{name}"
        while len(newline)<longest_feat:
            newline+=" "
        newline+=f": {feat}"
        return newline
    gen_weight(acc, model, weights_dir)
    gen_gru_weight(acc, model, weights_dir)
    params += f' NINT={acc[1]} WIDTH={acc[0]}'
    defs += handmade_defs(acc)
    params = "{" + params + "}"
    defs = "{" + defs + "}"
    if (not os.path.isfile(f"{reports_folder}/{acc[0]}_{acc[1]}_{name}_util.rpt")):
        ret = os.system(f'vivado -mode batch -source Script.tcl -tclargs {acc[0]}_{acc[1]}_{name} "{defs}" "{params}"')
        if ret != 0:
            raise RuntimeError(f"Vivado exited with code {ret} for {acc[0]}_{acc[1]}_{name} — reports not generated")
    accuracy = accuracy_test(acc, y_test, name, defs, params)
    results = extract_data(f"{reports_folder}/{acc[0]}_{acc[1]}_{name}_util.rpt", features)
    time = extract_time(f"{reports_folder}/{acc[0]}_{acc[1]}_{name}_timing.rpt")
    clock_period = 10 - float(time)
    if len(results)!=len(features):
        raise ValueError("Report files not as expected")
    if (not os.path.isfile(f"{results_folder}/util_{name}.csv")):
        with open(f"{results_folder}/util_{name}.csv", "w") as f:
            f.write("Bits, Slice LUTs, Slice Registers, Block RAM Tile, DSPs, Bonded IOB, Timing, Accuracy\n")
    with open(f"{results_folder}/util_{name}.csv", "a") as f:
        f.write(f"{acc[0]}")
        for result in results:
            f.write(f", {result}")
        f.write(f", {clock_period}")
        f.write(f", {accuracy}")
        f.write("\n")
    output = "\n"
    lengths = [len(feat) for feat in features]
    longest_feat = np.max(lengths)

    for i in range(len(features)):
        output+=add_to(features[i], results[i])
    output+=add_to("Timing", clock_period)
    output+=add_to("Accuracy", accuracy)
    output+=add_to("Total Latency", 141*clock_period)

    os.system(f'printf "{name} finished at %b with parameters {acc} with results: {output}" "$(date)" | mail -s "Handmade made" chanssen@uw.edu')


def accuracy_test(acc : tuple[int,int], y_test, name : str, defs : str = None, params : str = None, email : bool = False):
    """
    Runs an accuracy test with bit precision (WIDTH, NINT)\n
    acc: tuple representing bit precision  (WIDTH, NINT)\n
    y_test: the correct values for the inputs
    """
    if (defs):
        defs = defs.replace("{", "")
        defs = defs.replace("}", "")
        defs = f" {defs}"
    else:
        defs = ""
        email=True
    if (not params or "WIDTH" not in params):
        if (not params):
            params = ""
        if ("WIDTH" not in params):
            params += f' NINT={acc[1]} WIDTH={acc[0]}'
    res_file = f"{name}_{acc[0]}_{acc[1]}_results.csv"

    defs += f' TESTFILE="{testing_folder}/X_test_{acc[0]}_{acc[1]}.txt"'
    defs += f' RESULTSFILE="{reports_folder}/{res_file}"'
    if "RESET_GATE_PKG" not in defs:
        defs += handmade_defs(acc)
    params = f" {params}"
    params = params.replace("{", "")
    params = params.replace("}", "")
    params = params.replace("  ", " ")
    defs = defs.replace("  ", " ")
    gen_test(acc)
    gen_weight(acc, model, weights_dir)
    gen_gru_weight(acc, model, weights_dir)
    result_path = f"{reports_folder}/{res_file}"
    if os.path.exists(result_path):
        os.remove(result_path)
    sim_status = os.system(f'bash sim.sh "{defs}" "{params}"')
    if sim_status != 0:
        raise RuntimeError(f"Simulation failed for {acc} with exit status {sim_status}")

    if not os.path.exists(result_path):
        raise RuntimeError(f"Simulation did not create results file {result_path}")
    res =  np.loadtxt(result_path, delimiter=",")
    res = res.reshape(-1, 1)
    sample_count = min(len(y_test), len(res))
    if sample_count == 0:
        raise RuntimeError(f"No comparable samples for {acc}: y_test={len(y_test)}, res={len(res)}")
    if len(res) != len(y_test):
        print(f"[WARN] {acc} produced {len(res)} results for {len(y_test)} labels; scoring first {sample_count} samples")
    acc_res= accuracy_score((y_test[0:sample_count]), np.round(res[0:sample_count]))

    csv_name = f"{results_folder}/{name}_acc.csv"
    if (not os.path.isfile(csv_name)):
        f = open(csv_name, "x")
        f.write("Width, Accuracy\n")
    else:
        f=open(csv_name, "a")
    f.write(f"\"{acc[0]}_{acc[1]}\", {acc_res}\n")
    f.close()
    if email:
        os.system(f'printf "Acc test for {name} finished at %b with parameters {acc} with results: {acc_res}" "$(date)" | mail -s "Handmade acc" chanssen@uw.edu')
    return acc_res

def lat_test(acc : tuple[int,int], name : str, defs : str = None, params : str = None, email : bool = False):
    """
    Runs a lat test with bit precision (WIDTH, NINT)\n
    acc: tuple representing bit precision  (WIDTH, NINT)\n
    """
    if (defs):
        defs = defs.replace("{", "")
        defs = defs.replace("}", "")
        defs = f" {defs}"
    else:
        defs = ""
        email=True
    if (not params or "WIDTH" not in params):
        if (not params):
            params = ""
        if ("WIDTH" not in params):
            params += f' NINT={acc[1]} WIDTH={acc[0]}'
    if "RESET_GATE_PKG" not in defs:
        defs += handmade_defs(acc)
    params = f" {params}"
    params = params.replace("{", "")
    params = params.replace("}", "")
    params = params.replace("  ", " ")
    defs = defs.replace("  ", " ")
    gen_weight(acc, model, "../weights_n_tables")
    gen_gru_weight(acc, model, "../weights_n_tables")
    os.system(f'bash lat.sh "{defs}" "{params}"')
    with open("../Results/hand_lat.csv", "r") as f:
        cont = f.readlines()
        newest = cont[-1]
        lat = newest.split(", ")[2]
        ii = newest.split(", ")[1]
    if email:
        os.system(f'printf "Lat test for {name} finished at %b with results: {ii}, {lat}" "$(date)" | mail -s "Handmade lat" chanssen@uw.edu')
    return ii, lat


def add_csv_column(file, column):
    f = open(file, "r")
    cont = f.readlines()
    f.close()
    f = open(file, "w")
    for i in range(len(cont)):
        if (i>len(column)):
            return
        f.write(cont[i]+", " + column[i])


patt = r"[0-9]{1,2}"
run_params = [1,3,7,9]
def bits_to_params(bits):
    val=(bits+2)/5.4
    SA=np.round(val,1)
    SA_INT = int(SA)
    SA_FRAC = int(np.round((SA-SA_INT)*10))
    return SA_INT+1, SA_FRAC
def adjust(bits):
    SA_INT, SA_FRAC = bits_to_params(bits)
    return SA_INT, SA_FRAC


name = "handmade_gru"
for i in range(9, 14):
    acc = (3*i-2, i)
    for attempt in range(2):
        try:
            SAD, SAFRAC = adjust(acc[0])
            params = ""
            defs = f' SA_DEPTH={SAD} SA_FRAC={SAFRAC}'
            handmade_gen(acc, name, params, defs)
            # lat = lat_test(acc, name, defs, params)
            break  # success — move to next bitwidth
        except Exception as e:
            print(f"[ATTEMPT {attempt+1} FAILED] {acc}: {e}")
            if attempt == 1:
                err_msg = str(e).replace("'", "")
                os.system(f'printf "[SKIP] {acc} failed twice: {err_msg}" | mail -s "Handmade Failure" chanssen@uw.edu')