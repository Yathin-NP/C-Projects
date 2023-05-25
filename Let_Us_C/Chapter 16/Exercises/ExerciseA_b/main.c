#include <stdio.h>

int main()
{
    char str[80] = "A sentence has no vowels";

    for(int i=0; str[i] != '\0' ; i++)
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u'  || str[i] == 'U')
        {
            str[i] = ' ';
        }
    }

    printf("%s\n",str);
    return 0;
}
