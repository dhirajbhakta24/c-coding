#include<stdio.h>
int main()
{
    int a,b,c,*q,*p,r;
    //int *p;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;

    //c=a+b;
    r=*p + *q;

   // printf("sum %d",c);
      printf("sum %d",r);

}
