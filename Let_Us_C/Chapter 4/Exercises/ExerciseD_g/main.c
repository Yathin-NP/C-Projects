#include <stdio.h>
#include <math.h>
int main()
{
    float r,g,b;
    float c,m,y,k,w,max;
    printf("Enter the values of Red, Green,Blue\n");
    scanf("%f%f%f",&r,&g,&b);

    if(r==0&&g==0&&b==0)
    {
      printf("c=0 m=0 y=0 k=1\n");
    }
    else{

        max=fmax(r/255,g/255);

        c=(w-r/255)/w;
        m=(w-g/255)/w;
        w=fmax(max,b/255);
        y=(w-b/255)/w;
        k=1-w;

        printf("Values of CMYK are\n C=%f\n M=%f\n Y=%f\n K=%f\n",c,m,y,k);
    }

    return 0;
}
