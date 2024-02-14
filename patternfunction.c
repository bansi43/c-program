#include<stdio.h>

int  pattern1()
{

  int i=5,j=5;
  for(i=1;i<=5;i++)
  {
     for(j=1; j<=i;j++)
	 {
	    printf("%d",i);
	 }
	 printf("\n");
  }
}


int main()
{
	
	int i=5,j=5;
	pattern1();
	for(i=1;i<=5;i++)
  {
     for(j=1; j<=i;j++)
	 {
	    printf("%d",i);
	 }
	 printf("\n");
  }
	
	return 0;
}