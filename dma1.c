#include <stdio.h>
#include <stdlib.h> //calloc()
int main()
{
    //for malloc
    int n = 3;
    int *ptr = (int *)malloc(n * sizeof(ptr)); //allocate the memory
    for (int i = 0; i < n; i++)//input
    {
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)//output
    {
        printf("The value at %d index is %d \n",i,*(ptr+i));
    }

    //for calloc
    // int *ptr = (int *)calloc(n , sizeof(ptr)); //allocate the memory
    // // for (int i = 0; i < n; i++)//input
    // // {
    // //     scanf("%d",&ptr[i]);
    // // }
    // for (int i = 0; i < n; i++)//output
    // {
    //     printf("The value at %d index is %d \n",i,ptr[i]);
    // }
    
    return 0;
}