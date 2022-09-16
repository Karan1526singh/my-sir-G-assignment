#include<stdio.h>
struct payment
    {
        int id;
        char name[100];
        float salary;
    };
void input(struct payment p1)
{
      printf("Enter Id: ");
    scanf("%d", &p1.id);
    fflush(stdin);
    printf("Enter User Name: ");
    fgets(p1.name,sizeof(p1.name),stdin);
    printf("Enter User salary: ");
    scanf("%f", &p1.salary);
}
int main()
{
    struct payment p1;
    input(p1);
}

