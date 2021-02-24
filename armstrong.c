// write a program to check given number is armstrong or not.

// Input:123
// output:NO 

// Input:371
// output:Yes

// 123 = 1^3 + 2^3 + 3^3 = 36 no 

// 371 = 3^3 + 7^3 + 1^3 = 371 yes

#include<stdio.h>

int main(){
    int num;
    printf("Enter the value of num : \n");
    scanf("%d",&num);

    int originalNum = num, rem,res=0;
    while (num>0)
    {
        rem = num%10;
        res += rem*rem*rem;
        num/=10;
    }
    if(originalNum == res){
        printf("Yes");
    }else{
        printf("No");
    }
    
    return 0;
}