#include<stdio.h>

int  pattern1()
{

  int i=5,j=5,k='A';
  for(i='A';i<='E';i++)
  {
     for(j='A'; j<='E';j++)
	 {
	    printf("%c\t",k++);
	 }
	 printf("\n");
  }
}


int main()
{
	
	int i=5,j=5,k='A';
	pattern1();
  for(i='A';i<='E';i++)
  {
     for(j='A'; j<=i;j++)
	 {
	    printf("%c\t",k++);
	 }
	 printf("\n");
  }
  
	

	return 0;
}