#include<stdio.h>
int call(int n)
{
    if(n>0)
    {
      printf("%d ",n);
        call(n-1);
    }
}
int main ()
{
    int n=5;
    call(n);
}
