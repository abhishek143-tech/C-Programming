#include<stdio.h>
void swap(int *a,int *b){ //formal parameters //a=10,b=20
    int temp = *a; //temp = 10 //derefrence
    *a = *b;         // a = 20
    *b=temp;         // b =10
}
int main(){
    int num1=10,num2=20;
    printf("The value of num1 and num2 before swap is %d and %d \n",num1,num2);
    swap(&num1,&num2); //actual parameters
    printf("The value of num1 and num2 after swap is %d and %d \n",num1,num2);
    return 0;
}