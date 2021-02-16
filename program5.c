// write a program to check given number is even or odd. 

// input:12
// output:even 

// input:123
// output:odd 

#include<stdio.h>

int main(){
    int num;
    printf("Enter the value of number : \n");
    scanf("%d",&num);
    if(num%2==0){
        printf("even \n");
    }else{
        printf("odd");
    }
    return 0;
}