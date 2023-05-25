#include <stdio.h>

int main()
{
//    int size;
//    printf("Enter the size of array\n");
//    scanf("%d",&size);
//    int arr[size];

//    printf("Enter the array elements\n");
//    for(int row=0;row<size;row++)
//    {
//        scanf("%d",&arr[row]);
//        printf("value=%d Address=%d\n",arr[row],&arr[row]);
//    }
//    for(int row=0;row<size;row++)
//    {
//        printf("Values of arr[%d] is %d, Address of arr[%d] is %u\n",row,arr[row],row,&arr[row]);
//    }


    int row,col;
    printf("Enter the row size of array\n");
    scanf("%d",&row);
    printf("Enter the column size of array\n");
    scanf("%d",&col);
    int arr1[row][col];

    printf("Enter the array elements\n");
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<=1;col++)
        {
            scanf("%d",&arr1[row][col]);
            printf("value = %d, Address = %u\n",arr1[row][col],&arr1[row][col]);
        }
    }


    for(int row=0;row<3;row++)
    {
        for(int col=0;col<=1;col++)
        {
            printf("The value of arr1[%d][%d] is %d, Address = %u\n",row,col,arr1[row][col],*(arr1+row)+col);
        }
    }
    return 0;
}










