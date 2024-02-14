

#include<stdio.h>

int marks[3];
int total=0;

void input()
{
  printf("enter the marks:");
  for(int i=0;i<3; i++)
  {
	  scanf("%d",&marks[i]);
	  total=+marks[i];
  }
  
  
  

}
void sum()
{
  printf("enter the total:%d\n",total);
}
void percentage()

{
  float percentage((float)total/300)*100;
  printf("percentage:%2f\n",percentage);
}
int main()
{
  input();
  sum();
  percentage();
}