/*#include<stdio.h>
#include<string.h>
struct emp
{
    int id;
    //char name[25];
    float sal;
};
int main()
{
    struct emp emp1;
    emp1.id=101;
    //emp1.name[25]="Manisha";
    emp1.sal=4000;

    printf("id %d\n",emp1.id);
    //printf("name %s\n",emp1.name);
    printf("sal %f\n",emp1.sal);
    return 0;

}*/

#include<stdio.h>
#include<string.h>
struct emp
{
    int id;
    char name[25];
    float sal;
}emp1;
int main()
{
    strcpy(emp1.name,"Manisha");
    emp1.id=101;
    //emp1.name[25]="Manisha";
    emp1.sal=4000;

    printf("id: %d\n",emp1.id);
    printf("name: %s\n",emp1.name);
    printf("sal: %.2f\n",emp1.sal);
    return 0;

}

