#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int blank=0,newline=0,tabs=0,characters=0;
    fp=fopen("main.c","r");

    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        if(ch==blank)
            blank++;
        if(ch=='\n')
            newline++;
        if(ch==tabs)
            tabs++;
        if(ch==characters)
            characters++;
    }
    printf('\n');
    fclose(fp);

    printf("Number of blankspaces : %d\n",blank);
    printf("Number of newline : %d\n",newline);
    printf("Number of tabs : %d\n",tabs);
    printf("Number of Characters : %c\n",characters);
    return 0;
}
