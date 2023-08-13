#include<stdio.h>
void disp();
int main()
{
    disp();
    disp();
    disp();
    disp();
}
void disp()
{
    register int a=10;
    printf("a=%d\n",a);
    a++;
}

