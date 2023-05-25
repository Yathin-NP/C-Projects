#include<stdio.h>
void euclid(int *,int *);
int main()
{
    int j,k;
    printf("Enter the value of j and k\n");
    scanf("%d %d",&j,&k);


    euclid(&j,&k);
    printf("Greatest Common divisor is %d\n",j);


    return 0;
}

void euclid(int *a, int *b)
{
    int res=1;
    while(res>0)
    {
        int div=(*a)/(*b);
        res=*a-div*(*b);
        *a=*b;
        *b=res;
    }

}

