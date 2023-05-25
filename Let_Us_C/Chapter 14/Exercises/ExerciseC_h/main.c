#include <stdio.h>

int main()
{
    int size=2,row,col;
    int arr1[size][size];
    int arr2[size][size];
    int res[size][size];
    printf("Enter the array1 elements\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&arr1[row][col]);
        }
    }

    printf("Enter the array2 elements\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&arr2[row][col]);
        }
    }
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            int sum=0;
            sum=sum+arr1[row][col]+arr2[row][col];
            res[row][col]=sum;
            printf("%d  ",res[row][col]);
        }
        printf("\n");
    }
    return 0;
}








