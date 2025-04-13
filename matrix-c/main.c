#include "matrix.h"
#include "stdio.h"
#include "stdlib.h"

int main() {
    // Create arrays that will populate the corresponding matricies.
    int a[] = {6, 4, 8, 3};
    int b[] = {1, 2, 3, 4, 5, 6};
    int c[] = {2, 4, 6, 1, 3, 5};
    // Initialize arrays of correct sizes.
    Matrix ma = create(2, 2);
    Matrix mb = create(2, 3);
    Matrix mc = create(2, 3);
    // Populate the arrays.
    populate(ma, a);
    populate(mb, b);
    populate(mc, c);

    // 3B
    Matrix mb3 = scalarMult(3, mb);
    // C^T
    Matrix mct = transpose(mc);
    // 3B X C^T
    Matrix mbc = mult(mb3, mct);
    // A + (3B X C^T)
    Matrix mab = add(ma, mbc);
    
    print(mab);
    
    // Deallocate all used memory.
    deallocate(&ma);
    deallocate(&mb);
    deallocate(&mc);
    deallocate(&mb3);
    deallocate(&mct);
    deallocate(&mbc);
    deallocate(&mab);

    return 0;
}
