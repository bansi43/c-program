#include<stdio.h>
int main()

{
   int age;
   
   
   printf("enter the age");
   scanf("%d",&age);
   
   if(age>18)
   {
      printf("eligible for voting");
   }
   else 
   {
     printf("eligible fo not voting");
   } 

  return 0;

}