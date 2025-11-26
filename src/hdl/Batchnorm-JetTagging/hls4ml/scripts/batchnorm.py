# from tensorflow.keras import Layer
from tensorflow.keras.layers import BatchNormalization, Layer, Dense
import tensorflow as tf
import numpy as np
# from tensorflow.keras import 

class HandmadeBatchNormalization(Layer):
    def __init__(
        self,
        keras_batchnorm: BatchNormalization | None,
        scale: tf.Tensor | None = None,
        bias: tf.Tensor | None = None,
        epsilon=1e-3
        ):
        
        # super(HandmadeBatchNormalization, self).__init__()
        super().__init__()
        
        if keras_batchnorm is None:
            self.scale = scale
            self.bias = bias
        else:
            if not isinstance(keras_batchnorm, BatchNormalization):
                raise ValueError("keras_batchnorm must be an instance of BatchNormalization")
            if scale is not None or bias is not None:
                raise ValueError("If keras_batchnorm is not None, scale and bias must be None")
        
            self.keras_batchnorm = keras_batchnorm
            self.gamma = keras_batchnorm.gamma.numpy() if keras_batchnorm.gamma is not None else np.ones(1)
            self.beta = keras_batchnorm.beta.numpy() if keras_batchnorm.beta is not None else np.zeros(1)
            self.mean = keras_batchnorm.moving_mean.numpy()
            self.var = keras_batchnorm.moving_variance.numpy()
            self.epsilon: float = epsilon if epsilon is not None else 1e-3

            self.scale: np.Array = self.gamma / np.sqrt(self.var + self.epsilon)
            self.bias: np.Array = self.beta - self.scale * self.mean

        # self.trainable: bool = False

    def build(self, input_shape):
        pass

    # def build(self, input_shape):
    def call(self, inputs, training=False):
        return inputs * self.scale + self.bias
        # normalized_inputs = (inputs - self.mean) / np.sqrt(self.var + self.epsilon)
        # return self.gamma * normalized_inputs + self.beta
        
        
class DenseWithBatchNormalization(Layer):
    def __init__(self, input_dense: Dense, batchnorm: BatchNormalization):
        super().__init__()
        self.input_dense = input_dense
        self.batchnorm = HandmadeBatchNormalization(batchnorm)
        
        self.weights1 = self.input_dense.weights[0] * self.batchnorm.scale
        self.bias1 = self.batchnorm.scale * self.input_dense.weights[1] + self.batchnorm.bias
        
    def build(self, input_shape):
        pass
    
    def call(self, inputs, training=False):
        return inputs @ self.weights1 + self.bias1

    def get_weights(self):
        return [self.weights1, self.bias1]        
        
        
        
        