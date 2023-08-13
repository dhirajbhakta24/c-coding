#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],temp;
    int i=0,len;
    puts("enter the string");
    gets(str);
    len=strlen(str);
    int j=len-1;

    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    puts(str);
}
