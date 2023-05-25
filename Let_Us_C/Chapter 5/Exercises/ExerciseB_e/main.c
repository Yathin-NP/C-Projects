#include <stdio.h>
#include <math.h>
int main()
{
    int num,rem,res=0,temp,size;
    printf("Enter the number\n");
    scanf("%d",&num);
    size=num;
    if(size>0&&size<10){
        size=1;}
    else if(size>100&&size<1000)
        size=3;
    else if(size>1000&&size<10000)
        size=4;
    else if(size>10000&&size<100000)
        size=5;

    temp=num;
    while(num!=0)
    {
        rem=num%10;
        res=res+pow(rem,size);
        num=num/10;
    }
    if(res==temp)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}
