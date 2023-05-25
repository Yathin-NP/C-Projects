#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);

    printf("%d\n",power(a,b));

    return 0;
}

int power(int a, int b)
{
    int res=pow(a,b) ;
    return res;
}
