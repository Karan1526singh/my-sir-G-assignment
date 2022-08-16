#include<stdio.h>
int callsquare(int n)
{
       if (n > 0)
    {
        callsquare(n - 1);
        printf("%d ", n*n);
    }
}
int main ()
{
    int n=10;
    callsquare(n);
}
