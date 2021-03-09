#include<stdio.h>

int main(){
    int r;
    scanf("%d",&r);
    float area = 3.1415*r*r; //area
    if(r<20 || r>30){
        printf("Wrong Display Output");
    }else{
        printf("%.3f",area);
    }
    return 0;
}