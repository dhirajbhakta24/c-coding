#include<stdio.h>

void  swap(int *p,int *q){
        int temp;
        temp = *p;
        *p= *q;
        *q=temp;
        printf("After Swapping\n");
        printf("a =%d" " b = %d",*p,*q);
}
int main(){
int a,b;
printf("Enter the two Number you Want to Swap");
scanf("%d %d",&a,&b);
//int *p  =&a;
//int *q = &b;
swap(&a,&b);
}

