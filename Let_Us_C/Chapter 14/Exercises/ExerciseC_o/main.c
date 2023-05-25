#include <stdio.h>
#include<math.h>

int main()
{
    float sum_xy=0,sum_y=0,sum_x=0,sum_xx=0,sum_xxx=0;
    float n=10;
    float x[10]={3.0,4.5,5.5,6.5,7.5,8.5,8.0,9.0,10.0};
    float y[10]={1.5,2.0,3.5,5.0,6.0,7.5,9.0,10.5,12.0,14.0};
    for(int i=0;i<10;i++)
    {
        sum_xy=sum_xy+x[i]*y[i];
        sum_x=sum_x+x[i];
        sum_y=sum_y+y[i];
        sum_xx=sum_xx+pow(x[i],2);
        sum_xxx=sum_xxx+pow(sum_x,2);
    }
    float b=11*(sum_xy-sum_x*sum_y)/(sqrt(11)*sum_xx-(sum_xxx));
    float a=(sum_y/n)-b*(sum_x/n);
    printf("straight line is y=%f + %fx\n",a,b);
    return 0;

}






