#include <stdio.h>
int i;
void increment();
void decrement();

int main()
{
    printf("%d\n",i);
    increment();
    increment();
    decrement();
    decrement();
    return 0;
}

void increment()
{
    i=i+1;
    printf("On incrementing i=%d\n",i);
}

void decrement()
{
    i=i-1;
    printf("On decrementing i=%d\n",i);
}