#include<stdio.h>

void reversenumber(int*num)
{
  int reversed=0;
  while(num!=0)
  {
    int a=*num%10;
	reversed=reversed*10+a;
	*num/=10;
  }
  *num=reversed;

}
int main()
{
   int number;
   printf("enter a number to reverse:");
   scanf("%d",&number);
   
   reversenumber(&number);
   
   printf("reversed number:%d\n",number);
   
   return 0;


}