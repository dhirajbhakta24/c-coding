//wap a program to input array of five number and display it and again input five number and display it using DMA.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i,ns;
    printf("Enter the size of array ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));

    printf("Enter the array elements ");
    for(i=0;i<n;i++)
    scanf("%d",p+i);

    printf("Array elements are\n ");
    for(i=0;i<n;i++)
    printf("%d ",*(p+i));

    printf("\n Enter the new size of array ");
    scanf("%d",&ns);

    p=(int*)realloc(p,ns*sizeof(int));

    printf("Enter the new array elements ");
    for(i=n; i<n+ns; i++)
    scanf("%d",p+i);

    printf("New array elements are\n ");
    for(i=n; i<n+ns; i++)
    printf("%d ",*(p+i));

     printf("\n Resultant array elements are\n ");
    for(i=0; i<n+ns; i++)
    printf("%d ",*(p+i));


}

