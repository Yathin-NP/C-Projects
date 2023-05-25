#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp,*ft;
    char ch;
    static int i=32;
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
            exit(3);
        if(ch=='\n')
            putc('\n',ft);
        while(i<=90)
        {
            if(i==90)
                i=32;
            fprintf(ft,"%c",ch=i+5);
            i++;
            break;
        }
    }
    fclose(fp);
    fclose(ft);
    return 0;
}
