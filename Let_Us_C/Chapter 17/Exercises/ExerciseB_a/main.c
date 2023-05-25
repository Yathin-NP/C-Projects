#include <stdio.h>
struct student{
    int roll_no;
    char name[10];
    char dept[10];
    char course[10];
    int year;
};
void fun1(struct student*,int,int);
void fun2(struct student*,int,int);
int main()
{
    int n=450;
    struct student s[n];
    int i,choice,year,roll_num;
    for(i=0;i<n;i++)
    {
        printf("Enter the name of student\n");
        scanf("%s",s[i].name);

        printf("Enter the roll number\n");
        scanf("%d",&s[i].roll_no);

        printf("Enter the department\n");
        scanf("%s",s[i].dept);

        printf("Enter the course\n");
        scanf("%s",s[i].course);

        printf("Enter the year of joining\n");
        scanf("%d",&s[i].year);
    }
//    printf("%s\n",s.name);
//    printf("%d\n",s.roll_no);
//    printf("%s\n",s.dept);
//    printf("%s\n",s.course);
//    printf("%d\n",s.year);
    printf("\n");
    printf("1) To print names of students who joined in a particular year\n");
    printf("2) To print data of a student by receiving roll number\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch (choice) {
    case 1:
        printf("Enter the year you joined\n");
        scanf("%d",&year);
        fun1(s,year,n);
        break;
    case 2:
        printf("Enter the roll number\n");
        scanf("%d",&roll_num);
        fun2(s,roll_num,n);
        break;
    default:
        printf("Invalid Input\n");
        break;
    }

    return 0;
}

void fun1(struct student *s,int year,int n)
{
    int i;
    printf("The names of the students are\n");

    for(i=0;i<n;i++)
    {
        if(year==s[i].year)
        {
            printf("%d = %s\n",i+1,s[i].name);
        }
    }
}

void fun2(struct student *s, int roll_num,int n)
{
    int i;
    printf("The data of the students are\n");
    for(i=0;i<n;i++)
    {
        if(roll_num==s->roll_no)
        {
            printf("Name of student: %s\n",s->name);
            printf("Dept of student: %s\n",s->dept);
            printf("Course of student: %s\n",s->course);
            printf("YoJ of student: %d\n",s->year);
            printf("Roll num of student: %d\n",s->roll_no);
            s++;
            printf("\n");
        }
        else
        {
            printf("Roll num do not match\n");
        }
    }
}



