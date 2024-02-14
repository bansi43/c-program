#include<stdio.h>

int main()
{
	int a=10;
	char vowel='o';
	
	
	printf(" %c\n",vowel);

	
	if((vowel=='a')||(vowel=='A')||(vowel=='e')||(vowel=='E')||(vowel=='i')||(vowel=='I')||(vowel=='o')||(vowel=='O')||(vowel=='u')||(vowel=='U'))
	{
		printf(" is a vowel %d\n",vowel);
		
	}
	else
	{
	   printf("is a consonant %d\n",vowel);
	}
	
	return 0;
	
}	
	