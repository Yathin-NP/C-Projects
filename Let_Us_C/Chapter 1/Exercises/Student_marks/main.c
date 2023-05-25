#include <stdio.h>

int main()
{
    float s1,s2,s3,s4,s5;
    printf("Enter Subject1 marks:\n");
    scanf("%f", &s1);
    printf("Enter Subject2 marks:\n");
    scanf("%f", &s2);
    printf("Enter Subject3 marks:\n");
    scanf("%f", &s3);
    printf("Enter Subject4 marks:\n");
    scanf("%f", &s4);
    printf("Enter Subject5 marks:\n");
    scanf("%f", &s5);

    float agg = s1+s2+s3+s4+s5;
    printf("The aggregate marks is %f:\n", agg);
    float percent = ((agg/500)*100);
    printf("The percentage is %f:\n", percent);
    return 0;
}
