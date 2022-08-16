#include<stdio.h>
int callsquare(int n)
{
    int k;
       if (n > 0)
    {
        k=n%8;
        callsquare(n/8);
        printf("%d", k);
    }
}
int main ()
{
    int n=10;
    callsquare(n);
}

