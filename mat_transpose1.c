#include <stdio.h>
int main(){
   int m, n, i, j;
   int mat1[10][10];
   int mat2[10][10];
   printf("Enter rows and columns ");
   scanf("%d%d", &m, &n);

   printf("Enter elements of the matrix ");
   for (i=0; i<m; i++)
      for (j = 0; j<n; j++)
         scanf("%d",&mat1[i][j]);

    printf("The matrix is\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", mat1[i][j]);
        }
            printf("\n");
}

   for (i=0; i<m; i++)
      for (j=0; j<n; j++)
         mat2[j][i]=mat1[i][j];

   printf("Transpose of the matrix\n");
   for (i=0; i<n; i++) {
      for (j=0; j<m; j++)
         printf("%d\t", mat2[i][j]);
      printf("\n");
   }
   return 0;
}

