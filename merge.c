#include<stdio.h>

int main()
{

   char s1[50],s2[50];
   
   printf("enter the first name|:");
   scanf("%s",s1);
   
    printf("enter the second name|:");
   scanf("%s",s2);
   
   strcat(s1,s2);
   printf("string:%s\t",s1);
   
	return 0;
}