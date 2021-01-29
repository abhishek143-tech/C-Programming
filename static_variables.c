#include<stdio.h>
void fun(){
    static int x;
    int y;
    // int y =20;
    printf("The value of x is %d \n",x);
    printf("The value of y is %d \n",y);
    // x++; //x=x+1
}
int main(){
    fun(); //10
    // fun(); //11
    return 0;
}