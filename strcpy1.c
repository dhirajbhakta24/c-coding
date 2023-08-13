#include<stdio.h>
//#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    char i;
    printf("Enter a string ");
    gets(str1);
    printf("string1=%s\n",str1);
    for( i=0; str1[i]!='\0'; i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("string2=%s",str2);
    return 0;
}
