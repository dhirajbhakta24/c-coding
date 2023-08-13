#include<stdio.h>
int main()
{
    int a[25],i,j,n,temp;
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
         for(j=0;j<n-i-1; j++)
         {
             if(a[j]>a[j+1])
             {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }
         }
     }

    printf("After sorting\n");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
}

