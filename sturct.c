#include<stdio.h>
#include<string.h>

struct  student
{
    int id;
    char name[15];
};

void main()
{
   struct student s1,s2,s3;
   s1.id=1;
   s2.id=2;
   s3.id=3;
   strcpy(s1.name,"bansi");
   strcpy(s2.name,"heny");
   strcpy(s3.name,"saxi");

   printf("id=%d\n",s1.id);
   printf("name=%s\n",s1.name);

   printf("id=%d\n",s2.id);
   printf("name=%s\n",s2.name);

   printf("id=%d\n",s2.id);
   printf("name=%s",s3.name);

}