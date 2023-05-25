#include <stdio.h>
#include <string.h>
int main()
{
    char first[]="yathin";

    char second[0];
    strcpy(second,first);
    printf("source string=%d\n",sizeof(first));
    printf("Target string=%s\n",second);
    printf("%d\n",&first);
    printf("%d\n",&second);
    return 0;
}





