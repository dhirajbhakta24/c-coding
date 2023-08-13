//check whether a function is even or odd using function

#include<stdio.h>
void checkeven(int);
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    checkeven(a);
    return 0;
}
void checkeven(int a)
{
    if(a%2==0)
        printf("even");
    else printf("odd");
}
