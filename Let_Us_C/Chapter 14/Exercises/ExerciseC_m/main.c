#include <stdio.h>
#include <math.h>

int main()
{
    float n[6][3] = {{137.4,80.9,0.78},{155.2,92.62,0.89},{149.3,97.93,1.35},{160.0,100.25,9.00},{155.6,68.95,1.25},{149.7,120.0,1.75}};
    float res[6],largest,area;

    for(int i=0;i<6;i++){
        area = 0.5*n[i][0]*n[i][1]*sin(n[i][2]);
        res[i] = area;
        printf("Area of %d triangle is: %f\n",i+1,area);
    }

    largest = res[0];

    for(int i=1;i<6;i++){
        if(largest<res[i]){
            largest = res[i];
        }
    }

    printf("Largest Area: %f\n",largest);

    return 0;
}
