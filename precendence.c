#include <stdio.h>

int main()
{
    int a = 20, b = 10, c = 15, d = 5, e;
    // e = ((a + b) * c) / d; // (30*15)/5
    //                        // 450/5
    //                        //90
    // printf("%d \n", e);

    // e = (a + b) * (c / d); // (30) * (15/5)
    //                         // 30 * 3
    //                         //90
    // printf("Value of (a + b) * (c / d) is : %d\n", e);

    e = a + (b * c) / d; // 20 + 150/5
                        // 20 + 30
                        // 50
    printf("Value of a + (b * c) / d is : %d\n", e);
    return 0;
}