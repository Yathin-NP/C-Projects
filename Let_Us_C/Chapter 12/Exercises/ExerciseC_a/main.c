#include <stdio.h>
#define TEST_LCASE(x) (x>='a'&&x<='z')?1:0
#define TEST_UCASE(x) (x>='A'&&x<='Z')?1:0
#define ALPHABET(X) (x>='A'&&x<='Z')||(x>='a'&&x<='z')?1:0
#define BIG_NUM(a,b)  (a>b?a:b)

int main()
{
    char x;
    int a,b;
    printf("Enter the value of x\n");
    scanf("%c",&x);

    if(TEST_LCASE(x)==1)
        printf("Lower case\n");
    else if(TEST_UCASE(x)==1)
        printf("Upper case\n");
    else if(ALPHABET(x)==1)
        printf("Alphabet\n");
    else
        printf("Not Aplhabets\n");

    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);

    if(BIG_NUM(a,b)==a)
        printf("%d\n",a);
    else
        printf("%d\n",b);
    return 0;
}



