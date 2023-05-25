#include <stdio.h>

int main()
{
    int count=0;
    int n=4,i,j,k;

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=(n-i);k++)
        {
            printf(" ");
        }
        for( j=1;j<=i;j++)
        {
            count=count+1;
           printf("%d ",count);

        }

        printf("\n");
    }

    return 0;
}
