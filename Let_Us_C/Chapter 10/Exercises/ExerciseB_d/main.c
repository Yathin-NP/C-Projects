#include <stdio.h>
int binary(int);
void binary_rec(int);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    binary(num);
    binary_rec(num);
    printf("%d\n",binary(num));

    return 0;
}

int binary(int n)
{
    int rem,res=0,p=1;
    while(n)
    {
        rem=n%2;
        n=n/2;
        res=res+(rem*p);
        p=p*10;
    }
    return res;
}


void binary_rec(int n)
{
    if(n==0)
    {
        return;
    }
    binary_rec(n/2);
    printf("%d\n",n%2);


}
