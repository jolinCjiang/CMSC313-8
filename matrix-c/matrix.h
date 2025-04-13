#ifndef __MATRIX
#define __MATRIX

typedef struct {
    int m; // rows
    int n;
    int* content;
} Matrix;


Matrix add(Matrix m1, Matrix m2);

Matrix scalarMult(int s, Matrix m);

Matrix mult(Matrix m1, Matrix m2);

Matrix transpose(Matrix m);

Matrix create(int m, int n);

void populate(Matrix m, int* arr);

void deallocate(Matrix* m);

void print(Matrix m);

#endif
