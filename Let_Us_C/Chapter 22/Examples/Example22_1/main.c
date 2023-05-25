#include <stdio.h>
#include<string.h>
int main()
{
    enum department
    {
        assembly,manufacturing,accounts,stores
    };
    struct employee
    {
        char name[30];int age;float bs;
        enum department dept;
    };
    struct employee e;

    strcpy(e.name,"yathin");
    e.age=22;
    e.bs=20000.32;
    e.dept=manufacturing;

    printf("Name=%s\n",e.name);
    printf("Age=%d\n",e.age);
    printf("Basic Salary=%f\n",e.bs);
    printf("Department=%d\n",e.dept);

    if(e.dept==accounts)
        printf("%s is an accountant\n",e.name);
    else
        printf("%s is not an accountant\n",e.name);
    return 0;
}
