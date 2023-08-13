#include<stdio.h>
int main()
{
    int a=8, b=3, c;
    c=++a + a++ + ++b + a++ + ++b + ++a;
    printf("a=%d b=%d c=%d",a,b,c);
}
