#include <stdio.h>

int main()
{
    int one,two,five,ten,fifty,hndrd,money;
    printf("Enter the amount\n");
    scanf("%d", &money);
    int amount;
    hndrd=money/100;
    amount = money%100;

    fifty=amount/50;
    amount=amount%50;

    ten=amount/10;
    amount=amount%10;

    five=amount/5;
    amount=amount%5;

    two=amount/2;
    amount=amount%2;

    one=amount/1;
    amount=amount%1;

    int sum=hndrd+fifty+ten+five+two+one;
    printf("The smallest number of notes possible is %d\n", sum);
    return 0;
}
