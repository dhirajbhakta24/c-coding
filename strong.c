
#include<stdio.h>
int main(){
int n, r, sum=0;
printf("Enter a number");
scanf("%d",&n);
int k=n;
while(n!=0){
    r=n%10;

    int fact =1;
for(int i=1; i<=r; i++){

    fact=fact*i;

}

    sum=sum+fact;
    n=n/10;
}
if(sum==k)
    printf("strong");
else
    printf("not a strong number");
}

