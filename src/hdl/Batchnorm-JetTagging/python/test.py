# Python 3.6+
from pathlib import Path
script_path = Path(__file__).resolve()      # full file path (resolves symlinks)
script_dir  = script_path.parent            # directory containing the script
print(script_path)
print(script_dir)

