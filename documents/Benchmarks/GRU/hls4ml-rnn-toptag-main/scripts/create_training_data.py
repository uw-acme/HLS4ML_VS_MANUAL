import pandas as pd
import numpy as np
import time
import os
import h5py
from sklearn.preprocessing import MinMaxScaler
pd.options.mode.chained_assignment = None
import time

create_files = True


def extract_train_features(index_df, max_particles=20, num_features=6):

    """
    Takes three inputs and retuns a numpy array containing the training input features.

    It extracts the training input features from the dataframe.
    Total `num_features` features are stored for up to `max_particles` paricles. 
    If number of particles is `max_particles` the rest is zero-padded


    Parameters
    ----------
    index_df : dataframe
        The input dataframe regrouped (by jet index).
    max_particles : int
        Number of particles to use in the sequence. The number of particle (hadrons) are used to define a jet
    num_features : int
        Number of training features. Nominal choice = 6

    Returns
    -------
    data : numpy array
        The numpy array containing the training features
    """

    data = np.zeros([index_df.first().shape[0],max_particles,num_features])
    p = 0
    for name, group in index_df:
        x = group.to_numpy()
        x = np.delete(x,num_features,1)
        g = 0
        for l in x:
            if g == max_particles or g == len(x): 
                break
            for n in range(num_features):
                data[p,g,n] = l[n]
            g = g+1
        p = p+1
    return data


def extract_labels(labels_df,num_classes=5):

    """
    Takes two inputs and retuns a numpy array containing the target class labels.

    It extracts the target class labels from the dataframe.
    It creates a numpy array containing `num_classes` labels for each input.


    Parameters
    ----------
    labels_df : dataframe
        The input dataframe regrouped (by jet index) which contains the class labels.
    num_features : int
        Number of training features. Nominal choice = 6.

    Returns
    -------
    labels : numpy array
        The numpy array containing target class labels
    """
    labels = np.zeros([labels_df.first().shape[0],num_classes])
    i = 0
    for name,  group in labels_df:
        x = group.to_numpy()
        x = np.delete(x,num_classes,1)
        for z in range(num_classes):
            labels[i,z] = x[0][z]
        i = i+1
    return labels


def read_files(infile, features, labels, max_particles):

    """
    Takes four inputs and retuns two numpy arrays.

    It creates the training inputs by reading the raw inputs file. Two seperate numpy arrays 
    are reurned containing the training features and class labels.


    Parameters
    ----------
    infile : hdf5
        Raw hdf5 input file.
    features : list
        List of training features.
        Defult: ['j1_ptrel', 'j1_etarot', 'j1_phirot', 'j1_erel', 'j1_deltaR','j1_pdgid']
    labels : list
        List of class labels.
        Defult: ['j_g', 'j_q', 'j_w', 'j_z', 'j_t']
    max_particles : int
        Number of particles to use in the sequence

    Returns
    -------
    dataset,input_label : list
        Two numpy arrays.
    """

    print("Method I: ")
    tree_name = infile[list(infile.keys())[0]][()]

    print(tree_name.shape)
    print(tree_name.dtype.names)

    #all training variables
    data_df = pd.DataFrame(tree_name,columns=list(set(features+labels)))
    print(data_df.head())
    data_df = data_df.drop_duplicates()

    # data_partial_df = data_df.loc[(data_df['j_g'] == 1) | (data_df['j_t'] == 1)]

    # extract the features
    features_df = data_df[features]
    print("print features_df head: ")
    print(features_df.head())

    # feature scaling
    scaler = MinMaxScaler().fit(features_df[features[:-1]])
    print(features_df[features[:-1]].head())
    features_df[features[:-1]] = scaler.transform(features_df[features[:-1]])
    print(features_df[features[:-1]].head())

    # group the features based on the index
    index_df = features_df[features].groupby(['j_index'])
    dataset = extract_train_features(index_df)
    dataset = scaler.fit_transform(dataset)

    print("print index_df head: ")
    print(index_df.head())

    # extract the labels
    labels_df = data_df[labels]
    labels_df = labels_df.groupby('j_index')

    # save the labels
    input_label = extract_labels(labels_df)
    return  dataset,input_label



