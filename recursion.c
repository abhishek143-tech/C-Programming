/* 
fact(5)=5*4*3*2*1 = 120
0!= 1
1! = 1
fact(5) = return 5 * fact(4) = 120
                |
                |
                return 4 * fact(3) = 24
                        |
                        |
                         return  3 * fact(2) = 6
                                        |
                                        | 
                                        return 2 *fact(1)= 2
*/
#include<stdio.h>
int fact(int num){
    if(num==0 || num==1){
        return 1;
    }
    return num * fact(num-1);
}
int main(){
    int num1;
    printf("Enter a number \n");
    scanf("%d",&num1);
    printf("The factorial of %d is %d \n",num1,fact(num1));
    return 0;
}