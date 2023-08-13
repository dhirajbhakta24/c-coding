//input a array of five element and find the sum of all the element using function and pointer//

#include<stdio.h>
void sumarr(int*);
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
void sumarr(int *p)
{
    int sum=0;
    int i;
    for(i=0; i<5; i++)
        sum=sum+*(p+i);
        printf("sum=%d",sum);
}


