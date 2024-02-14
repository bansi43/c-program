#include<stdio.h>

int main()

{
   int basic,hra,da;
   float total=0;
   int gross;
   printf("enter value of basic");
   scanf("%d",&basic);
   
   if(basic<5000)
   {
	   total=(basic+0.08)+(basic+0.20);
	   printf(" basic %f",total);
   }
   else if((basic>5000)&&(basic<10000))
   {
	   total=(basic*0.12)+(basic*0.30);
	   printf(" hra %f",total);
   }
    else if((basic>10000)&&(basic<15000))
   {
	   total=(basic*0.15)+(basic*0.40);
	   printf("da%f",total);
   }
  else if(basic<15000)
   {
	   total=(basic*0.20)+(basic*0.50);
	   printf("%f basic",total);
   }
 
   else
	   
   {
	    gross=(basic*hra*da);
	  printf("gross sallary on the basic %d",gross);
   }
   return 0;
}
