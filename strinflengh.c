#include<stdio.h>

int main()
{

     char name[5]={'s','k','i','l','l'};
	 
	// scanf("%s",name);
	 gets(name);
	 
	 for(int i=0; name[i]!='\0';i++)
	 {
		 printf("%c",name[i]);
	 }

}