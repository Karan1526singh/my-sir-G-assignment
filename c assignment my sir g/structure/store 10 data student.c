#include<stdio.h>
struct student
{
    int roll_no;
    char name[40];
};
void input(struct student *p,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("enter roll number :");
        scanf("%d",&(p+i)->roll_no);
        fflush(stdin);
        printf("\n enter name ");
        fgets((p+i)->name,sizeof(p->name),stdin);
    }
}
void display(struct student a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("roll number of student %d",a[i].roll_no);
        printf("\n name of student is %s",a[i].name);
    }
}
int main()
{
    struct student a[2];
    input(&a,2);
    display(a,2);
}

