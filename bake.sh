#!/bin/bash

PROJECT_NAME="cpp-terminal-snake"

g++ -c src/Main.cpp
mkdir -p build
g++ *.o -o build/$PROJECT_NAME
rm *.o
