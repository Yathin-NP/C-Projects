#include <stdio.h>
void roman(int year);
int main()
{
    int y;
    printf("Enter the year\n");
    scanf("%d",&y);
    roman(y);

    return 0;
}

void roman(int y)
{
    int  thousand,fivehundred,fifty,ten,five,one,h;

    thousand = y/1000;
    y=y%1000;

    fivehundred = y/500;
    y = y % 500;

    h = y / 100;
    y = y % 100;

    fifty = y/50;
    y = y % 50;

    ten = y / 10;
    y = y % 10;

    five = y / 5;
    y = y % 5;

    one = y / 1;
    y = y % 1;

    while(thousand!=0)
    {
        printf("m");
        thousand--;
    }

    while(fivehundred!=0)
    {
        printf("d");
        fivehundred--;
    }

    while(h !=0 )
    {
        printf("c");
        h--;
    }

    while(fifty != 0)
    {
        printf("l");
        fifty--;
    }

    while(ten != 0)
    {
        printf("x");
        ten--;
    }

    while(five != 0)
    {
        printf("v");
        five--;
    }

    while(one != 0)
    {
        printf("I");
        one--;
    }

    printf("\n");
}

