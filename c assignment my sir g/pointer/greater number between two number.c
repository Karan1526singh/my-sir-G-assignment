#include<stdio.h>
void greater(int *a,int *b)
{
    if(*a>*b)
    {
        printf("%dis greater ",*a);
    }
    else
        printf("\n %d is greater ",*b);
}
int main()
{
    int a,b;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    greater(&a,&b);
    return 0;
}

