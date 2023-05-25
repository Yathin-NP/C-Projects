#include <stdio.h>

int main()
{
    float temp;
    printf("Enter temperature in fahrenheit:\n");
    scanf("%f", &temp);
    float celsius = ((temp-32)*5)/9;
    printf("The temperature in Celsius is %f\n", celsius);
    return 0;
}
