#include<stdio.h>
int fibo(int);
int main()
{
    int n,i;
    printf("Enter the number of term of Fibonacci series:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
       int k=fibo(i);
        printf("%d ",k);

    }
}
int fibo(int n)
{
    if(n==1 || n==2 )
        return n-1;
    else return(fibo(n-1)+fibo(n-2));

}
