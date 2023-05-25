#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the character\n");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z')
        printf("The character entered is Capital\n");
    else if(ch>='a'&&ch<='z')
        printf("The character entered is Smaller case\n");
    else if(ch>='0'&&ch<='9')
        printf("The character entered is a digit\n");
    else
        printf("The character entered is a special character\n");
return 0;
}
