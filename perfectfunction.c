#include<stdio.h>
void perfect(int n)
{

  int  a=0;
  
    for(int i=1; i<=n/2; i++)
   {
    if(n%i==0)
	{
	  a+=i;
	}
   }
  if(a==n)
  {
    printf("%d is a perfect number:",number);
  }
  else
  {
     printf("%d is a not perfect number:",number);
  }
}

int main()
{
 int number;
  printf("enter a number:");
  scanf("%d",&number);
  
  perfect(number)
}