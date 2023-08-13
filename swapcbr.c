#include<stdio.h>
void swap(int*, int*);
int main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping\n");
    printf("a=%d\nb=%d\n",a,b);
    swap(&a,&b);
        printf("After swapping\n");
    printf("a=%d\nb=%d",a,b);
    return 0;
}
void swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
