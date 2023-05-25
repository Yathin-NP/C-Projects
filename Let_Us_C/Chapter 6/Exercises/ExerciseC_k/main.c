#include <stdio.h>
#include <math.h>
int main()
{
    int count=1;
//    printf("Enter the number\n");
//    scanf("%d",&num);


    for(int k=1;k<=30000;k++)
    {
        count=1;
        for(int i=1;i<=30;i++)
        {
            for(int j=1;j<=30;j++)
            {
                if((pow(i,3)+pow(j,3)==k))
                    count++;

            }
        }
        if(count>=2)
            printf("Ramanujan number = %d\n",k);
    }



}
