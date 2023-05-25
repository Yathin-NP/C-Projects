#include <stdio.h>

int main()
{
    char f1[20] = "a";
    char f2[20] = "b";

    char f3[20];

    int a;
    printf("enter the number of series you want: ");
    scanf("%d",&a);
    while(a!=0)
    {
        strcpy(f3,f1);
        strcat(f1,f2);
        printf("%s\n",f3);
        strcpy(f2,f3);
        a--;
    }
    return 0;
}
