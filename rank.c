#include<stdio.h>
int main()
{
    int p,c,m,total,rank;
    printf("Enter the marks of the subjects\n");
    scanf("%d %d %d",&p,&c,&m);
    total=p+c+m;
    printf("Total=%d\n",total);

    if(total>=150)
    {
        printf("enter your rank\n");
        scanf("%d",&rank);
        if(rank<=10000)
            printf("you are eligible for get admission in CET");
        else if(rank>10000 && rank<=20000)
                printf("you are eligible for get admission in get admission in some government college");
        else if(rank>20000)
                printf("Try some private college");
    }
        else printf("you are not eligible for get admission in engineering college");

    }


