//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    struct employee
//    {
//        char name[10];int age;float salary;
//    };
//    struct employee e1={"yathin",30,5534.23};
//    struct employee e2,e3;

//    strcpy(e2.name,e1.name);
//    e2.age=e1.age;
//    e2.salary=e1.salary;

//    e3=e2;
//    printf("%s %d %f\n",e1.name,e1.age,e1.salary);
//    printf("%s %d %f\n",e2.name,e2.age,e2.salary);
//    printf("%s %d %f\n",e3.name,e3.age,e3.salary);
//    return 0;
//}
#include<stdio.h>
int main()
{

    struct address{
        char phone[15];char city[25];int pin;
    };
    struct emp{
        char name[25];
        struct address a;
        };

    struct emp e={"yathin","353252","Kodagu",201};
        printf("name=%s phone=%s\n", e.name,e.a.phone);
    printf("city=%s pin=%d\n", e.a.city, e.a.pin);
}















