#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp,*ft;
    char ch;
    fp=fopen("E:/PThinks Training/Let Us C/Chapter 19/file1.txt","r");
    ft=fopen("E:/PThinks Training/Let Us C/Chapter 19/file2.txt","a");
    if(fp==NULL)
    {
        printf("cannot open file1\n");
        exit(1);
    }
    if(ft==NULL)
    {
        printf("cannot open file2\n");
        exit(2);
    }
    while(1)
    {
        ch=getc(fp);
        if(ch==EOF)
            break;
        if(ch=='\n')
            putc('\n',ft);
        putc(ch+128,ft);
    }
    printf("\n");
    fclose(fp);
    fclose(ft);
    return 0;
}
