#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct library{
    int access_num;char title[10];char author_name[10];int price;
};
int main()
{
    int num,iterate,count=0,a;
    int option,access,temp;
    char author[10];char temp1[10];
    printf("Enter the number of books\n");
    scanf("%d",&num);
    struct library l[num];

    while(1)
    {
        printf("Welcome to menu driven program:\n");
        printf("1)Add book information\n");
        printf("2)Displaying book information\n");
        printf("3)List the books of given author\n");
        printf("4)List the title of specified book\n");
        printf("5)List the count of books in library\n");
        printf("6)List the book in order of accession number\n");
        printf("7)Exit\n");

        printf("Enter the option\n");
        scanf("%d",&option);

        switch(option) {
        case 1:
            for(iterate=0;iterate<num;iterate++)
            {
                printf("Book information %d\n",iterate+1);
                printf("Enter accession number %d:\n",iterate+1);
                scanf("%d",&l[iterate].access_num);

                printf("Enter title of the book %d:\n",iterate+1);
                scanf("%s",l[iterate].title);

                printf("Enter the name of author:\n");
                scanf("%s",l[iterate].author_name);

                printf("Enter the price of the book %d:\n",iterate+1);
                scanf("%d",&l[iterate].price);
                count++;

            }
            break;
        case 2:
            for(iterate=0;iterate<num;iterate++)
            {
                printf("Displaying book %d information\n",iterate+1);
                printf("Accession Number = %d\n",l[iterate].access_num);
                printf("Title = %s\n",l[iterate].title);
                printf("Author Name = %s\n",l[iterate].author_name);
                printf("Price of book = %d\n",l[iterate].price);
                printf("\n");
            }
            break;
        case 3:
            printf("List the books of given author\n");
            printf("Enter the author name:\n");
            scanf("%s",author);
            for(iterate=0;iterate<num;iterate++)
            {
                a=strcmp(author,l[iterate].author_name);
                if(a==0)
                {
                    printf("List of books are %s\n",l[iterate].title);
                }
            }
            break;
        case 4:
            printf("List the title of specified book\n");
            printf("Enter the accession number:\n");
            scanf("%d",&access);
            for(iterate=0;iterate<num;iterate++)
            {
                if(access==l[iterate].access_num)
                {
                    printf("The title of book is %s\n",l[iterate].title);
                }
            }
            break;
        case 5:
            printf("List the count of books in library\n");
            printf("The number of books present in the library is %d\n",count);
            break;
        case 6:
            printf("List the book in order of accession number\n");
            for(iterate=0;iterate<num-1;iterate++)
            {
                for(int iterate1=iterate+1;iterate1<num;iterate1++)
                {
                    if(l[iterate].access_num>l[iterate1].access_num)
                    {
                        temp=l[iterate].access_num;
                        l[iterate].access_num=l[iterate1].access_num;
                        l[iterate1].access_num=temp;

                    }
//                    temp1[iterate]=l[iterate].title;
                }
            }
            for(iterate=0;iterate<num;iterate++)
            {
                printf("%d-->%c\n",l[iterate].access_num,temp1[iterate]);
            }
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid Input\n");
        }
    }
    return 0;
}
