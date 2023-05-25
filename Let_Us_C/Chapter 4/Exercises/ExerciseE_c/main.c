#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    (a>b&&a>c)?printf("a=%d\n",a):(b>c&&b>a)?printf("b=%d\n",b):(c>a&&c>b)?printf("c=%d\n",c):printf("None of the number is greater\n");
    return 0;
}
