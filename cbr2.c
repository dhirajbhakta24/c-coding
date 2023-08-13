//to find factorial of a number using call by reference

#include<stdio.h>
void factorial(int*);
int a,i,fact;

int main()
{
    printf("enter a number ");
    scanf("%d",&a);
    factorial(&fact);
    printf("Factorial of %d ",fact);

    return 0;
}

void factorial(int *fact)
{
    *fact=1;
     for(int i=1; i<=a; i++){
        *fact= *fact * i;
    }
}


