#!/bin/bash

for dir in model_5/*/ ; do
    folder="${dir%/}"
    echo "Processing folder: $folder"

    # Check if a subfolder named "target" exists inside this folder
    if [ -d "$folder/myproject_prj/solution1/impl" ]; then
        echo "found impl within $folder"
        # Example command
        # cp "$folder/target/file.txt" /some/destination/
    else
        rm -r "$folder"
        echo "removed $folder"
    fi
done