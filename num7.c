#include<stdio.h>
int main()
{
   int i,n,num;
   
   printf("enter a number\n");
   scanf("%d",&n);
  
    for (i=1; i<= n; i++) 
	{ 
        
        if (i==n) 
		{ 
            num = 100; 
        }
		else 
		{ 
            num= i*i; 
        } 
        printf("%d ", num); 
    } 
    printf("\n"); 
 
}