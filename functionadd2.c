//with no return type and with argument

#include<stdio.h>
void add(int,int);

int main()
{

   add(30,67);
   return 0;
}

 void add(int a, int b)
{
    int c;
    c=a+b;
    printf("sum=%d\n",c);
}
