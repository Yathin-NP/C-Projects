#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the character and Special symbol\n");
    scanf("%c",&ch);

//    (ch>='a'&&ch<='z')?printf("Lower case\n"):printf("Not lower case\n");

    (ch>=0&&ch<=47||ch>=58&&ch<=64||ch>=91&&ch<=96||ch>=123&&ch<=127)?printf("Special character\n"):
        printf("Not Special character\n");

    return 0;
}
