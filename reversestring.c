#include<stdio.h>

int main()
{

     char name[50];
	 int i;
	 
	 printf("enter a name:");
	 scanf("%s",name);
	 
	 for(int i=0;name[i]; i++)
	 printf("%s rverse a name:");
 
     for(i=i-1; i>=0;i--)
     printf("%c",name[i]);

	return 0;
}