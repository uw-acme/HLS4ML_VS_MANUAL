# Vivado Workflow Tutorial

This is a short tutorial showing how to use vivado with a vm connection. For advanced viewing of a project (a projects netlist, rtl viewer, report viewer etc. ) you'll need the version of vivado used on the server downloaded locally on your computer. However a license is not needed.

1. First, take your project you want to compile and edit the Script.tcl to include the project files. 
   Make sure your copy of Script.tcl is inside your project directory
2. Then, in a command line that is cd'ed into your project directory, run  `vivado -mode batch -source Script.tcl`.
   This will fully synthesize and compile your project, producing report files and a design checkpoint (.dcp) file

That is all! For other options, look through the other files in this folder. They all have descriptions of their use