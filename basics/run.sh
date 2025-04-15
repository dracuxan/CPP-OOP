#!/bin/bash

FILE_NAME=${1}
flags='-std=c++17'

# Ensure 'bin' directory exists
mkdir -p "bin"

# Check if a filename is provided
if [[ $# -lt 1 ]]; then
    echo "Usage: $0 <output file name> [program arguments if any]"
    exit 1
fi

# Compile the program
echo "Compiling ${FILE_NAME}.cpp..."
g++ ${flags} ${FILE_NAME}.cpp -o bin/${FILE_NAME}

# Check if compilation was successful
if [[ $? -ne 0 ]]; then
    echo "Compilation failed."
    exit 1
fi

./bin/${FILE_NAME}
exit 0
