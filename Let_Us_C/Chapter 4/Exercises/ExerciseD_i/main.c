#include <stdio.h>
#include <math.h>
int main()
{
    float weight,heigth,bmi;
    printf("Enter the weigth and heigth of a person\n");
    scanf("%f%f",&weight,&heigth);

    bmi=(weight/pow(heigth,2));

    if(bmi<15)
        printf("BMI Category is Starvation\n");
    else if(bmi>=15.1&&bmi<=17.5)
        printf("BMI Category is Anorexic\n");
    else if(bmi>=17.6&&bmi<=18.5)
        printf("BMI Category is Underweight\n");
    else if(bmi>=18.6&&bmi<=24.9)
        printf("BMI Category is Ideal\n");
    else if(bmi>=25&&bmi<= 25.9)
        printf("BMI Category is Overweigth\n");
    else if(bmi>=30&&bmi<=30.9)
        printf("BMI Category is Obese\n");
    else if(bmi>=40)
        printf("BMI Category is Morbidly Obese\n");
    return 0;
}
