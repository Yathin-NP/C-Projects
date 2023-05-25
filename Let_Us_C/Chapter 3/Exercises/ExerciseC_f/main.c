#include <stdio.h>

int main()
{
    int age_ram,age_shyam,age_ajay;
    printf("Enter the ages of ram,Shyam and Ajay\n");
    scanf("%d%d%d",&age_ram,&age_shyam,&age_ajay);

    if(age_ram<age_shyam && age_ram<age_ajay)
    {
        printf("Ram is the youngest\n");
    }
    else
    {
        if(age_shyam<age_ram && age_shyam<age_ajay)
        {
            printf("Shyam is the youngest\n");
        }
        else
        {
             printf("Ajay is the youngest\n");
        }
    }


    return 0;
}
