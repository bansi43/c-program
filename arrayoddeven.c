#include<stdio.h>

int main()
{
  int arr[4]={1,2,3,4};
  int a=0;
  int b=0;
  
  for(int i=0;i<4;i++)
  {
    if(arr[i]%2==0)
	{
		a=a+arr[i];
		
	}
	else
	{
	   b=b+arr[i];
	}
  }
  printf("even sum:%d\n",a);
  printf("odd sum:%d",b);

}