struct student{
    char name[20];
    int roll_num;
    int ph_num;
    char place[20];
};
FILE *fp;
static int ID=1;
int count=0;
void accept_info(struct student *,FILE**);
void print_info(struct student *,FILE**);
void update_info(struct student *,FILE **);
void delete_info(struct student *,FILE **);

void accept_info(struct student *s,FILE **fp)
{
    while(fgets(s,50,*fp)!=NULL){
        ++count;
    }
    printf("No of Available Records present = %d\n",count/5);

    if((count/5)<=100){
    printf("Enter student detail :\n");
        while(ID<=5)
        {
            printf("Enter the name of student\n");
            scanf("%s",s->name);
            printf("Enter student roll number\n");
            scanf("%d",&s->roll_num);

            printf("Enter student phone number\n");;
            scanf("%d",&s->ph_num);

            printf("Enter Place of student\n");
            scanf("%s",s->place);

            fprintf(*fp,"Student ID:%d  \n",ID);
            fprintf(*fp," Name = %s\n Roll Number=%d\n Phone Number=%d\n Place=%s\n \n",s->name,s->roll_num,
                    s->ph_num,s->place);
            ID++;
            rewind(*fp);
        break;
        }
    }
    else
        printf("Maximum students entered\n");
}

void print_info(struct student *s,FILE **fp)
{
    if(fgets(s,50,*fp)==NULL)
        printf(" No student records present\n");
    else
    {
        rewind(*fp);
        while(fgets(s,50,*fp)!=NULL)
            printf("%s",s);
    }
}

void update_info(struct student *s, FILE **fp)
{
    int id;
    printf("Enter the ID to Update\n");
    scanf("%d",&id);



}












