package relu_pkg;
    parameter int WIDTH = 8;
    parameter int INPUT_SIZE = 8;
    parameter int OUTPUT_SIZE = 5;

    // Define weights and biases as parameters or constants
    // Define the weights as parameters
    parameter logic signed [8-1:0] weights [0:7][0:4] = '{
        '{8'sd1, 8'sd0, 8'sd0, 8'sd0, 8'sd0},
        '{8'sd0, 8'sd1, 8'sd0, 8'sd0, 8'sd0},
        '{8'sd0, 8'sd0, 8'sd1, 8'sd0, 8'sd0},
        '{8'sd0, 8'sd0, 8'sd0, 8'sd1, 8'sd0},
        '{8'sd0, 8'sd0, 8'sd0, 8'sd0, 8'sd1},
        '{8'sd0, 8'sd0, 8'sd0, 8'sd0, 8'sd0},
        '{8'sd0, 8'sd0, 8'sd0, 8'sd0, 8'sd0},
        '{8'sd0, 8'sd0, 8'sd0, 8'sd0, 8'sd0}
    };

    // Define the biases as parameters
    parameter logic signed [8-1:0] bias [0:4] = '{8'sd0, 8'sd0, 8'sd0, 8'sd0, 8'sd0};
endpackage : relu_pkg