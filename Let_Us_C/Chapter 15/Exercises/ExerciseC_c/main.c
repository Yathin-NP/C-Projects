#include <stdio.h>
#include <string.h>
int main()
{
    char str[25];
    int position;
    printf("Enter the string\n");
    gets(str);

    printf("Enter the position\n");
    scanf("%d",&position);

    if(position>0)
    {
        int i=position-1;
        while(str[i]!=' '){
            printf("%c",str[i]);
            i++;
        }
        printf("\n");

    }
    else
    {
        int i=0;
        while(str[i]!='\0')
        {
            printf("%c",str[i]);
            i++;
        }
        printf("\n");
    }
    return 0;
}
