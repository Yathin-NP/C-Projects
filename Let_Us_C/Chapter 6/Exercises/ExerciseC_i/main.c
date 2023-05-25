#include <stdio.h>

int main()
{
    int pop=100000;
    float ipop=0.0;
    for(int i=1;i<=10;i++)
    {
        ipop=ipop+((pop*0.1)+pop);
        printf("The population of Year %d is %0.2f\n",i,ipop);

    }
    return 0;
}
