#include<stdio.h>

int main()
{
   char a='A';
   int i,j;
   
   for(i=1;i<=5;i++)
   {
      for(j=1;j<=i;j++)
	  {
	     if(i%2==0)
		 {
		   printf("%c\t",a+32);
		 }
		 
		 else
		 {
		   printf("%c\t",a); 
		 
		 }
		 a++;
	  }
	  printf("\n");
   }


}