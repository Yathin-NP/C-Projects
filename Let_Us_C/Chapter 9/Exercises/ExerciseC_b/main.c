#include <stdio.h>

void sub_marks(float* ,float*);
int main()
{
    float avg,percent;
    sub_marks(&avg,&percent);
    printf("The average is %f\n",avg);
    printf("The percentage is %f\n",percent);
    return 0;
}

void sub_marks(float *avg,float *percent)
{
    int s1,s2,s3;
    printf("Enter the subjects\n");
    scanf("%d %d %d",&s1,&s2,&s3);

//    int sum=s1+s2+s3;
    *avg=(s1+s2+s3)/3;
    *percent=((s1+s2+s3)/300.0)*100 ;

}
