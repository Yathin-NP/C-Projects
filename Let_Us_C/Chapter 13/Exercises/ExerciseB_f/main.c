#include <stdio.h>
#include <math.h>
void small_num(int*,int,int *);
int main()
{

    int arr[5];
    printf("Enter the array elements\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min;
    small_num(arr,5,&min);
    printf("The smallest element is %d\n",min);


    return 0;
}

void small_num(int *j,int n,int* min)
{
    *min=j[0];
    for(int i=1;i<n;i++)
    {
        if(*min>*j){
            *min=*j;
        }
    }
}

