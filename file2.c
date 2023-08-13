#include<stdio.h>
void main(){

FILE *fp;
char ch;
 fp = fopen("alok.txt","w");
            if(fp==NULL){
                printf("File Not Open");
                exit(0);
            }else{
                printf("File Open in Write Mode");
                printf("%c",fgetc(fp));
            }
}
