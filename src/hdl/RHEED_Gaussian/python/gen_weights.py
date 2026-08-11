import numpy as np
import os

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


def gen_weight(accuracy, model, target_dir="./"):
    """
    Generate weight and bias packages from keras model
    :param accuracy: Accuracy for packages. Formatted (width, integers)
    :type accuracy: (int, int)

    """
    # The start of each number
    head = f"{accuracy[0]}'b"

    Nfrac = accuracy[0] - accuracy[1] - 1 # assuming accuracy[1] does NOT include the sign bit
    # The amount of weights for each layer
    current = 0
    for layer in model.layers:
        if 'conv2d_batchnorm' in layer.name.lower():
            # fused_weights shape: 4Darray (height, width, inputChannels, outputChannels)
            # fused_bias: 1D array
            fused_weights, fused_bias = layer.get_folded_weights()
            # transpose to match sv indexing in conv2d module: (o, i, h, w)
            fused_weights_t = np.transpose(fused_weights,(3, 2, 0, 1))
            # flatten
            fused_weights_f = fused_weights_t.reshape(-1)
            contents = [fused_weights_f, fused_bias]
            # debug
            print(type(fused_weights_f))
            print(fused_weights_f.shape)
            print(type(fused_weights_f[0]))
            print(fused_weights_f[0].shape)
        else:
            contents = layer.get_weights()

        # need to also check if layer.get_weights() returns empty list and skip (maxpool)
        if (contents!=None and len(contents) > 0): # for dense layers
            # contents = np.concatenate((contents, np.zeros(len(contents[1]))), axis=1)
            if 'conv2d_batchnorm' in layer.name.lower():
                weights = [fused_weights_f]
                biases  = [fused_bias]
            else:
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
                filename = os.path.join(target_dir, f"{name}_pkg_{accuracy[0]}_{accuracy[1]}_{i}.sv")
                # if (not os.path.isfile(filename)):
                with open(filename, "w") as f:
                    # Writes the header to the file
                    f.write(f"//Width: {accuracy[0]}\n//Int: {accuracy[1]}\n")
                    f.write(f"package {name}_{i}_{accuracy[0]}_{accuracy[1]};\n\n")

                    ### NEW for 2d convolution ### (since weights are now flattened instead of 2d like dense)
                    if 'conv2d_batchnorm' in name.lower():
                        f.write(f"localparam logic signed [{accuracy[0]-1}:0] convWeights [0:{len(weight)-1}] = '" + "{\n")

                        # Writes the main body of the function
                        for i in range(len(weight)):
                            # f.write("{")
                            num = dec_to_bin(weight[i]*(2**(Nfrac)), accuracy[0])
                            f.write(f"{head}{num}")
                            if (i!=len(weight)-1): 
                                f.write(",\n")
                        f.write("};\n")
                        f.write(f"localparam logic signed [{accuracy[0]-1}:0] convBiases [{len(bias)}] = '"+"{\n")
                        for i in range(0, len(bias)):
                            num = dec_to_bin(bias[i]*(2**Nfrac), accuracy[0])
                            f.write(f"{head}{num}")
                            f.write(",\n" if i!=(len(bias)-1) else "\n};\nendpackage")
                    #############################
                    # else:
                    #     f.write(f"localparam logic signed [{accuracy[0]-1}:0] weights [{len(weight)}][{len(weight[0])}] = '" + "{\n")

                    #     # Writes the main body of the function
                    #     for i in range(len(weight)):
                    #         f.write("{")
                    #         num = dec_to_bin(weight[i][0]*(2**(Nfrac)), accuracy[0])
                    #         f.write(f"{head}{num}")
                    #         for j in range(1, len(weight[0])):
                    #             num = dec_to_bin(weight[i][j]*(2**(Nfrac)), accuracy[0])
                    #             f.write(f", {head}{num}")
                    #         if (i!=len(weight)-1): 
                    #             f.write("},\n")
                    #     f.write("}\n};\n")
                    #                                                             # len(weights[0]) happens to be len(bias) for dense layers
                    #     f.write(f"localparam logic signed [{accuracy[0]-1}:0] bias [{len(weight[0])}] = '"+"{\n")
                    #     for i in range(0, len(bias)):
                    #         num = dec_to_bin(bias[i]*(2**Nfrac), accuracy[0])
                    #         f.write(f"{head}{num}")
                    #         f.write(",\n" if i!=(len(bias)-1) else "\n};\nendpackage")
                    
                    #############################
                    else:
                        # Flatten the (INPUT_SIZE, OUTPUT_SIZE) kernel row-major, i.e.
                        # flat_index = input_idx * OUTPUT_SIZE + output_idx.
                        # This matches sumOneColumnParameterized's indexing:
                        #   dlWeights[y*OUTPUT_SIZE + ITER]  where y = input index, ITER = output index
                        weight_flat = weight.reshape(-1)
 
                        f.write(f"localparam logic signed [{accuracy[0]-1}:0] dlWeights [0:{len(weight_flat)-1}] = '" + "{\n")
 
                        # Writes the main body of the function
                        for k in range(len(weight_flat)):
                            num = dec_to_bin(weight_flat[k]*(2**(Nfrac)), accuracy[0])
                            f.write(f"{head}{num}")
                            if (k!=len(weight_flat)-1):
                                f.write(",\n")
                        f.write("\n};\n")
 
                        # bias stays 1D, one entry per output neuron (length == OUTPUT_SIZE)
                        f.write(f"localparam logic signed [{accuracy[0]-1}:0] bias [{len(bias)}] = '"+"{\n")
                        for i in range(0, len(bias)):
                            num = dec_to_bin(bias[i]*(2**Nfrac), accuracy[0])
                            f.write(f"{head}{num}")
                            f.write(",\n" if i!=(len(bias)-1) else "\n};\nendpackage")