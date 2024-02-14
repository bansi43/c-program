#include<stdio.h>

int pattern()
{
	int i=5,j=5;
  for(i='A';i<='E';i++)
  {
     for(j='A'; j<=i;j++)
	 {
	    printf("%c\t",j);
	 }
	 printf("\n");
  }
	
}

int main()
{
	
	 int i=5,j=5,k=1;
	pattern();
  for(i=1;i<=5;i++)
  {
     for(j=1; j<=5;j++)
	 {
	    printf("%d\t",k++);
	 }
	 k+=5;
	 printf("\n");
  }
  
return 0;	
}