#include <stdio.h>
#include<math.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the sides of a triangle\n");
    scanf("%d%d%d",&s1,&s2,&s3);

    int side1=pow(s1,2);
    int side2=pow(s2,2);
    int side3=pow(s3,2);

    if(s1==s2&&s2==s3&s1==s3)
        printf("Triangle is equilateral\n");
    else if(s1==s2||s2==s3||s1==s3)
        printf("Triangle is Isosceless\n");
    else if(side1+side2==side3)
        printf("Triangle is right angled triangle\n");
    else
        printf("Triangle is Scalene\n");
 return 0;
}
