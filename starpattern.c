// problem: write a program to print following pattern:
// *
// * *
// * * *
// * * * *
// * * * * *

//   n=5;
//   row=i;
//   col = j;
//   1 2 3 4 5
// 1 *
// 2 * *
// 3 * * *
// 4 * * * *
// 5 * * * * *

#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    for (int i = 1; i <= num ; i++)//row
    {
        for (int j = 1; j <= i; j++)//column
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}