#include <stdio.h>

int main()
{

    float dem=1.0;
    float res,sum=0;
    for(int i=1;i<=7;i++)
    {
        dem=1.0;

        for(int j=i;j>=1;j--)
        {
             dem*=j;

        }
        res=(i/dem);
        sum=sum+res;

    }
    printf("The sum of 7 terms is %f\n",sum);


    return 0;
}
