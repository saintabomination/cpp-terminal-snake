#!/bin/bash

PROJECT_NAME="cpp-terminal-snake"

g++ -c src/*.cpp
mkdir -p build
g++ *.o -I src/Headers -o build/$PROJECT_NAME
rm *.o
