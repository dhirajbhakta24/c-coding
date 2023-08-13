/*#include <stdio.h>
int main() {
    int a[5];

    printf("Enter array elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", a + i);

    printf("Array elements are: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(a + i));
    return 0;
}*/
#include <stdio.h>      //#define MAX_SIZE 100 // Maximum array size
int main()
{
    int arr[100];       //int arr[MAX_SIZE];

    int n, i;
    int * ptr = arr;    // Pointer to arr[0]

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;                // Move pointer to next array element
    }
        ptr = & arr[2];           // Make sure that pointer again points back to first array element

    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr);     // Print value pointed by the pointer
        ptr++;                  // Move pointer to next array element
    }

    return 0;
}


