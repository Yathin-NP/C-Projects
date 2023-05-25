#include <stdio.h>
#include <math.h>
void func(int *,float* ,float*);
int main()
{

    int sum;
    float avg,stdev;

    func(&sum,&avg,&stdev);
    printf("Sum = %d\n",sum);
    printf("average = %f\n",avg);
    printf("Standard deviation = %f\n",stdev);


    return 0;
}

void func(int *sum,float *avg,float *stdev)
{
    int a,b,c,d,e;
    printf("Enter the numbes\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    *sum=a+b+c+d+e;
    *avg=*sum/5;
    *stdev=sqrt(pow((a-*avg),2.0)+pow((b-*avg),2.0)+pow((c-*avg),2.0)+pow((d-*avg),2.0)
                  +pow((e-*avg),2.0))/4;

}
