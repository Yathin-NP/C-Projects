#include <stdio.h>

int main()
{
    char class;
    int sub;
    printf("Enter the class Obtained\n");
    scanf("%c",&class);
    printf("The number of subjects failed\n");
    scanf("%d",&sub);

    switch (class){

    case :
//        int a =10;
//        printf("%d",a);
        if(sub>3){
            printf("No grace marks\n");

//        goto sos;
        }
        else
            printf("grace marks of 5 per subject\n");
//    sos:
//        printf("Hi\n");
        break;
    case 'S':
        if(sub>2)
            printf("No grace marks\n");
        else
            printf("grace marks of 4 per subject\n");
        break;

    case 'T':
        if(sub>1)
            printf("No grace marks\n");
        else
            printf("grace marks of 5\n");
        break;

    default:
        printf("Invalid Input\n");
    }

   return 0;
}
