#include <stdio.h>
#include <stdlib.h> //calloc()
int main()
{
    //for malloc
    int n = 3;
    int *ptr = (int *)calloc(n , sizeof(ptr)); //allocate the memory
    for (int i = 0; i < n; i++)                //input
    {
        printf("Enter the %d value of dynamic array: \n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++) //output
    {
        printf("The value at %d index is %d \n", i, *(ptr + i));
    }
    printf("After reallocation \n:");
    n = 2;
    ptr = (int *)realloc(ptr, n * sizeof(ptr)); //allocate the memory
    for (int i = 0; i < n; i++)                 //input
    {
        printf("Enter the %d value of dynamic array: \n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++) //output
    {
        printf("The value at %d index is %d \n", i, *(ptr + i));
    }
    free(ptr);
    return 0;
}