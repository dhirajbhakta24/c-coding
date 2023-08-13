#include<stdio.h>
#define MAX 20

int main()
{
    int a[MAX],i,n,pos,k;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("the array elements are:");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("Enter the position");
    scanf("%d",&pos);
    printf("Enter the new array elements");
    //for(i=0;i<n;i++)
    scanf("%d",&k);
    for(i=n; i>=pos; i--)
        a[i]=a[i-1];
        a[pos]=k;
    n=n+1;
    for(i=pos;i<n;i++)
        a[i]=a[i+1];
    n=n-1;
    for(i=0;i<n;i++)
    printf("%d",a[i]);


}
