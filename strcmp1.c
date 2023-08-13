#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    int i;
    printf("enter the first string ");
    gets(str1);
    printf("enter the second string ");
    gets(str2);

   for( i = 0; str1[i] == str2[i] && str1[i] == '\0'; i++);

   if(str1[i] > str2[i])
  {
    printf("str1 is greater than str2\n");
  }
  else if(str1[i] < str2[i])
  {
    printf("str1 is less than str2\n");
  }
  else
  {
    printf(" Both string are equal.\n");
  }

  return 0;
}



