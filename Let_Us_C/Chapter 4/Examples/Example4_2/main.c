#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    float percent;

    printf("Enter the subject marks\n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    percent=(s1+s2+s3+s4+s5)*500/100;
    if(percent>=60)
    {
        printf("First division\n");
    }
    if(percent>=50&&percent<60)
    {
        printf("Second division\n");
    }
    if(percent>=40&&percent<50)
    {
        printf("Third division\n");
    }
    else
    {
        if(percent<40)
        {
            printf("Fail\n");
        }
    }
 return 0;
}
