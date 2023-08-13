//swap two numbers without using third variable using pointer

#include<stdio.h>
int main()
{
    int a,b,*p,*q,temp;
    printf("enter two number\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping\n");
    printf("a=%d\nb=%d\n",a,b);

    p=&a;
    q=&b;

    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;

    printf("After swapping\n");
    printf("a=%d\nb=%d",a,b);
    return 0;
}




