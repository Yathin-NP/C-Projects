#include <stdio.h>

int main()
{
    struct book{
        char name;float price;int pages;
    };
    struct book b1={'B',123.32,23};
    struct book b2={'P',231.34,34};
    struct book b3={0};

    printf("%c %f %d\n",b1.name,b1.price,b1.pages);
    printf("Address of name=%u\n",&b2.name);
    printf("Address of price=%u\n",&b2.price);
    printf("Address of pages=%u\n",&b2.pages);
    return 0;
}

