#include<stdio.h>

int main()

{
  int slab1;
  float total;
  
  printf("enter value slab1:\n");
  scanf("%d",&slab1);
  
  if(slab1<2500)
  {
    
	printf("slab1 %d",slab1);
  }
  
  else if((slab1>2500)&&(slab1<5000))
  {
	  total=(slab1*0.10)+slab1;
	  printf("slab2 %f",total);
  }
  else if((slab1>5000)&&(slab1<10000))
  {
	  total=(slab1*0.20)+slab1;
	  printf("slab3 %f",total);
  }
  else if(slab1>10000)
  {
	  total=(slab1*0.30)+slab1;
	  printf("slab4 %f",total);
  }
 
  return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
}