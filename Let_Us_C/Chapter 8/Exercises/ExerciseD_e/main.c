#include <stdio.h>
prime_fact();
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    prime_fact(num);
    return 0;
}

 int prime_fact(int num)
{
    int prime;
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            prime=1;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    prime=0;
                    break;
                }
            }
            if(prime==1)
            {
                printf("%d is a prime factor\n",i);
            }
        }

    }

}
