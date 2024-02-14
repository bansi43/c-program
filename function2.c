#include<stdio.h>

int sum(int a,int b)
{

 int total=a+b;
 return total;
}
int main()
{
  int total=sum(20,50);
  printf("total is:%d",total);
 int total1=sum(50,70);
  printf("total1 is:%d",total1);
  
  return 0;
}	

