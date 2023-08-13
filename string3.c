#include<stdio.h>
#include<string.h>
void main(){
    char s[80];
    int i;
    printf("Enter Password     :");
    gets(s);
    i = strcmp(s,"access");
    if(i==0){
        printf("\n Correct Password");
    }else{
        printf("\nIncorrect Password");
    }
}
