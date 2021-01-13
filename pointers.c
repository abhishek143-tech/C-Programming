#include<stdio.h>

int main(){
    int a=10;
    int *ptr_a = &a; // &a = address of a
    printf("The address of a is %p \n",&a);
    printf("The address of a is %p \n",ptr_a); //to print address of a

    printf("the address of ptr_a is %p \n",&ptr_a); //to print address of ptr_a

    printf("The value of a is %d \n",a);
    printf("The value of a is %d \n",*ptr_a); // * dereferennce operator
    return 0;
}