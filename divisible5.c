#include<stdio.h>

int main()

{

   int  num;
   
   printf("enter  a number");
   scanf("%d",&num);
   
   if((num%5==0)&&(num%3==0))
   {
	   printf("%d is divisible 5 and 3:\n",num);
   }
   else{
	   
	   printf("%d is not divisible 5 and 3:\n",num);
   }
   
  return 0;

}