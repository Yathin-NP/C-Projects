#include <stdio.h>

int main()
{
    static int a[]={0,1,2,3,4};
    a[2]=15;
    for(int i=0;i<5;i++)
        printf("%d\n",a[i]);
//    main();
//    printf("%u\n %u\n %u\n %d\n",p,,*p,*(*p+1));
    return 0;
}
