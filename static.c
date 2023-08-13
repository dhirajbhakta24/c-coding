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
    static int a=10;
    printf("a=%d\n",a);
        printf("a=%p\n",&a);

    a++;
}
