#include<stdio.h>

int main()
{

     char name[50];
	 int i;
	 gets(name);
	 for(i=0; name[i]!='\0';i++)
	 {
		
		
		 printf("%c",name[i]);
		 
	 }
	 printf("\nlengh= %d",i-1);
	return 0;
}