#include<stdio.h>
// int sum(int,int); //function declaration
int sum(int a, int b){ //function defination
    int c = 0;
    c = a+b;
    return c;

}
int main(){
    // int a=30,b=20;
    // int c = sum(a,b);
    // int c = sum(10,20);
    // int c = sum(40,20);
    int c = sum(60,20); //function call

    printf("the sum is %d \n",c);
    return 0;
}