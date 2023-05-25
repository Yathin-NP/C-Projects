#include <stdio.h>

int main()
{
    float cp,sp,total;
    printf("Enter the Cost and Selling price\n");
    scanf("%f%f",&cp,&sp);


    if(sp>cp)
    {
        total = sp-cp;
        printf("The seller has made a profit of %f\n", total);
    }
    else if(cp>sp)
    {
        total=cp-sp;
        printf("The seller has a loss of %f\n", total);
    }

    return 0;
}
