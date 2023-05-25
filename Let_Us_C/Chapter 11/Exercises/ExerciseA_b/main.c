#include <stdio.h>

int main()
{
    int count=5;
    printf("%d\n",count--);
    if(count!=0)
        main();
    return 0;
}
