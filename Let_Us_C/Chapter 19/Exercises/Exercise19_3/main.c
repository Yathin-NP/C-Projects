#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int num;
//    printf("Enter the number of names in file\n");
//    scanf("%d",&num);
    char str[8][20],s[50];
    int a=0;
    fp=fopen("E:/PThinks Training/Let Us C/Chapter 19/Exercises/Exercise19_3/file1.txt","r");
    if(fp==NULL)
    {
        printf("cannot open file1\n");
        exit(1);
    }
    while(fgets(str,100,fp)!=NULL)
    {
        for(int i=0;i<8;i++)
        {
            for(int j=i+1;j<8;j++)
            {
                a=strcmp(str[i],str[j]);
                if(a>0)
                {
                    strcpy(s,str[i]);
                    strcpy(str[i],str[j]);
                    strcpy(str[j],s);
                }
            }
        }
    }
    printf("The sorted order of names are\n");
    for(int i=0;i<8;i++)
    {
        printf("%s",str[i]);
    }
    fclose(fp);

    return 0;
}
