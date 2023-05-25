#include <stdio.h>
#define PRODUCT(X) (X*X)
int main()
{
    int i=3,j,k,l;
    j=PRODUCT(i+1);
    printf("%d\n",i);
    k=PRODUCT(i++);
    printf("%d\n",i);
    l=PRODUCT(++i);
    printf("%d\n",i);
    printf("%d %d %d %d\n",i,j,k,l);
    return 0;
}
