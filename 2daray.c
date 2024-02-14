#include<stdio.h>

int main()
{
  int arr[3][3];
  
    for(int i=0;i<3;i++)
	{
	    for(int j=0;j<3;j++)
		{
		  printf("enter row %d column %d:\n",i,j);
		  scanf("%d",&arr[i][j]);
		}
	}



}