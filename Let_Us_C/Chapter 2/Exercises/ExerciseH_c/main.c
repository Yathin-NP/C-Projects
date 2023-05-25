#include <stdio.h>

int main()
{
    int a,b,c;
    float sm_permtr,area;
    printf("Enter the sides of a Triangle\n");
    scanf("%d %d %d", &a,&b,&c);

    sm_permtr = (a+b+c)/2;
    area = sqrt((sm_permtr)*(sm_permtr-a)*(sm_permtr-b)*(sm_permtr-c));
    printf("The area of triangle is %f\n", area);
    return 0;
}
