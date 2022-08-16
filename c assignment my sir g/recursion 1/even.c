#include<stdio.h>
int calleven(int n)
{
       if (n > 0)
    {

        printf("%d ", 2*n);
        calleven(n - 1);
    }
}
int main ()
{
    int n=10;
    calleven(n);
}
