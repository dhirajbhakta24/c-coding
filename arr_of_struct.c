#include<stdio.h>
//#include<string.h>
struct s
{
    int id;
    float sal;
    char name[25];

};
int main()
{
    int i,n;
    printf("enter the size of array");
    scanf("%d",&n);

    struct s emp1[n];

    for(i=0; i<n; i++)
    {
    printf("Enter the id ");
    scanf("%d",&emp1[i].id);
     printf("Enter the name ");
    scanf("%s",&emp1[i].name);
     printf("Enter the salary ");
    scanf("%f",&emp1[i].sal);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
    printf("id: %d\n",emp1[i].id);
    printf("name: %s\n",emp1[i].name);
    printf("sal: %.2f\n\n",emp1[i].sal);
    }
    return 0;
}

