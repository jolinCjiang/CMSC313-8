#include "matrix.h"
#include "stdio.h"
#include "stdlib.h"
#include<vector>

using namespace std;

int main() {
    // Create arrays that will populate the corresponding matricies.
    // Initialize arrays of correct sizes.
    int a[] = {6, 4, 8, 3};
    int b[] = {1, 2, 3, 4, 5, 6};
    int c[] = {2, 4, 6, 1, 3, 5};
    Matrix ma = Matrix(2, 2, a);
    Matrix mb = Matrix(2, 3, b);
    Matrix mc = Matrix(2, 3, c);

    // 3B
    Matrix mb3 = mb.scalarMult(3);
    // C^T
    Matrix mct = mc.transpose();
    // 3B X C^T
    Matrix mbc = mb3.mult(mct);
    // A + (3B X C^T)
    Matrix mab = mbc.add(ma);
    
    mab.print();
   
    return 0;
}

