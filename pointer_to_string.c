#include <stdio.h>
int main()
{
    char str[100];
    char *p;

    printf("Enter a string: ");
    gets(str);

    //assign address of str to ptr
    p=str;

    printf("Entered string is: ");
    //while(*p!='\0')
        //printf("%c",*p++);
        for(int i=0; *(p+i)!='\0'; i++)
        printf("%c",*(p+i));


    return 0;
}
