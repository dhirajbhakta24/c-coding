#include<stdio.h>
struct x
{
    int a;
    char c;
};
void disp(struct x*);
int main()
{
    struct x k;
    k.a=25;
    k.c='A';
    disp(&k);
    return 0;
}
void disp(struct x *p)
{
    printf("a=%d",p->a);
    printf("c=%d",p->c);
}
