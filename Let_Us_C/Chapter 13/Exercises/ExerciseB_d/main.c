#include <stdio.h>

int main()
{
    int arr[25];
    int count_p=0,count_n=0,count_e=0,count_o=0;
    printf("Enter the array\n");
    for(int i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<25;i++)
    {
        if(arr[i]>=0)
            count_p++;
        else
            count_n++;
        if(arr[i]%2==0)
            count_e++;
        else
            count_o++;

    }
    printf("Positive=%d Negative=%d Even=%d Odd=%d\n",count_p,count_n,
           count_e,count_o);


    return 0;
}
