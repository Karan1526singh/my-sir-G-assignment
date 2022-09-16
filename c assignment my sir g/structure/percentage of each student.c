#include<stdio.h>
struct percentage
{
    int roll;
    char name[49];
    int phy,che,math;
};
void input(struct percentage *p, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("enter your roll number :");
        scanf("%d",&p->roll);
        fflush(stdin);
        printf("enter your name ");
        fgets(p->name,49,i++);
        printf("enter marks of physics , chemistry and math ");
        scanf("%d%d%d",&p->phy,&p->che,&p->math);
    }
}
void studentPercentage(struct percentage a[], int arrlength)
{
    for(int i=0; i<arrlength; i++)
    {
        printf("\n\n%d student Details: ", i+1);
        printf("\nRollNo - %d", a[i].roll);
        printf("\nName: %s", a[i].name);
        printf("chem_marks - %d, phy_marks - %d, math_marks - %d", a[i].che, a[i].phy,a[i].math);
        float average = (a[i].che + a[i].math + a[i].phy)/3.0f;
        printf("\nAverage of marks: %.2f",average);
    }
}
int main()
{
    struct percentage a[10];
    input(&a,10);
    studentPercentage(a,10);

}
