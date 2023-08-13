#include<stdio.h>
void swap(int,int);

int main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d %d",&a,&b);
    printf("before swapping\n");
    printf("a = %d  b = %d\n",a,b);
    swap(a,b);
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping\n");
    printf("a = %d  b = %d",a,b);
}
