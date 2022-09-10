#include<stdio.h>

void swapp(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    swapp(&a,&b);
    printf("After Swapping, a = %d, b = %d", a, b);
    return 0;
}
