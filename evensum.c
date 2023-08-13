#include<stdio.h>
int main()
{
    int n=20, i=1, sum=0;
     printf("all even numbers are\n");

    while(i<=n)
    {
        if(i%2==0)

       printf("%d\n",i);
        sum=sum+i;
        i++;
    }
        printf(" sum of all even numbers are %d\n",sum);


}
