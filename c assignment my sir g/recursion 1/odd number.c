#include<stdio.h>
int callodd(int n)
{
       if (n > 0)
    {
        callodd(n - 1);
        printf("%d ", 2*n-1);
    }
}
int main ()
{
    int n=10;
    callodd(n);
}
