#include <stdio.h>

int main()
{

    int row1,col1,row2,col2;
    printf("row1=%u\n col1=%u\n row2=%u\n col2=%u\n",&row1,&col1,&row2,&col2);
    printf("Enter the row size of array 1\n");
    scanf("%d",&row1);
    printf("Enter the column size of array 1\n");
    scanf("%d",&col1);
    int arr1[row1][col1];
    printf("Address of arr1 = %u\n",&arr1);
    printf("Enter the row size of array 2\n");
    scanf("%d",&row2);
    printf("Enter the column size of array 2\n");
    scanf("%d",&col2);
    int arr2[row2][col2];
    printf("Address of arr2 = %u\n",&arr2);
    int res[row1][col2];
    printf("Address of res = %u\n",&res);

    printf("Enter the array elements of arr1:\n");
    for(int row=0;row<row1;row++)
    {
        for(int col=0;col<col1;col++)
        {
            scanf("%d",&arr1[row][col]);
            printf("value = %d, Address = %d\n",arr1[row][col],&arr1[row][col]);
        }
    }
    printf("\n");

    printf("Enter the array elements of arr2:\n");
    for(int row=0;row<row2;row++)
    {
        for(int col=0;col<col2;col++)
        {
            scanf("%d",&arr2[row][col]);
            printf("value = %d, Address = %d\n",arr2[row][col],&arr2[row][col]);
        }
    }
    printf("\n");

    printf("After performing matrix Multiplication\n");
    printf("\n");
    for(int row=0;row<row1;row++)
    {
        for(int col=0;col<col2;col++)
        {
            int sum=0;
            for(int k=0;k<row2;k++)
            {
                sum=sum+arr1[row][k]*arr2[k][col];
            }
            res[row][col]=sum;
            printf("value = %d , Address = %d\n",res[row][col],&res[row][col]);
        }
        printf("\n");
    }


    return 0;
}
