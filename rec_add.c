#include<stdio.h>
int add(int n);
int main()
{
    int k,n;
    printf("enter a number");
    scanf("%d",&n);
    k=add(n);
    printf("Addition of %d is %d",n,k);
    return 0;

}
int add(int n)
{
    if(n==1)
        return 1;
    else
        return(n+add(n-1));
}
