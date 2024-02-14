#include<stdio.h>

int coins(int amount,int coin)
{
  int n=amount/coin;
  return n;

}

int main()
{



  
   int amount,coin;
   
    printf("enter the amount:");
   scanf("%d",&amount);
   
   printf("enter the coin:");
   scanf("%d",&coin);
   
   int n=coins(amount,coin);
   printf("%d is a amount\n %d is a number \n %d is a coin",amount,n,coin);
   
   return 0;

}