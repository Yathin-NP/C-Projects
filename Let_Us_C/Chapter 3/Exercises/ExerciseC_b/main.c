#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("The number %d is Even\n",num);
    }
    else
    {
        printf("the number %d is Odd\n", num);
    }

    return 0;
}
