#include<iostream>
using namespace std;
void swapping(int *a,int *b)
{
   int t;
   t=*a;
   *a=*b;
   *b=t;
}
int main()
{
    int a=2,b=3;
    cout<<"before swapping "<<a<<" " <<b<<endl;
    swapping(&a,&b);
    cout<<"after swapping is "<<a<<" "  <<b;
}
