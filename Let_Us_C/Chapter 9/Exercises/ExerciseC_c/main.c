#include <stdio.h>
void shift(int* ,int* ,int* );
int main()
{
    int a,b,c;
    printf("Enter the values of x,y and z\n");
    scanf("%d %d %d",&a,&b,&c);

    printf("x=%d, y=%d, z=%d\n",a,b,c);
    shift(&a,&b,&c);

    printf("x=%d, y=%d, z=%d\n",a,b,c);

    return 0;
}

void shift(int *x,int *y,int *z)
{
    int temp;
    temp=*x;
    *x=*z;
    *z=*y;
    *y=temp;
}
