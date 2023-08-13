#include<stdio.h>
void main(){
    FILE *fp;
    int regdno;
    char name[30];
    char address[30];
    fp = fopen("alok.txt","w+");
    printf("Enter the ID No\n");
    scanf("%d",&regdno);
    printf("Enter the Name\n");
    scanf("%s",&name);
    printf("Enter the Address\n");
    scanf("%s",&address);
    fprintf(fp,"Id=%d\n",regdno);
    fprintf(fp,"Name = %s\n",name);
    fprintf(fp,"Address= %s",address);
    fclose(fp);

}
