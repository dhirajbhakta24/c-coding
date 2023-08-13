//to find factorial of a number using call by reference
#include<stdio.h>
void factorial(int, int*);

int main()
{
    int a,i,fact;
    printf("enter a number ");
    scanf("%d",&a);
    factorial(a,&fact);
    printf("Factorial of %d is %d", a, fact);
    return 0;
}
void factorial(int a, int *fact)
{
    *fact=1;
    for(int i=2; i<=a; i++){
        *fact= *fact * i;
        }
    }


