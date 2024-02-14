/*#include<stdio.h>
void sum()
{
    int p,r,n;
	int intrest;
	printf("enter the p:\n");
	scanf("%d",&p);
	
	printf("enter the r:\n");
	scanf("%d",&r);
	
	printf("enter the n:\n");
	scanf("%d",&n);
	
	intrest=(p*r*n)/100;
	printf("the simple intrest is:%d",intrest);
	

}
int main()
{
	sum();
}
*/
#include<stdio.h>

int sum()
{
	int p,r,n;
	int intrest;
	printf("enter the p:\n");
	scanf("%d",&p);
	
	printf("enter the r:\n");
	scanf("%d",&r);
	
	printf("enter the n:\n");
	scanf("%d",&n);
	intrest=(p*r*n)/100;
	return intrest;
}

int main()
{
		int intrest;
	    intrest=sum();
	
	

	printf("the simple intrest is:%d",intrest);
	return 0;
	
}