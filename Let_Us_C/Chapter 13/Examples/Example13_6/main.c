#include <stdio.h>

int main()
{
    int max,*p;
    printf("Enter array size\n");
    scanf("%d",&max);
    p=(int*)malloc(max * sizeof(int));
    for(int i=0;i<=5;i++)
    {
        p[i]=i*i;
        printf("%d\n",p[i]);
    }
    return 0;
}
