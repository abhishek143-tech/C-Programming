#include <stdio.h>
int mult(); //takes nothing returns something
int mult1(int ,int); //takes something returns something
int main()
{
    // int res = mult();
    int result = mult1(30,20); //600 //actual paramters
    printf("The value of multiplication is %d \n",result);
    return 0;
}
int mult()
{
    int a = 10, b = 20;
    return a * b;
}

int mult1(int num1,int num2){ //formal parameters
    return num1*num2;
}
