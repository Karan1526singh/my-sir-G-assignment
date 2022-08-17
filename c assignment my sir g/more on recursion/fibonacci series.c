#include<stdio.h>
int fib(int n,int first, int second)
{
    if(n > 0)
    {
        int k = first + second;
    printf("%d ",k);
    first = second;
    second = k ;
        fib(n-1,first,second);
    }
}
int main ()
{
    int n=10,first=1,second=2;
    printf("%d %d ",first,second);
    fib(n,first,second);
}

