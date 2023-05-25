#include <stdio.h>

int main()
{
    char sex,ms;
    int age;
    printf("Enter the age,sex,Marital status\n");
    scanf("%d%c%c", &age ,&sex,&ms);

    if(ms=='M')
        printf("Driver should be insured\n");
    else
    {
        if(sex=='M')
        {
            if(age>30)
                printf("Driver should be insured\n");
            else
                printf("Driver should not be insured\n");
        }
        else{
            if(age>25)
                printf("Driver should be insured\n");
            else
                printf("Driver should not be insured\n");
        }
    }

    return 0;
}
