#include <stdio.h>

int main()
{
    float dist;
    printf("Enter the distance between two cities in Km\n");
    scanf("%f", &dist);
    float m = dist*1000;
    printf("Distance in metres %f\n",m);
    float f = dist*3280.84;
    printf("Distance in feet %f\n",f);
    float i = dist*39370.1;
    printf("Distance in Inches %f\n", i);
    float c = dist*100000;
    printf("Distance in Centimetres %f\n", c);
    return 0;
}
