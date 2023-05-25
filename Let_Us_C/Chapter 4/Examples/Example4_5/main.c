#include <stdio.h>

int main()
{
    char sex,ms;
    int age;

    printf("Enter the age,sex,Marital status\n");
    scanf("%d%c%c", &age ,&sex,&ms);

    if((ms=='M')||(ms=='U'&&sex=='M'&&age>30)||(ms=='U'&&sex=='F'&&age>25))
        printf("Driver is Insured\n");
    else
        printf("Driver should not be Insured\n");


    return 0;
}
