//swap two numbers using third variable using pointer

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

     temp=*p;
    *p=*q;
    *q=temp;


    printf("After swapping\n");
    printf("a=%d\nb=%d",a,b);
    return 0;
}



