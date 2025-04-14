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

## Expected Output
The C version:
<img width="486" alt="image" src="https://github.com/user-attachments/assets/693db92f-5595-42f5-8820-cd8f07f05fa9" />

The C++ version:
<img width="572" alt="image" src="https://github.com/user-attachments/assets/c0f1743d-1453-44ff-accc-1e0857445c8c" />


