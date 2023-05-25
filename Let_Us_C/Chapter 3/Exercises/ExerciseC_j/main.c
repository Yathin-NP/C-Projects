#include <stdio.h>

int main()
{
    int x1,x2,x3,y1,y2,y3,value;
    printf("Enter the points of a straight line\n");
    scanf("%d%d", &x1,&y1);
    scanf("%d%d", &x2,&y2);
    scanf("%d%d", &x3,&y3);

    value=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if(value==0)
    {
        printf("All three points fall on a straight line\n");
    }
    else
    {
        printf("All three points don't fall on a straight line\n");
    }


    return 0;
}
