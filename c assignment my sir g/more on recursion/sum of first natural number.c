#include<stdio.h>
int callsum(int n)
{
    if(n == 0)
    {
         return;
    }
        return(n+callsum(n-1));

}
int main ()
{
    int n=10;
    printf("%d",callsum(n));
}

