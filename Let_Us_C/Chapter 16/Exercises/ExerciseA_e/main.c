#include <stdio.h>

int main()
{
    char str[50];
    char *s;
    int count=0;
    printf("Enter thr string\n");
    gets(str);
    s=str;

    while(*s)
    {
        if((*s=='a'|| *s=='e'||*s=='i'||*s=='o'||*s=='u'||*s=='A'|| *s=='E'||*s=='I'||*s=='O'||*s=='U')
       && (*(s+1)=='a'|| *(s+1)=='e'||*(s+1)=='i'||*(s+1)=='o'||*(s+1)=='u'||*(s+1)=='A'|| *(s+1)=='E'
                ||*(s+1)=='I'||*(s+1)=='O'||*(s+1)=='U')){
        printf(" Occurences=%c %c\n",*s,*(s+1));
        }
        s++;
    }
    return 0;
}
