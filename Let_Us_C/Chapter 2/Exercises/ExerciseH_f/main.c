#include<stdio.h>

int main()
{
    float temp,vlcty;
    printf("Enter the temperature\n");
    scanf("%f", &temp);
    printf("Enter the wind velocity\n");
    scanf("%f", &vlcty);

    float wcf = 35.74+0.6215*temp+(0.4275*temp-35.75)*pow(vlcty,0.16);
    printf("The Wind chill factor is %f\n", wcf);
    return 0;
}
