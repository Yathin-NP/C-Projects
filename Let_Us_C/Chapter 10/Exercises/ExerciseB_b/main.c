#include <stdio.h>
void prime_fact(int ,int);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    printf("Prime factors\n");
    prime_fact(num,2);
    return 0;
}

void prime_fact(int num,int count)
{
    if(num<1)
        return;
    else if(num%count==0){
        printf("%d\n",count);
        prime_fact(num/count,count);
    }
    else
    {
        count++;
        prime_fact(num,count);
    }
}
