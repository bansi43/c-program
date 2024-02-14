#include<stdio.h>
int perfect(int n)
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
    return 1;
  }
  else
  {
    return 0;
  }

}

int main()

{
  int number;
  printf("enter a number:");
  scanf("%d",&number);
  
  if(perfect(number))
   {

       printf("%d is perfect number:",number);
   }
else{

      printf("%d is not perfect number:",number);
    }
}