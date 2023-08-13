//input a array of five element and find the sum of all the element using function

#include<stdio.h>
void sumarr(int a[]);
int main()
{
    int a[5];
    int i;
    printf("Enter array elements");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        sumarr(a);
        return 0;

}
void sumarr(int a[])
{
    int sum=0;
    int i;
    for(i=0; i<5; i++)
        sum=sum+a[i];
        printf("sum=%d",sum);
}
