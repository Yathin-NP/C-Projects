#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "yathin";
    int len1=strlen(arr);
    printf("%c\n",*(arr+4));
    int len2=strlen("Let us C");
    printf("string=%s length=%d\n",arr,len1);
    printf("string=%s length=%d\n","Let us C",len2);


    return 0;
}

