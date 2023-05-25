#include <stdio.h>
#include <math.h>
int main()
{
    float angle;
    printf("Enter the angle\n");
    scanf("%f",&angle);

    float num=(pow(sin(angle),2)+pow(cos(angle),2));
    printf("%f\n",num);

    if(num==1)
        printf("Yes the sum is 1\n");
    else
        printf("Not 1\n");

    return 0;
}
