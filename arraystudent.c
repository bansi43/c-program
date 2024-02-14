#include<stdio.h>

int main()
{
	int student[5];
	int marks[3];
	
	
	for(int i=0;i<5;i++)
	{
		printf("enter the student:\n");
	   scanf("%d",&student[i]);
	}
	
	for(int i=0;i<3;i++)
	{
		printf("enter the subject marks:");
		scanf("%d",&marks[i]);
	}
	
	float total = marks[0]+marks[1]+marks[2];
	printf("total %f\n",total);
	
	float per=(total/300)*100;
	
	printf("percenrage %2f\n",per);
	
	if(per>90)
	{
		printf("grade a");
	}
	
	else if(per>80)
		{
		printf("grade b");
	}
	else if(per>70)
		{
		printf("grade c");
	}
	else if(per>60)
		{
		printf("grade d");
	}
		else if(per>35)
		{
		printf("grade e");
	}
		else 
		{
			printf("fail");
	}

	
}
