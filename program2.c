// write a program to find the no of digits in a number.

// Input= 1234
// output = 4

// Input = 5
// output = 1

// input = 100
// output = 3

// 1234/10 = 123/10 =12/10 = 1/10 = 0

// 5/10 = 0
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the value of number: \n");
    scanf("%d", &num);

    int count = 0;
    while (num > 0) //100 //10 //1
    {
        num = num / 10; //num/=10 //100/10 = 100 //10/10 = 1 1/10 = 0
        count++; //1 //2 //3
    }
    printf("The number of digits in given number is %d\n", count);
    return 0;
}
