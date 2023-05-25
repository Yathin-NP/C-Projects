#include <stdio.h>
#include <stdlib.h>
int main()
{
    int option,n=0;
    int num,count=0;
    while(n<1)
    {
        printf("Enter the option\n");
        scanf("%d",&option);
        switch (option) {
        case 1:
            printf("Enter the number for factorial\n");
            scanf("%d",&num);
            int f=1;
            for(int i=num;i>=1;i--)
            {
                f*=i;
            }
            printf("The factorial of a number is %d\n",f);
            continue;
            break;

        case 2:
            printf("Enter the number for prime numbers\n");
            scanf("%d",&num);
            for(int i=2;i<=num-1;i++)
            {
                if(num%i==0)
                    count++;
            }
                if(count>0)
                    printf("Not a Prime Number\n");
                else if(count==0)
                    printf("Prime Number\n");

            break;
        case 3:
            printf("Enter the num for Odd or Even\n");
            scanf("%d",&num);
            if(num%2==0)
                printf("Even number\n");
            else
                printf("Odd Number\n");
            break;
        case 4:
            exit(0);
        default:
            printf("None of the case executed\n");
        }
    }
 return 0;
}










