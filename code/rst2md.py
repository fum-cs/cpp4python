import os
import subprocess

def convert_rst_to_md(input_file):
    output_file = os.path.splitext(input_file)[0] + ".md"
    command = f"pandoc -s -o {output_file} {input_file}"
    subprocess.run(command, shell=True)

def main():
    for root, _, files in os.walk("."):
        for file in files:
            if file.endswith(".rst"):
                convert_rst_to_md(os.path.join(root, file))

if __name__ == "__main__":
    main()
