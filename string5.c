#include<stdio.h>
#include<string.h>

struct student{
    char name[30];
    int roll;
    float fees;
};

void main(){
        struct student s;

        printf("Enter Student's name Roll No & Fees   : ");
        gets(s.name);
        scanf("%d",s.roll);
        scanf("%f",&s.fees);
        printf("\nStudents Details...");
        printf("------------------------------");
        printf("\n Name :%s",s.name);
        printf("\n Roll No : %d",s.roll);
        printf("\nFees  :%.2f",s.fees);
        getch();
}
