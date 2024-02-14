#include<stdio.h>
int fibonaci(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else{
		return fibonaci(n-1)+fibonaci(n-2);
	}
}
int main()
{
	int n,i;
	printf("enter the value:");
	scanf("%d",&n);
	
	printf("fibonaci series:");
	for(i=0; i<n; i++)
	{
		printf("%d",fibonaci(i));
	}
	
}
