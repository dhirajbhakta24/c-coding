#include<stdio.h>
#include<string.h>

int main()
{
    char str[25];
    int l=0;
    puts("enter a string");
    gets(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        l=l+1;
    }
    printf("length of string is %d",l);
    return 0;
}
