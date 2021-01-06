#include<stdio.h>
int sum(int a, int b){
    int c = 0;
    c = a+b;
    return c;

}
int main(){
    // int a=30,b=20;
    // int c = sum(a,b);
    // int c = sum(10,20);
    // int c = sum(40,20);
    int c = sum(60,20);

    printf("the sum is %d \n",c);
    return 0;
}