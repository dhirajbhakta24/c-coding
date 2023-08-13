#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],i,j;
    puts("enter first strig");
    gets(str1);
    puts("enter the second string");
    gets(str2);
    for(i=0; str1[i]!='\0'; i++);
    {
            for(j=0; str1[j]!='\0'; j++){
                str1[i]=str2[j];
                i++;
            }
    }
    str1[i]='\0';
    printf("%s",str1);



}
