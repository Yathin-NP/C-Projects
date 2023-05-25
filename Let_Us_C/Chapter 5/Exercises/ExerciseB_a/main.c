#include <stdio.h>

int main()
{
    float hour,pay;
    int emp=1;

    while(emp<=10)
    {

        printf("Enter the number of hours worked by emp %d\n",emp);
        scanf("%f",&hour);

        if(hour>40)
        {
             pay=hour*12.00;
             emp++;
        }
        printf("Overtime pay of emp is %f\n",pay);
        pay=0;
    }
    return 0;
}
