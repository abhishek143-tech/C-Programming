#include <stdio.h>

int main()
{
    int i = 1; //initialization statement
    while (i<=10) //test expression
    {
        printf("The value of i is %d \n",i);
        i++; //update statement
    }

    //do while loop
    do
    {
        printf("The value of i is %d \n",i);
        i++;
    } while (i<=10);
    
    
    return 0;
}