#include <stdio.h>
#include <string.h>
union Employee
{
    int id;        //4
    char name[16]; //16
    float salary;  //4
};
//. => dot operator or structure member operator
union Employee e1, e2, e3;
int main()
{
    // printf("%d \n",sizeof(e1));
    e1.id = 123;
    e1.salary = 145.98;
    printf("%f \n",e1.salary);
    printf("%d \n",e1.id);

    return 0;
}
