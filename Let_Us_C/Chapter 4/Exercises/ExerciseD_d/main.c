#include <stdio.h>
#include<math.h>
int main()
{
    int s1,s2,s3,max1,max2;
    printf("Enter the sides of a triangle\n");
    scanf("%d%d%d", &s1,&s2,&s3);

    max1=fmax(s1,s2);
    max2=fmax(max1,s3);

    if(s1+s2>max2||s2+s3>max2||s1+s3>max2)
    {
        printf("Triangle is valid\n");
    }
    else
        printf("Triangle is not valid\n");
    return 0;
}
