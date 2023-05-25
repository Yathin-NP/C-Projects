#include <stdio.h>

int main()
{

    int arr[25];
    int num,count=0;
    printf("Enter the array\n");
    for(int i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched\n");
    scanf("%d",&num);

     for(int i=0;i<25;i++)
    {
        if(num==arr[i])
        {
            count++;
        }
    }
     printf("The number %d entered has occured %d times\n",num,count);
    return 0;
}





