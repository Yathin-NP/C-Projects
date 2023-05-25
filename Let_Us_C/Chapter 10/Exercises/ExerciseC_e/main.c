#include <stdio.h>
int natural(int);
int main()
{
    int num=25;
    natural(num);
    printf("%d\n",natural(num));

    return 0;
}

int natural(int n)
{
    int sum=0;
    if(n>=1)
    {
        sum=sum+n+natural(n-1);
    }
    return sum;
}
