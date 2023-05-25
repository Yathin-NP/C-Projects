#include"stdio.h"
#define PI 3.14
#define INTEL
#define TEST 57
int main()
{

    float r=24.25,area;
    area=PI*r*r;
    printf("Area of circle is %f\n",area);



#ifdef INTEL
printf("Code suitable for Intel PC\n");
#else
printf("Code suitable for Motorola PC\n");
#endif
printf("Code common to both the computers\n");



#if TEST<=5
printf("Statement test is executed\n");
#else
printf("Statement test is not executed\n");
#endif
printf("None of the statement executed\n");


return 0;
}







