#include <stdio.h>
struct employee{
    int emp_code;char name[10];int doj;
};
int main()
{
    int n,iterate,c_year;
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    struct employee e[n];
    for(iterate=0;iterate<n;iterate++)
    {
        printf("Enter the name of employee %d\n",iterate+1);
        scanf("%s",e[iterate].name);

        printf("Enter the employee %d code\n",iterate+1);
        scanf("%d",&e[iterate].emp_code);

        printf("Enter employee %d date of joining\n",iterate+1);
        scanf("%d",&e[iterate].doj);
    }

    printf("Enter the current year\n");
    scanf("%d",&c_year);

    for(iterate=0;iterate<n;iterate++)
    {
        if(c_year-e[iterate].doj >= 3)
        {
            printf("Name of employee: %s\n Tenure: %d years\n",e[iterate].name,c_year-e[iterate].doj);
        }
    }
    return 0;
}



