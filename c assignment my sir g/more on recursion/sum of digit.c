#include<stdio.h>
int callsum(int n)
{
    if(n == 0)
    {
         return;
    }
        return(n%10+callsum(n/10));

}
int main ()
{
    int n=123;
    printf("%d",callsum(n));
}

