#include<stdio.h>
void main(){

    int i,n,position,value;
    printf("Enter Size of Elements in Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Elements",n);
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("The Elements Presents In Array are  :\n");
        for(i=0;i<n;i++){
            printf("%d \t",arr[i]);
        }
        printf("\nEnter The Position of Array \n");
        scanf("%d ",&position);

        printf("Enter the Value    :   ");
        scanf("%d",&value);
        //Inserting an Elements in your Given Position
         for(i=n-1;i>=position;i--){
            arr[i+1]=arr[i];
         }
         arr[position-1] = value;
         n = n+1;
        printf("After Inserting an Element inthe array");
        for(i=0;i<n;i++){
            printf("%d",arr[i]);
        }
}
