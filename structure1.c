//wap to store a employee information
#include<stdio.h>
//#include<string.h>
struct emp
{
    int id;
    char name[25];
    float sal;
};
int main()
{
    struct emp emp1;

    printf("Enter the id ");
    scanf("%d",&emp1.id);
     printf("Enter the name ");
    scanf("%s",&emp1.name);
     printf("Enter the salary ");
    scanf("%f",&emp1.sal);

    printf("id: %d\n",emp1.id);
    printf("name: %s\n",emp1.name);
    printf("sal: %f\n",emp1.sal);
    return 0;

}


