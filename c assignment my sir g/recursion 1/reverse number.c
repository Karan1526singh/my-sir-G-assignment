#include<stdio.h>
int callsquare(int n)
{
    if(n > 0)
    {
        printf("%d",n%10);
        callsquare(n/10);
    }
}
int main ()
{
    int n=1021;
    callsquare(n);
}

