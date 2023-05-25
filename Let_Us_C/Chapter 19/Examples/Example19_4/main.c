#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    struct employee{
        char name[40];int age;float bs;
    };
    struct employee e;
    fp=fopen("E:/PThinks Training/Let Us C/Chapter 19/Examples/Example19_4/EMPLOYEE.DAT","w");
    printf("Enter the name,age and bs of student\n");
    while(scanf("%s%d%f",e.name,&e.age,&e.bs)==1)
    {
        fprintf(fp,"%s%d%f\n",e.name,e.age,e.bs);
    }
    fclose(fp);

    fp=fopen("E:/PThinks Training/Let Us C/Chapter 19/Examples/Example19_4/EMPLOYEE.DAT","r");
    while(fscanf(fp,"%s%d%f",e.name,&e.age,&e.bs)!=EOF)
        printf("%s%d%f\n",e.name,e.age,e.bs);
    fclose(fp);

    fp=fopen("E:/PThinks Training/Let Us C/Chapter 19/Examples/Example19_4/EMP.DAT","wb");
    while(scanf("%s%d%f",e.name,&e.age,&e.bs)==1)
    {
//        fprintf(fp,"%s%d%f\n",e.name,e.age,e.bs);
        fwrite(&e,sizeof(e),1,fp);
    }
    fclose(fp);

    fp=fopen("E:/PThinks Training/Let Us C/Chapter 19/Examples/Example19_4/EMP.DAT","rb");
    while(fread(&e,sizeof(e),1,fp)==1)
        printf("%s%d%f\n",e.name,e.age,e.bs);

    fclose(fp);
    return 0;
}
