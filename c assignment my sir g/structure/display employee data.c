#include <stdio.h>
struct payment
{
    int id;
    char name[100];
    float salary;
};
void input(struct payment *p1)
{
    printf("Enter Id: ");
    scanf("%d", &p1->id);
    fflush(stdin);
    printf("Enter User Name: ");
    gets(p1->name);
    printf("Enter User salary: ");
    scanf("%f", &p1->salary);
}
void display(struct payment p1)
{
    printf(" id is %d", p1.id);
    printf("\n User name is %s", p1.name);
    printf("\n salary is %f", p1.salary);
}
int main()
{
    struct payment p1;
    input(&p1);
    display(p1);
    return 0;
}
