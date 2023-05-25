#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int ar1[n];
    int ar2[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar1[i]);
    }

    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        ar2[j]=ar1[i];
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",ar2[i]);
    }


    return 0;
}
