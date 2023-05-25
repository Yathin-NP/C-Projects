#include <stdio.h>

int main()
{
    int height=1189,weight=841,temp,n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        temp=weight;
        weight=height/2;
        height=temp;
        printf("A(%d) is %d * %d\n",i,height, weight );
    }

    return 0;
}
