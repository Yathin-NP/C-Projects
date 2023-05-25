#include <stdio.h>

int main()
{
    float weight;
    printf("Enter the weight of the boxer\n");
    scanf("%f",&weight);

    if(weight<115)
        printf("Flyweigth\n");
    else if(weight>=115&&weight<=121)
        printf("Bantamweight\n");
    else if(weight>=122&&weight<=153)
        printf("Featherweight\n");
    else if(weight>=154&&weight<=189)
        printf("Middleweight\n");
    else
        printf("Heavyweight\n");
    return 0;
}
