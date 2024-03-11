#include<stdio.h>
struct stud
{
    int id;
    char name[50];
    int marks[5];
};
int main()
{
    struct stud s;
    int total=0;
    float per;
    printf("enter the id:");
    scanf("%d",&s.id);
    printf("enter the name:");
    scanf("%s",&s.name);
    printf("enter the 5 marks:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&s.marks[i]);
        total=total+marks[i];
        per=(float)total/5;
    }

    printf("id:%d\n",s.id);
    printf("name:%s\n",s.name);
    printf("total marks:%d\n",total);
    printf("per:%f\n",per);
}