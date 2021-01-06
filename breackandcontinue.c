#include <stdio.h>

int main()
{
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("The value of i is %d \n",i);
    //     if (i==1) //1
    //     {
    //         break;
    //     }
        
    // }

    for (int i = 0; i < 10; i++)
    {
        if (i==5) //5
        {
            continue; //
        }
        printf("The value of i is %d \n",i);
        
    }
    
    return 0;
}