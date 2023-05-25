#include <stdio.h>

int main()
{
    int size=4,row,col,temp;
    int arr[size][size];
    printf("Enter the array elements\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&arr[row][col]);
        }
    }

    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            temp = arr[row][col];
            arr[row][col]=arr[col][row];
            arr[col][row]=temp;
        }
    }

    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            printf("%d  ",arr[col][row]);
        }
        printf("\n");
    }



    return 0;
}
