#include <stdio.h>

int main()
{
    int num,temp,rev=0,rem;
    printf("Enter the number\n");
    scanf("%d",&num);
    temp=num;

    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    if(rev==temp)
    {
        printf("Original and Reversed numbers are equal\n");
    }
    else
    {
        printf("Original and Reversed numbers are not equal\n");
    }

    return 0;
}

