#include <stdio.h>
#include <math.h>
int main()
{
    int size=5,row,col;
    int ar[size][size];
    printf("Enter the array elements\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&ar[row][col]);
        }
    }
    int max=ar[0][0];
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            if(ar[row][col]>max)
                max=ar[row][col];

        }
    }

    printf("The largest element is %d\n",max);

    return 0;
}

