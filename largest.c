#include<stdio.h>

int main()

{

  int a,b,c;
  
  printf("enter number");
  scanf("%d%d%d",&a,&b,&c);
  
  if((a>b)||(a>c)||(b>c))
  
  {
    printf("%d is the largest number:\n",a,b);
	
  
  }
  else
  {
      printf("%d is the largest number:\n",b,c);
  }
  
  return 0;
  


}