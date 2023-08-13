#include<stdio.h>
#include<string.h>

int main()
{
    char str[25];
    int l;
    puts("enter a string");
    gets(str);
    l=strlen(str);
    printf("length of the string is %d",l);
    return 0;
}
