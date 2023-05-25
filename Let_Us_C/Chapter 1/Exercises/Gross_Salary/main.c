#include <stdio.h>

int main()
{
    float salary;
    printf("Enter the basic Salary\n:");
    scanf("%f", &salary );

    float da = 0.4 * salary;
    printf("Dearness Allowance %0.2f\n:", da);

    float hr =0.2 * salary;
    printf("House rent Allowance %0.2f\n:", hr);


    float gross = salary+da+hr;
    printf("Gross salary is %0.2f\n:", gross);
    return 0;
}
