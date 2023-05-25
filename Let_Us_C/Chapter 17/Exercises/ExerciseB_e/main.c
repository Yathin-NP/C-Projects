#include <stdio.h>
#include <string.h>
struct time{
    int date;char month[15];int year;
};
int func(struct time *,int,char[],int);
int main()
{
    struct time t;
    int date1,year1;
    char month1[15];
    printf("Enter date,month and year\n");
    scanf("%d %s %d",&t.date,t.month,&t.year);

    printf("Enter the date to be compared\n");
    scanf("%d %s %d",&date1,month1,&year1);

    int value=func(&t,date1,month1,year1);
    if(value==0)
        printf("Dates are equal\n");
    else
        printf("Not equal\n");
    return 0;
}

int func(struct time *t,int date1,char month1[],int year1)
{
    int cmp;
    cmp=strcmp(month1,t->month);
    if(cmp==0&&date1==t->date&&year1==t->year)
    {
        return 0;
    }
    else
        return 1;
}
