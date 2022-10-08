#include<iostream>
using namespace std;
class largest_number
{
public :
    void largest(int l1,int l2,int l3)
    {
        if(l1>l2 & l1>l3)
            cout<<l1 <<"is largest";
        else if(l2>l1 & l2>l3)
            cout<<l2 <<"is largest";
        else if(l3>l1 & l3>l2)
            cout<<l1 <<"is largest";
        else
            cout<<"equal number ";
    }
};
int main()
{
    largest_number a;
    int l,m,n;
    cout<<"enter three value :";
    cin>>l>>m>>n;
    a.largest(l,m,n);
}
