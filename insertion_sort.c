#include<stdio.h>
int main()
{
    int a[25],i,n,key,hole;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("before sorting\n");
    for(i=0; i<n; i++)
        printf("%d",a[i]);

    for(i=0; i<n; i++)
    {
        key=a[i];
        hole=i;
        while(hole>0 && a[hole-1]>key){
            a[hole]=a[hole-1];
            hole=hole-1;
        }
        a[hole]=key;
    }
    printf("After sorting\n");
    for(i=0; i<n; i++)
        printf("%d",a[i]);
}
