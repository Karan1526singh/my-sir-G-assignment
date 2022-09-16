#include <stdio.h>
struct payment
{
    int id;
    char name[100];
    float salary;
};
void input(struct payment *p1,int size)
{
    for(int i=0;i<size;i++)
    {
    printf("Enter Id: ");
    scanf("%d", &p1->id);
    fflush(stdin);
    printf("Enter User Name: ");
    gets(p1->name);
    printf("Enter User salary: ");
    scanf("%f", &p1->salary);
    }
}
void highest_salary(struct payment p1[],int size)
{
    int max=0;
     for(int i=0;i<size;i++)
     {
         if(p1[i].salary>max)
         {
             max=p1[i].salary;
         }
     }
     printf("highest salary %d",max);
}
int main()
{
    struct payment p1[3];
    input(p1,3);
    highest_salary(p1,3);
    return 0;
}

