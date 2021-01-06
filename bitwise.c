#include <stdio.h>

int main()
{
    int p = 5, q = 4;
    printf("Bitwise AND of %d and %d is %d \n", p, q, p & q);
    // 5 = 0 1 0 1
    // 4 = 0 1 0 0
    // -----------
    //   = 0 1 0 0 //binary representation of 5

    printf("Bitwise OR of %d and %d is %d \n", p, q, p | q);
    // 5 = 0 1 0 1
    // 4 = 0 1 0 0
    // -----------
    //  = 0 1 0 1//binary representation of 5

    printf("Bitwise XOR of %d and %d is %d", p, q, p ^ q);
    // 5 = 0 1 0 1
    // 4 = 0 1 0 0
    // -----------
    //     0 0 0 1 // binary representation of 1
    return 0;
}