#include <stdio.h>
#include <math.h>
int main()
{
    float a,p,q,r,n;

    for(int i=1;i<=10;i++)
    {
        printf("Enter the values of p,r,n,q\n");
        scanf("%f%f%f%f",&p,&r,&n,&q);

        a=p*pow(1+r/q,n*q);
        printf("The Corresponding value of amount is %f\n",a);m
    }

    return 0;
}
