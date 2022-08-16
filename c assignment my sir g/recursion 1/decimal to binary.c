#include<stdio.h>
int callsquare(int n)
{
    int k;
       if (n > 0)
    {
        k=n%2;
        callsquare(n/2);
        printf("%d ", k);
    }
}
int main ()
{
    int n=10;
    callsquare(n);
}

