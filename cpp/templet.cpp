#include<stdio.h>
#include<stdlio.h>
void merge (int a[],int l,int mid,int h)
{
    int b[50];
    int i=1, j=mid+1, i<=1;
    while (i<=mid && j<=h)
    {
          if(a[i]<a[j])
             b[k++]=a[i++];
          else
              b[k++] =a[j++];
    }
    while(i<=mid)
         b[k++] =a[i++];
    while (j<=h)
         b[k++] =a[j++];
    for(i=1; i<=h; i++)
         a[i] =b[i];
}
int mergesort (inta[], inta[], int i, int h)
{
    int mid;
    if(i<h)
    {
        mid=(i+h)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,h);
        merge(a,i,mid,h);

    }
}
int main()
{
    int a[15],n=15,i;
    for(i=0; i<n; i++)
      a[i]=rand()%9+1;
    printf("before sortiung array is:\n");
    for(i=0; i<n; i++)
       printf("%d",a[i]);

       mergsort (a,0,n-1);
    printf("\nafter sorting array is:\n");
    for(i=o;i<n;i++)
    printf("%d",a[i]);
}

