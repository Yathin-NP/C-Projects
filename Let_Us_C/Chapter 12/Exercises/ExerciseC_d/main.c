#include <stdio.h>
#include <math.h>
#define ARMETIC(x,y) (x+y)/2
#define ABS(z) abs(z)
#define TO_UPPER(ch) (ch+32)
#define BIG_NUM(num1,num2,num3) (num1>num2&&num1>num3)?num1:(num2>num1&&num2>num3)?\
num2:(num3>num1&&num3>num2)?num3:num1


int main()
{
    int x,y,z;
    int num1,num2,num3;
    char ch;

    printf("Enter x and y\n");
    scanf("%d %d",&x,&y);
    float a = ARMETIC(x,y);
    printf("Arithmetic mean is %f\n",a);

    printf("Enter the value of z\n ");
    scanf("%d",&z);
    float b = ABS(z);
    printf("Absolute value is %f\n",b);



    printf("Enter the alphabet\n");
    scanf("%c",&ch);
    char ch1 = TO_UPPER(ch);
    printf("Lower case alphabet is %c\n",ch1);


    printf("Enter the values\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    int res= BIG_NUM(num1,num2,num3);
    printf("The maximun value is %d\n",res);
    return 0;
}
