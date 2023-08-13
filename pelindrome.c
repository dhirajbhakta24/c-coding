#include<stdio.h>
int main()
{
    int n,rem;
    int rev=0;
    scanf("%d",&n);
    int k;
    k=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(rev==k)
    {
        printf("pelindrome");
    }else{
    printf("not a pelindrome");
    }

    return 0;
}

