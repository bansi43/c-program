#include<stdio.h>

int main()

{

   int  num;
   
   printf("enter  a number");
   scanf("%d",&num);
   
   if(num%5==0)
   {
	   printf("%d is divisible:\n",num);
   }
   else{
	   
	   printf("%d is not divisible:\n",num);
   }
   
  return 0;

}