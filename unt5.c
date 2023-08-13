#include<stdio.h>
#include <stdlib.h>

void findoutput (int array1[], int n, int *a, int *b)

{

int r1 = array1[0];

 int r2;

int x;

 *a = 0;

 *b= 0;
for(x = 1; x < n; x++)

 r1 = array1[x];

r2 =r1 & ~(r1-1);
 for (x = 0; x < n; x++)

 {

if (array1[x] & r2)
*a = *a^array1[x];

else *b= *b^ array1[x];



}

 }

int main()

{

int arr[]= {2, 3, 7, 9, 11, 2, 3, 11};

int a = (int *)malloc(sizeof(int));
int b=(int)malloc(sizeof(int));

 findOutput(arr, 8, a, b);

printf("%d %d", *a, *b);

 getchar();

 }
