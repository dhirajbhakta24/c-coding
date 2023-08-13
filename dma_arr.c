#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i;
    printf("Enter the size of array ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));

    printf("Enter the array elements ");
    for(i=0;i<n;i++)
    scanf("%d",p+i);

    printf("Array elements are\n ");
    for(i=0;i<n;i++)
    printf("%d ",*(p+i));
}
