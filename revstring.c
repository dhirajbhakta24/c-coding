#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    puts("Enter a string");
    gets(str);
    strrev(str);
    puts(str);
    return 0;

}
