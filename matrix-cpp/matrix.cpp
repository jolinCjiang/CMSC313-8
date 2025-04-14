#include "matrix.h"
#include<cstdio>

Matrix::Matrix(int rows, int cols, int* arr) {
    m = rows;
    n = cols;
    content = new int[m * n];
    for (int i = 0; i < (m * n); i++) {
        content[i] = arr[i];
    }
}  

// Initalizes a zero matrix.
Matrix::Matrix(int rows, int cols) {
    m = rows;
    n = cols;
    content = new int[m * n];
    for (int i = 0; i < (m * n); i++) {
        content[i] = 0;
    }
}  

Matrix::Matrix(const Matrix& other) {
    m = other.m;
    n = other.n;
    content = new int[m * n];
    for (int i = 0; i < m * n; i++) {
        content[i] = other.content[i];
    }
}

Matrix& Matrix::operator=(const Matrix& other) {
    if (this != &other) {
        delete[] content; // clean up existing memory
        m = other.m;
        n = other.n;
        content = new int[m * n];
        for (int i = 0; i < m * n; i++) {
            content[i] = other.content[i];
        }
    }
    return *this;
}

// Destructor
Matrix::~Matrix() {
    delete[] content;
}

// Returns the value at a specified index (treats matrix as a flat array).
int Matrix::read(int i, int j) {
    int cols = n;
    int index = j + cols * i;

    return content[index];
}

// Inserts a given value at an indicated index in matrix (i,j).
void Matrix::write(int i, int j, int value) {
    int cols = n;
    int index = j + cols * i;
    content[index] = value;
}

// Adds two matricies of same dimensions.
Matrix Matrix::add(Matrix m2) {
    Matrix out = Matrix(m, n);
    for (int i = 0; i < m * n; i++) {
        out.content[i] = content[i] + m2.content[i];
    }
    return out;
}

// Multiplies a matrix by a given scalar.
Matrix Matrix::scalarMult(int s) {
    Matrix out = Matrix(m, n);
    for (int i = 0; i < m * n; i++) {
        out.content[i] = content[i] * s;
    }
    return out;
}

// Multplies two matricies.
Matrix Matrix::mult(Matrix b) {
    Matrix out = Matrix(m, b.n);
    for (int out_i = 0; out_i < out.m; out_i++) {
        for (int out_j = 0; out_j < out.n; out_j++) {
            int result = 0;
            // out_i is the output row
            // out_j is the output column
            for (int i = 0; i < n; i++) {
                result += this->read(out_i, i) * b.read(i, out_j);
            }
            out.write(out_i, out_j, result);
        }
    }
    return out;
}

// Finds the tranpose of a given matrix.
Matrix Matrix::transpose() {
    Matrix out = Matrix(n, m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            out.write(j, i, this->read(i, j));
        }
    }
    return out;
}

// Prints out a given matrix.
void Matrix::print() {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",this->read(i, j));
        }
        printf("\n");
    }
}

