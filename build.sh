#!/usr/bin/env bash
# Make dir for cmake files
rm -rf ./build
mkdir ./build

# Run cmake
cmake -B ./build .
cmake --build ./build

echo "built the following binaries:"
ls -l ./build/bin