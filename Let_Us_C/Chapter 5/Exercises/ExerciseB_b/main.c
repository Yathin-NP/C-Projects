#include <stdio.h>

int main()
{
    long int num;
    long int sum=1;
    printf("Enter the value of num\n");
    scanf("%ld",&num);

    while(num!=0)
    {
        sum=sum*num;
        num--;
    }
    printf("The factorial of a number is %ld\n",sum);
    return 0;
}
