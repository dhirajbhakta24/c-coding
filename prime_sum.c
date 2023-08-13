//sum of all the numbers divisible by 20

#include<stdio.h>
int main()
{
    int n=20, i=1, sum=0;
    //printf("The numbers divisible by 20 is: \n");
    while(i<=n)
    {
        if(n%i==0)
     // printf("%d\n",i);
        sum=sum+i;
        i++;
    }
        printf("sum of all numbers divisible by 20 is: %d",sum);




}
