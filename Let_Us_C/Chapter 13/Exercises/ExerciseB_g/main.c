#include <stdio.h>
void modify(int[] ,int);
int main()
{
    int arr[10]={10,34,45,67,24,56,46,34,75,50};

    modify(arr,10);

    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}

void modify(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        arr[i]=arr[i]*3;
    }
}

