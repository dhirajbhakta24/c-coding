#include<stdio.h>
int facto(int);
int main()
{
    int n,k;
    printf("Enter the nuber");
    scanf("%d",&n);
    k=facto(n);
    printf("factorial of %d is %d",n,k);
    return 0;
}
int facto(int n)
{
    int i, fact=1;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
            return fact;

}
