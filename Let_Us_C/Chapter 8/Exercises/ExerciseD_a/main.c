#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    fact(num);
    return 0;
}
int fact(int num)
{
    int f=1;
    for(int i=num;i>=1;i--)
    {
        f=f*i;
    }
    printf("The factorial of %d is %d\n",num,f);
}
