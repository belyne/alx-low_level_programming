#!/bin/bash

# Compile all .c files in the current directory into position-independent object files
gcc -c -Wall -Werror -fpic *.c

# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o

#Cleanup: remove the object files
rm *.o
