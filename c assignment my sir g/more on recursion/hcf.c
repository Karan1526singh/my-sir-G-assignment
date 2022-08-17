#include<stdio.h>
int hcf(int n,int m)
{
    if(n == 1)
    {
         return 1;
    }
        return(n*hcf(n-1));
}
int main ()
{
    int n=4,m=12;
    printf("%d",hcf(n,m));
}