def get_features(infile, features, labels, max_particles):
    """
    Takes four inputs and retuns two numpy arrays.

    It creates the training inputs by reading the raw inputs file. Two seperate numpy arrays 
    are reurned containing the training features and class labels.


    Parameters
    ----------
    infile : hdf5
        Raw hdf5 input file.
    features : list
        List of training features.
        Defult: ['j1_ptrel', 'j1_etarot', 'j1_phirot', 'j1_erel', 'j1_deltaR','j1_pdgid']
    labels : list
        List of class labels.
        Defult: ['j_g', 'j_q', 'j_w', 'j_z', 'j_t']
    max_particles : int
        Number of particles to use in the sequence

    Returns
    -------
    NONE
    """

    print("Method II: ")
    tree_name = infile[list(infile.keys())[0]][()]

    print(tree_name.shape)
    print(tree_name.dtype.names)

    # Convert to dataframe
    features_labels_df = pd.DataFrame(tree_name,columns=list(set(features+labels)))
    features_labels_df = features_labels_df.drop_duplicates()
    print(features_labels_df.head())

    features_df = features_labels_df[features]
    labels_df = features_labels_df[labels]
    labels_df = labels_df.drop_duplicates()
    print(features_df.head())

    # Convert to numpy array 
    features_val = features_df.values
    labels_val = labels_df.values     

    if 'j_index' in features:
        features_val = features_val[:,:-1] # drop the j_index feature
    if 'j_index' in labels:
        input_label = labels_val[:,:-1] # drop the j_index label

    features_2dval = np.zeros((len(labels_df), max_particles, len(features)-1))
    for i in range(0, len(labels_df)):
        features_df_i = features_df[features_df['j_index']==labels_df['j_index'].iloc[i]]
        index_values = features_df_i.index.values
        #features_val_i = features_val[index_values[0]:index_values[-1]+1,:-1] # drop the last feature j_index
        features_val_i = features_val[np.array(index_values),:]
        nParticles = len(features_val_i)
        # print("before", features_val_i[:,0])
        features_val_i = features_val_i[features_val_i[:,0].argsort()[::-1]] # sort descending by first value (ptrel, usually)
        # print("after", features_val_i[:,0])
        if nParticles>max_particles:
            features_val_i =  features_val_i[0:max_particles,:]
        else:        
            features_val_i = np.concatenate([features_val_i, np.zeros((max_particles-nParticles, len(features)-1))])
        features_2dval[i, :, :] = features_val_i

    features_val = features_2dval


    #X_train_val, X_test, y_train_val, y_test = train_test_split(features_val, labels_val, test_size=0.2, random_state=42)



def main():

    # List of features to use
    features = ['j1_ptrel', 'j1_etarot', 'j1_phirot', 'j1_erel', 'j1_deltaR','j1_pdgid','j_index']
    
    # List of labels to use
    labels = ['j_g', 'j_q', 'j_w', 'j_z', 'j_t', 'j_index']

    # List of all variables inclusing feature and labels
    all_vars = ['j1_ptrel', 'j1_etarot', 'j1_phirot', 'j1_erel', 'j1_deltaR','j1_pdgid','j_index', 'j_g', 'j_q', 'j_w', 'j_z', 'j_t']

    if create_files:
        for i in range(1):
            infile = h5py.File('/data/elham/anomaly_detection/fixed/processed-pythia82-lhc13-all-pt1-50k-r1_h022_e0175_t220_nonu_withPars_truth_%s.z'%str(i),'r')


            print(list(set(features+labels)))
            start_time = time.time()

            # get_features(infile, features, labels, max_particles=20)
            # print(get_features.__doc__)

            first_time = time.time()
            print("--- %s seconds ---" % (first_time - start_time))

            dataset,input_label = read_files(infile, features, labels, max_particles=20)
            print(dataset.shape)

            first_time = time.time()
            print("--- %s seconds ---" % (time.time() - first_time))


            # all training variables
            # data_df = pd.DataFrame(tree_name,columns=all_variable)
            # data_partial_df = data_df.loc[(data_df['j_g'] == 1) | (data_df['j_t'] == 1)]


            # extract the features
            # features_df = data_partial_df[features]
            # print(features_df.head)

            # feature scaling
            # scaler = MinMaxScaler()
            # features_df[features[:-1]] = scaler.fit_transform(features_df[features[:-1]])



            # save the features
            # np.save('/data/elham/anomaly_detection/fixed/nn_inputs_2class/features_2class%s.npy'%str(i), dataset)

            # save the labels
            # np.save('/data/elham/anomaly_detection/fixed/nn_inputs_2class/labels_2class%s.npy'%str(i), input_label)


if __name__ == '__main__':
    main()
