#include <stdio.h>

int main()
{
    float length,breadth;
    printf("Enter the length and breadth\n");
    scanf("%f%f", &length,&breadth);

    float area = length*breadth;
    float permtr = 2*(length+breadth);

    if(area>permtr)
    {
        printf("The area is greater than the perimeter\n");
    }
    else
    {
        if(area<permtr)
            printf("The area is smaller than the perimeter\n");
    }
    return 0;
}
