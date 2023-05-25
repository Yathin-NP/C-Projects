#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("E:/PThinks Training/Let Us C/Chapter 19/Exercises/Exercise19_1/text","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
