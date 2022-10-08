#include<iostream>
using namespace std;
class greatest_number
{
public :
    void greatest(int l1,int l2,int l3)
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
    greatest_number a;
    int l,m,n;
    cout<<"enter three value :";
    cin>>l>>m>>n;
    a.greatest(l,m,n);
}

