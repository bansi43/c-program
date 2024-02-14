#include<stdio.h>

int main()

{
 
  int n;
 
    
   printf("enter the number:");
   scanf("%d",&n);
   
   
    int i=1;
   while(i<=50)
   {
       if(i%2==0)
	   {
	   printf("%d\t",i);
	   i++;
      }
   }
    
   
}