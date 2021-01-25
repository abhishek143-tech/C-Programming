// #include <stdio.h>

// int main()
// {
//     // typedef [previouse name] [alias-name];
//     typedef float f;
//     f a = 1.6;
//     float b = 12.6;
//     printf("%f \n", a);
//     printf("%f \n", b);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// typedef struct Employee
// {
//     int id;
//     char favchar;
//     char name[50];
//     float salary;
// }em; //em is alias name for Employee
// //. => dot operator or structure member operator
// // struct Employee e1, e2, e3;
// em e1, e2, e3;
// int main()
// {
//     e1.favchar = 'a';
//     e1.id = 101;
//     strcpy(e2.name, "abhishek"); // destination , source
//     strcpy(e1.name, "maddy");    // destination , source
//     strcpy(e3.name, "abhay");    // destination , source
//     e1.salary = 103.4;
//     e3.salary = 378.00;
//     // printf("The salary is %f \n", e3.salary);
//     printf("%s \n", e2.name);
//     printf("%s \n", e1.name);
//     printf("%s \n", e3.name);
//     return 0;
// }
#include<stdio.h>

int main(){
    int x,y,z;
    // int *a,b,c;
    typedef int * intptr; //typedef previous name alias name
    intptr a,b,c;
    a=&x;
    b=&y;
    c=&z;
    
    return 0;
}