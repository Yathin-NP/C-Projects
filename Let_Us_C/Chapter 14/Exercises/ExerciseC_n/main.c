#include <stdio.h>
#include <math.h>

int main()
{

    float n[11][2] = {34.22,102.43,
                      39.87,100.93,
                      41.85,97.43,
                      43.23,97.81,
                      40.06,98.32,
                      53.29,98.32,
                      53.29,100.07,
                      54.14,97.08,
                      49.12,91.59,
                      40.71,94.85,
                      55.15,94.65};
    float xy = 0,x = 0,y = 0,r = 0,x2 = 0,y2 = 0;

    for(int i=0;i<12;i++){
        for(int j=0;j<2;j++){
            xy = xy + (n[i][j]*n[i][j+1]);
        }
    }

    for(int i=0;i<12;i++){
        for(int j=0;j<1;j++){
            x = x + n[i][j];
            y = y + n[i][j+1];
            x2 = x2 + pow(n[i][j],2);
            y2 = y2 + pow(n[i][j+1],2);
        }
    }

    r = (xy-(x*y))/sqrt(((11 * x2)-pow(x,2))*((11 * y2)-pow(y,2)));

    printf("Correlation Coefficient r = %f\n",r);
    printf("\n");


    return 0;
}

