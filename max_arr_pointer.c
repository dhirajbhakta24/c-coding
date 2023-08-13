#include <stdio.h>

int main()
{
    long arr[100], *max;
    int n, i;
    //int location = 1;

    printf("Enter the size of array\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for ( i=0; i<n ; i++ )
        scanf("%d", &arr[i]);

    //maximum  = array;
    *max = *arr;

    for ( i=1; i<n ; i++ )
    {
        if (*(arr+i) > *max)
        {
            *max = *(arr+i);
            //location = i+1;
        }
    }

    printf("Maximum element is %d\n", *max);
    return 0;
}
