#include <stdio.h>

int main()
{
    int c ,d;
    printf("Enter the number in Position C:");
    scanf("%d",&c);
    printf("Enter the number in Position D:");
    scanf("%d",&d);

    c = c+d;
    d = c-d;
    c = c-d;
    printf("Numbers after Interchanging in Position C is %d\n", c) ;
    printf("Numbers after Interchanging in Position D is %d\n", d) ;
    return 0;
}
