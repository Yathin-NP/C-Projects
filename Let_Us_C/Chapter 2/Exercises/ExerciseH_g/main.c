#include <stdio.h>
#include <math.h>.h>
#define Pi 3.142
int main()
{
    float degree;
    printf("Enter the angle in degrees\n");
    scanf("%f", &degree);
    float ratios = degree*(Pi/180);
    printf("Ratio of sin(%f) is %f\n", degree, sin(ratios));
    printf("Ratio of cos(%f) is %f\n", degree, cos(ratios));
    printf("Ratio of tan(%f) is %f\n", degree, tan(ratios));
    printf("Ratio of cosec(%f) is %f\n", degree, 1/sin(ratios));
    printf("Ratio of sec(%f) is %f\n", degree, 1/cos(ratios));
    printf("Ratio of cot(%f) is %f\n", degree, 1/tan(ratios));
    return 0;
}
