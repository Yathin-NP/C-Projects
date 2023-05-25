#include <stdio.h>
int main()
{
    char ISNB[20];
    int sum=0,digit=0,a=0;
    printf("Enter the frist 9 digits of an ISNB: \n");
    gets(ISNB);

    for(int i=0;i<9;i++)
    {
        a =  ISNB[i] - 48;
        printf("%d\n",a);
        sum = sum + ((i+1)*a);
    }
    digit = sum % 11;
    if(digit==10)
    {
        ISNB[9] = 'X' ;
    }
    else
    {
        ISNB[9] = digit+48 ;
    }
    for(int i=0;i<=9;i++)
    {
        printf("%c",ISNB[i]);
    }

    printf("\n");


    return 0;

}
