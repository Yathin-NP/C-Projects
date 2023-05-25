#include <stdio.h>
#include <math.h>
int main()
{
    float x,sum=0.0;
    printf("Enter the value of x\n");
    scanf("%f",&x);

    sum=(x-1)/x;

    for(int i=2;i<=7;i++)
    {
        sum=sum+0.5*pow((x-1)/x,i);
    }
    printf("The Sum of series is %f\n",sum);

    return 0;
}
