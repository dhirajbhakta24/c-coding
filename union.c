#include<stdio.h>
union un
{
    int a;
    char b;
};
int main()
{
    union un k;
    k.a=26;
    printf("%d\n",k.a);
    k.b='j';
    printf("%c",k.b);
    return 0;
}
