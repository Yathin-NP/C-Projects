#include <stdio.h>

int main()
{
    int arr[]={10,20,40,40,20,60};
    int n=6;

    for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
    {
        if(arr[i]==arr[j])
            printf("Element arr[%d] is equal to arr[%d]\n",i,j);
        else
            printf("Element arr[%d] is not equal to arr[%d]\n",i,j);
    }


    return 0;
}
