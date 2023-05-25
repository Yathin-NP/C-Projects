#include <stdio.h>

int main()
{
    int sum=0,avg;
    int marks[30];

    for(int i=0;i<=30;i++)
    {
        printf("Enter marks\n")   ;
        scanf("%d",&marks[i]);
    }

    for(int i=0;i<=29;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/30;
    printf("Average marks=%d\n",avg);

    return 0;
}
