#include<stdio.h>

void main(){

    int matA[3][3],matB[3][3],matC[3][3];
    int i,j;
    printf("Enter Values of 1st Matrix  :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matA[i][j]);
        }
    }
    printf("Enter Values of 2nd Matrix");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matB[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matC[i][j]=0;
              for(int k=0;k<3;k++){
                matC[i][j]= matC[i][j]+(matA[i][k]*matB[k][j]);
              }
        }
    }
     printf("Multiplication of the Given Matrix is :\n");
        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d \t",matC[i][j]);
            }
            printf("\n");
        }
}
