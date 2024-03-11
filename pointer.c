#include<stdio.h>

void main()
{
   int a=10;
   int*c=&a;

   printf("value=%d\n",a);
   printf("value=%p\n",&a);
   printf("address=%p\n",c);
   printf("address=%p\n",&c);

}