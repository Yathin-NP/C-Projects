#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp,*ft;
    char str[200];
    fp=fopen("E:/PThinks Training/Let Us C/Chapter 19/file1.txt","r");
    ft=fopen("E:/PThinks Training/Let Us C/Chapter 19/file2.txt","w");
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
    int i;
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]>='a'&& str[i]<='z')
            {
                char a=str[i]-32;
                fprintf(ft,"%c",a);
            }
            if(str[i]==' ')
            {
                fprintf(ft," ");
            }
            else if(str[i]>='A'&&str[i]<='Z'){
                fprintf(ft,"%c",str[i]);
            }
            if(str[i]=='\n')
                fprintf(ft,"\n");
        }
    }
    fclose(fp);
    fclose(ft);
    return 0;
}
