#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);

    int res=leap(year);
    if(res==1)
        printf("Leap year\n");
    else
        printf("Not a Leap year\n");

    return 0;
}


int leap(int year)
{
    if(year%4==0&&year/100!=0)
        return 1;
    else
        return 0;
}
