#include <stdio.h>

int main()
{
    FILE *fp,*ft;
    char str[200];
    fp=fopen("E:/PThinks Training/Let Us C/Chapter 19/file1.txt","r");
    if(fp==NULL){
        printf("cannot open file1\n");
        exit(1);
    }
    ft=fopen("E:/PThinks Training/Let Us C/Chapter 19/file2.txt","a+");
    if(ft==NULL){
        printf("cannot open file2\n");
        exit(2);
    }

    while(fgets(str,199,fp)!=NULL)
    {
        fputs(str,ft);
    }
    printf("Appending Completed\n");
    fclose(fp);
    fclose(ft);
    return 0;
}
