#include<stdio.h>
int call(int n)
{
    if(n>0)
    {
        call(n-1);
        printf("%d ",n);
    }
}
int main ()
{
    int n=5;
    call(n);
}
