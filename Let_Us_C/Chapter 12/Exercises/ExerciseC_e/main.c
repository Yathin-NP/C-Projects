#include <stdio.h>
#include<interest.h>
int main()
{
    int p,n;
    float r;

    printf("Enter the values of p,n,r\n");
    scanf("%d %f %d",&p,&r,&n);

    printf("Simple Interest is %f\n",SI(p,r,n));
    printf("Amount is %f\n",AMOUNT(p,r,n));
    return 0;
}
