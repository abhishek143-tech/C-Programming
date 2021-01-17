#include<stdio.h>

int main(){
    int arr[5]={10,20,30,40,50};
    char arr1[]={'a','b','c'};
    //printf("%p \n",&arr[0]);
    // printf("%p \n",arr); //arr points the first element array
    // printf("%p \n",arr+4); // base address + 4 * sizeof(arr[0])
    
    // printf("%p \n",arr1); //arr points the first element array
    // printf("%p \n",arr1+1); // base address + 1 * sizeof(arr[0])

    printf("%d \n",*arr);
    printf("%d \n",*(arr+1));
    printf("%d \n",*(arr+2));
    printf("%d \n",*(arr+3));
    printf("%d \n",*(arr+4));
    return 0;
}