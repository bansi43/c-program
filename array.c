#include<stdio.h>

int main()
{
 /* int arr[]={10,20,30,40};
  
  for(int i=0;i<4;i++)
  {
	  printf("the array %d\n",arr[i]);
  }*/


    int arr[4];
	
	for(int i=0;i<4;i++)
	{
		printf("enter the value:\n");
		scanf("%d",&arr[i]);
	}
	
	for( int i=0;i<4;i++)
	{
		printf("enter arr %d\n",arr[i]);
	}
}