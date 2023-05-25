#include <stdio.h>
void display1(int);
void display2(int*);
int main()
{
    int marks[]={55,65,75,56,78,78,90};
    for(int i=0;i<=6;i++)
    {
        display1(marks[i]);
    }

    for(int i=0;i<=6;i++)
    {
        display2(&marks[i]);
    }
    return 0;
}

void display1(int m)
{
    printf("%d\n",m);
}

void display2(int *n)
{
    printf("%d\n",*n);
}




