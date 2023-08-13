//wap to store a employee information
#include<stdio.h>
#include<string.h>
struct emp
{
    int id;
    char name[25];
    float sal;
};
int main()
{
    struct emp emp1;
    struct emp *s;

    printf("Enter the id ");
    scanf("%d",&emp1.id);
     printf("Enter the name ");;
    scanf("%s",&emp1.name);
     printf("Enter the salary ");
    scanf("%f",&emp1.sal);

    s = &emp1;

    printf("id: %d\n",s->id);
    printf("name: %s\n",(*s).name);
    printf("sal: %.2f\n",(*s).sal);
    return 0;

}




