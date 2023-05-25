#include <stdio.h>
int main()
{
    char cridet[16];
    printf("Enter 16 digit credir card number: \n");
    gets(cridet);
    int a,b,sum=0,sum2=0;

    for(int i=0;i<16;i=i+2)
    {
        a = cridet[i]-48;
        a = a*2;
        if(a>=10)
        {
            a = a-9;
        }
        sum = sum + a;

        b = cridet[i+1]-48;

        sum2 = sum2 + b;
    }

    if(sum=38 && sum2==42)
    {
        printf("The credit card is valid\n\n");
    }else{
        printf("Card number is Invalid!!!\n\n");
    }

    return 0;
}
