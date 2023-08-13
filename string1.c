/*#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char str1[25];
    char str2[25];
    puts("enter a string");
    gets(str1);
    for(int i=0; str1[i]!='\0'; i++)
    {
        str2[i]=str1[i];
    }
    str1[i]='\0';
            puts(str2);
}*/

#include<stdio.h>
int main()
{
    char str[25];

    int i;
    printf("Enter the string");
    gets(str);
    for(i=0; str[i]!='\0';i++)
        printf("%c\n",str[i]);
}
