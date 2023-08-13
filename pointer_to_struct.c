//wap to store a employee information
#include<stdio.h>
#include<string.h>
struct x
{
    int info;
    char c;
};
int main()
{
    struct x m;
    struct x *p;
    p=&m;
    p->info=24;
    p->c='D';
    printf("info=%d ",p->info);
        printf("info=%d ",p->c);



}


