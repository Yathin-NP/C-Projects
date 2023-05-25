#include <stdio.h>
int non_rec(int);
int rec();
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("%d\n",non_rec(num));
    printf("%d\n",rec(num));


    return 0;
}

int non_rec(int n)
{
    int rem=0;
    while(n>0)
    {
        rem=rem+n%10;
        n=n/10;
    }
    return rem;
}

int rec(int n)
{
    int rem=0;
    while(n>0)
    {
        rem=rem+n%10;
        n=n/10;
        rec(n);
    }
    return rem;
}




