#include <stdio.h>
#include <math.h>

float distance(float *,float*,float *,float *);
float area(float *,float *,float *,float *,float *,float *);
int inout(float *,float *,float *,float *,float *,float *,float *,float *);
float box;
int main()
{
    float a,b,c,d,e,f;

    printf("Enter the values of coordinates\n");
    printf("Enter the value of x1:");
    scanf("%f",&a);
    printf("Enter the value of x2:");
    scanf("%f",&b);
    printf("Enter the value of y1:");
    scanf("%f",&c);
    printf("Enter the value of y2:");
    scanf("%f",&d);
    printf("Enter the value of z1:");
    scanf("%f",&d);
    printf("Enter the value of z2:");
    scanf("%f",&d);

    float dis=distance(&a,&b,&c,&d);
    printf("The distance between two points is %f\n",dis);

    float bound=area(&a,&b,&c,&d,&e,&f);
    printf("The area of triangle is %f\n",bound);

    float x,y;
    printf("Enter the value of x:");
    scanf("%f",&x);

    printf("Enter the value of y:");
    scanf("%f",&y);

    int ans=inout(&a,&b,&c,&d,&e,&f,&x,&y);
    if(ans==1)
        printf("Inside triangle\n");
    else
        printf("Outside triangle\n");

    return 0;
}

float distance(float *a, float *b, float *c, float *d)
{
    float p;
    float x=*b-*a;
    float y=*d-*c;
    p=sqrt(pow(x,2)+pow(y,2));
    return p;
}

float area(float *a, float *b, float *c, float *d, float *e, float *f)
{
    float x1,x2,x3,y1,y2,y3;
    x1 = *a;
    x2 = *b;
    x3 = *c;
    y1 = *d;
    y2 = *e;
    y3 = *f;

    box = 1.0 / 2.0 * (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    return box;
}

int inout(float * a,float *b,float *c,float *d,float *e,float *f,float *xx,float *yy)
{
    float x1,x2,x3,y1,y2,y3,x,y,area1,area2,area3;
    int ans;
    x1 = *a;
    x2 = *b;
    x3 = *c;
    y1 = *d;
    y2 = *e;
    y3 = *f;
    x=*xx;
    y=*yy;

    area1=1.0 / 2.0 * (x1*(y2-y3)+x2*(y3-y)+x*(y-y2));
    area2=1.0 / 2.0 * (x*(y2-y3)+y*(y3-y1)+x3*(y1-y2));
    area3=1.0 / 2.0 * (x1*(x-y)+x2*(y-y1)+x3*(y1-x));
    ans=area1+area2+area3;
    if(ans==box)
        return 1;
    else
        return 0;
}
