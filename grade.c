#include<stdio.h>
int main()
{
    float roll,s1,s2,s3,s4,s5,s6;
    float total,avg;
    printf("enter roll number of the student:");
    scanf("%f",&roll);
    printf("Enter the marks of the student:");
    scanf("%f %f %f %f %f %f",&s1,&s2,&s3,&s4,&s5,&s6);
    total=s1+s2+s3+s4+s5+s6;
    printf("Total mark is: %f\n",total);
    avg=total/6;
    printf("Average is: %f\n",avg);

    if(avg>90)
        printf("O grade");

    else if(avg>=80 && avg<90)
        printf("E grade");

    else if(avg>=70 && avg<80)
        printf("A grade");

    else if(avg>=60 && avg<70)
        printf("B grade");

    else if(avg>=50 && avg<60)
        printf("C grade");

    else if(avg>=40 && avg<50)
        printf("D grade");

        else printf("Fail");

}
