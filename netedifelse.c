#include<stdio.h>
int main(){
    int age=17;
    //if else if ladder
    // if(age >=0 && age<18){
    //     printf("You cannot vote!!");
    // }
    // else if(age>=18){
    //     printf("YES,you can vote");
    // }else{
    //     printf("age is invalid");
    // }

    //nested if 
    if(age>=18){
        if (age==18)
        {
            printf("age is equal to 18 \n");
        }
        else{
            printf("age is greater than 18 \n");
        }
        
    }else{
        printf("age is less than 18 \n");
    }

    return 0;
}