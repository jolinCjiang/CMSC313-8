#include "matrix.h"
#include "stdio.h"
#include "stdlib.h"

// Returns the value at a specified index (treats matrix as a flat array).
int read(Matrix m, int i, int j) {
    int cols = m.n;
    int index = j + cols * i;

    return m.content[index];
}

// Inserts a given value at an indicated index in matrix (i,j).
void write(Matrix m, int i, int j, int value) {
    int cols = m.n;
    int index = j + cols * i;
    m.content[index] = value;
}

// Adds two matricies of same dimensions.
Matrix add(Matrix m1, Matrix m2) {
    Matrix out = create(m1.m, m1.n);
    for (int i = 0; i < m1.m * m1.n; i++) {
        out.content[i] = m1.content[i] + m2.content[i];
    }
    return out;
}

// Multiplies a matrix by a given scalar.
Matrix scalarMult(int s, Matrix m) {
    Matrix out = create(m.m, m.n);
    for (int i = 0; i < m.m * m.n; i++) {
        out.content[i] = m.content[i] * s;
    }
    return out;
}

// Multplies two matricies.
Matrix mult(Matrix a, Matrix b) {
    Matrix out = create(a.m, b.n);
    for (int out_i = 0; out_i < out.m; out_i++) {
        for (int out_j = 0; out_j < out.n; out_j++) {
            int result = 0;
            // out_i is the output row
            // out_j is the output column
            for (int i = 0; i < a.n; i++) {
                result += read(a, out_i, i) * read(b, i, out_j);
            }
            write(out, out_i, out_j, result);
        }
    }
    return out;
}

// Finds the tranpose of a given matrix.
Matrix transpose(Matrix m) {
    Matrix out = create(m.n, m.m);
    for (int i = 0; i < m.m; i++) {
        for (int j = 0; j < m.n; j++) {
            write(out, j, i, read(m, i, j));
        }
    }
    return out;
}   

// Creates a new matrix with given dimensions (m X n).
Matrix create(int m, int n) {
    Matrix out;
    out.m = m;
    out.n = n;
    out.content = (int *) malloc(sizeof(int) * m * n);
    return out;
}

// Populates a matrix given values to use.
void populate(Matrix m, int* arr) {
    for (int i = 0; i < m.m * m.n; i++) {
        m.content[i] = arr[i];
    }
}

// Deallocates used memory for a matrix.
void deallocate(Matrix* m) {
    free(m->content);
    m = NULL;
}

// Prints out a given matrix.
void print(Matrix m) {
    for (int i = 0; i < m.m; i++) {
        for (int j = 0; j < m.n; j++) {
            printf("%d ",read(m, i, j));
        }
        printf("\n");
    }
}

