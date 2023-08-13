#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10];
    int i,j,k,m,n;

    printf("Enter the number of row and columns of matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements for first matrix\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
        scanf("%d",&b[i][j]);
        }
    }
    printf("Enter the elements for second matrix\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
        scanf("%d",&b[i][j]);
        }
    }
        printf("multiply of the matrix\n");
        for(i=0; i<m; i++){

            for(j=0; j<n; j++)
          {
                 mul[i][j]=0;
                for(int k=0; k<n; k++)
          {
               mul[i][j]=mul[i][j]+a[i][k]*b[k][j];

          }
          }
          }
       //for printing the result
        for(i=0; i<m; i++){
        for(j=0; j<n; j++){
        printf("%d\t",mul[i][j]);
        }
        printf("\n");
        }
        return 0;
}
