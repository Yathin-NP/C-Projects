#include <stdio.h>

int main()
{
    int cy,yoj,yos,bonus;
    printf("Enter the current year and year of joining\n");
    scanf("%d%d",&cy,&yoj);

    yos=cy-yoj;
    if(yos>3)
    {
        bonus=2500;
        printf("Bonus=%d\n", bonus);
    }

    return 0;
}
