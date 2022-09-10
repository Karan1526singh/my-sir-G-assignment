#include<stdio.h>
void sum(int *p,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + *(p+i);
    }
    printf("sum is %d",sum);
}
int main()
{
    int a[10]={1,2,4,5,6,67,8,65,4,4};
    int n;
    n=sizeof(a)/sizeof(a[0]);
    sum(a,n);
    return 0;
}


