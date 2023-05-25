#include <stdio.h>
#define PI 3.1416
int main()
{
    int length,breadth,radius;
    printf("Enter the length of Rectangle:\n ");
    scanf("%d", &length);
    printf("Enter the Breadth of Rectangle:\n ");
    scanf("%d", &breadth);
    printf("Enter the radius of Circle:\n ");
    scanf("%d", &radius);

    float rect_area = length*breadth;
    printf("The area of rectangle is %f\n", rect_area);
    float rect_perimtr = 2*(length+breadth);
    printf("The perimeter of rectangle is %f\n", rect_perimtr);

    float cir_area = PI*radius*radius;
    printf("The area of circle is %f\n", cir_area);
    float cir_perimtr = 2*(PI)*radius;
    printf("The perimeter of circle is %f\n", cir_perimtr);
    return 0;

}
