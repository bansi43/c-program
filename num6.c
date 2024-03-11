#include<stdio.h>
int main()
{
   int i,n,a=1;
   
   printf("enter a number");
   scanf("%d",&n);
   
   for(i=1;i<=n;i*=2)
   { 
      
	   printf("%d\t",a);
      a=a+i;
      a=a*2;

       
   }
 
}