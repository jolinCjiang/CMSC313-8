# CMSC313 Homework 8
**Author:** Jolin Jiang @ UMBC
**Class:** CMSC313 Mon/Wed 8:30am

## Purpose
This repository includes the code to perform a few matrix operations in both C and C++ to see how the two languages differ.

## Files
The "matrix-c" folder includes the header file for matrix operations (matrix.h) and its implementation (matrix.c). There is also a file that tests the given expression in the homework (main.c).

The "matrix-cpp" folder includes the header file for matrix operations (matrix.h) and its implementation (matrix.cpp). There is also a file that tests the given expression in the homework (main.cpp).

## C Version
To compile:
```shell
# if you are not already in the CMSC313-8 repo:
cd CMSC313-8

# compile and run the C code:
cd matrix-c && gcc matrix.c main.c -o matrix && ./matrix
```

## C++ Version
To compile:
```shell
# if you are not already in the CMSC313-8 repo:
cd CMSC313-8

# compile and run the C++ code:
cd matrix-cpp && g++ matrix.cpp main.cpp -o matrix && ./matrix
```
