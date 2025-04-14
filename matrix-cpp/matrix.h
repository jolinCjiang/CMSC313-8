#ifndef __MATRIX
#define __MATRIX

#include <vector>
using namespace std;

class Matrix {
    private:
        int m; // rows
        int n; // cols
        int* content;
    
        int read(int i, int j);

        void write(int i, int j, int value);

    public:
        Matrix(int rows, int cols, int* arr);
    
        Matrix(int rows, int cols);
        
        Matrix(const Matrix& other);

        Matrix& operator=(const Matrix& other);

        ~Matrix();

        Matrix add(Matrix m2);

        Matrix scalarMult(int s);

        Matrix mult(Matrix m2);

        Matrix transpose();

        void print();


};

#endif
