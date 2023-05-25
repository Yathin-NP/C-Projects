#include <stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter the number\n");
    scanf("%d", &num);

    for(int i=1;i<=5;i++)
    {
        sum+=num%10;
        num=num/10;

    }
    printf("The sum of digits is %d\n", sum);

    return 0;
}
