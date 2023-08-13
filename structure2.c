#include<stdio.h>
struct st
{
    int a;
    char b;
};
int main()
{
    struct st k;
    k.a=23;
    k.b='S';
    printf("%d\n",k.a);
    printf("%c\n",k.b);
    return 0;
}

