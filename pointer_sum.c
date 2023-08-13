#include<stdio.h>

int sum(int *p,int *q){

        int sum = *p +*q;
        return sum;

}
int main(){
int a,b;
printf("Enter the two Number you Want to ADD");
scanf("%d %d",&a,&b);
int sum1 = sum(&a,&b);
printf("SUM = %d", sum1);
return 0;
}
