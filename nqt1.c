#include<stdio.h>

int main(){
    char a[25];
    scanf("%s",&a);

    for(int i=0;a[i]!='\0';i++){
        a[i] = 97+122-a[i];
    }
    printf("%s",a);
    return 0;
}