#include <stdio.h>

int main()
{
    char str1[10];
    char str2[10];
    char str3[10];
    printf("Enter the first name\n");
    gets(str1);

    printf("Enter the middle name\n");
    gets(str2);

    printf("Enter the last name\n");
    gets(str3);

    printf("Abbreviated name is:\n");
    printf("%c.%c.%s\n",str1[0],str2[0],str3);
    return 0;
}
