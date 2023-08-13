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
    printf("Enter the Character into the File");
    scanf("%c",&ch);
    fputc(ch,fp);
    fclose(fp);

        }

}
