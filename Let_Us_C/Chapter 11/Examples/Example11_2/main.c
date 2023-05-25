#include <stdio.h>
void increment();
void loop();
int main()
{
    increment();
    increment();
    increment();
    loop();
    return 0;
}

void increment()
{
    auto int i=1;
    static int j=1;
    i=i+1;
    j=j+1;
    printf("%d %d\n",i,j);
}

void loop()
{
    register int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }
}
