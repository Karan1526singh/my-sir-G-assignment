#include<stdio.h>
void reverse(int *p,int n)
{
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",*(p+i));
    }
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n;
    n=sizeof(a)/sizeof(a[0]);
    reverse(a,n);
    return 0;
}


