#include<stdio.h>
void func1(); //takes nothing returns nothing
void func2(int); //takes something returns nothing

int main(){
    // func1();
    func2(100);
    return 0;
}

void func1(){ 
    printf("This is function which is of type takes nothing returns nothing \n");
}

void func2(int x ){
    printf("The value of x is %d",x);
}