#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<student_record.cpp>
int main()
{
    int students=100;
    struct student s[students];
    fp=fopen("D:/student/student_record.txt","a+");
    if(fp==NULL)
    {
        printf("Cannot open file\n");
        exit(0);
    }
    while(1)
    {
        int choice;
        printf("Details:\n 1) Accept Student information\n 2) Print Student information\n 3) Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice) {
        case 1:
            accept_info(s,&fp);
            break;
        case 2:
            print_info(s,&fp);
            break;
        case 3:
            update_info(s,&fp);
        case 4:
            delete_info(s,&fp);
        case 5:
            fclose(fp);
            exit(0);
        default:
            printf("Invalid input!\n");
            exit(0);
        }
    }
    return 0;

}









