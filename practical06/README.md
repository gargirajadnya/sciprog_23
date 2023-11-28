# Practical 6
This folder contains script and a folder of C programming scripts: matmult.c, Step6 folder
The Step6 folder contains: matmult.c, matmult.h, main.c

## Description:
1. matmult.c
This script includes a code of multiplication of matrices.

2. Step 6 folder
This folder includes 3 scripts. 
i) matmult.h
This is a header file to declare the function prototype
ii) matmult.c
This is a c file that defines the matrix multiplication function that calls on matmult.h
iii) main.c
This file solves practical 6 which asks to solve matrix multiplication. SO it calls the function from matmult to solve pracytical 6


## Instructions:
Compile: Use a C compiler (e.g., GCC) to compile and execute the code.
The code is complied and executed using VSCode

Use the following commands:

Without calling function but including it in the script
gcc matmult.c -o fibb_series.c 
./matmult.matmult

In the folder Step6: With calling matmult function.
gcc -c main.c
gcc -c matmult.c
ls  #check if main.o and matmult.o files have been created or not
gcc -o matmult main.o matmult.o
./matmult


PS:"-lm" is to map math library to the gcc

Also, I had use to use the header file as I was getting errors and the file matmult.c and main.c weren't compiling and executing in terminal. But we don't necessarily need a separate header file (matmult.h) if matmult.c file is directly included in the compilation process. 