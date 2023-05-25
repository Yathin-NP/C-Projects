#include <stdio.h>
#include<math.h>
int main()
{
    int x,y,radius,value,dis;
    printf("Enter the co-ordinates and radius of a circle\n");
    scanf("%d%d%d", &x,&y,&radius);
    dis=pow(x,2)+pow(y,2);
    value=pow(radius,2);

    if(dis==value)
    {
        printf("The points %d and %d lie on the circle\n",x,y);
    }
    else
    {
        if(dis<value)
        {
            printf("The points %d and %d lie inside the circle\n",x ,y);
        }
        else
            printf("The points %d and %d lie outside on the circle\n", x,y);
    }
    return 0;
}
