#include <stdio.h>

int main()
{
    int num,size,pos=0,neg=0,zero=0;
    printf("Enter the size\n: ");
    scanf("%d",&size);
    printf("Enter the numbers of size %d\n",size);

    while(size)
    {
        scanf("%d",&num);
        if(num>0)
            pos++;
        else if(num<0)
            neg++;
        else
            zero++;
        size--;
    }

    printf("Positive num=%d\n ",pos);
    printf("Negative num=%d\n ",neg);
    printf("zero's =%d\n ",zero);
    return 0;
}
