#include <stdio.h>
#include <math.h>
int main()
{
    int arr[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    int size=15;
    int row;
    float x_mean=0,std_deviation;
    for(row=0;row<size;row++)
    {
        x_mean=x_mean+arr[row];
    }
    x_mean=x_mean/size;
    printf("The mean is %f\n",x_mean);
    for(row=0;row<size;row++)
    {
        std_deviation=sqrt(pow(arr[row]-x_mean,2))/size;
    }

    printf("The standard deviation is %f\n",std_deviation);


    return 0;
}
