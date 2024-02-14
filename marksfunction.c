//without argument without return type
#include<stdio.h>
int marks[3]={80,90,50};
int total=0;
float percentage;

void cal()
{

	for(int i=0; i<3; i++)
	{
		total+=marks[i];
	}
    percentage=(float)total/3.0;
}
void per()
{
     printf("enter marks:");
	 for(int i=0;i<3;i++)
	 {
		 printf("subject :%d%d\n",i+1,marks[i]);
	 }
	
	printf("total marks:%d\n",total);
	printf("percentage:%.2f\n",percentage);
}
int main()
{
     cal();
	per();
}