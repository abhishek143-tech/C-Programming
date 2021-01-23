#include <stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char favchar;
    char name[50];
    float salary;
};
//. => dot operator or structure member operator
struct Employee e1,e2,e3;
int main()
{
    e1.favchar = 'a';
    e1.id = 101;
    strcpy(e2.name,"abhishek");// destination , source
    strcpy(e1.name,"maddy");// destination , source
    strcpy(e3.name,"abhay");// destination , source
    e1.salary = 103.4;
    e3.salary = 378.00;
    // printf("The salary is %f \n", e3.salary);
    printf("%s \n",e2.name);
    printf("%s \n",e1.name);
    printf("%s \n",e3.name);
    return 0;
}