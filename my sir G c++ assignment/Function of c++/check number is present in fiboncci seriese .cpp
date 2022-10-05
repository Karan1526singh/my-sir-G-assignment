#include<iostream>
using namespace std;
int check(int n)
{
    int first=0,second=1;
    if(first==n || second==n)
    {
        return 1;
    }
    int temp=0,k=0;
    for(int i=1;first + second <= n;i++)
    {
        k=first + second ;
        temp=first;
        first = second;
        second = k;
        if(k==n)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout<<"enter number you find in fibnocci series";
    cin>>n;
    if(check(n))
    {
        cout<<"yes present ";
    }
    else
    cout<<" not present ";
}
