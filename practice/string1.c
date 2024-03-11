#include<stdio.h>
int main()
{
    char str[]="hello";
    int i,j;
     for(i=0;i<=4;i++)
     {
        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
     }
}