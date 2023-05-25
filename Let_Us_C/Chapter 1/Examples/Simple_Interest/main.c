#include <stdio.h>

int main()
{
    int p,n;
    float r,si;
    /* Intializing the Variables*/
    p = 1000;
    n = 3;
    r = 8.5;
    printf("Principle amount : %d\n", p);
    /*Formula for simple interest
    is given below*/
    si = p*n*r/100;
    printf("Simple Interest = Rs%f\n",si);

    return 0;
}
