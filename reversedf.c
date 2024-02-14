#include<stdio.h>
int reversenumber(int num)
{
   int reversednumber=0;
   while(num!=0)
   {
     int a=num%10;
	 reversednumber=reversednumber*10+a;
	 num/=10;
   }
   return reversednumber;

}
int main()
{
  int number;
  printf("enter a number to reverse:");
  scanf("%d",&number);
  
  int reverse=reversenumber(number);
  printf("reverse number:%d\n",reverse);
  return 0;

}
