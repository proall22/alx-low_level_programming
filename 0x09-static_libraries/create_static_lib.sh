#!/bin/bash

# Collect all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile each .c file into its corresponding .o object file
for c_file in $c_files; do
  gcc -c "$c_file"
done

# Create the static library using ar
ar rcs liball.a *.o

# Clean up by removing the temporary .o files
rm -f *.o

echo "Static library liball.a has been created."
