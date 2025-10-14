# Linux 

## Base commands
```
ls -l (for more details) -a (for hidden folders)
Lists files and folders in your current directory
=====================
cd {Directory}
changes directory to the given directory. Path is relative to current directory unless an absolute path is given. Passing - changes to your previous directory and ../ changes to the folder your current directory is in
=====================
rm {file} -r {to remove a folder and all its contents}
Removes a file or files. Passing an argument with * allows for deleting multiple files whos names follow a pattern. "rm *.log" for example removes all files ending in the .log extension
=====================
mv {file} {dest}
moves file to destination. If the final part of the destination path isn't a folder, renames the file to that part. Can be used to rename files if you just pass {file} {name} and name isn't a folder in the current directory
=====================
cat {file}
prints the contents of given file to the console
=====================
ps aux
shows currently running proccesses
=====================
pkill {process}
kills process by name. if you want to use pid number, use kill
=====================
htop
Task manager for linux. Shows top processes, memory, and core usage. Updates continuously. 
=====================
```

## Tmux
If you want to run a script that will take awhile to complete, tmux is very useful. You can create a session, start your script, and detatch. If you want to check on progress you can always reattach. It won't stop running if you end your ssh connection
```
                    Command                     Key Command
Start new session:	tmux new -s {name}
List sessions:	    tmux ls
Attach to session:	tmux attach -t name
Detach:		                                    Ctrl+b then d
Kill session:	    tmux kill-session -t name
New window:	        :new-window	                Ctrl+b then c
List windows:		                            Ctrl+b then w
Next window:	                                Ctrl+b then n
Previous window	                                Ctrl+b then p
Rename window:		                            Ctrl+b then ,
Close window:		                            Ctrl+b then &
Switch panes:		                            Ctrl+b then arrow key
Kill pane:		                                Ctrl+b then x
Enter copy mode:		                        Ctrl+b then [
Exit copy mode:	                                q
Scroll up/down:		                            Arrow keys or PgUp/PgDn
```