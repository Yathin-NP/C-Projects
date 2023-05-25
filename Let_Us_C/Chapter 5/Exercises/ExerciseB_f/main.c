#include <stdio.h>
int main()
{
    int ms = 21,c;

    while(ms != 0)
    {

        printf("The remaining match sticks are : %d \n",ms);
        printf("Pick a match stick from 1 - 4 \n");
        scanf("%d",&c);
        ms = ms - c;

        if(ms < 5)
        {
            printf("The computer choose %d \n",ms);
            ms = ms - ms;
            printf("You loose\n");
        }
        else{
            printf("The computer choose 1 \n");
            ms = ms - 1;
        }
    }



    return 0;
}
