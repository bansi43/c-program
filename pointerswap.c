#include<stdio.h>

void main()
{
   int no1=10;
   int no2=20;

   int*n1=&no1;
   int*n2=&no2;
   swap(n1,n2);

   printf("no1=%d\n no2=%d ",no1,no2);

void swap(int*n1,int*n2);
{
  *n1=*n1+*n2;
  *n1=*n1-*n2;
  *n1=*n1-*n2;

}
}