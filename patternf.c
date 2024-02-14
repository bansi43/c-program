#include<stdio.h>

int  pattern1()
{

  int i=5,j=5,k=1;
  for(i=1;i<=5;i++)
  {
     for(j=1; j<=i;j++)
	 {
	    printf("%d\t",k++);
	 }
	 printf("\n");
  }
}


int main()
{
	
	int i=5,j=5;
	pattern1();
	for(i=5;i>=1;i--)
  {
     for(j=5; j>=i;j--)
	 {
	    printf("%d\t",i);
	 }
	 printf("\n");
  }
	

	return 0;
}