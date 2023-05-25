#include <stdio.h>

int main()
{
    int y;
    float x,i;


    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x+=0.5)
        {
            i=2+(y+0.5*x);
            printf("Value of i = %0.3f   x = %0.2f   y = %d\n",i,x,y);
        }
    }






    return 0;
}
