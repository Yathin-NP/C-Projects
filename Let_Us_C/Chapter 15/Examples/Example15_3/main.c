#include <stdio.h>
int xstrlen(char*);
int main()
{
    char arr[]="yathinpoovaiah";
    int len1,len2;
    len1=xstrlen(arr);
    len2=xstrlen("Let Us C");
    printf("string=%s length=%d\n",arr,len1);
    printf("string=%s length=%d\n","Let Us C",len2);
    return 0;
}

int xstrlen(char *str)
{
    int length=0;
    while(*str!='\0')
    {
        length++;
        str++;
    }
    return length;
}
