//with return type with no argument

#include<stdio.h>
int add();

int main()
{
   int k;
   k=add();
   printf("sum=%d",k);
   return 0;
}

 int add()
{
    int a,b,c;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum=%d\n",c);
}

