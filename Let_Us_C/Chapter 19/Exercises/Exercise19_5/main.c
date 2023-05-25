#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp,*ft,*fq;
    char str1[200];
    char str2[200];
    int line_num1=0,line_num2=0;
    fp=fopen("E:/PThinks Training/Let Us C/Chapter 19/file1.txt","r");
    ft=fopen("E:/PThinks Training/Let Us C/Chapter 19/file2.txt","r");
    fq=fopen("E:/PThinks Training/Let Us C/Chapter 19/file3.txt","w+");

    if(fp==NULL)
    {
        printf("cannot open fil1\n");
        exit(1);
    }
    if(ft==NULL)
    {
        printf("cannot open fil2\n");
        exit(2);
    }
    if(fq==NULL)
    {
        printf("cannot open fil3\n");
        exit(3);
    }

    while(fgets(str1,sizeof(str1),fp)!=NULL && fgets(str2,sizeof(str2),ft)!=NULL)
    {
        if(fgets(str1,sizeof(str1),fp)!=NULL)
            fputs(str1,fq);
        line_num1++;

        if(fgets(str2,sizeof(str2),ft)!=NULL)
            fputs(str2,fq);
        line_num2++;
    }
    printf("%d %d ",line_num1,line_num2);
    fclose(fp);
    fclose(ft);
    fclose(fq);
    return 0;
}
