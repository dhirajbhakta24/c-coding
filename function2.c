#include<stdio.h>
void myfunction(char name[], int age)
{
    printf("hello %s you are %d. years old\n",name,age);
}
int main()
{
    myfunction("Manisha",17);
    myfunction("mani",16);
    return 0;
}
