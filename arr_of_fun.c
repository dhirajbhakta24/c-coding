#include<stdio.h>
//void display(int a[]);
int main()
{
    int a[5];
    int i;

    printf("Enter array elements");
    for(i=0; i<5; i++)
    scanf("%d",&a[i]);
    display(a);
}
void display(int k[])
{
    int i;
    printf("Array elements are\n");
    for(i=0; i<5; i++){
        printf("%d\n",k[i]);
    }
}
