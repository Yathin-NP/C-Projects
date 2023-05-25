#include <stdio.h>
#include<areaperi.h>
int main()
{
    int a,b,c;
    float g,h,r;
    printf("Area of Triangle:\n");
    printf("Enter the values of g and h\n");
    scanf("%f %f",&g,&h);
    printf("Area of triangle is %f\n",AREA_T(g,h));
    printf("Perimeter of Triangle:\n");
    printf("Enter the values of a b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Perimeter of triangle is %d\n",PERI_T(a,b,c));

    printf("Area of Square:\n");
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Area of Square is %d\n",AREA_S(a));
    printf("Perimeter of Square:\n");
    printf("Perimeter of Square is %d\n",PERI_S(a));

    printf("Area of Circle:\n");
    printf("Enter the value of r\n");
    scanf("%f",&r);
    printf("Area of Circle is %f\n",AREA_C(r));
    printf("Perimeter of Circle:\n");
    printf("Perimeter of circle is %f\n",PERI_C(r));


    return 0;
}
