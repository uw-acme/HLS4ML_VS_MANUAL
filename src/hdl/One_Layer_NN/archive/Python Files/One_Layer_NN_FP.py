# HLS4ML Research
#
# This is a Python file that:
#       creates memory initialization files for SystemVerilog,
#       converts numbers (inputs, weigthsm, biases) from HLS to the model's binary encoding.
# 
# Last edited: 06/02/21

# imports
import math
from fxpmath import Fxp

# 17 bits number: 1 sign bit | 6 integer part | 10 fractional part
WIDTH = 17
NFRAC = 10
TABLE_SIZE = 2 ** NFRAC

# Paths for memory and HLS files
PATH_MEM = 'C:\\Users\\aidan\\Documents\\hls4ml_customml\\One_Layer_NN\\Memory_Files\\'
PATH_HLS = 'C:\\Users\\aidan\\Documents\\hls4ml_customml\\One_Layer_NN\\HLS_Files\\'

# Defines Sigmoid Function
def sigmoid(x):
  return 1.0/(1+math.exp(-x))

# Create mem file to be loaded into BRAM for sigmoid
def Sigmoid_BRAM():
   # Create Memory File in form of WIDTH bit number with NFRAC being fractional
   # Only the ten bits actually need to be calculated with 0s prepended
   # since the value will always be between 0 and 1
   with open(PATH_MEM + 'Sigmoid_BRAM.mem', 'w') as fp:
      for i in range(TABLE_SIZE):
         in_val = 2*8.0*(i-TABLE_SIZE/2.0)/TABLE_SIZE
         sig = sigmoid(in_val)
         real_val = round(sig * TABLE_SIZE)
         if (real_val >= TABLE_SIZE):
            real_val = TABLE_SIZE - 1
         bin_val = bin(real_val)[2:]
         diff = NFRAC - len(bin_val)
         if diff > 0:
            leading_zeros = ''
            for _ in range(diff):
               leading_zeros += '0'
            bin_val = leading_zeros + bin_val
         fp.write(bin_val + '\n')
      fp.close()

# Takes inputs, weights, or biases from HLS and
# converts to a format suitable for a .mem file used
# in verilog.
def HLS_converter(readFile, writeFile):
   with open(readFile, 'r') as r:
      with open(writeFile, 'w') as w:
         data = r.readlines()
         for n in data:
            newstr = n.replace('0b', '')
            trailing_zeros = ''
            for _ in range(NFRAC):
               trailing_zeros += '0'
            if '.' not in newstr:
               newstr = newstr + '.' + trailing_zeros
            newstr = newstr.replace('.','')
            newstr = newstr.replace('\n', '')               
            diff = WIDTH - len(newstr)
            if diff > 0:
               leading_zeros = ''
               for _ in range(diff):
                  leading_zeros += '0'
               newstr = leading_zeros + newstr
            w.write(newstr + '\n')

# Converts sets of inputs into mem files
def InputsToFixed():
   # input 1
   #data = [-0.5999865, 0.49528775, -0.86947435, -0.7755444, -0.0033233997, -0.0033233997, 1.5731839, 1.100351, -0.9850744, -0.071983196]
   # input 2
   data = [1.2076255, -1.0197587, -1.1673006, -1.0659643, -0.086230636, -0.086230636, 0.6330235, 0.4566909, -1.2128329, -0.84330964]
   # input 3
   #data = [0.81153566, -0.7480766, -0.09147643, -0.081826374, -0.13493977, -0.13493977, -0.95172215, -0.64432955, 0.0874605, -0.168399]
   # input 4
   #data = [0.0349248, 0.3694296, -1.1616322, -1.0243298, 0.6110697, 0.6110697, 1.6092062, 1.3212895, -1.2202272, -0.650478]
   with open(PATH_MEM+'inputs_fp1.mem', 'w') as fp:
      for i in data:
         bnum = Fxp(str(i), True, WIDTH, NFRAC)
         fp.write(bnum.bin(frac_dot=False) + '\n')
   fp.close()


# Prints out fixed point version of final output of one layer model
def Final_output():
   #result = 0.015097325  # Result of input 1
   result =  0.004737405 # Result of input 2
   #result = 0.10963861 # Result of input 3
   #esult = 0.0063857003 # Result of input 4
   bnum = Fxp(str(result), True, WIDTH, NFRAC)
   print(bnum.bin(frac_dot=False))
   print(bnum)

if __name__ == "__main__":
   InputsToFixed()
   # Sigmoid_BRAM() # Sigmoid values
   # HLS_converter(PATH_HLS+'b2binary.txt', PATH_MEM+'RELU_biases_fp.mem') # RELU biases
   # HLS_converter(PATH_HLS+'b4binary.txt', PATH_MEM+'Sigmoid_biases_fp.mem') # Sigmoid biases
   # HLS_converter(PATH_HLS+'w2binary.txt', PATH_MEM+'RELU_weights_fp.mem') # RELU weights
   # HLS_converter(PATH_HLS+'w4binary.txt', PATH_MEM+'Sigmoid_weights_fp.mem') # Sigmoid weights
   Final_output()




'''
All the below functions were previously used to determine the input, weights, and 
biases. However, we changed to getting those values directly from the HLS
version to ensure the values were consistent.

'''

# def BiasesToFixed():
#    with open('1layer_bias.txt', 'r') as f:
#       with open('RELU_biases_fp.mem', 'w') as fp:
#          data = f.readlines()
#          for i in range(1, 33):
#             num = data[i].strip('\n')
#             bnum = Fxp(num, True, WIDTH, NFRAC)
#             fp.write(bnum.bin(frac_dot=False) + '\n')
#       fp.close()
#       with open('Sigmoid_biases_fp.mem', 'w') as fp:
#          num = data[35].strip('\n')
#          bnum = Fxp(num, True, WIDTH, NFRAC)
#          fp.write(bnum.bin(frac_dot=False) + '\n')
#       fp.close()
#    f.close()

# def WeightsToFixed():
#    with open('1layer_weight.txt', 'r') as f:
#       with open('RELU_weights_fp.mem', 'w') as fp:
#          data = f.readlines()
#          for i in range(1, 321):
#             num = data[i]
#             num = re.findall(r"[-+]?\d+\.\d+", num)
#             #print(str(num[0]))
#             bnum = Fxp(str(num[0]), True, WIDTH, NFRAC)
#             fp.write(bnum.bin(frac_dot=False) + '\n')
#       fp.close()
#       with open('Sigmoid_weights_fp.mem', 'w') as fp:
#          for i in range(323, 355):
#             num = data[i]
#             num = re.findall(r"[-+]?\d+\.\d+", num)
#             #print(str(num[0]))
#             bnum = Fxp(str(num[0]), True, WIDTH, NFRAC)
#             fp.write(bnum.bin(frac_dot=False) + '\n')

# # Result of the RELU layer as well as input to sigmoid layer.
# # Only used for testing the sigmoid layer
# def RELU_result():
#    with open('reluResult.txt', 'r') as fp:
#       with open('sigmoid_input.mem', 'w') as f:
#          data = fp.readlines()
#          for n in data:
#             bnum = Fxp(str(n), True, WIDTH, NFRAC)
#             f.write(bnum.bin(frac_dot=False) + '\n') 