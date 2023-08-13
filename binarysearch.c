#include<stdio.h>
int main()
{
    int a[25],n,sele,pos=-1;
    int i,high,low,mid;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the sorted array");
    for(i=0;i<n; i++)
    scanf("%d",&a[i]);

    printf("enter the search element");
    scanf("%d",&sele);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(sele==a[mid])
        {
            pos=mid;
            break;
        }
        else if(sele>a[mid]){
            low=mid+1;
        }else{
            high=mid-1;
    }
    printf("element %d is found in %d location",sele,pos);
    return 0;
    }
