#include <stdio.h>
int main(){
   int m, n, i, j,flag;
   int mat1[10][10];
   int mat2[10][10];
   //int k = mat1[10][10];
   printf("Enter rows and columns ");
   scanf("%d%d", &m, &n);

   printf("Enter elements of the 1st   matrix ");
   for (i=0; i<m; i++)
      for (j = 0; j<n; j++)
         scanf("%d",&mat1[i][j]);

    printf("The matrix is   \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", mat1[i][j]);
        }
            printf("\n");
}
 printf("Transpose of the matrix Start \n");
   for (i=0; i<m; i++){
      for (j=0; j<n; j++){
         mat2[i][j]=mat1[j][i];
      }
}
   printf("Transpose of the matrix\n");
   for (i=0; i<n; i++) {
      for (j=0; j<m; j++)
         printf("%d\t", mat2[i][j]);
      printf("\n");
   }
   for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        if(mat2[i][j]!=mat1[i][j]){
            printf("Not Symmetric");

           } else{

         printf("the matrix is symmetric \n");
  }
    }
   }



   return 0;
}

