#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the two values\n");
    scanf("%d%d",&num1,&num2);

    int value=pow(num1,num2);
    printf("The value is %f\n", value);
    return 0;
}
