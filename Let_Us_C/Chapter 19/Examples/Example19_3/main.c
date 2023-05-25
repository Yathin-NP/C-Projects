#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fs,*ft;
    char ch;
    fs=fopen("E:/PThinks Training/Let Us C/Chapter 19/Examples/Example19_3/file1.txt","r");
    if(fs==NULL)
    {
        puts("cannot open source file\n");
        exit(1);
    }
    ft=fopen("E:/PThinks Training/Let Us C/Chapter 19/Examples/Example19_3/file2.txt","w");

    if(ft==NULL)
    {
        puts("cannot open target file");
        fclose(fs);
        exit(2);
    }
    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
            break;
        else
            fputc(ch,ft);
    }
    fclose(fs);
    fclose(ft);
    return 0;
}
