#include <stdio.h>
int fact(int);
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);

    int rec_fact=fact(a);
    printf("The factorial of %d is %d\n",a,rec_fact);
    return 0;
}

int fact(int num)
{
    int f;
    if(num==1)
        return 1;
    else
        f=num*fact(num-1);
    return f;

}
