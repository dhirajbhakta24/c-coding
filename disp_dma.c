#include<stdio.h>
//#include<stdlib.h>
int main()
{
    int *p,i,n;
    p=(int*)malloc(sizeof(int));
    printf("Enter a number");

    scanf("%d",p);
    printf("%d",*p);
}
