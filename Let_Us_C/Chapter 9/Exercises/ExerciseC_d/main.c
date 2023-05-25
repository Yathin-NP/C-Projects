#include <stdio.h>
#include <math.h>
void print_series(float*,float *);
int fact(int);
int main()
{
    int x;
    float res=0;
    printf("Enter the value of x\n");
    scanf("%d",&x);

    float radian= x * 3.14/180;
    print_series(&radian,&res);

    printf("The value of the series is %f\n",res);


    return 0;
}

void print_series(float *num,float *series )
{
    int n=1,s=1;
    for(int count=1;n<=10;count+2)
    {
        *series += s*(pow(*num,count)/fact(count));
        printf("%f\n",*series);
        n=n+1;
        s=s*-1;
    }
}

int fact(int num)
{
    int f=1;
    while(num!=0)
    {
        f=f*num;
        num--;
    }
    return f;

}






