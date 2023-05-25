#include <stdio.h>
#include<math.h>
int main()
{
    int num,range,max=0,min=__INT_MAX__;

    printf("Enter the range\n");
    scanf("%d",&range);

    while(range!=0)
    {
        printf("Enter the set of numbers\n");
        scanf("%d",&num);

        if(num>max)
        {
            max=num;

        }
        else if(num<min)
        {
            min=num;

        }
        range--;
    }
    int res= (max-min);
    printf("The Range is %d\n",res);

    return 0;
}
