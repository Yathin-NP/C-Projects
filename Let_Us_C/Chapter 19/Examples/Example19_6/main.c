#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char s[100];
    fp=fopen("E:/PThinks Training/Let Us C/Chapter 19/Examples/Example19_6/file1","w");
    if(fp==NULL){
        printf("Cannot open file1\n");
        exit(1);
    }
    printf("Enter the string\n");
    while(strlen(gets(s))>0)
    {
        fputs(s,fp);
        fputs("\n",fp);
    }
    fclose(fp);
    printf("Reading file contents from file\n");
    fp=fopen("E:/PThinks Training/Let Us C/Chapter 19/Examples/Example19_6/file1","r");
    if(fp==NULL){
        printf("Cannot open file\n");
        exit(2);
    }
    while (fgets(s,99,fp)!=NULL) {
        printf("%s",s);
    }
    fclose(fp);


    return 0;
}
