#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int i,num[10];
    printf("Enter the string\n");
    scanf("%s",str);

    for(i=0;i<strlen(str);i++)
    {
        num[i]=str[i]-'0';
    }
    for(i=0;i<strlen(str);i++)
    {
        printf("%d",num[i]);
    }
    printf("\n");
    return 0;
}
