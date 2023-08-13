#include<stdio.h>
int main()
{
    int i;
    int a[100],sum=0;
    printf("Enter five number");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("%d\n",sum);

}
