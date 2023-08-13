#include<stdio.h>
int main()
{
    int a, *p;
    //int *p;
    printf("Enter a number");
    scanf("%d",&a);
    p=&a;
    printf("a=%d",*p);
}
