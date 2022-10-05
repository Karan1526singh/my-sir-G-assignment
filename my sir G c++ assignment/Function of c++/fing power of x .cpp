#include<iostream>
using namespace std ;
int power(int x,int y)
{
    int k=1;
    for(int i=1;i<=y;i++)
    {
        k*=x;
    }
    return k;
}
int main()
{
    cout<<power(3,4);
}
