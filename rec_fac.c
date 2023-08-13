#include<stdio.h>
int facto(int);
int main()
{
   int k,n;
   printf("Enter a number");
   scanf("%d",&n);
   k=facto(n);
   printf("factorial of %d is %d",k,n);

    return 0;
}
int facto(int n)
{
    if(n==1)
        return 1;
    else return(n*facto(n-1));
}
