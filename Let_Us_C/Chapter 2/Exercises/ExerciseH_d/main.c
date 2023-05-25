#include <stdio.h>

int main()
{
    float x,y,r;
    float phi;
    printf("Enter the cartesian co-ordinates\n");
    scanf("%f%f",&x,&y);

    r = sqrt(pow(x,2)+pow(y,2));
    phi = atan(y/x);
    printf("The Polar co-ordinates are %f\n", r);
    printf("The Polar co-ordinates are %f\n ", phi);
    return 0;
}
