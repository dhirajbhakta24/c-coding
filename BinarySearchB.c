#include<stdio.h>
int main(){
//Binary Search Program By Biswa
int num,first,last,mid,i,search,arr[100];
printf("Enter Size of the Array \n");
scanf("%d",&num);
printf("Enter Elements of the Array \n");
for(i =0 ;i<num;i++){
    scanf("%d",&arr[i]);
    }
    printf("Enter the number to Search\n");
    scanf("%d",&search);
    first = 0;
    last= num-1;
    mid= (first+last)/2;
    while(first<=last){
        if(arr[mid]<search){
            first = mid+1;
        }else if(arr[mid]==search){
                printf("Element Found in %d Location",mid+1);
                break;
        }else{
            last  = mid-1;

        }
         mid=(first+last)/2;
    }
    if(first>last){
        printf("Element Not Found.....Try Again");
    }
}
