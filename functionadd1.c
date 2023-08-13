//add two numbers using user define function having no return type and no argumet

#include<stdio.h>
void add(); //prototype of function
int main()
{
    add(); //function calling
    add(); //function calling again
    return 0;
}
void add() //function definition
{
    int a,b,c;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum=%d\n",c);
}
