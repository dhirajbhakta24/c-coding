#include<stdio.h>
int main()
{
    int n, i=1, c=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
            c=c+1;
        i=i+1;
    }
    if(c==2)
        printf("prime");
    else
        printf("not prime");
}
