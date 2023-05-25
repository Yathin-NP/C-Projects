#include <stdio.h>

int main()
{

    int count=0;
    for(int i=1;i<=300;i++)
    {
        for(int j=2;j<i-1;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }

    }
    if(count==0)
        printf("Prime number")
    return 0;
}
