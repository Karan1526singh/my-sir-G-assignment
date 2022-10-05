#include<iostream>
using namespace std;
int add(int ,int , int=0);
int add(int a,int b,int c)
{
    int t;
    t=a+b+c;
    return t;
}
int main()
{
    int a=2,b=1;
    cout<<add(a,b);
}

