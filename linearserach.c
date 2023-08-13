#include<stdio.h>
int main()
{

    int n, i,pos=-1;
    int a[100],sele;
    printf("enter the elements");
    for(i=0; i<5; i++){
    scanf("%d",&a[i]);
    }
    printf("enter the search element");
    scanf("%d",&sele);
        for(i=0; i<5; i++){



        if(a[i]==sele){
            pos=i;
            break;
        }
        }
            if(pos==-1)
            printf("not found");
        else
            printf(" found");

}
