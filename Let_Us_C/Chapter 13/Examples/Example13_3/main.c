#include <stdio.h>

int main()
{
    int i=3,*x;
    float j=1.5,*y;
    char k='t',*z;
    printf("value of i=%d\n",i);
    printf("value of j=%f\n",j);
    printf("value of k=%c\n",k);
    x=&i;y=&j;z=&k;
    printf("Original address in x=%u\n",x);
    printf("Original address in y=%u\n",y);
    printf("Original address in z=%u\n",z);
    x++,y++,z++;
    printf("New address in x=%u\n",x);
    printf("New address in y=%u\n",y);
    printf("New address in z=%u\n",z);


    return 0;
}
