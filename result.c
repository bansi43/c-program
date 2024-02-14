#include<stdio.h>

int main()

{

   int  per;
   
   printf("enter  a percentage");
   scanf("%d",&per);
   
   if(per>=35)
   {
	   printf(" %d is pass:\n",per);
   }
   else{
	   
	   printf(" %d is fail:\n",per);
   }
   
  return 0;

}