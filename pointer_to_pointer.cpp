#include<stdio.h>

int main(){
    int a=10;
    int *ptr_a = &a; // &a = address of a
    int **ptr_aa = &ptr_a;

    // printf("The address of a is %p \n",&a);
    // printf("The address of a is %p \n",ptr_a); //to print address of a

    // printf("the address of ptr_a is %p \n",&ptr_a); //to print address of ptr_a
    // printf("the address of ptr_a is %p \n",ptr_aa); //to print address of ptr_a
    
    // printf("the address of ptr_aa is %p \n",&ptr_aa); //to print address of ptr_aa

    printf("The value of a is %d \n",a);
    printf("The value of a is %d \n",*ptr_a); // * dereferennce operator
    printf("The value of a is %d \n",**ptr_aa); // * dereferennce operator
    

    return 0;
}