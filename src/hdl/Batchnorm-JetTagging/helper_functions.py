import numpy as np
import pandas as pd
import re
import os
from sklearn.metrics import accuracy_score
def dec_to_bin(number : int | float, bits=-1):
    """
    Converts a decimal number to a str binary representation
    
    :param number: Number to convert into binary
    :type number: int | float
    :param bits: Bitwidth of output number. If negative, uses the minimum amount
    """
    # Determines if a number is negative
    neg=False
    if (number<0):
        number*=-1
        number-=1
        neg=True
    
    # Rounds number to nearest int
    number=int(np.round(number, 0))
    out=""

    # Return maximum positive or negative number if the input cannot be represented by the bitwidth
    if (bits>0 and number>2**(bits-1)):
        return "0" + "1"*(bits-1)
    elif (bits>0 and number<(-1)*2**(bits-1)):
        return "1" + "0"*(bits-1)
    
    # Do typical conversion of decimal to binary number
    while (number>0):
        res = number%2
        if (neg):
            res= 0 if (res==1) else 1
        out=f"{res}{out}"
        if (len(out)==(bits-1)):
            break
        number=int(number/2)
        
    # Add signed bit
    if (neg):
        out=f"{1}{out}"
    else: out=f"{0}{out}"

    # If the number was 0
    if (len(out)==0):
        out="0"

    # Sign extension
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

    # Pattern. ap_clk is the name of the clock
    pat = r"ap_clk\s*(-?\d+\.\d+)" 
    m = re.search(pat, text, re.IGNORECASE|re.DOTALL)
    if m:
        return m.group(1)
def gen_test(accuracy : tuple[int,int], test):
    test_l = test.flatten()
    with open("X_test_gen.txt", "w") as f:
        for num in test_l:
            num=num*(2**(int(accuracy[0])-int(accuracy[1])))
            f.write(f"{dec_to_bin(num, accuracy[0])}\n")
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

def gen_weight_txt(accuracy, weights_file, biases_file, output):
    """
    Generate weight and bias packages from text files
    :param accuracy: Accuracy for packages. Formatted (width, integers)
    :type accuracy: (int, int)

    """
    # The start of each number
    head = f"{accuracy[0]}'b"

    Nfrac = accuracy[0] - accuracy[1]

    # The amount of weights for each layer
    layers = [64,32,32,5]
    for ind in range(len(layers)):
        layer = layers[ind]
        # The folder structure uses 1 based indexing
        ind = ind+1

        # Where the source weights and biases are
        # weights_file = f"../weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_weights.txt"
        # biases_file = f"../weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_biases.txt"

        # Converting the files to arrays
        weight = file_to_array(weights_file, layer)
        bias = file_to_array(biases_file, layer)

        # Output file name
        filename = f"../weights/dense_{ind}_weights_biases_pkgs/dense_{ind}_{accuracy[0]}_{accuracy[1]}.sv"
        if (not os.path.isfile(filename)):
            with open(filename, "w") as f:
                # Writes the header to the file
                f.write(f"//Width: {accuracy[0]}\n//Int: {accuracy[1]}\n")
                f.write(f"package dense_{ind}_{accuracy[0]}_{accuracy[1]};\n\n")
                f.write(f"localparam logic signed [{accuracy[0]-1}:0] weights [{len(weight)}][{len(weight[0])}] = '" + "{\n")

                # Writes the main body of the function
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

def gen_weight(accuracy, model, output):
    """
    Generate weight and bias packages from keras model
    :param accuracy: Accuracy for packages. Formatted (width, integers)
    :type accuracy: (int, int)

    """
    # The start of each number
    head = f"{accuracy[0]}'b"

    Nfrac = accuracy[0] - accuracy[1]
    # The amount of weights for each layer
    current = 0
    for layer in model.layers:
        contents = layer.get_weights()
        if (contents!=None):
            # contents = np.concatenate((contents, np.zeros(len(contents[1]))), axis=1)
            weights = []
            biases = []
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
                # Converting the files to arrays
                weight = weights[i]
                bias = biases[i]

                # Output file name
                filename = f"{name}_pkg_{accuracy[0]}_{accuracy[1]}_{i}.sv"
                # if (not os.path.isfile(filename)):
                with open(filename, "w") as f:
                    # Writes the header to the file
                    f.write(f"//Width: {accuracy[0]}\n//Int: {accuracy[1]}\n")
                    f.write(f"package {name}_{i}_{accuracy[0]}_{accuracy[1]};\n\n")
                    f.write(f"localparam logic signed [{accuracy[0]-1}:0] weights [{len(weight)}][{len(weight[0])}] = '" + "{\n")

                    # Writes the main body of the function
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