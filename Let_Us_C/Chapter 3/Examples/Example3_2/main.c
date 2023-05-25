#include <stdio.h>

int main()
{
    int qnty,dis=0;
    float rate,total;
    printf("%d\n", dis);
    printf("Enter the quantity and rate of Item\n");
    scanf("%d%f",&qnty,&rate);

    if(qnty>1000)
    {
        dis = 10;
    }
    total = (qnty*rate)-(qnty*rate*dis/100);
    printf("The total expenses is %f\n", total);
    return 0;
}
