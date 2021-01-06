#include<stdio.h>

int main(){
    int a=10,b=10;
    a=b; //a=10;
    printf("%d \n",b);
    printf("%d \n",a);

    a+=b; // a=a+b
    printf("%d \n",a);

    a-=b; // a=a-b
    printf("%d \n",a);

    a*=b; // a=a*b
    printf("%d \n",a);

    a/=b; // a=a/b
    printf("%d \n",a);
   
    a%=b; // a=a%b
    printf("%d \n",a);

    return 0;
}