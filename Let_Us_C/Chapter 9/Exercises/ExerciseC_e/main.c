#include <stdio.h>
#include <math.h>
void find_area(int*,int*,int*,float*);
int main()
{
    float area;
    int a,b,c;
    printf("Enter the sides of a triangle\n");
    scanf("%d %d %d",&a,&b,&c);

    find_area(&a,&b,&c,&area);
    printf("The area of triangle is %f\n",area);
    return 0;
}

void find_area(int *a,int *b,int *c,float *area)
{

    float s = (*a+*b+*c)/2.0;
    *area = sqrt(s*(s-*a)*(s-*b)*(s-*c));


}
