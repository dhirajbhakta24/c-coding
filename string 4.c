#include<stdio.h>
#include<string.h>
void main(){
    char s1[80];
    char s2[80];
    printf("Enter the First String  :  ");
    gets(s1);
    printf("Enter the Second String  : ");
    gets(s2);
    printf(strcat(s1,s2));
   // puts(s1);
}

