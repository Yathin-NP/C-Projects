#include <stdio.h>

int main()
{
    int num,mul;
    printf("Enter the number\n");
    scanf("%d",&num);

    for(int i=1;i<=10;i++)
    {
        mul=num*i;
        printf("%d * %d = %d\n",num,i,mul);
    }
    return 0;
}
