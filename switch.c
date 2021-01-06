#include <stdio.h>

int main()
{
    int num = 2;
    switch (num)
    {
    case 1:
        printf("first case \n");
        break;

    case 2:
        printf("second case \n");
        break;

    case 3:
        printf("third case \n");
        break;

    default:
        printf("Invalid number");
    }
    return 0;
}