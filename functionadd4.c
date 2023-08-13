//with argument with return type

#include<stdio.h>
int add(int,int);

int main()
{
    int a,b,k;
    a=25;
    b=30;
    k=add(a,b);
    printf("sum=%d",k);
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
