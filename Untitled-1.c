#include<stdio.h>
int a[10] = {2,4,,6,10,14,16,18,20};

int i, min=0 max=9,x,n,result;
int valume()
{
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);

    }
}

int binaryserch(int n, int min, int max)
{printfint mid;
while(min <=max)
{
    mid = min +(max-min)/2;
    if(a[mid]==n)
    {
        return mid;
    }
    else if(a[min]<n)
    {
        min =mid+1;
    }
    else
    {
        max=mid-1;
    }
}
return-1;
}

int main()
{
    value();
    printf("\n enter value :");
    scanf("%d",&dx);
    result = binaryserch (x,min,max);
    if(result !=-1)
    {
        printf("\n yes it is presewnt [%d]",result);

    }else
    {
        printf("\n not it is present");

    }
    return 0;
}

