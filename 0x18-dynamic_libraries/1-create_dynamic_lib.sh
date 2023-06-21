#!/bin/bash

# Compile all .c files into position-independent code and create the shared library
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o
