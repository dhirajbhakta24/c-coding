#include<stdio.h>
int main()
{
    int mat[100][100];

    int m,n;
    printf("enter the row and columns of matrix ");
    scanf("%d %d",&m, &n);
    printf("enter the elements of matrix ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
        scanf("%d",&mat[i][j]);


        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", mat[i][j]);
        }
            printf("\n");
        }
        printf("diagonal elements are");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i=j)
                printf("%d",mat[i][j]);
        }
        printf("\n");

    }

}





