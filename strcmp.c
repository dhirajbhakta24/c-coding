#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("\n Please Enter the First String");
  	gets(str1);

  	printf("\n Please Enter the Second String");
  	gets(str2);
    char k;
    k=strcmp(str1,str2);
    printf("%d",k);
    return 0;
}
