#include<stdio.h>
int main()
{
  int array[100], sele, i, n,pos;

  printf("Enter the size  of  array\n");
  scanf("%d", &n);

  printf("Enter %d integer\n", n);

  for (i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }
  printf("Enter a number to search\n");
  scanf("%d", &sele);

  for (i = 0; i < n; i++){

    if (array[i]==sele){
        pos=i;
        break;
    }
    }
    if(pos== -1)

    printf("not found");
      else
        printf("%d is present at location %d\n", sele, i+1);

      return 0;
}
