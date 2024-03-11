#include<stdio.h>
int main()
{
    FILE *ptr;
    char string[50]="1234";

   // ptr=fopen("mytext.txt","r");
   // fscanf(ptr,"%s",string);
   // printf("the value is %s\n",string);

 // ptr=fopen("mytext.txt","a");
   ptr=fopen("mytext.txt","w`");
  fprintf(ptr,"%s",string);
}