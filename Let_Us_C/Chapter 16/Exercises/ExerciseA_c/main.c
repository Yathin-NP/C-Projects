#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter the string\n");
    gets(str);
    char *s;
    s=str;
    while(*s)
    {
        if(*s=='t'&& *(s+1)=='h'&& *(s+2)=='e')
        {
            *s=' ';
            *(s+1)=' ';
            *(s+2)=' ';
        }
        s++;
    }
    printf("%s",str);
    printf("\n");

    return 0;
}
