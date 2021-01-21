 #include<stdio.h>
 #include<string.h>
 int main(){
     char name[] = "maddy";
    //  printf("The length of string is %d \n",strlen(name));
    //  printf("The length of string is %d \n",strlen("pranav"));

    // char name1[6]; 
    // strcpy(name1,name); //destination , source
    // printf("%s \n",name1);
    // printf("%s \n",name);

    char name1[] = "maddy";
    // printf("%s \n",strcat(name,name1));

    printf("%d \n",strcmp(name1,name));

     return 0;
 }