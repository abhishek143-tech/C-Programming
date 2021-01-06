#include <stdio.h>

int main()
{
    int num1 = 5, num2 = 2;
    //relational operators
    // printf("%d \n",(num1 == num2));
    // printf("%d \n",(num1 != num2));
    // printf("%d \n",(num1 > num2));
    // printf("%d \n",(num1 < num2));
    // printf("%d \n",(num1 >= num2));
    // printf("%d \n",(num1 <= num2));

    //logical operators
    printf("%d \n", (num1 == 5) && (num2 > 5));
    printf("%d \n", (num1 == 5) || (num2 > 5));
    printf("%d \n", !((num1 == 5) || (num2 > 5)));
    return 0;               //1     ||   0
                             //!(1)
}