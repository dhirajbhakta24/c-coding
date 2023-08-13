//sum of all the array elements using pointer//
//******************************************//

#include<stdio.h>
int main(){
    int a[5],sum=0;
    int *p;
    p=&a;

    printf("Enter array elements: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", p + i);



    printf("Sum of array elements are: \n");
    for (int i = 0; i < 5; i++)
    {
        sum=sum+ *(p+i);
    }

        printf("%d\n", sum);

    return 0;
}
