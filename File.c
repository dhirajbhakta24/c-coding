#include<stdio.h>
void main(){

FILE *fp;
fp = fopen("alok.txt","w");
if(fp==NULL){
    printf("File Not Open");
    exit(0);
}else{
    printf("File Open in Write Mode");
}
}
