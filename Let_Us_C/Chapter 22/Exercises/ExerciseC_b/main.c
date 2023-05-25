#include <stdio.h>
#include <string.h>

int main()
{
    enum sex
    {
        male, female
    };
    enum level
    {
        major, minor
    };
    struct people
    {
        enum sex gender;
        enum level age_level;
        char policy_name[10];
        unsigned int duration_in_year;
    } ;
    struct people p[2];
    int i,ip;
    for (i = 0; i < 2; i++)
    {
        printf("\nEnter the gender for male press 0 and for female press 1 : ");
        scanf("%d", &ip);
        if(ip == 1)
        {
            p[i].gender = female;
        }
        else
        {
            p[i].gender = male;
        }

        printf("\nEnter the age status for major press 0 and for minor press 1: ");
        scanf("%d", &ip);
        if(ip == 1)
        {
            p[i].age_level = minor;
        }
        else
        {
            p[i].age_level = major;
        }
        char name[10];
        printf("\nEnter name of the customer : ");
        scanf("%s",name);
        strcpy(p[i].policy_name,name);
        printf("\nEnter the duration (in years) : ");
        scanf("%d", &p[i].duration_in_year);
    }

    for (i = 0; i < 2; i++)
    {
        printf("\n%d\t%d", p[i].gender, p[i].age_level);
        printf("\t%s\t%d", p[i].policy_name, p[i].duration_in_year);
    }

    return 0;
}
