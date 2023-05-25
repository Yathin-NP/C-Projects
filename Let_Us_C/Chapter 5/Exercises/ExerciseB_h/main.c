#include <stdio.h>
int main()
{
    int a,r,temp=0,s=0,rev=0,i=1;

    printf("Enter the number:\n");
    scanf("%d",&a);

    while(a!=0)
    {
        temp = a/8;
        s = a%8;
        rev = rev + s * i;
        a = temp;
        i= i * 10;
    }

    printf("%d\n",rev);
    return 0;
}
