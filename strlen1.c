#include<stdio.h>
int main()
{
   char s[100];
   int i;
   puts("enter a string");
   gets(s);
   for(i=0; s[i]!='\0'; i++);

   printf("Length of the string %d",i);
   return 0;
}
