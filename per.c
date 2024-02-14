#include<stdio.h>
int main()

{
   int guj+eng+sci+maths+bio;
   int per;
   
   printf("enter a subject");
   scanf("%d%d%d%d%d",&guj,&eng,&sci,&maths,&bio);

   per=(guj+eng+sci+maths+bio)/5;
   
   printf("percentafe=%.2\n",per);
   
   if(per<90)
   {
     printf("grade a");
   }
  else if(per<80)
   {
     printf("grade b");
   }
   else  if(per<70)
   {
     printf("grade c");
   }
   else  if(per<60)
   {
     printf("grade d");
   }
   
   else  if(per<50)
   {
     printf("grade e");
   }
   else  if(per>35)
   {
     printf("fail");
   }
   
  return 0;

}