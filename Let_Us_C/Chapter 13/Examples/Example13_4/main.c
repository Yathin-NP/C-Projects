#include <stdio.h>

int main()
{
    int arr[]={10,20,30,45,56,56,74};
    int i=4,*j,*k,*x,*y;
    j=&i;
    j=j+9;
    printf("%u\n",j);
    k=&i;
    k=k-3;
    printf("%u\n",k);
    x=&arr;
    y=&arr[6];
    printf("%d\n",y-x);
    j=&arr[4];
    k=(arr+4);
    if(j==k)
        printf("The two pointers point to the same location\n");
    else
        printf("The two pointers point to different location\n");
    return 0;
}
