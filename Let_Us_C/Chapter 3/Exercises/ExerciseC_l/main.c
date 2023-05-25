#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the points\n");
    scanf("%d%d",&x,&y);

    if(x==0&&y==0)
    {
        printf("The point lies on the origin\n");
    }
    if(x==0&&y!=0)
    {
        printf("The point lies on Y-axis\n");
    }
    if(y==0&&x!=0)
    {
        printf("The point lies on X-axis\n");
    }


    return 0;
}
