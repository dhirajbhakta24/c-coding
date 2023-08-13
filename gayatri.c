#include<stdio.h>
int main()
{
    int i,n,m,j,a[100][100];
    printf("enter the row and coloumn if the matrix");
    scanf("%d %d",&m,&n);
    printf("enter the array element\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
        }
    printf("diagonal elements are");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i=j)
                printf("%d",a[i][j]);
        }
        printf("\n");

    }
}
