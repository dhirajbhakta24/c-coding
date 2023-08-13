#include<stdio.h>
int main()
{
    int a[25],i,j,n,temp,min;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("before sorting\n");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
        printf("\n");

     for(i=0; i<n-1; i++)
     {
         min=i;
         for(j=i+1; j<n; j++)
         {
             if(a[j]<a[min])
                min=j;
         }
         temp=a[i];
         a[i]=a[min];
         a[min]=temp;
     }

    printf("After sorting\n");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
}


