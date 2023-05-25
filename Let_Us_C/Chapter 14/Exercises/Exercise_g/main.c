#include <stdio.h>

int main()
{
    int size=3,row,col,temp,count=0;
    int arr1[size][size];
    int arr2[size][size];
    printf("Enter the array elements\n");

    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&arr1[row][col]);
        }
    }

    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            temp=arr1[row][col];
            arr1[row][col]=arr1[col][row];
            arr1[col][row]=temp;
            arr2[row][col]=arr1[col][row];
        }
    }

    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            if(arr1[row][col]!=arr2[row][col])
            {
                count++;
                break;
            }
        }
    }
    if(count==1)
        printf("Not Symmetric\n");
    else
        printf("Symmetric\n");
    return 0;
}

