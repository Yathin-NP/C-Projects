#include <stdio.h>

int main()
{
//    Method 1
    int s1,s2,s3,s4,s5;
    float percent;
    printf("Enter the Subject of the students\n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    percent=(float)(s1+s2+s3+s4+s5)*100/500;
    if(percent>=60)
    {
        printf("First division with %f\n", percent);

    }
    else
    {
        if(percent>=50)
        {
            printf("Second division with %f\n", percent);
        }
        else
        {
            if(percent>=40)
            {
                printf("Third division\n");
            }
            else
            {
                printf("Fail\n");
            }
        }
    }

 return 0;
}
