### Nautilus Kubernetes Tutorial by Caleb
For general and high level access to computing resources, coder can be used. Coder offers premade templates and easy access to FPGAs. However, Kubernetes allows a much finer control over everything including individual storage control, ability to request specific amounts of resources, and persistent storage even after shutting down a server. Coder can also be used with Kubernetes combining the best of both worlds.

**A warning**, do not try to set up the following in WSL, there are many issues with it. For windows, running everything on Powershell works perfectly fine
for any issues contact Caleb at ceravcal@uw.edu or the NRP admins at [Element](https://element.nrp-nautilus.io/#/room/#general:matrix.nrp-nautilus.io)

1. The first step is to download kubectl onto your computer. Kubectl is the way to setup and control server elements. A full tutorial is [here](https://nationalresearchplatform.org/documentation/userdocs/start/getting-started/#cluster-access-via-kubectl) however I will give a brief overview

For Windows, use: 
curl.exe -LO "https://dl.k8s.io/release/v1.33.0/bin/windows/amd64/kubectl.exe"
For Linux, use:

You can also download from the [Kubernetes release page](https://kubernetes.io/releases/download/#binaries) for any OS

2. Download this [config file](https://nationalresearchplatform.org/config)
and put it into your $HOME/.kube folder. 
If .kube doesn't exist, make it with mkdir ~/.kube

3. Now install [Kubelogin](https://github.com/int128/kubelogin?tab=readme-ov-file#setup)
Your oidc-issuer-url is https://authentik.nrp-nautilus.io/application/o/k8s/
Your oidc-client-id should already be set up (I believe I found it in kubectl config view --raw if you can't find it)

4. Now run "kubectl get pods -n <Namespace>" (uw-acme if you are in Scott's UW lab) if you haven't already. It should now open a webpage to authentiate 

5. Finally, run: kubectl config set contexts.nautilus.namespace <YOUR NAMESPACE>
   
Now that you have kubectl set up, you can make a server. First setup an access password for yourself using:

kubectl create secret generic my-pass --from-literal=my-pass=YOUR_PASSWORD --from-literal=turn-secret=cup5dBCknRijK4roVJSEUFikEpu8xdKAqGxubX7CbZ2YkpgC4zFsU5Ukqf97PHsE. Make sure to replace YOUR_PASSWORD. Write down the password somewhere

Now download deployment.yaml and ingress.yaml

For the server, there are multiple options. The fastest is to set everything up using single user access storage. In this case just download homevol.yaml
If you want to set up a shared file system, also download sharedvol.yaml and uncomment the code near the bottom in deployment.yaml. In the sectiont that says mounts you can configure where each gets connected to in the server. 
Currently it is set up for the /home/user directory to be mounted individually with an additional directory /home/user/shared to be connected to the shared filesystem if you uncomment the code
The shared filesystem is in general slower to upload to while the individual one is faster

run: kubectl apply -f homevol.yaml
if using the shared filesystem also run: kubectl apply -f sharedvol.yaml

then run: kubectl apply -f deployment.yaml
and: ingress.yaml
If there is an error with the host name, change both lines of hls4ml-desktop.nrp-nautilus.io in ingress.yaml to something different and try again

now run kubectl get pods. Once the pod you just created (Look at the age section) says 1/1 under Ready, then it was succesful. It can take some time to work, keep running kubectl get pods periodically to check on progress.

**NOTE:** A handy debugging tool is kubectl describe (resource) (which resource). Works for resources of deployments, pods, and replicasets which, if things aren't working, are all useful to check in on

Once everything is successful, paste hls4ml-desktop.nrp-nautilus.io (or whatever you changed it to) into your browser. Hit connect and type in the password you set up earlier using *kubectl create secret generic my-pass*

You should now be connected and able to use the server

For each additional person, create a new homevol (with a different name), create a modified deployment.yaml with this volume, and run everything else the same, especially the shared volume

After downloading vivado, put 
export XILINXD_LICENSE_FILE=2100@xilinxd.xilinx-dev
into your ~/.bashrc
This gives access to a vivado license


