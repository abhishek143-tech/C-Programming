#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, sum = 0;
    printf("Enter first number \n");
    scanf("%d", &num1);

    printf("Enter second number");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Sum of %d and %d is %d", num1, num2, sum);
    return 0;
}