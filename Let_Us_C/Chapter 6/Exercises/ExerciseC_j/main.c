#include <stdio.h>

int main()
{
    for(int i=0;i<=23;i++)
    {
        if(i==0)
            printf("%d Midnight\n",i);
        else if(i>=1&&i<=11)
            printf("%d AM\n",i);
        else if(i==12)
            printf("%d Noon\n",i);
        else if(i>12&&i<=23)
            printf("%d PM\n",i);
    }

    return 0;
}
