//to find factorial of a number using call by value

#include<stdio.h>
int factorial(int);

int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    factorial(a);
    return 0;
}
int factorial(int a)
{
    int fact=1;
    for(int i=2; i<=a; i++){
        fact=fact*i;
    }
        printf("%d",fact);

    }

