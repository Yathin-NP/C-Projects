#include <stdio.h>

int main()
{
    int h,t;
    float c;
    printf("Enter the values of Hardness,Carbon and tensile\n");
    scanf("%d%f%d" ,&h,&c,&t);

    if((h>50)&&(c<0.7)&&(t>5600))
    {
        printf("Grade is 10\n");
    }
    else if(h>50 && c<0.7)
        printf("Grade is 9\n");
    else if((c<0.7)&&(t>5600))
        printf("Grade is 8\n");
    else if(h>50 && t>5600)
        printf("Grade is 7\n");
    else if((h>50)||(c<0.7)||(t>5600))
        printf("Grade is 6\n");
    else
        printf("Grade is 5\n");
    return 0;
}
